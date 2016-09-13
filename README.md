# gmp-ios-builder

Update gmp:
* Download in the `gmp-ios-builder` folder the `*.bz2`  version from [gmplib.org](https://gmplib.org/#DOWNLOAD)
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
