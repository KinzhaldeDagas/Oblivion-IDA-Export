int __thiscall sub_8A0860(void *this, int a2, int a3)
{
  int (__stdcall *v3)(char *); // eax
  int v4; // eax
  int v5; // esi
  _DWORD **v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v15; // [esp+Fh] [ebp-5h] BYREF
  void *v16; // [esp+10h] [ebp-4h]

  v3 = *(int (__stdcall **)(char *))(*(_DWORD *)this + 0x74);
  v16 = this;
  v4 = v3(&v15);
  if ( v4 )
    v5 = v4 - 4;
  else
    v5 = 0;
  v6 = (_DWORD **)a3;
  if ( 1.0 != *(float *)(a3 + 0x10) )
    (**(void (__thiscall ***)(int, _DWORD, int))v5)(v5, 0, a3);
  v7 = *(_DWORD *)(v5 + 0xC);
  if ( v7 )
    v8 = *(_DWORD *)(v7 + 0xC);
  else
    v8 = 0;
  v9 = *(_DWORD *)(v5 + 0x10);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 0xC);
  else
    v10 = 0;
  *(_DWORD *)(v5 + 0xC) = 0;
  *(_DWORD *)(v5 + 0x10) = 0;
  if ( v8 )
  {
    if ( NiTMap_GetAt(*v6, v8, &a3) )
    {
      if ( a3 )
        v11 = *(_DWORD *)(a3 + 8);
      else
        v11 = 0;
      *(_DWORD *)(v5 + 0xC) = v11;
    }
    if ( v10 )
    {
      if ( NiTMap_GetAt(*v6, v10, &a3) )
        v12 = a3;
      else
        v12 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v10 + 0x18))(v10, v6);
      if ( v12 )
        v13 = *(_DWORD *)(v12 + 8);
      else
        v13 = 0;
      *(_DWORD *)(v5 + 0x10) = v13;
    }
  }
  return sub_89D610(v16, a2, v6);
}
