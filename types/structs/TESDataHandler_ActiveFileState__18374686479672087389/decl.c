struct TESDataHandler_ActiveFileState
{
UInt8 unknownBeforeActiveFileState[3089];
UInt8 retainActiveFile; ///< Verified active-file retention flag: zero causes TESDataHandler_Clear to destroy/free the current file; nonzero preserves it. LoadFiles reopens it/builds masters, LoadFormRecord sets active-file form state, and CELL_LoadForm preserves flags0 bit 0x40 (Probable TempPublic). Constructor initializes zero; native nonzero writer remains Unknown.
UInt8 unknownAfterActiveFileState[6];
};
