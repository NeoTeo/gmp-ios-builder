# gmp-ios-builder

Update gmp:
* Download the desired version of GMP (as a `*.bz2`) to the `gmp-ios-builder` root folder from [gmplib.org](https://gmplib.org/#DOWNLOAD)
* Update the `VERSION` field in `buildIosGmpFramework`;

Clean:
* `./buildIosGmpFramework -c`

Extract:
* `./buildIosGmpFramework -e`

Config:
* `./buildIosGmpFramework -g`

Build all (This can take a while):
* `./buildIosGmpFramework -b`

Build framework:
* `./buildIosGmpFramework -f`
