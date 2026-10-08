char __thiscall TESForm_CompareAllComponentsTo(TESForm *this, TESForm *a2)
{
  char v4; // bl
  _DWORD v5[26]; // [esp+10h] [ebp-DCh] BYREF
  _DWORD v6[26]; // [esp+78h] [ebp-74h] BYREF
  unsigned int v7; // [esp+E8h] [ebp-4h]

  if ( !a2 ) /*0x46ada7*/
    return 1; /*0x46ada9*/
  FormComponentList_ZeroInit(v6); /*0x46adb1*/
  v7 = 0; /*0x46adba*/
  FormComponentList_ZeroInit(v5); /*0x46adc5*/
  LOBYTE(v7) = 1; /*0x46adcf*/
  FormComponentList_Build(v6, this); /*0x46add7*/
  FormComponentList_Build(v5, a2); /*0x46ade1*/
  v4 = FormComponentList_CompareTo((char *)v6, (int)v5); /*0x46adf8*/
  LOBYTE(v7) = 0; /*0x46adfa*/
  Shared_NoOpVirtual_60D0A0(v5); /*0x46ae02*/
  v7 = 0xFFFFFFFF; /*0x46ae0b*/
  Shared_NoOpVirtual_60D0A0(v6); /*0x46ae16*/
  return v4; /*0x46ae1d*/
}
