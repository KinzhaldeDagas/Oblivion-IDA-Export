void __usercall sub_5976B0(
        int a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v13; // edi
  char *m_data; // eax
  bool v15; // zf
  const char *v16; // esi
  const char *v17; // eax
  const char *v18; // esi
  const char *v19; // ecx
  BSStringT v20; // [esp+14h] [ebp-14h] BYREF
  unsigned int v21; // [esp+24h] [ebp-4h]

  if ( sub_578FE0() != 0x41B )
  {
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x34))(a1);
    if ( sub_578FE0() == v13 && !*(_BYTE *)(a1 + 0x54) )
    {
      if ( byte_B3B274 )
      {
        a2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x34))(a1);
        if ( sub_578FE0() == a2 )
        {
          m_data = stru_B3B738.m_data;
          v15 = stru_B3B738.m_data == 0;
          byte_B3B274 = 0;
          if ( v15 || !*m_data )
          {
            --*(_DWORD *)(a1 + 0x58);
          }
          else
          {
            sub_488810((BSStringT *)(a1 + 0x84), m_data);
            ++*(_DWORD *)(a1 + 0x58);
          }
        }
      }
      switch ( *(_DWORD *)(a1 + 0x58) )
      {
        case 1:
          sub_5D6390(a3, a4, *(_DWORD *)(a1 + 0x50));
          return;
        case 2:
          sub_5D6390(a3, a4, *(_DWORD *)(a1 + 0x4C));
          return;
        case 3:
          sub_5D6390(a3, a4, *(_DWORD *)(a1 + 0x48));
          return;
        case 4:
          v16 = *(const char **)(*(_DWORD *)(a1 + 0x40) + 0x1C);
          if ( !v16 )
            v16 = EmptyString;
          TextMenu_Create(a2, a3, a4, (const char *)dword_B38658, v16);
          return;
        case 5:
          *(_BYTE *)(a1 + 0x54) = 1;
          v20.m_data = 0;
          v20.m_dataLen = 0;
          v20.m_bufLen = 0;
          v15 = *(_DWORD *)(a1 + 0x34) == 0;
          v17 = (const char *)dword_B38F40;
          v21 = 0;
          if ( v15 )
          {
            v18 = *(const char **)(a1 + 0x84);
            v19 = (const char *)dword_B38648;
          }
          else
          {
            v18 = *(const char **)(*(_DWORD *)(a1 + 0x40) + 0x1C);
            if ( !v18 )
              v18 = EmptyString;
            v19 = *(const char **)dword_B38650;
          }
          BSStringT_Static_Format(&v20, "%s %s %s?", v19, v18, v17);
          ShowUIMessageBox(
            (char *)MessageButtonTextYes,
            a2,
            a3,
            a4,
            a5,
            v20.m_data,
            (int)sub_5974E0,
            1,
            (const char *)MessageButtonTextYes,
            MessageButtonTextNo);
          v21 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v20);
          def_597779(a6, a7, a8, a9, a10, a11, a12);
          return;
        default:
          break;
      }
    }
    JUMPOUT(0x5978A4);
  }
  byte_B3B274 = 1;
}
