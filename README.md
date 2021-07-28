What is this?
-------------

`ispass` is a simple program I wrote to be able to check if a password is correct for a user, simply by writing `ispass <username> <password>`, it doesn't have any options or anything. If the password is incorrect it simply exits with a failure, and if it's correct it just exits and does nothing.

As an example for a Bash script you can do this:

```bash
sudo ispass <username> <password> && {
	echo correct
} || {
	echo incorrect
}
```

However it should be noted the script requires sudo permissions, so a recommendation is either to give all users who have sudo access, the permission to execute the command without a password, or just running with it sudo.

As an example putting:

```
ALL ALL=(ALL) NOPASSWD: /usr/bin/ispass
```

Would do the job. Or as a one liner you could echo it in.

How to build?
-------------

`make install`

How to remove?
--------------

`make uninstall`

Vulnerabilities?
----------------

I haven't tested it for anything but considering it's simplicity it's either simple to fix or hard to even take advantages of. But don't quote me on that.
