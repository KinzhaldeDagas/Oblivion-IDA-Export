int __usercall AlchMenu_Create_::HandleCALC@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        ExtraDataList ***a7,
        int a8,
        ...)
{
  CHAR *v8; // eax
  va_list va; // [esp+24h] [ebp+20h] BYREF

  va_start(va, a8);
  if ( a7 )
  {
    v8 = sub_4851B0(a7, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
    _sprintf(va, "%s\\%s", "Icons", v8);
    Tile_SetString(*(_DWORD **)(a1 + 0x38), (_DWORD *)0xFE6, va);
    Tile_SetFloat(*(Tile **)(a1 + 0x38), (_DWORD *)0xFA1, fConstant_2);
  }
  return AlchMenu_Create_::HandleRERT();
}
