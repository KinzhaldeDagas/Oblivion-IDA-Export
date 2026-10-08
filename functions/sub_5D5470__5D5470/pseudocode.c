int __userpurge sub_5D5470@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        double a9@<st4>,
        int a10,
        int a11)
{
  char *v12; // eax

  if ( sub_57D2F0(*(void **)(a1 + 0x74)) ) /*0x5d5477*/
  {
    sub_57DD90(*(void **)(a1 + 0x74), 0); /*0x5d5489*/
LABEL_6:
    v12 = sub_580120(*(char **)(a1 + 0x74)); /*0x5d54a1*/
    Tile_SetString(*(_DWORD **)(a1 + 0x30), (_DWORD *)0xFDE, v12); /*0x5d54b2*/
    goto LABEL_7; /*0x5d54b2*/
  }
  if ( a10 == 2 || a10 == 0x18 ) /*0x5d5498*/
  {
    sub_5D40C0(a1); /*0x5d549c*/
    goto LABEL_6; /*0x5d549c*/
  }
LABEL_7:
  switch ( a10 ) /*0x5d54bc*/
  {
    case 0xE: /*0x5d54bc*/
      SigilStoneMenu_CreateItem_(a1, a3, a4, a5, a6, a7, a8, a9); /*0x5d5507*/
      break;
    case 0xF: /*0x5d54bc*/
      sub_5D41E0(a2, a3, a4, a5, a6, a7, a8, a9); /*0x5d54ec*/
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0xF, a11); /*0x5d5502*/
    case 0x14: /*0x5d54bc*/
      RepairMenu_Create(a5, a3, 6, 0, 0, 0); /*0x5d54d0*/
      return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x14, a11); /*0x5d54e9*/
  }
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5d54e7*/
}
