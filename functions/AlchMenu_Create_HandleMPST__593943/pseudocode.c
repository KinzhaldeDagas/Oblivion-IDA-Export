int __usercall AlchMenu_Create_::HandleMPST@<eax>(
        ExtraDataList ***a1@<ebx>,
        int a2@<esi>,
        ExtraDataList ***a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9,
        int a10,
        ...)
{
  CHAR *v10; // eax
  va_list va; // [esp+20h] [ebp+20h] BYREF

  va_start(va, a10);
  *(_DWORD *)(a2 + 0x78) = a3; /*0x59394d*/
  *(_DWORD *)(a2 + 0x7C) = a1; /*0x593950*/
  *(_DWORD *)(a2 + 0x80) = a9; /*0x593953*/
  *(_DWORD *)(a2 + 0x84) = a8; /*0x593959*/
  unk_B3B718 = 0; /*0x59395f*/
  if ( a3 ) /*0x593969*/
  {
    v10 = sub_4851B0(a3, (TESObjectREFR *)reference); /*0x593973*/
    _sprintf(va, "%s\\%s", "Icons", v10); /*0x593988*/
    Tile_SetString(*(_DWORD **)(a2 + 0x30), (_DWORD *)0xFE6, va); /*0x59399d*/
  }
  return AlchMenu_Create_::HandleALEM(a1, a2, a4, a5, a6, a7, a8, a9, a10);
}
