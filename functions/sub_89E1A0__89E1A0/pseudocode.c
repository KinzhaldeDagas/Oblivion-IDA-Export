int __thiscall sub_89E1A0(void *this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  int v6; // eax
  _DWORD **v7; // ebx
  int v8; // eax
  char v10; // [esp+Fh] [ebp-1h] BYREF

  v4 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v10); /*0x89e1b4*/
  v5 = *(_DWORD *)(v4 + 4); /*0x89e1b6*/
  if ( v5 ) /*0x89e1bb*/
    v6 = *(_DWORD *)(v5 + 0xC); /*0x89e1bd*/
  else
    v6 = 0; /*0x89e1c2*/
  v7 = (_DWORD **)a3; /*0x89e1c6*/
  *(_DWORD *)(v4 + 4) = 0; /*0x89e1ca*/
  if ( v6 ) /*0x89e1d1*/
  {
    if ( NiTMap_GetAt(*v7, v6, &a3) ) /*0x89e1db*/
    {
      if ( a3 ) /*0x89e1ea*/
        v8 = *(_DWORD *)(a3 + 8); /*0x89e1ec*/
      else
        v8 = 0; /*0x89e1f1*/
      *(_DWORD *)(v4 + 4) = v8; /*0x89e1f3*/
    }
  }
  return sub_89D610(this, a2, v7); /*0x89e203*/
}
