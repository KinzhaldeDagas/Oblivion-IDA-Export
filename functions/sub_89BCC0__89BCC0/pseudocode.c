char __userpurge sub_89BCC0@<al>(int a1@<eax>, int a2@<ecx>, int a3)
{
  int v3; // ebp
  void (__thiscall **v5)(int, int); // edx
  int v6; // edi
  int v7; // ecx
  signed int v8; // eax
  _DWORD *v9; // edx
  int v10; // ebp
  bool v11; // zf
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // eax
  int v15; // ecx
  char *v17; // [esp+Ch] [ebp-1Ch] BYREF
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  char v20; // [esp+18h] [ebp-10h] BYREF

  v3 = 0;
  if ( *(_WORD *)(a3 + 4) )
    ++*(_WORD *)(a3 + 6);
  ++*(_DWORD *)(a2 + 0x88);
  sub_8DC2F0(a1, a2, a3);
  v5 = *(void (__thiscall ***)(int, int))a3;
  v17 = &v20;
  v18 = 0;
  v19 = 0x80000004;
  v5[3](a3, (int)&v17);
  if ( v18 > 0 )
  {
    do
    {
      v6 = *(_DWORD *)&v17[4 * v3];
      v7 = *(_DWORD *)(v6 + 0xBC);
      v8 = 0;
      if ( v7 <= 0 )
      {
LABEL_8:
        v8 = 0xFFFFFFFF;
      }
      else
      {
        v9 = *(_DWORD **)(v6 + 0xB8);
        while ( *v9 != a3 )
        {
          ++v8;
          ++v9;
          if ( v8 >= v7 )
            goto LABEL_8;
        }
      }
      *(_DWORD *)(*(_DWORD *)(v6 + 0xB8) + 4 * v8) = 0;
      ++v3;
    }
    while ( v3 < v18 );
  }
  v10 = *(_DWORD *)(a3 + 0xC);
  sub_8DDC90(v10, a3);
  v11 = *(_WORD *)(a3 + 4) == 0;
  *(_DWORD *)(a3 + 8) = 0;
  if ( !v11 && !--*(_WORD *)(a3 + 6) )
    (**(void (__thiscall ***)(int, int))a3)(a3, 1);
  v12 = *(_DWORD *)(v10 + 0x1C);
  if ( *(_WORD *)(v10 + 0x22) == 0xFFFF )
  {
    v13 = (_DWORD *)(v12 + 0x50);
    *(_WORD *)(v10 + 0x22) = *(_WORD *)(v12 + 0x54);
    if ( *(_DWORD *)(v12 + 0x54) == (*(_DWORD *)(v12 + 0x58) & 0x3FFFFFFF) )
      sub_8A6EE0((int)v13, 4);
    *(_DWORD *)(*v13 + 4 * v13[1]++) = v10;
  }
  LOBYTE(v14) = v19;
  if ( v19 >= 0 )
  {
    v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v15 )
      v15 = dword_BA7D9C;
    LOBYTE(v14) = sub_8A75D0(v15, v17, 4 * v19, 0x14);
  }
  v11 = (*(_DWORD *)(a2 + 0x88))-- == 1;
  if ( v11 )
  {
    v14 = *(_DWORD *)(a2 + 0x84);
    if ( v14 )
    {
      LOBYTE(v14) = *(_BYTE *)(a2 + 0x90);
      if ( !(_BYTE)v14 )
        LOBYTE(v14) = sub_899210(a2);
    }
  }
  if ( *(_WORD *)(a3 + 4) )
  {
    if ( !--*(_WORD *)(a3 + 6) )
      LOBYTE(v14) = (**(char (__thiscall ***)(int, int))a3)(a3, 1);
  }
  return v14;
}
