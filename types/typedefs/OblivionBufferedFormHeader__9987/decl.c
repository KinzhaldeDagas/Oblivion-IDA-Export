struct OblivionBufferedFormHeader
{
unsigned __int16 payloadSize; ///< Verified: uint16 at +0 built at 463BD1, consumed at 463929.
unsigned __int8 formType; ///< Verified: uint8 at +2 from TESForm type, compared in LoadForm at 463881 onward.
unsigned __int8 version; ///< Verified: uint8 at +3 copied from manager currentVersion+7C in UnloadForm.
};
