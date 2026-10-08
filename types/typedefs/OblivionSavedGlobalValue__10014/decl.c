struct OblivionSavedGlobalValue
{
unsigned int formID; ///< Verified: load stream stores exactly an unsigned 32-bit form ID at +0 and float at +4; fixed record size 8 bytes.
float value; ///< Verified: float value is read from stream and written to TESGlobal.data (+0x24) after finite/NaN sanitization.
};
