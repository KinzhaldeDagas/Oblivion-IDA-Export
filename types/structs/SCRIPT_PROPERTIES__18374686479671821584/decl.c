struct SCRIPT_PROPERTIES
{
unsigned __int32 langid : 16;
unsigned __int32 fNumeric : 1;
unsigned __int32 fComplex : 1;
unsigned __int32 fNeedsWordBreaking : 1;
unsigned __int32 fNeedsCaretInfo : 1;
unsigned __int32 bCharSet : 8;
unsigned __int32 fControl : 1;
unsigned __int32 fPrivateUseArea : 1;
unsigned __int32 fNeedsCharacterJustify : 1;
unsigned __int32 fInvalidGlyph : 1;
unsigned __int32 fInvalidLogAttr : 1;
unsigned __int32 fCDM : 1;
unsigned __int32 fAmbiguousCharSet : 1;
unsigned __int32 fClusterSizeVaries : 1;
unsigned __int32 fRejectInvalid : 1;
};
