void __userpurge SaveMenu_HandleClick(
        int a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        double a9@<st4>,
        double a10@<st3>,
        signed int a11,
        int a12)
{
  Tile *v13; // ecx
  float a2; // [esp+0h] [ebp-Ch]

  if ( !*(_BYTE *)(a1 + 0x5C) ) /*0x5d3d23*/
  {
    if ( a11 == 1 ) /*0x5d3d35*/
    {
      sub_5D2CF0(a3, a4); /*0x5d3d37*/
      sub_5BDA20(); /*0x5d3d3c*/
      v13 = *(Tile **)(a1 + 0x40); /*0x5d3d41*/
      if ( v13 ) /*0x5d3d46*/
      {
        __asm { fld1 } /*0x5d3d4c*/
        __asm { fstp    [esp+0Ch+a2]; value }
        Tile_SetFloat(v13, (_DWORD *)0xFA1, a2); /*0x5d3d57*/
      }
    }
    else if ( a11 >= 0x65 ) /*0x5d3d64*/
    {
      if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 ) /*0x5d3d81*/
      {
        if ( a11 != 0x65 ) /*0x5d3d86*/
        {
          *(_DWORD *)(a1 + 0x58) = a12; /*0x5d3d8c*/
          ShowUIMessageBox( /*0x5d3dac*/
            (char *)stru_B38760,
            a3,
            a4,
            a5,
            (char *)stru_B38760,
            (int)sub_5D3B70,
            1,
            (char *)MEMORY[0xB38D00],
            MEMORY[0xB38CF8]);
          *(_BYTE *)(a1 + 0x5C) = 1; /*0x5d3db5*/
        }
      }
      else if ( a11 == 0x65 ) /*0x5d3dc0*/
      {
        sub_5D3230(a6, a7, a8, a9, a10, a3, a4, a5); /*0x5d3dc2*/
      }
      else
      {
        *(_DWORD *)(a1 + 0x58) = a12; /*0x5d3dd0*/
        ShowUIMessageBox( /*0x5d3df0*/
          (char *)MEMORY[0xB38D00],
          a3,
          a4,
          a5,
          (char *)stru_B38758,
          (int)SaveLoad_OverwriteSavegameCallback,
          1,
          (char *)MEMORY[0xB38D00],
          MEMORY[0xB38CF8]);
        *(_BYTE *)(a1 + 0x5C) = 1; /*0x5d3df5*/
      }
    }
  }
}
