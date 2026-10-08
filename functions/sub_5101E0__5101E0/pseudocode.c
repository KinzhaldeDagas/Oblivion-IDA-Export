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
    v8 = 0; /*0x510251*/
    switch ( Str2 )
    {
      case '1':
        v8 = 1; /*0x51025e*/
        BSShader_SetRenderMode(0); /*0x510263*/
        if ( strlen(&Str2) == 1 )
          v8 = (*(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0 : 0x20) | 0xF;
        break;
      case '2':
        v8 = 1; /*0x5102a7*/
        BSShader_SetRenderMode(1u); /*0x5102ad*/
        break;
      case '3':
        v8 = 1; /*0x5102bc*/
        BSShader_SetRenderMode(2u); /*0x5102c1*/
        break;
      case '4':
        v8 = 1; /*0x5102d1*/
        BSShader_SetRenderMode(3u); /*0x5102d6*/
        if ( strlen(&Str2) == 1 )
          v8 = (*(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ? 0 : 0x20) | 0xF;
        break;
      case '5':
        v8 = 1; /*0x51031b*/
        BSShader_SetRenderMode(4u); /*0x510320*/
        break;
      default:
        LODWORD(v14) = 2; /*0x51032a*/
        if ( !_strnicmp("sh", &Str2, v14) ) /*0x510335*/
        {
          v9 = !BSShaderManager_IsShadowMappingReady(); /*0x510346*/
          v10 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x510348*/
          if ( v9 ) /*0x51034d*/
            v11 = v10 | 0x10; /*0x51034f*/
          else
            v11 = v10 & 0xFFEF; /*0x510354*/
          if ( (char)v11 < 0 ) /*0x51035c*/
            v8 = v11 & 0xFF7F; /*0x510369*/
          else
            v8 = v11 | 0x80; /*0x51035e*/
        }
        else
        {
          LODWORD(v15) = 2; /*0x510374*/
          if ( !_strnicmp("sc", &Str2, v15) ) /*0x51037f*/
          {
            v8 = *(_WORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x510391*/
            OB_RendererGlobalState_010201A0[0x1DD] = OB_RendererGlobalState_010201A0[0x1DD] == 0; /*0x51039b*/
          }
          else
          {
            LODWORD(v16) = 2; /*0x5103a3*/
            if ( !_strnicmp(off_A4D1EC, &Str2, v16) ) /*0x5103ae*/
            {
              if ( (OB_RendererGlobalState_010201A0[0xA7] & 0x20) != 0 ) /*0x5103c1*/
              {
                byte_B06CBC = 0; /*0x5103e5*/
                SetTextureCanopyShadowMap(0); /*0x5103eb*/
                *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] &= 0xFFDFu; /*0x5103ff*/
                return; /*0x510405*/
              }
              v12 = MEMORY[0xB333A0]; /*0x5103c3*/
              byte_B06CBC = 1; /*0x5103c8*/
              ShadowCanopyPass(v12->gridCellArray); /*0x5103d2*/
              v13 = *(unsigned __int16 *)&OB_RendererGlobalState_010201A0[0xA7] | 0x20; /*0x5103de*/
              goto LABEL_39; /*0x5103e1*/
            }
            if ( Str2 == 0x74 ) /*0x51040c*/
              dword_B2C674 = j__atol(Str); /*0x510418*/
          }
        }
        break;
    }
    if ( Str[0] == 0x31 ) /*0x510425*/
      v8 |= 2u; /*0x510427*/
    if ( Str[1] == 0x31 ) /*0x51042e*/
      v8 |= 4u; /*0x510430*/
    if ( Str[2] == 0x31 ) /*0x510438*/
      v8 |= 8u; /*0x51043a*/
    if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 && Str[3] != 0x30 ) /*0x51044a*/
      v8 |= 0x20u; /*0x51044c*/
    v13 = v8; /*0x51044f*/
LABEL_39:
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7] = v13; /*0x510452*/
  }
}
