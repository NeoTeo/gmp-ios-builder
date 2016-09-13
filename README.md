# gmp-ios-builder

Update gmp:
* Download in the `gmp-ios-builder` folder the `*.bz2`  version from [https://gmplib.org/#DOWNLOAD](https://gmplib.org/#DOWNLOAD);
* Update the `VERSION` field in `buildIosGmpFramework`;

Clean:
* `./buildIosGmpFramework -c`

Extract:
* `./buildIosGmpFramework -e`

Config:
* `./buildIosGmpFramework -g`

Build all (it requires few minutes):
* `./buildIosGmpFramework -b`

Build framework:
* `./buildIosGmpFramework -f`
