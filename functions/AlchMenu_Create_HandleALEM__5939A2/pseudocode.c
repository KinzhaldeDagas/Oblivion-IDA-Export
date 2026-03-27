int __usercall AlchMenu_Create_::HandleALEM@<eax>(
        ExtraDataList ***a1@<ebx>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        int a9,
        ...)
{
  CHAR *v9; // eax
  va_list va; // [esp+24h] [ebp+20h] BYREF

  va_start(va, a9);
  if ( a1 )
  {
    v9 = sub_4851B0(a1, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
    _sprintf(va, "%s\\%s", "Icons", v9);
    Tile_SetString(*(_DWORD **)(a2 + 0x34), (_DWORD *)0xFE6, va);
    Tile_SetFloat(*(Tile **)(a2 + 0x34), (_DWORD *)0xFA1, fConstant_2);
  }
  return AlchMenu_Create_::HandleCALC(a2, a3, a4, a5, a6, a7, a8, a9);
}
