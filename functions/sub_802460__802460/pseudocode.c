int __userpurge sub_802460@<eax>(int a1@<edi>, int a2, int a3, char *Str1, int a5, FreeEntry **a6, _DWORD *a7)
{
  _BYTE *v7; // eax
  _BYTE *v8; // esi
  int v9; // edi
  FreeEntry *v10; // eax
  int (__cdecl *v11)(_BYTE *, FreeEntry *, int, int *, int); // edx
  int v14; // [esp+Ch] [ebp-10Ch] BYREF
  char v15[260]; // [esp+10h] [ebp-108h] BYREF

  sub_431180(a1, *(char **)(a2 + 4), Str1, v15); /*0x80249d*/
  v7 = sub_431130(v15, 0, 0x2800, 0x20); /*0x8024b0*/
  v8 = v7; /*0x8024b5*/
  if ( v7 ) /*0x8024bc*/
  {
    if ( v7[0x24] ) /*0x8024be*/
    {
      v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v7 + 0x1C))(v7); /*0x8024ce*/
      v10 = j_MemoryHeap_Alloc(&FormHeap, (char)a7, (unsigned int)v9 | 0x100000000LL, a1); /*0x8024d8*/
      *a6 = v10; /*0x8024e6*/
      v11 = *((int (__cdecl **)(_BYTE *, FreeEntry *, int, int *, int))v8 + 1); /*0x8024e8*/
      v14 = 1; /*0x8024ec*/
      *a7 = v11(v8, v10, v9, &v14, 1); /*0x8024f6*/
      (**(void (__thiscall ***)(_BYTE *, int))v8)(v8, 1); /*0x802504*/
      return 0; /*0x802509*/
    }
    (**(void (__thiscall ***)(_BYTE *, int))v7)(v7, 1); /*0x802511*/
  }
  return 0x80004005; /*0x802518*/
}
