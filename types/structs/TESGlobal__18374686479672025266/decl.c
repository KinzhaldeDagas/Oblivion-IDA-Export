struct TESGlobal
{
TESFormVtbl *vtbl;
TESFormMembr super;
BSStringT name;
UInt8 type; ///< Verified one-byte FNAM global variable type code at +0x20; exact enum names not recovered.
UInt8 pad21[3];
float data; ///< Verified FLTV float value at +0x24, written by runtime global loader and native form-record serializer.
};
