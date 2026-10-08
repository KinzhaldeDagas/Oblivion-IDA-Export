// positive sp value has been detected, the output may be wrong!
int __usercall AlchMenu_Create_::HandleRERT@<eax>(
        Menu *a1@<ebp>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  CHAR *v5; // eax
  int v7; // [esp-114h] [ebp-118h]
  ExtraDataList ***v8; // [esp-110h] [ebp-114h]
  char v9[260]; // [esp-104h] [ebp-108h] BYREF

  if ( v8 ) /*0x593a4e*/
  {
    v5 = sub_4851B0(v8, (TESObjectREFR *)reference); /*0x593a56*/
    _sprintf(v9, "%s\\%s", "Icons", v5); /*0x593a6b*/
    Tile_SetString(*(_DWORD **)(a2 + 0x3C), (_DWORD *)0xFE6, v9); /*0x593a80*/
    Tile_SetFloat(*(Tile **)(a2 + 0x3C), 0xFA1u, fConstant_2); /*0x593a97*/
  }
  sub_57FF20(*(BSStringT **)(a2 + 0xA0), (char *)stru_B38900.value); /*0x593aa8*/
  sub_593710((char **)a2); /*0x593aaf*/
  EnableMenu(a1, a3, a4, a5, 0); /*0x593ab8*/
  return v7; /*0x593aee*/
}
