void __thiscall sub_6D06A0(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  double v6; // st7
  void (__thiscall *v7)(int, float *, float *); // edx
  float v8; // [esp+Ch] [ebp-8h] BYREF
  float v9; // [esp+10h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 2) & 0x20) == 0 ) /*0x6d06ae*/
  {
    v2 = *(this + 0x14); /*0x6d06b4*/
    if ( v2 ) /*0x6d06ba*/
      v3 = *(_DWORD *)(v2 + 8); /*0x6d06bc*/
    else
      v3 = 0; /*0x6d06c1*/
    *((float *)this + 5) = flt_A7DEB4; /*0x6d06ca*/
    v4 = 0; /*0x6d06cd*/
    for ( *((float *)this + 6) = -flt_A7DEB4; v4 < v3; ++v4 ) /*0x6d06dc*/
    {
      v5 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x80))(this, v4); /*0x6d06eb*/
      if ( v5 ) /*0x6d06ef*/
      {
        v6 = flt_A7DEB4; /*0x6d06f1*/
        v7 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 0x80); /*0x6d06f9*/
        v9 = -v6; /*0x6d0708*/
        v8 = v6; /*0x6d0711*/
        v7(v5, &v8, &v9); /*0x6d0717*/
        if ( *((float *)this + 5) > (double)v8 ) /*0x6d0727*/
          *((float *)this + 5) = v8; /*0x6d0729*/
        if ( *((float *)this + 6) < (double)v9 ) /*0x6d073e*/
          *((float *)this + 6) = v9; /*0x6d0740*/
      }
    }
  }
}
