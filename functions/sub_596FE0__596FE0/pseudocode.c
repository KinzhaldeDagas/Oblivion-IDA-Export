void __userpurge sub_596FE0(
        _DWORD *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        Tile *a7)
{
  CHAR *v8; // esi
  const char *v9; // eax
  char v10; // al
  bool v11; // zf
  char *m_data; // esi
  _BYTE *v13; // ebx
  BSStringT v14; // [esp+14h] [ebp-14h] BYREF
  int v15; // [esp+24h] [ebp-4h]

  switch ( a6 )
  {
    case 4:
      v14.m_data = 0;
      v14.m_dataLen = 0;
      v14.m_bufLen = 0;
      v8 = *(CHAR **)(a1[0xF] + 0x1C);
      v15 = 0;
      if ( !v8 )
        v8 = EmptyString;
      v9 = 0;
      if ( v8 )
      {
        v10 = *v8;
        if ( *v8 == 0x61
          || v10 == 0x65
          || v10 == 0x69
          || v10 == 0x6F
          || v10 == 0x75
          || v10 == 0x41
          || v10 == 0x45
          || v10 == 0x49
          || v10 == 0x4F
          || (v11 = v10 == 0x55, v9 = *(const char **)dword_B38660, v11) )
        {
          v9 = (const char *)dword_B38668;
        }
      }
      BSStringT_Static_Format(&v14, "%s %s?", v9, v8);
      m_data = v14.m_data;
      ShowUIMessageBox(
        (char *)MessageButtonTextYes,
        a2,
        a3,
        a4,
        a5,
        v14.m_data,
        (int)sub_596A00,
        1,
        (const char *)MessageButtonTextNo,
        MessageButtonTextYes);
      FormHeapFree((unsigned int)m_data);
      break;
    case 0x63:
      Tile_SetFloat(a7, (_DWORD *)0xFB0, fConstant_2);
      v13 = sub_596BC0(a7);
      if ( v13 )
      {
        sub_57DE50(0xB);
        Tile_GetFloat(a7, 0xFAA);
        a1[0x11] = Double_To_SInt32(a5);
        a1[0xF] = v13;
        sub_596CF0(a1, 0);
      }
      break;
    case 5:
      sub_57DE50(1);
      a1[0x16] = 1;
      sub_584740(a1, a3, a4);
      break;
  }
}
