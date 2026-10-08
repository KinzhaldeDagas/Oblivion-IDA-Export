void __usercall sub_5AA1B0(
        int a1@<ecx>,
        int ebp0@<ebp>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>)
{
  Tile *v11; // ecx
  float a2; // [esp+0h] [ebp-8h]

  if ( !*(_BYTE *)(a1 + 0x44) ) /*0x5aa1b3*/
  {
    v11 = *(Tile **)(a1 + 0x28); /*0x5aa1b9*/
    if ( v11 ) /*0x5aa1be*/
    {
      __asm { fld1 } /*0x5aa1c0*/
      __asm { fstp    [esp+8+a2]; value }
      Tile_SetFloat(v11, (_DWORD *)0xFA1, a2); /*0x5aa1cb*/
      InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0; /*0x5aa1dc*/
    }
  }
  if ( (char)--*(_BYTE *)(a1 + 0x44) < (char)0xFFFFFFFF ) /*0x5aa1ee*/
    *(_BYTE *)(a1 + 0x44) = 0xFF; /*0x5aa1f0*/
  if ( InterfaceManager_MenuModeHasFocus(0x3EA) ) /*0x5aa1f8*/
    Input_ProcessQuickSlotHotkeys(ebp0, a3, a4, a5, a6, a7, a8, a9, a10); /*0x5aa205*/
}
