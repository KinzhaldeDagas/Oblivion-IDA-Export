int __thiscall sub_89E1A0(void *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  _DWORD **v7; // ebx
  int v8; // eax
  char v10; // [esp+Fh] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v10);
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 )
    v6 = *(_DWORD *)(v5 + 0xC);
  else
    v6 = 0;
  v7 = (_DWORD **)a3;
  *(_DWORD *)(v4 + 4) = 0;
  if ( v6 )
  {
    if ( NiTMap_GetAt(*v7, v6, &a3) )
    {
      if ( a3 )
        v8 = *(_DWORD *)(a3 + 8);
      else
        v8 = 0;
      *(_DWORD *)(v4 + 4) = v8;
    }
  }
  return sub_89D610(this, a2, v7);
}
