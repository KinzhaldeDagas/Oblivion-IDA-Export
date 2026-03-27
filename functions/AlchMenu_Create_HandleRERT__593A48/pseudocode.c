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

  if ( v8 )
  {
    v5 = sub_4851B0(v8, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
    _sprintf(v9, "%s\\%s", "Icons", v5);
    Tile_SetString(*(_DWORD **)(a2 + 0x3C), (_DWORD *)0xFE6, v9);
    a5 = fConstant_2;
    Tile_SetFloat(*(Tile **)(a2 + 0x3C), (_DWORD *)0xFA1, fConstant_2);
  }
  sub_57FF20(*(BSStringT **)(a2 + 0xA0), (char *)dword_B38900);
  sub_593710((char **)a2);
  EnableMenu(a1, a3, a4, a5, 0);
  return v7;
}
