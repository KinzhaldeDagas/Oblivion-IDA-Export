void __userpurge sub_59C5E0(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        signed int a5,
        Tile *a6)
{
  double v7; // st4
  double Float; // st4
  OSGlobals *v9; // ecx
  unsigned __int8 **v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned __int8 v13; // al
  bool v14; // al
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  char v19; // al
  float a2; // [esp+0h] [ebp-40h]
  BSStringT v21; // [esp+18h] [ebp-28h] BYREF
  unsigned __int8 v22[16]; // [esp+20h] [ebp-20h] BYREF
  unsigned int v23; // [esp+3Ch] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 0xD8) )
  {
    switch ( a5 )
    {
      case 1:
        if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE) == fConstant_2 )
        {
          v7 = 1.0;
          goto LABEL_19;
        }
        Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x38), 0xFB5);
        v9 = OSGlobals;
        flt_B14EE8 = Float / fCostant_100 * dbl_A6B760 + dbl_A59B38;
        InputGlobals::SaveControlSettingsToINI((DIDEVCAPS *)v9->input);
        goto LABEL_6;
      case 7:
        sub_57DE50(3);
        byte_B14F38 = byte_B14F38 == 0;
        v19 = sub_404E10(&byte_B14F38);
        sub_59B640(a6, v19);
        break;
      case 8:
        sub_57DE50(3);
        v15 = dword_B14EC8;
        dword_B14EC8 = dword_B14ED8;
        v16 = dword_B14ED0;
        dword_B14ED8 = v15;
        v17 = v16;
        v18 = dword_B14EE0;
        dword_B14EE0 = v17;
        dword_B14ED0 = v18;
        *(_BYTE *)(a1 + 0xD4) = 1;
        break;
      case 9:
        sub_57DE50(1);
        v7 = fConstant_2;
LABEL_19:
        a2 = v7;
        Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAE, a2);
        break;
      case 0xA:
        sub_57DE50(1);
        v21.m_data = 0;
        v21.m_dataLen = 0;
        v21.m_bufLen = 0;
        v10 = *(unsigned __int8 ***)(4 * *(_DWORD *)(a1 + 0x5C) + 0xB39548);
        v23 = 0;
        if ( v10 )
          v11 = *v10;
        else
          v11 = 0;
        v12 = v22;
        do
        {
          v13 = *v11;
          *v12++ = *v11++;
        }
        while ( v13 );
        _mbslwr(v22);
        BSStringT_Static_Format(
          &v21,
          "%s %s %s?",
          *(const char **)dword_B38EF0,
          (const char *)v22,
          (const char *)dword_B38EF8);
        ShowUIMessageBox(
          v21.m_data,
          a5,
          st5_0,
          a3,
          a4,
          v21.m_data,
          (int)sub_59B8C0,
          1,
          (const char *)MessageButtonTextNo,
          MessageButtonTextYes);
        v23 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v21);
        break;
      case 0xC:
      case 0xD:
        sub_57DE50(1);
        if ( sub_587500(a5) == 0xB )
          v14 = sub_59B980((_DWORD *)a1);
        else
          v14 = sub_59B920((_DWORD *)a1);
        if ( v14 )
        {
          *(_BYTE *)(a1 + 0xD4) = 1;
        }
        else
        {
LABEL_6:
          sub_59B9E0(st5_0, a3);
          sub_5BD610(a5, st5_0, a3);
        }
        break;
      default:
        break;
    }
    if ( a5 > 0xD && !*(_BYTE *)(a1 + 0xE4) )
      sub_59C3F0((float *)a1, a6);
  }
}
