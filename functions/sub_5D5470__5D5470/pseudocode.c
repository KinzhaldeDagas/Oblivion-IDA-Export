int __userpurge sub_5D5470@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  char *v8; // eax

  if ( sub_57D2F0(*(void **)(a1 + 0x74)) )
  {
    sub_57DD90(*(void **)(a1 + 0x74), 0);
LABEL_6:
    v8 = sub_580120(*(char **)(a1 + 0x74));
    Tile_SetString(*(_DWORD **)(a1 + 0x30), (_DWORD *)0xFDE, v8);
    goto LABEL_7;
  }
  if ( a6 == 2 || a6 == 0x18 )
  {
    sub_5D40C0(a1);
    goto LABEL_6;
  }
LABEL_7:
  switch ( a6 )
  {
    case 0xE:
      SigilStoneMenu_CreateItem_(a1, a3, a4, a5);
      break;
    case 0xF:
      sub_5D41E0(a2, a3, a4, a5);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0xF, a7);
    case 0x14:
      sub_5D2070(a5, a4, 6, 0, 0, 0);
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x14, a7);
  }
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, a6, a7);
}
