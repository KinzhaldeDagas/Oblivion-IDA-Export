struct ExteriorCellReferenceData
{
unsigned int referenceID; ///< Verified: 12-byte allocation; reference ID at +0; world/cell X at +4; Y at +8.
int cellX; ///< Verified: worldspace reference coordinates are shifted right 12; exterior cell grid coordinates remain integer.
int cellY;
};
