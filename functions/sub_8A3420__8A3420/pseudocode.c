char __userpurge sub_8A3420@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3)
{
  int v4; // esi
  int v5; // eax
  int v7; // eax

  if ( a1 )
  {
    v4 = a1[2];
    if ( v4 )
    {
      if ( v4 == 0xFFFFFFEC )
        LOBYTE(v5) = 0;
      else
        v5 = *(_DWORD *)(v4 + 0x30);
      if ( (v5 & 0x3F) == 8 )
      {
        sub_89F570(a1);
        sub_8A9AB0(v4, a2, v4, a3, 1, 0);
LABEL_8:
        sub_89F570(a1);
        return 1;
      }
      v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0x50) + 8))(*(_DWORD *)(v4 + 0x50));
      if ( v7 != a3 && (v7 < 6 || v7 > 7 || a3 >= 6 || sub_535AC0(a1) != *(float *)&SrcStr) )
      {
        sub_89F570(a1);
        sub_8A9AB0(v4, a2, v4, a3, 1, 0);
        goto LABEL_8;
      }
    }
  }
  return 0;
}
