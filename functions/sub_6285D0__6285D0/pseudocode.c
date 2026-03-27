signed int __thiscall sub_6285D0(HighProcess *this, Actor *a2)
{
  _DWORD *v2; // eax

  v2 = this->GetDetectionState(this, a2);
  if ( v2 )
    return v2[3];
  else
    return 0x7FFFFFFF;
}
