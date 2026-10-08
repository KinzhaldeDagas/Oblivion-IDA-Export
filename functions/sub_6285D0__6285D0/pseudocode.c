signed int __thiscall sub_6285D0(HighProcess *this, Actor *a2)
{
  _DWORD *v2; // eax

  v2 = this->GetDetectionState(this, a2); /*0x6285dd*/
  if ( v2 ) /*0x6285e1*/
    return v2[3]; /*0x6285e3*/
  else
    return 0x7FFFFFFF; /*0x6285e9*/
}
