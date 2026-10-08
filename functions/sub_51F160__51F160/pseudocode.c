void __thiscall sub_51F160(TESForm *this, int a2)
{
  TESForm_SaveModifiedForm(this, a2); /*0x51f169*/
  sub_46EAC0((char *)this + 0x24, a2); /*0x51f172*/
  if ( (a2 & 4) != 0 ) /*0x51f17a*/
    TESForm_SaveDataToCurrentSaveGame(this, (char *)this + 0x34, 1u); /*0x51f184*/
}
