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
  double v13; // st5
  WaterShaderHeightMap *v14; // ecx
  double v15; // st5
  WaterShaderHeightMap *v16; // ecx
  int v17; // eax
  double v18; // st5
  WaterShaderHeightMap *v19; // ecx
  double v20; // st5
  WaterShaderHeightMap *v21; // ecx
  double v22; // st5
  double v23; // st5
  double v24; // st5
  double v25; // st4
  int v26; // eax
  double v27; // st5
  double v28; // st4
  int v29; // eax
  double v30; // st5
  double v31; // st5
  float v32[3]; // [esp+34h] [ebp-214h] BYREF
  char Str1[516]; // [esp+40h] [ebp-208h] BYREF

  v32[0] = 0.0;
  LODWORD(v32[1]) = a7;
  LODWORD(v32[2]) = a9;
  if ( Script_ExtractArgs(a1, a3, a9, a4, a5, a6, a7, Str1, v32) )
  {
    if ( !_strcmp(Str1, "velocity") )
    {
      v13 = v32[0];
      if ( v32[0] >= 0.0 && v13 <= fCostant_100 )
      {
        v14 = dword_B45FE0;
        if ( dword_B45FE0 )
        {
          if ( v13 != WaterShader_Velocity )
          {
            WaterShader_Velocity = v32[0];
            sub_7E1710(v14);
            Interface_ConsolePrint("set water velocity to %f", v32[0]);
            byte_B3522B = 1;
          }
        }
      }
    }
    else if ( !_strcmp(Str1, "direction") )
    {
      v15 = v32[0];
      if ( v32[0] >= 0.0 && flt_A4D020 >= v15 )
      {
        v16 = dword_B45FE0;
        if ( dword_B45FE0 )
        {
          if ( v15 != WaterShader_Direction )
          {
            WaterShader_Direction = v32[0];
            sub_7E1710(v16);
            v17 = Double_To_SInt32(st7_0);
            Interface_ConsolePrint("set water direction to %d", v17);
            byte_B3522B = 1;
          }
        }
      }
    }
    else if ( !_strcmp(Str1, "amplitude") )
    {
      v18 = v32[0];
      if ( v32[0] >= 0.0 && v18 <= dbl_A2FC70 )
      {
        v19 = dword_B45FE0;
        if ( dword_B45FE0 )
        {
          if ( v18 != WaterShader_Amplitude )
          {
            WaterShader_Amplitude = v32[0];
            sub_7E1710(v19);
            Interface_ConsolePrint("set water amplitude to %f", v32[0]);
            byte_B3522B = 1;
          }
        }
      }
    }
    else if ( !_strcmp(Str1, "frequency") )
    {
      v20 = v32[0];
      if ( v32[0] >= 0.0 && flt_A31C80 >= v20 )
      {
        v21 = dword_B45FE0;
        if ( dword_B45FE0 )
        {
          if ( v20 != WaterShader_Frequency )
          {
            WaterShader_Frequency = v32[0];
            sub_7E1710(v21);
            Interface_ConsolePrint("set water frequency to %f", v32[0]);
            byte_B3522B = 1;
          }
        }
      }
    }
    else if ( !_strcmp(Str1, "reflectivity") )
    {
      v22 = v32[0];
      if ( v32[0] >= 0.0 && v22 <= 1.0 )
      {
        WaterShader_Reflectivity = v32[0];
        Interface_ConsolePrint("set water reflectivity amount to %f", v22);
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "fresnel") )
    {
      v23 = v32[0];
      if ( v32[0] >= 0.0 && v23 <= 1.0 )
      {
        WaterShader_Fresnel = v32[0];
        Interface_ConsolePrint("set fresnel term to %f", v23);
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "opacity") )
    {
      v24 = v32[0];
      if ( v32[0] >= 0.0 )
      {
        v25 = fCostant_100;
        if ( v25 >= v24 )
        {
          WaterShader_Opacity = v24 / v25;
          v26 = Double_To_SInt32(st7_0);
          Interface_ConsolePrint("set water opacity to %d", v26);
          byte_B3522B = 1;
        }
      }
    }
    else if ( !_strcmp(Str1, "blend") )
    {
      v27 = v32[0];
      if ( v32[0] >= 0.0 )
      {
        v28 = fCostant_100;
        if ( v28 >= v27 )
          WaterShader_Blend = v27 / v28;
      }
      v29 = Double_To_SInt32(st7_0);
      Interface_ConsolePrint("set detail texture blend to %d", v29);
      byte_B3522B = 1;
    }
    else if ( !_strcmp(Str1, "scrollx") )
    {
      v30 = v32[0];
      if ( v32[0] >= 0.0 && v30 <= 1.0 )
      {
        WaterShader_ScrollX = v32[0];
        Interface_ConsolePrint("set scroll X speed to %f", v30);
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "scrolly") )
    {
      v31 = v32[0];
      if ( v32[0] >= 0.0 && v31 <= 1.0 )
      {
        WaterShader_ScrollY = v32[0];
        Interface_ConsolePrint("set scroll Y speed to %f", v31);
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "help") )
    {
      Interface_ConsolePrint("velocity ( 0.0 - 100.0 )");
      Interface_ConsolePrint("direction ( 0 - 360 )");
      Interface_ConsolePrint("amplitude ( 0.0 - 1000.0 )");
      Interface_ConsolePrint("frequency ( 0.0 - 10.0 )");
      Interface_ConsolePrint("reflectivity ( 0.0 - 1.0 )");
      Interface_ConsolePrint("fresnel ( 0.0 - 1.0 )");
      Interface_ConsolePrint("opacity ( 0 - 100 )");
      Interface_ConsolePrint("blend ( 0 - 100 )");
      Interface_ConsolePrint("scrollx ( 0.0 - 1.0 )");
      Interface_ConsolePrint("scrolly ( 0.0 - 1.0 )");
    }
    else if ( !_strcmp(Str1, aOff_0) )
    {
      byte_B3522B = 0;
    }
    else if ( !_strcmp(Str1, "displaceforce") )
    {
      if ( v32[0] >= 0.0 && v32[0] <= 1.0 )
      {
        WaterShader_DisplaceForce = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "displacevelocity") )
    {
      if ( v32[0] >= 0.0 && v32[0] <= 1.0 )
      {
        WaterShader_DisplayVelocity = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "displacefalloff") )
    {
      if ( v32[0] >= 0.0 && v32[0] <= 1.0 )
      {
        WaterShader_DisplaceFallOff = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "displacedampener") )
    {
      if ( v32[0] >= 0.0 && flt_A417B4 >= (double)v32[0] )
      {
        WaterShader_DisplaceDampener = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "rainforce") )
    {
      if ( v32[0] >= 0.0 && v32[0] <= 1.0 )
      {
        WaterShader_Rainforce = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "rainvelocity") )
    {
      if ( v32[0] >= 0.0 && v32[0] <= 1.0 )
      {
        WaterShader_RainVelocity = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "rainfalloff") )
    {
      if ( v32[0] >= 0.0 && v32[0] <= 1.0 )
      {
        WaterShader_RainFalloff = v32[0];
        byte_B3522B = 1;
      }
    }
    else if ( !_strcmp(Str1, "rainsize") && v32[0] >= 0.0 && v32[0] <= 1.0 )
    {
      WaterShader_RainSize = v32[0];
      byte_B3522B = 1;
    }
  }
}
