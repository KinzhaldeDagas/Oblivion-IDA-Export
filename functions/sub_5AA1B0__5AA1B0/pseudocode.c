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

  if ( !*(_BYTE *)(a1 + 0x44) )
  {
    v11 = *(Tile **)(a1 + 0x28);
    if ( v11 )
    {
      __asm { fld1 }
      __asm { fstp    [esp+8+a2]; a3 }
      Tile_SetFloat(v11, (_DWORD *)0xFA1, a2);
      InterfaceManager_GetSingleton(0, 1)->altActiveTile = 0;
    }
  }
  if ( (char)--*(_BYTE *)(a1 + 0x44) < (char)0xFFFFFFFF )
    *(_BYTE *)(a1 + 0x44) = 0xFF;
  if ( InterfaceManager_MenuModeHasFocus(0x3EA) )
    sub_5C1F70(ebp0, a3, a4, a5, a6, a7, a8, a9, a10);
}
