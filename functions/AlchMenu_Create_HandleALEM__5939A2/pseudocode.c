int __usercall AlchMenu_Create_::HandleALEM@<eax>(
        ExtraDataList ***a1@<ebx>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        ExtraDataList ***a8,
        int a9,
        ...)
{
  CHAR *v9; // eax
  va_list va; // [esp+24h] [ebp+20h] BYREF

  va_start(va, a9);
  if ( a1 ) /*0x5939a4*/
  {
    v9 = sub_4851B0(a1, (TESObjectREFR *)reference); /*0x5939ae*/
    _sprintf(va, "%s\\%s", "Icons", v9); /*0x5939c3*/
    Tile_SetString(*(_DWORD **)(a2 + 0x34), (_DWORD *)0xFE6, va); /*0x5939d8*/
    Tile_SetFloat(*(Tile **)(a2 + 0x34), 0xFA1u, fConstant_2); /*0x5939ef*/
  }
  return AlchMenu_Create_::HandleCALC(a2, a3, a4, a5, a6, a7, a8, a9);
}
