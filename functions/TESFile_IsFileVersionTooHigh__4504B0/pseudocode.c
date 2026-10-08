char __thiscall TESFile::IsFileVersionTooHigh(Data *this)
{
  char v2; // [esp+3h] [ebp-109h]
  char Format[260]; // [esp+4h] [ebp-108h] BYREF

  if ( *(float *)&this->version <= 1.0 ) /*0x4504d3*/
    return 0; /*0x450534*/
  v2 = bDisableWarning_MESSAGES; /*0x4504ed*/
  bDisableWarning_MESSAGES = 0; /*0x4504f1*/
  _sprintf(Format, "File %s is a higher version than this EXE can load.", this->name); /*0x4504f7*/
  PrintError(Format); /*0x450501*/
  bDisableWarning_MESSAGES = v2; /*0x45050e*/
  return 1; /*0x450516*/
}
