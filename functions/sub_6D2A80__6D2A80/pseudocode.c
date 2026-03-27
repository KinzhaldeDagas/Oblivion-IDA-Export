void __thiscall sub_6D2A80(float *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // esi
  int v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  double v7; // st7
  char v8; // dl
  unsigned int i; // ecx
  int v10; // esi
  float v11; // [esp+4h] [ebp-4h]

  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0x10);
    v4 = *(_DWORD *)(v2 + 8);
    v5 = *(_DWORD *)(v2 + 0xC);
    if ( !v4 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v2;
      if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
        (**v6)(v6, 1);
      *(this + 4) = 0.0;
      *(this + 3) = flt_A7C6B0;
      return;
    }
    v11 = *(float *)(v5 + 4);
    v7 = v11;
    if ( v4 == 1 )
      goto LABEL_15;
    if ( v3 == 1 || v3 == 5 )
    {
      v8 = 1;
      for ( i = 1; i < v4; ++i )
      {
        if ( v7 != *(float *)(i * *(unsigned __int8 *)(v2 + 0x14) + v5 + 4) )
          v8 = 0;
        if ( !v8 )
          return;
      }
LABEL_15:
      v10 = *((_DWORD *)this + 4);
      if ( v10 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
          (**(void (__thiscall ***)(int, int))v10)(v10, 1);
        v7 = v11;
        *(this + 4) = 0.0;
      }
      *(this + 3) = v7;
    }
  }
}
