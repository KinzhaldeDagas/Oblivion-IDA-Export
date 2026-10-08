void __usercall sub_50D8E0(
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a3,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *a7,
        int a8,
        UInt32 *a9)
{
  double v9; // st6
  WaterShaderHeightMap *v10; // ecx
  double v11; // st6
  WaterShaderHeightMap *v12; // ecx
  int v13; // eax
  double v14; // st6
  WaterShaderHeightMap *v15; // ecx
  double v16; // st6
  WaterShaderHeightMap *v17; // ecx
  double v18; // st6
  double v19; // st6
  double v20; // st6
  double v21; // st5
  int v22; // eax
  double v23; // st6
  double v24; // st5
  int v25; // eax
  double v26; // st6
  double v27; // st6
  float v28[3]; // [esp+34h] [ebp-214h] BYREF
  char Str1[516]; // [esp+40h] [ebp-208h] BYREF

  v28[0] = 0.0; /*0x50d900*/
  LODWORD(v28[1]) = a7; /*0x50d915*/
  LODWORD(v28[2]) = a9; /*0x50d91c*/
  if ( Script_ExtractArgs(a1, a3, a9, a4, a5, a6, a7, Str1, v28) ) /*0x50d939*/
  {
    if ( CRT_StricmpLocaleDispatch(Str1, "velocity") ) /*0x50d964*/
    {
      if ( CRT_StricmpLocaleDispatch(Str1, "direction") ) /*0x50da07*/
      {
        if ( CRT_StricmpLocaleDispatch(Str1, "amplitude") ) /*0x50daab*/
        {
          if ( CRT_StricmpLocaleDispatch(Str1, "frequency") ) /*0x50db4d*/
          {
            if ( CRT_StricmpLocaleDispatch(Str1, "reflectivity") ) /*0x50dbf1*/
            {
              if ( CRT_StricmpLocaleDispatch(Str1, "fresnel") ) /*0x50dc61*/
              {
                if ( CRT_StricmpLocaleDispatch(Str1, "opacity") ) /*0x50dcd1*/
                {
                  if ( CRT_StricmpLocaleDispatch(Str1, "blend") ) /*0x50dd47*/
                  {
                    if ( CRT_StricmpLocaleDispatch(Str1, "scrollx") ) /*0x50ddb9*/
                    {
                      if ( CRT_StricmpLocaleDispatch(Str1, "scrolly") ) /*0x50de29*/
                      {
                        if ( CRT_StricmpLocaleDispatch(Str1, "help") ) /*0x50de99*/
                        {
                          if ( CRT_StricmpLocaleDispatch(Str1, aOff_0) ) /*0x50df2d*/
                          {
                            if ( CRT_StricmpLocaleDispatch(Str1, "displaceforce") ) /*0x50df5f*/
                            {
                              if ( CRT_StricmpLocaleDispatch(Str1, "displacevelocity") ) /*0x50dfbc*/
                              {
                                if ( CRT_StricmpLocaleDispatch(Str1, "displacefalloff") ) /*0x50e019*/
                                {
                                  if ( CRT_StricmpLocaleDispatch(Str1, "displacedampener") ) /*0x50e076*/
                                  {
                                    if ( CRT_StricmpLocaleDispatch(Str1, "rainforce") ) /*0x50e0d7*/
                                    {
                                      if ( CRT_StricmpLocaleDispatch(Str1, "rainvelocity") ) /*0x50e134*/
                                      {
                                        if ( CRT_StricmpLocaleDispatch(Str1, "rainfalloff") ) /*0x50e191*/
                                        {
                                          if ( !CRT_StricmpLocaleDispatch(Str1, "rainsize") /*0x50e210*/
                                            && v28[0] >= 0.0
                                            && v28[0] <= 1.0 )
                                          {
                                            OB_ShaderConstantStorage_010201A0[0x54] = v28[0]; /*0x50e212*/
                                            MEMORY[0xB33E90][0x139B] = 1; /*0x50e218*/
                                          }
                                        }
                                        else if ( v28[0] >= 0.0 && v28[0] <= 1.0 ) /*0x50e1bb*/
                                        {
                                          OB_ShaderConstantStorage_010201A0[0x53] = v28[0]; /*0x50e1bd*/
                                          MEMORY[0xB33E90][0x139B] = 1; /*0x50e1c3*/
                                        }
                                      }
                                      else if ( v28[0] >= 0.0 && v28[0] <= 1.0 ) /*0x50e15e*/
                                      {
                                        OB_ShaderConstantStorage_010201A0[0x52] = v28[0]; /*0x50e164*/
                                        MEMORY[0xB33E90][0x139B] = 1; /*0x50e16a*/
                                      }
                                    }
                                    else if ( v28[0] >= 0.0 && v28[0] <= 1.0 ) /*0x50e101*/
                                    {
                                      OB_ShaderConstantStorage_010201A0[0x51] = v28[0]; /*0x50e107*/
                                      MEMORY[0xB33E90][0x139B] = 1; /*0x50e10d*/
                                    }
                                  }
                                  else if ( v28[0] >= 0.0 && flt_A417B4 >= (double)v28[0] ) /*0x50e0a4*/
                                  {
                                    OB_ShaderConstantStorage_010201A0[0x4B] = v28[0]; /*0x50e0aa*/
                                    MEMORY[0xB33E90][0x139B] = 1; /*0x50e0b0*/
                                  }
                                }
                                else if ( v28[0] >= 0.0 && v28[0] <= 1.0 ) /*0x50e043*/
                                {
                                  OB_ShaderConstantStorage_010201A0[0x57] = v28[0]; /*0x50e049*/
                                  MEMORY[0xB33E90][0x139B] = 1; /*0x50e04f*/
                                }
                              }
                              else if ( v28[0] >= 0.0 && v28[0] <= 1.0 ) /*0x50dfe6*/
                              {
                                OB_ShaderConstantStorage_010201A0[0x56] = v28[0]; /*0x50dfec*/
                                MEMORY[0xB33E90][0x139B] = 1; /*0x50dff2*/
                              }
                            }
                            else if ( v28[0] >= 0.0 && v28[0] <= 1.0 ) /*0x50df89*/
                            {
                              OB_ShaderConstantStorage_010201A0[0x55] = v28[0]; /*0x50df8f*/
                              MEMORY[0xB33E90][0x139B] = 1; /*0x50df95*/
                            }
                          }
                          else
                          {
                            MEMORY[0xB33E90][0x139B] = 0; /*0x50df39*/
                          }
                        }
                        else
                        {
                          Interface_ConsolePrint("velocity ( 0.0 - 100.0 )"); /*0x50deaa*/
                          Interface_ConsolePrint("direction ( 0 - 360 )"); /*0x50deb4*/
                          Interface_ConsolePrint("amplitude ( 0.0 - 1000.0 )"); /*0x50debe*/
                          Interface_ConsolePrint("frequency ( 0.0 - 10.0 )"); /*0x50dec8*/
                          Interface_ConsolePrint("reflectivity ( 0.0 - 1.0 )"); /*0x50ded2*/
                          Interface_ConsolePrint("fresnel ( 0.0 - 1.0 )"); /*0x50dedc*/
                          Interface_ConsolePrint("opacity ( 0 - 100 )"); /*0x50dee6*/
                          Interface_ConsolePrint("blend ( 0 - 100 )"); /*0x50def0*/
                          Interface_ConsolePrint("scrollx ( 0.0 - 1.0 )"); /*0x50defa*/
                          Interface_ConsolePrint("scrolly ( 0.0 - 1.0 )"); /*0x50df04*/
                        }
                      }
                      else
                      {
                        v27 = v28[0]; /*0x50de3f*/
                        if ( v28[0] >= 0.0 && v27 <= 1.0 ) /*0x50de53*/
                        {
                          OB_ShaderConstantStorage_010201A0[0x11] = v28[0]; /*0x50de5c*/
                          Interface_ConsolePrint("set scroll Y speed to %f", v27); /*0x50de6a*/
                          MEMORY[0xB33E90][0x139B] = 1; /*0x50de72*/
                        }
                      }
                    }
                    else
                    {
                      v26 = v28[0]; /*0x50ddcf*/
                      if ( v28[0] >= 0.0 && v26 <= 1.0 ) /*0x50dde3*/
                      {
                        OB_ShaderConstantStorage_010201A0[0x10] = v28[0]; /*0x50ddec*/
                        Interface_ConsolePrint("set scroll X speed to %f", v26); /*0x50ddfa*/
                        MEMORY[0xB33E90][0x139B] = 1; /*0x50de02*/
                      }
                    }
                  }
                  else
                  {
                    v23 = v28[0]; /*0x50dd5d*/
                    if ( v28[0] >= 0.0 ) /*0x50dd62*/
                    {
                      v24 = fCostant_100; /*0x50dd64*/
                      if ( v24 >= v23 ) /*0x50dd71*/
                        OB_ShaderConstantStorage_010201A0[0xF] = v23 / v24; /*0x50dd75*/
                    }
                    v25 = Double_To_SInt32(st7_0); /*0x50dd7f*/
                    Interface_ConsolePrint("set detail texture blend to %d", v25); /*0x50dd8a*/
                    MEMORY[0xB33E90][0x139B] = 1; /*0x50dd92*/
                  }
                }
                else
                {
                  v20 = v28[0]; /*0x50dce7*/
                  if ( v28[0] >= 0.0 ) /*0x50dcec*/
                  {
                    v21 = fCostant_100; /*0x50dcf2*/
                    if ( v21 >= v20 ) /*0x50dcff*/
                    {
                      OB_ShaderConstantStorage_010201A0[0xE] = v20 / v21; /*0x50dd07*/
                      v22 = Double_To_SInt32(st7_0); /*0x50dd0d*/
                      Interface_ConsolePrint("set water opacity to %d", v22); /*0x50dd18*/
                      MEMORY[0xB33E90][0x139B] = 1; /*0x50dd20*/
                    }
                  }
                }
              }
              else
              {
                v19 = v28[0]; /*0x50dc77*/
                if ( v28[0] >= 0.0 && v19 <= 1.0 ) /*0x50dc8b*/
                {
                  MEMORY[0xB45DC4] = v28[0]; /*0x50dc94*/
                  Interface_ConsolePrint("set fresnel term to %f", v19); /*0x50dca2*/
                  MEMORY[0xB33E90][0x139B] = 1; /*0x50dcaa*/
                }
              }
            }
            else
            {
              v18 = v28[0]; /*0x50dc07*/
              if ( v28[0] >= 0.0 && v18 <= 1.0 ) /*0x50dc1b*/
              {
                OB_ShaderConstantStorage_010201A0[0xD] = v28[0]; /*0x50dc24*/
                Interface_ConsolePrint("set water reflectivity amount to %f", v18); /*0x50dc32*/
                MEMORY[0xB33E90][0x139B] = 1; /*0x50dc3a*/
              }
            }
          }
          else
          {
            v16 = v28[0]; /*0x50db67*/
            if ( v28[0] >= 0.0 && flt_A31C80 >= v16 ) /*0x50db7f*/
            {
              v17 = (WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73]); /*0x50db85*/
              if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x50db85*/
              {
                if ( v16 != OB_ShaderConstantStorage_010201A0[0x70] ) /*0x50dba2*/
                {
                  OB_ShaderConstantStorage_010201A0[0x70] = v28[0]; /*0x50dba8*/
                  sub_7E1710(v17); /*0x50dbae*/
                  Interface_ConsolePrint("set water frequency to %f", v28[0]); /*0x50dbc2*/
                  MEMORY[0xB33E90][0x139B] = 1; /*0x50dbca*/
                }
              }
            }
          }
        }
        else
        {
          v14 = v28[0]; /*0x50dac5*/
          if ( v28[0] >= 0.0 && v14 <= dbl_A2FC70 ) /*0x50dadb*/
          {
            v15 = (WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73]); /*0x50dae1*/
            if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x50dae1*/
            {
              if ( v14 != OB_ShaderConstantStorage_010201A0[0x71] ) /*0x50dafe*/
              {
                OB_ShaderConstantStorage_010201A0[0x71] = v28[0]; /*0x50db04*/
                sub_7E1710(v15); /*0x50db0a*/
                Interface_ConsolePrint("set water amplitude to %f", v28[0]); /*0x50db1e*/
                MEMORY[0xB33E90][0x139B] = 1; /*0x50db26*/
              }
            }
          }
        }
      }
      else
      {
        v11 = v28[0]; /*0x50da21*/
        if ( v28[0] >= 0.0 && flt_A4D020 >= v11 ) /*0x50da39*/
        {
          v12 = (WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73]); /*0x50da3f*/
          if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x50da3f*/
          {
            if ( v11 != OB_ShaderConstantStorage_010201A0[0x6B] ) /*0x50da5c*/
            {
              OB_ShaderConstantStorage_010201A0[0x6B] = v28[0]; /*0x50da62*/
              sub_7E1710(v12); /*0x50da68*/
              v13 = Double_To_SInt32(st7_0); /*0x50da71*/
              Interface_ConsolePrint("set water direction to %d", v13); /*0x50da7c*/
              MEMORY[0xB33E90][0x139B] = 1; /*0x50da84*/
            }
          }
        }
      }
    }
    else
    {
      v9 = v28[0]; /*0x50d980*/
      if ( v28[0] >= 0.0 && v9 <= fCostant_100 ) /*0x50d995*/
      {
        v10 = (WaterShaderHeightMap *)LODWORD(OB_ShaderConstantStorage_010201A0[0x73]); /*0x50d99b*/
        if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) ) /*0x50d99b*/
        {
          if ( v9 != OB_ShaderConstantStorage_010201A0[0x6C] ) /*0x50d9b8*/
          {
            OB_ShaderConstantStorage_010201A0[0x6C] = v28[0]; /*0x50d9be*/
            sub_7E1710(v10); /*0x50d9c4*/
            Interface_ConsolePrint("set water velocity to %f", v28[0]); /*0x50d9d8*/
            MEMORY[0xB33E90][0x139B] = 1; /*0x50d9e0*/
          }
        }
      }
    }
  }
}
