void __thiscall sub_96D8F0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 0x4C))(this, *a2); /*0x96d902*/
  *(this + 9) = a2[1]; /*0x96d907*/
  if ( a2[2] ) /*0x96d90a*/
  {
    v3 = sub_95DB10(a2[3]); /*0x96d914*/
    sub_96D890(this, v3); /*0x96d91f*/
  }
}
