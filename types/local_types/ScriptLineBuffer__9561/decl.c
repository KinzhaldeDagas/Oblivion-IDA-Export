struct ScriptLineBuffer
{
UInt32 lineNumber;
char paramText[512];
UInt32 paramTextLen;
UInt32 lineOffset;
UInt8 dataBuf[512];
UInt32 dataOffset;
UInt32 cmdOpcode;
UInt32 callingRefIndex;
UInt32 unk418;
};
