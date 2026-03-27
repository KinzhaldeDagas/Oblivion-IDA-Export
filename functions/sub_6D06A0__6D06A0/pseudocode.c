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

  if ( (*(_BYTE *)(this + 2) & 0x20) == 0 )
  {
    v2 = *(this + 0x14);
    if ( v2 )
      v3 = *(_DWORD *)(v2 + 8);
    else
      v3 = 0;
    *((float *)this + 5) = flt_A7DEB4;
    v4 = 0;
    for ( *((float *)this + 6) = -flt_A7DEB4; v4 < v3; ++v4 )
    {
      v5 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x80))(this, v4);
      if ( v5 )
      {
        v6 = flt_A7DEB4;
        v7 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 0x80);
        v9 = -v6;
        v8 = v6;
        v7(v5, &v8, &v9);
        if ( *((float *)this + 5) > (double)v8 )
          *((float *)this + 5) = v8;
        if ( *((float *)this + 6) < (double)v9 )
          *((float *)this + 6) = v9;
      }
    }
  }
}
