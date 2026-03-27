_DWORD *__usercall sub_8CB450@<eax>(int a1@<ebp>, int a2, _DWORD *a3, int a4)
{
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]

  sub_8D9A50(a3);
  if ( *(_DWORD *)(a2 + 0x88) )
  {
    sub_91EF50(a1, (int)a3, a2, (int)a3, v6, v7);
    if ( a4 )
    {
      sub_8DC6E0(a4, a2, (int)a3);
      return a3;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 0x88) = 1;
    sub_91EF50(a1, (int)a3, a2, (int)a3, v6, v7);
    if ( a4 )
      sub_8DC6E0(a4, a2, (int)a3);
    if ( (*(_DWORD *)(a2 + 0x88))-- == 1 )
    {
      if ( *(_DWORD *)(a2 + 0x84) )
      {
        if ( !*(_BYTE *)(a2 + 0x90) )
          sub_899210(a2);
      }
    }
  }
  return a3;
}
