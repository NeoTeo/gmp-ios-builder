# gmp-ios-builder

Update gmp:
* Download the desired version of GMP from [gmplib.org](https://gmplib.org/#DOWNLOAD) (as a `*.bz2`) into the `gmp-ios-builder` root folder. 
* Update the `VERSION` field in `buildIosGmpFramework` to match the downloaded GMP.

Clean:
* `./buildIosGmpFramework -c`

Extract:
* `./buildIosGmpFramework -e`

Config:
* `./buildIosGmpFramework -g`

Build all (this can take a while):
* `./buildIosGmpFramework -b`

Build framework:
* `./buildIosGmpFramework -f`

## Requirements
Bash 4 or greater

## License
[MIT](LICENSE)
