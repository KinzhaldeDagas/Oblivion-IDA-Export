int __thiscall sub_704FA0(_DWORD *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  int v6; // eax
  void (__cdecl *v7)(int, unsigned int *, int, signed int *, int); // edx
  unsigned int i; // ebp
  int v9; // ebx
  int v10; // eax
  void (__cdecl *v11)(int, signed int *, int, int *, int); // edx
  int v12; // eax
  unsigned int v13; // ebp
  int result; // eax
  int v15; // ebx
  int (__cdecl *v16)(int, signed int *, int, int *, int); // eax
  int v17; // esi
  int v18; // [esp-14h] [ebp-2Ch]
  int v19; // [esp-14h] [ebp-2Ch]
  int v20; // [esp-14h] [ebp-2Ch]
  unsigned int v21; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  sub_700A80((int)this, (int)this, (_DWORD *)a2);
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u )
  {
    v19 = *(_DWORD *)(v2 + 0x220);
    v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v19 + 8);
    a2 = 2;
    v5(v19, this + 6, 2, &a2, 1);
  }
  else
  {
    v22 = (*((unsigned __int8 *)this + 0x18) >> 1) & 7;
    v18 = *(_DWORD *)(v2 + 0x220);
    v4 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 8);
    a2 = 4;
    v4(v18, &v22, 4, &a2, 1);
  }
  v6 = *(_DWORD *)(v2 + 0x220);
  v21 = *((unsigned __int16 *)this + 0x13);
  v7 = *(void (__cdecl **)(int, unsigned int *, int, signed int *, int))(v6 + 8);
  a2 = 4;
  v7(v6, &v21, 4, &a2, 1);
  for ( i = 0; i < v21; ++i )
  {
    v9 = *(_DWORD *)(*(this + 8) + 4 * i);
    v10 = *(_DWORD *)(v2 + 0x220);
    LOBYTE(a2) = v9 != 0;
    v11 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v10 + 8);
    v22 = 1;
    v11(v10, &a2, 1, &v22, 1);
    if ( (_BYTE)a2 )
      (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v9 + 8))(v9, v2);
  }
  v12 = *(this + 0xB);
  v13 = 0;
  a2 = 4;
  if ( v12 )
  {
    v21 = *(unsigned __int16 *)(v12 + 0xA);
    result = (*(int (__cdecl **)(_DWORD, unsigned int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8))(
               *(_DWORD *)(v2 + 0x220),
               &v21,
               4,
               &a2,
               1);
    if ( v21 )
    {
      do
      {
        v15 = *(_DWORD *)(*(_DWORD *)(*(this + 0xB) + 4) + 4 * v13);
        LOBYTE(a2) = v15 != 0;
        v20 = *(_DWORD *)(v2 + 0x220);
        v16 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v20 + 8);
        v22 = 1;
        result = v16(v20, &a2, 1, &v22, 1);
        if ( (_BYTE)a2 )
          result = (*(int (__thiscall **)(int, signed int))(*(_DWORD *)v15 + 8))(v15, v2);
        ++v13;
      }
      while ( v13 < v21 );
    }
  }
  else
  {
    v17 = *(_DWORD *)(v2 + 0x220);
    v21 = 0;
    return (*(int (__cdecl **)(int, unsigned int *, int, signed int *, int))(v17 + 8))(v17, &v21, 4, &a2, 1);
  }
  return result;
}
