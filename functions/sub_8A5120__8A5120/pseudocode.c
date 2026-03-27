int __thiscall sub_8A5120(int *this, signed int a2)
{
  _DWORD *v3; // ebp
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  int *i; // edi
  bool v6; // bl
  void (__thiscall ***v7)(_DWORD, int); // esi
  void (__thiscall *v8)(_DWORD *, int); // eax
  void (__thiscall ***v9)(_DWORD, int); // esi
  int (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v12; // [esp-18h] [ebp-48h]
  int v13; // [esp-18h] [ebp-48h]
  int v14; // [esp-8h] [ebp-38h]
  int v15; // [esp+10h] [ebp-20h]
  int v16; // [esp+14h] [ebp-1Ch] BYREF
  int v17; // [esp+18h] [ebp-18h] BYREF
  int v18; // [esp+1Ch] [ebp-14h] BYREF
  int *v19; // [esp+20h] [ebp-10h]
  unsigned int v20; // [esp+2Ch] [ebp-4h]

  v19 = this;
  v3 = (_DWORD *)a2;
  v15 = 0;
  sub_89F9A0(this, a2);
  v16 = sub_8A4740(this);
  v12 = v3[0x88];
  v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v4(v12, &v16, 4, &a2, 1);
  for ( i = this + 4; ; i = (int *)i[1] )
  {
    v6 = 0;
    if ( i )
    {
      v15 |= 1u;
      if ( *sub_677C70(i, &a2) )
        v6 = 1;
    }
    if ( (v15 & 1) != 0 )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))a2;
      v15 &= ~1u;
      if ( a2 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
        {
          if ( v7 )
            (**v7)(v7, 1);
        }
      }
    }
    if ( !v6 )
      break;
    v14 = *sub_677C70(i, &v17);
    v8 = *(void (__thiscall **)(_DWORD *, int))(*v3 + 0x2C);
    v20 = 0;
    v8(v3, v14);
    v20 = 0xFFFFFFFF;
    if ( v17 )
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v17;
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**v9)(v9, 1);
    }
  }
  v13 = v3[0x88];
  v10 = *(int (__cdecl **)(int, int *, int, int *, int))(v13 + 8);
  v18 = 4;
  return v10(v13, v19 + 6, 4, &v18, 1);
}
