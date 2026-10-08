int __thiscall sub_89F5D0(void *this, int a2, _DWORD **a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  char v11; // [esp+Fh] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v11); /*0x89f5e2*/
  v5 = v4; /*0x89f5e8*/
  if ( v4 ) /*0x89f5ec*/
  {
    v6 = *(_DWORD *)(v4 + 4); /*0x89f5ee*/
    *(_DWORD *)(v5 + 0x10) = 0; /*0x89f5f4*/
    if ( v6 ) /*0x89f5fb*/
      v7 = *(_DWORD *)(v6 + 8); /*0x89f5fd*/
    else
      v7 = 0; /*0x89f602*/
    if ( v7 ) /*0x89f606*/
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 0x8C))(v7, a3) ) /*0x89f613*/
      {
        v8 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v7 + 0x18))(v7, a3); /*0x89f621*/
        if ( v8 ) /*0x89f625*/
          v9 = *(_DWORD *)(v8 + 8); /*0x89f627*/
        else
          v9 = 0; /*0x89f62c*/
        *(_DWORD *)(v5 + 4) = v9; /*0x89f62e*/
      }
    }
    *(_WORD *)(v5 + 2) = 0; /*0x89f631*/
  }
  return sub_89D610(this, a2, a3); /*0x89f645*/
}
