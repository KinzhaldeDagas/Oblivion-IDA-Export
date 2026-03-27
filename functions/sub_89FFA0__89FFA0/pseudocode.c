int __thiscall sub_89FFA0(void *this, int a2, int a3)
{
  int (__stdcall *v3)(char *); // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  _DWORD **v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v14; // [esp+Fh] [ebp-5h] BYREF
  void *v15; // [esp+10h] [ebp-4h]

  v3 = *(int (__stdcall **)(char *))(*(_DWORD *)this + 0x74);
  v15 = this;
  v4 = v3(&v14);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 0xC);
  else
    v6 = 0;
  v7 = *(_DWORD *)(v4 + 8);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 0xC);
  else
    v8 = 0;
  v9 = (_DWORD **)a3;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  if ( v6 )
  {
    if ( NiTMap_GetAt(*v9, v6, &a3) )
    {
      if ( a3 )
        v10 = *(_DWORD *)(a3 + 8);
      else
        v10 = 0;
      *(_DWORD *)(v4 + 4) = v10;
    }
    if ( v8 )
    {
      if ( NiTMap_GetAt(*v9, v8, &a3) )
        v11 = a3;
      else
        v11 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v8 + 0x18))(v8, v9);
      if ( v11 )
        v12 = *(_DWORD *)(v11 + 8);
      else
        v12 = 0;
      *(_DWORD *)(v4 + 8) = v12;
    }
  }
  return sub_89D610(v15, a2, v9);
}
