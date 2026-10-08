void __usercall sub_5976B0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // edi
  int v6; // ebp
  char *m_data; // eax
  bool v8; // zf
  char *v9; // esi
  const char *v10; // eax
  const char *v11; // esi
  const char *v12; // ecx
  BSStringT v13; // [esp+14h] [ebp-14h] BYREF
  unsigned int v14; // [esp+24h] [ebp-4h]

  if ( sub_578FE0() != 0x41B ) /*0x5976e3*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x34))(a1); /*0x597709*/
    if ( sub_578FE0() == v5 && !*(_BYTE *)(a1 + 0x54) ) /*0x59771a*/
    {
      if ( LOBYTE(dword_B3B0B4[0x70]) ) /*0x597726*/
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x34))(a1); /*0x597737*/
        if ( sub_578FE0() == v6 ) /*0x597740*/
        {
          m_data = unk_B3B738.m_data; /*0x597742*/
          v8 = unk_B3B738.m_data == 0; /*0x597747*/
          LOBYTE(dword_B3B0B4[0x70]) = 0; /*0x597749*/
          if ( v8 || !*m_data ) /*0x597751*/
          {
            --*(_DWORD *)(a1 + 0x58); /*0x597767*/
          }
          else
          {
            sub_488810((BSStringT *)(a1 + 0x84), m_data); /*0x59775c*/
            ++*(_DWORD *)(a1 + 0x58); /*0x597761*/
          }
        }
      }
      switch ( *(_DWORD *)(a1 + 0x58) ) /*0x597779*/
      {
        case 1: /*0x597779*/
          SkillsMenu_Create(a2, a4, *(_DWORD *)(a1 + 0x50)); /*0x597786*/
          return; /*0x5977a1*/
        case 2: /*0x597779*/
          SkillsMenu_Create(a2, a4, *(_DWORD *)(a1 + 0x4C)); /*0x5977a8*/
          return; /*0x5977c3*/
        case 3: /*0x597779*/
          SkillsMenu_Create(a2, a4, *(_DWORD *)(a1 + 0x48)); /*0x5977c9*/
          return; /*0x5977e4*/
        case 4: /*0x597779*/
          v9 = *(char **)(*(_DWORD *)(a1 + 0x40) + 0x1C); /*0x5977eb*/
          if ( !v9 ) /*0x5977f0*/
            v9 = EmptyString; /*0x5977f2*/
          TextMenu_Create(a2, a3, a4, (char *)stru_B38658, v9); /*0x5977fe*/
          return; /*0x597819*/
        case 5: /*0x597779*/
          *(_BYTE *)(a1 + 0x54) = 1; /*0x59781a*/
          v13.m_data = 0; /*0x59781e*/
          v13.m_dataLen = 0; /*0x597822*/
          v13.m_bufLen = 0; /*0x597827*/
          v8 = *(_DWORD *)(a1 + 0x34) == 0; /*0x59782c*/
          v10 = (const char *)stru_B38F40; /*0x59782f*/
          v14 = 0; /*0x597834*/
          if ( v8 ) /*0x597838*/
          {
            v11 = *(const char **)(a1 + 0x84); /*0x597854*/
            v12 = (const char *)stru_B38648; /*0x59785a*/
          }
          else
          {
            v11 = *(const char **)(*(_DWORD *)(a1 + 0x40) + 0x1C); /*0x597840*/
            if ( !v11 ) /*0x597845*/
              v11 = EmptyString; /*0x597847*/
            v12 = *(const char **)stru_B38650; /*0x59784c*/
          }
          BSStringT_Static_Format(&v13, "%s %s %s?", v12, v11, v10); /*0x59786d*/
          ShowUIMessageBox( /*0x59788f*/
            (char *)MEMORY[0xB38CF8],
            a2,
            a3,
            a4,
            v13.m_data,
            (int)sub_5974E0,
            1,
            (char *)MEMORY[0xB38CF8],
            MEMORY[0xB38D00]);
          v14 = 0xFFFFFFFF; /*0x59789b*/
          BSStringT_Clear((unsigned int *)&v13); /*0x59789f*/
          def_597779(); /*0x5978a0*/
          return; /*0x5978a0*/
        default:
          break;
      }
    }
    JUMPOUT(0x5978A4); /*0x5978a4*/
  }
  LOBYTE(dword_B3B0B4[0x70]) = 1; /*0x5976e5*/
}
