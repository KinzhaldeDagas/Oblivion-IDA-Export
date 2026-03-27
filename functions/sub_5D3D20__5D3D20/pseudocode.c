void __userpurge sub_5D3D20(
        int a1@<ecx>,
        char a2@<bpl>,
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

  if ( !*(_BYTE *)(a1 + 0x5C) )
  {
    if ( a11 == 1 )
    {
      sub_5D2CF0(a3, a4);
      sub_5BDA20();
      v13 = *(Tile **)(a1 + 0x40);
      if ( v13 )
        Tile_SetFloat(v13, (_DWORD *)0xFA1, 1.0);
    }
    else if ( a11 >= 0x65 )
    {
      if ( (InterfaceManager_GetSingleton(0, 1)->unk0C0[0x16] & 4) != 0 )
      {
        if ( a11 != 0x65 )
        {
          *(_DWORD *)(a1 + 0x58) = a12;
          ShowUIMessageBox(
            (char *)dword_B38760,
            a2,
            a3,
            a4,
            a5,
            (const char *)dword_B38760,
            (int)sub_5D3B70,
            1,
            (const char *)MessageButtonTextNo,
            MessageButtonTextYes);
          *(_BYTE *)(a1 + 0x5C) = 1;
        }
      }
      else if ( a11 == 0x65 )
      {
        sub_5D3230(a6, a7, a8, a9, a10, a3, a4, a5);
      }
      else
      {
        *(_DWORD *)(a1 + 0x58) = a12;
        ShowUIMessageBox(
          (char *)MessageButtonTextNo,
          a2,
          a3,
          a4,
          a5,
          (const char *)dword_B38758,
          (int)SaveLoad_OverwriteSavegameCallback,
          1,
          (const char *)MessageButtonTextNo,
          MessageButtonTextYes);
        *(_BYTE *)(a1 + 0x5C) = 1;
      }
    }
  }
}
