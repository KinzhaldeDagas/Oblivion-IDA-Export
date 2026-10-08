int __thiscall sub_77F990(float *this, int a2)
{
  int (__stdcall *v4)(int, int, _DWORD); // edx
  float v6; // [esp+38h] [ebp-8h]
  float v7; // [esp+3Ch] [ebp-4h]
  float v8; // [esp+44h] [ebp+4h]
  float v9; // [esp+44h] [ebp+4h]

  v4 = *(int (__stdcall **)(int, int, _DWORD))(*(_DWORD *)this + 0x64); /*0x77f9a1*/
  if ( (*(_BYTE *)(a2 + 0x18) & 1) == 0 ) /*0x77f9a6*/
    return v4(0x1C, 0, 0); /*0x77fbbb*/
  v4(0x1C, 1, 0); /*0x77f9b0*/
  v8 = *(this + 0x20) * *(float *)(a2 + 0x1C); /*0x77f9c2*/
  v6 = *(this + 0x1F) - v8; /*0x77f9d3*/
  v7 = *(this + 0x21) * v8 + *(this + 0x1F); /*0x77f9e2*/
  v9 = 1.0 / v8; /*0x77f9ea*/
  (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x26, LODWORD(v9), 0); /*0x77f9f7*/
  (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x24, LODWORD(v6), 0); /*0x77fa11*/
  (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x25, LODWORD(v7), 0); /*0x77fa2b*/
  if ( ((*(_BYTE *)(a2 + 0x18) >> 1) & 3) != 0 ) /*0x77fa36*/
  {
    if ( ((*(_BYTE *)(a2 + 0x18) >> 1) & 3) == 1 ) /*0x77fa6b*/
    {
      if ( (*(_BYTE *)(this + 2) & 1) != 0 ) /*0x77fa70*/
      {
        (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x23, 0, 0); /*0x77fa7f*/
        (*(void (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x8C, 3, 0); /*0x77fa91*/
      }
      (*(void (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x30, 1, 0); /*0x77fa99*/
    }
    else
    {
      (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x1C, 0, 0); /*0x77faa8*/
    }
  }
  else
  {
    if ( (*(_BYTE *)(this + 2) & 1) != 0 ) /*0x77fa3c*/
    {
      (*(void (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x23, 3, 0); /*0x77fa4b*/
      (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x8C, 0, 0); /*0x77fa5d*/
    }
    (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))(this, 0x30, 0, 0); /*0x77fa65*/
  }
  if ( *(this + 0x23) != *(float *)(a2 + 0x20) /*0x77fade*/
    || *(this + 0x24) != *(float *)(a2 + 0x24)
    || *(this + 0x25) != *(float *)(a2 + 0x28) )
  {
    *((_DWORD *)this + 0x26) = (unsigned __int8)(int)(dbl_A3DDD8 * *(float *)(a2 + 0x28)) /*0x77fb7a*/
                             | (((unsigned __int8)(int)(*(float *)(a2 + 0x24) * dbl_A3DDD8)
                               | (((int)(*(float *)(a2 + 0x20) * dbl_A3DDD8) | 0xFFFFFF00) << 8)) << 8);
    *(this + 0x23) = *(float *)(a2 + 0x20); /*0x77fb83*/
    *(this + 0x24) = *(float *)(a2 + 0x24); /*0x77fb8c*/
    *(this + 0x25) = *(float *)(a2 + 0x28); /*0x77fb95*/
  }
  return (*(int (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0x64))( /*0x77fbaf*/
           this,
           0x22,
           *((_DWORD *)this + 0x26),
           0);
}
