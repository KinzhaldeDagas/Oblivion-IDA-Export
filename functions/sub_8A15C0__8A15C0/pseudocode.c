int __thiscall sub_8A15C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int (__stdcall *v3)(char *); // edx
  int v4; // esi
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // edi
  char v16; // [esp+Fh] [ebp-5h] BYREF
  _DWORD *v17; // [esp+10h] [ebp-4h]

  v2 = this; /*0x8a15c4*/
  v3 = *(int (__stdcall **)(char *))(*this + 0x74); /*0x8a15c8*/
  v17 = this; /*0x8a15d4*/
  v4 = v3(&v16); /*0x8a15de*/
  v5 = sub_7124D0(a2); /*0x8a15e7*/
  if ( v4 ) /*0x8a15e9*/
  {
    v6 = *(_DWORD *)(v4 + 0xC); /*0x8a15ef*/
    v7 = v4 + 4; /*0x8a15f2*/
    if ( v6 >= 0 ) /*0x8a15f7*/
    {
      v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a1609*/
      if ( !v8 ) /*0x8a1611*/
        v8 = unk_BA7D9C; /*0x8a1613*/
      sub_8A75D0(v8, *(_DWORD **)v7, 4 * v6, 0x14); /*0x8a1628*/
    }
    v9 = *(_DWORD *)(v7 + 8) & 0x40000000 | 0x80000000; /*0x8a1635*/
    *(_DWORD *)(v7 + 8) = v9; /*0x8a163a*/
    v10 = v9 & 0x3FFFFFFF; /*0x8a163d*/
    *(_DWORD *)v7 = 0; /*0x8a1644*/
    *(_DWORD *)(v7 + 4) = 0; /*0x8a164a*/
    if ( v10 < v5 ) /*0x8a1651*/
    {
      v11 = 2 * v10; /*0x8a1653*/
      if ( v5 >= v11 ) /*0x8a1657*/
        v11 = v5; /*0x8a1659*/
      sub_8A6E40((const void **)v7, v11, 4); /*0x8a165f*/
    }
    if ( v5 ) /*0x8a1669*/
    {
      v12 = v5; /*0x8a166c*/
      do /*0x8a16a9*/
      {
        v13 = sub_7124A0(a2); /*0x8a1677*/
        if ( v13 ) /*0x8a167e*/
        {
          v14 = *(_DWORD *)(v13 + 8); /*0x8a1683*/
          if ( *(_DWORD *)(v7 + 4) == (*(_DWORD *)(v7 + 8) & 0x3FFFFFFF) ) /*0x8a168f*/
            sub_8A6EE0((const void **)v7, 4); /*0x8a1694*/
          *(_DWORD *)(*(_DWORD *)v7 + 4 * (*(_DWORD *)(v7 + 4))++) = v14; /*0x8a16a1*/
        }
        --v12; /*0x8a16a7*/
      }
      while ( v12 ); /*0x8a16a9*/
      v2 = v17; /*0x8a16ab*/
    }
  }
  return sub_8A2600(v2, (int)a2); /*0x8a16bc*/
}
