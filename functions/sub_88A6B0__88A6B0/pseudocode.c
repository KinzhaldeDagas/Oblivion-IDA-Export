int __thiscall sub_88A6B0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  float *v4; // eax
  float *v5; // eax
  bool v6; // zf
  float *v7; // eax

  if ( *(this + 3) ) /*0x88a6d4*/
  {
    *a2 = 0; /*0x88a74c*/
  }
  else
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x2C); /*0x88a6ec*/
    *(_WORD *)(v3 + 4) = 0xA0; /*0x88a6ee*/
    v4 = sub_88A4F0((float *)v3); /*0x88a702*/
    if ( v4 ) /*0x88a711*/
      v5 = v4 + 0x28; /*0x88a713*/
    else
      v5 = 0; /*0x88a71a*/
    v6 = *(this + 2) == 0; /*0x88a71c*/
    *(this + 3) = v5; /*0x88a720*/
    if ( !v6 ) /*0x88a723*/
    {
      if ( v5 ) /*0x88a727*/
        v7 = v5 + 0xFFFFFFD8; /*0x88a729*/
      else
        v7 = 0; /*0x88a730*/
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 0x84))(this, v7); /*0x88a73d*/
    }
    *a2 = 1; /*0x88a743*/
  }
  return *(this + 3); /*0x88a752*/
}
