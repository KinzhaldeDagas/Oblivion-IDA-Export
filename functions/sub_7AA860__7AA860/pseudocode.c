// [Verified] Generic NiTPointerList node-removal helper. Unlinks the supplied node, updates head/tail and neighboring links, invokes the list's FreeNode vfunc, decrements item count, and returns the removed node's data pointer.
void *__thiscall NiTPointerList_RemoveNode(void *list, void **node)
{
  void **v3; // eax
  int *v4; // ecx
  int v5; // eax
  bool v6; // zf
  void *v7; // edi
  void (__thiscall *v9)(void *, int *); // eax
  int v10; // ecx
  _DWORD *v11; // eax
  void *v12; // edi
  void (__thiscall *v13)(void *, int); // eax
  _DWORD *v14; // edi
  _DWORD *v15; // edx
  void *v16; // edi

  v3 = (void **)*node; /*0x7aa867*/
  if ( *node == *((void **)list + 1) ) /*0x7aa86d*/
  {
    *node = *v3; /*0x7aa871*/
    v4 = *((int **)list + 1); /*0x7aa873*/
    v5 = *v4; /*0x7aa876*/
    v6 = *v4 == 0; /*0x7aa878*/
    *((_DWORD *)list + 1) = *v4; /*0x7aa87a*/
    if ( v6 ) /*0x7aa87d*/
    {
      v9 = *(void (__thiscall **)(void *, int *))(*(_DWORD *)list + 8); /*0x7aa8a0*/
      *((_DWORD *)list + 2) = 0; /*0x7aa8a3*/
      v7 = (void *)v4[2]; /*0x7aa8aa*/
      v9(list, v4); /*0x7aa8b0*/
    }
    else
    {
      *(_DWORD *)(v5 + 4) = 0; /*0x7aa87f*/
      v7 = (void *)v4[2]; /*0x7aa888*/
      (*(void (__thiscall **)(void *, int *))(*(_DWORD *)list + 8))(list, v4); /*0x7aa891*/
    }
    --*((_DWORD *)list + 3); /*0x7aa893*/
    return v7; /*0x7aa897*/
  }
  else if ( v3 == *((void ***)list + 2) ) /*0x7aa8c0*/
  {
    *node = 0; /*0x7aa8c2*/
    v10 = *((_DWORD *)list + 2); /*0x7aa8c8*/
    v11 = *(_DWORD **)(v10 + 4); /*0x7aa8cb*/
    *((_DWORD *)list + 2) = v11; /*0x7aa8d0*/
    if ( v11 ) /*0x7aa8d3*/
    {
      *v11 = 0; /*0x7aa8d5*/
      v12 = *(void **)(v10 + 8); /*0x7aa8dd*/
      (*(void (__thiscall **)(void *, int))(*(_DWORD *)list + 8))(list, v10); /*0x7aa8e6*/
    }
    else
    {
      v13 = *(void (__thiscall **)(void *, int))(*(_DWORD *)list + 8); /*0x7aa8f5*/
      *((_DWORD *)list + 1) = 0; /*0x7aa8f8*/
      v12 = *(void **)(v10 + 8); /*0x7aa8ff*/
      v13(list, v10); /*0x7aa905*/
    }
    --*((_DWORD *)list + 3); /*0x7aa8e8*/
    return v12; /*0x7aa8ec*/
  }
  else
  {
    v14 = v3[1]; /*0x7aa912*/
    v15 = *v3; /*0x7aa917*/
    *node = *v3; /*0x7aa919*/
    if ( v14 ) /*0x7aa91b*/
      *v14 = v15; /*0x7aa91d*/
    if ( v15 ) /*0x7aa921*/
      v15[1] = v14; /*0x7aa923*/
    v16 = v3[2]; /*0x7aa928*/
    (*(void (__thiscall **)(void *, void **))(*(_DWORD *)list + 8))(list, v3); /*0x7aa931*/
    --*((_DWORD *)list + 3); /*0x7aa933*/
    return v16; /*0x7aa937*/
  }
}
