char __thiscall TESFile::IsFileVersionTooHigh(Data *this)
{
  char v2; // [esp+3h] [ebp-109h]
  char Format[260]; // [esp+4h] [ebp-108h] BYREF

  if ( *(float *)&this->version <= 1.0 )
    return 0;
  v2 = bDisableWarning_MESSAGES;
  bDisableWarning_MESSAGES = 0;
  _sprintf(Format, "File %s is a higher version than this EXE can load.", this->name);
  PrintError(Format);
  bDisableWarning_MESSAGES = v2;
  return 1;
}
