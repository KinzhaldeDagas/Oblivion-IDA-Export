void __cdecl sub_5101E0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  unsigned __int16 v8; // bx
  bool v9; // zf
  int v10; // eax
  __int16 v11; // ax
  TES *v12; // eax
  int v13; // ecx
  size_t v14; // [esp-4h] [ebp-21Ch]
  size_t v15; // [esp-4h] [ebp-21Ch]
  size_t v16; // [esp-4h] [ebp-21Ch]
  char Str2; // [esp+14h] [ebp-204h] BYREF
  char Str[7]; // [esp+15h] [ebp-203h] BYREF

  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, &Str2) )
  {
    v8 = 0;
    switch ( Str2 )
    {
      case '1':
        v8 = 1;
        sub_7B4890(0);
        if ( strlen(&Str2) == 1 )
          v8 = (ShaderPackage < 2 ? 0 : 0x20) | 0xF;
        break;
      case '2':
        v8 = 1;
        sub_7B4890(1u);
        break;
      case '3':
        v8 = 1;
        sub_7B4890(2u);
        break;
      case '4':
        v8 = 1;
        sub_7B4890(3u);
        if ( strlen(&Str2) == 1 )
          v8 = (ShaderPackage < 2 ? 0 : 0x20) | 0xF;
        break;
      case '5':
        v8 = 1;
        sub_7B4890(4u);
        break;
      default:
        LODWORD(v14) = 2;
        if ( !_strnicmp("sh", &Str2, v14) )
        {
          v9 = !sub_405A80();
          v10 = dword_B42F40;
          if ( v9 )
            v11 = v10 | 0x10;
          else
            v11 = v10 & 0xFFEF;
          if ( (char)v11 < 0 )
            v8 = v11 & 0xFF7F;
          else
            v8 = v11 | 0x80;
        }
        else
        {
          LODWORD(v15) = 2;
          if ( !_strnicmp("sc", &Str2, v15) )
          {
            v8 = dword_B42F40;
            byte_B43076 = byte_B43076 == 0;
          }
          else
          {
            LODWORD(v16) = 2;
            if ( !_strnicmp(off_A4D1EC, &Str2, v16) )
            {
              if ( (dword_B42F40 & 0x20) != 0 )
              {
                byte_B06CBC = 0;
                SetTextureCanopyShadowMap(0);
                dword_B42F40 &= 0xFFDFu;
                return;
              }
              v12 = TES;
              byte_B06CBC = 1;
              ShadowCanopyPass(v12->gridCellArray);
              v13 = LOWORD(dword_B42F40) | 0x20;
              goto LABEL_39;
            }
            if ( Str2 == 0x74 )
              dword_B2C674 = j__atol(Str);
          }
        }
        break;
    }
    if ( Str[0] == 0x31 )
      v8 |= 2u;
    if ( Str[1] == 0x31 )
      v8 |= 4u;
    if ( Str[2] == 0x31 )
      v8 |= 8u;
    if ( ShaderPackage >= 2 && Str[3] != 0x30 )
      v8 |= 0x20u;
    v13 = v8;
LABEL_39:
    dword_B42F40 = v13;
  }
}
