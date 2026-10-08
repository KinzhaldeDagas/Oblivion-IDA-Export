char __cdecl sub_88AA80(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  NiRTTI *v4; // eax
  char v5; // al
  _DWORD *v6; // ecx
  int v7; // esi

  LOBYTE(v2) = a1; /*0x88aa80*/
  v3 = *(_DWORD *)(a1 + 0x10); /*0x88aa85*/
  if ( v3 )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v3 + 4))(*(_DWORD *)(a1 + 0x10)); /*0x88aa93*/
    if ( v4 ) /*0x88aa97*/
    {
      while ( v4 != &stru_BA7D84 ) /*0x88aaa5*/
      {
        v4 = v4->parent; /*0x88aaa7*/
        if ( !v4 ) /*0x88aaac*/
          goto LABEL_5; /*0x88aaac*/
      }
      v5 = 1; /*0x88aae1*/
    }
    else
    {
LABEL_5:
      v5 = 0; /*0x88aaae*/
    }
    v2 = v5 != 0 ? v3 : 0;
    if ( v2 ) /*0x88aab6*/
    {
      v6 = *(_DWORD **)(v2 + 8); /*0x88aab8*/
      v7 = a2; /*0x88aabd*/
      if ( v6 ) /*0x88aac1*/
      {
        LOBYTE(v2) = *sub_8A63F0(v6, &a1) != 0; /*0x88aad0*/
        if ( (_BYTE)v2 ) /*0x88aad5*/
          ++*(_DWORD *)(v7 + 0xC); /*0x88aad7*/
      }
      *(_BYTE *)(v7 + 4) = 0; /*0x88aadb*/
    }
  }
  return v2; /*0x88aadf*/
}
