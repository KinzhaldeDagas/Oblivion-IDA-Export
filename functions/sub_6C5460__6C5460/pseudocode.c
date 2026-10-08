char __thiscall sub_6C5460(_DWORD *this, int a2, TESForm *a3)
{
  _DWORD *v3; // ecx

  v3 = this + 2; /*0x6c5464*/
  if ( a3 ) /*0x6c5469*/
    return (unsigned __int8)sub_412D30(v3, a2, a3); /*0x6c547c*/
  else
    return NiTMap_RemoveAt(v3, a2); /*0x6c5470*/
}
