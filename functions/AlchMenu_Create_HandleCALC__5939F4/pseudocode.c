int __usercall AlchMenu_Create_::HandleCALC@<eax>(
        int a1@<esi>,
        Menu *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        ExtraDataList ***a11,
        int a12,
        ...)
{
  CHAR *v12; // eax
  va_list va; // [esp+24h] [ebp+20h] BYREF

  va_start(va, a12);
  if ( a11 ) /*0x5939fa*/
  {
    v12 = sub_4851B0(a11, (TESObjectREFR *)reference); /*0x593a02*/
    _sprintf(va, "%s\\%s", "Icons", v12); /*0x593a17*/
    Tile_SetString(*(_DWORD **)(a1 + 0x38), (_DWORD *)0xFE6, va); /*0x593a2c*/
    a5 = fConstant_2; /*0x593a31*/
    Tile_SetFloat(*(Tile **)(a1 + 0x38), 0xFA1u, fConstant_2); /*0x593a43*/
  }
  return AlchMenu_Create_::HandleRERT(a2, a1, a3, a4, a5);
}
