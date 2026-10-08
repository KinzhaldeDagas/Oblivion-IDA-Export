// Fog render consumer decode: Lighting30 TexEffect alternate payload writer; called from 0x7FF4A0 selectors 0x15E..0x15F and writes alternate FogColor/FogParam constants B46B78/B46B88.
void __stdcall sub_7FEE40(NiGeometry *a1, float a2, int a3)
{
  float *v3; // eax
  volatile LONG *v4; // edi
  float v5; // esi
  float *v6; // ecx
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+18h] [ebp-Ch]
  float v11; // [esp+28h] [ebp+4h]

  if ( a2 != 0.0 ) /*0x7fee49*/
  {
    v3 = *(float **)(LODWORD(a2) + 0xE0);       // Fog decode: reads shaderProperty+0xE0 TexEffectData for the alternate TexEffect constant payload. /*0x7fee4f*/
    if ( v3 ) /*0x7fee57*/
    {
      OB_ShaderConstantStorage_010201A0[0x34D] = v3[3];// Fog decode: writes TexEffect Fill Color vector to B45E14[0x34D..0x350] / B46B48. /*0x7fee5c*/
      OB_ShaderConstantStorage_010201A0[0x34E] = v3[4]; /*0x7fee65*/
      OB_ShaderConstantStorage_010201A0[0x34F] = v3[5]; /*0x7fee6e*/
      OB_ShaderConstantStorage_010201A0[0x350] = v3[6]; /*0x7fee77*/
      OB_ShaderConstantStorage_010201A0[0x351] = v3[7];// Fog decode: writes TexEffect Rim Color vector to B45E14[0x351..0x354] / B46B58. /*0x7fee80*/
      OB_ShaderConstantStorage_010201A0[0x352] = v3[8]; /*0x7fee89*/
      OB_ShaderConstantStorage_010201A0[0x353] = v3[9]; /*0x7fee92*/
      OB_ShaderConstantStorage_010201A0[0x354] = v3[0xA]; /*0x7fee9b*/
      OB_ShaderConstantStorage_010201A0[0x34A] = v3[0x13];// Fog decode: writes TexEffect U/V offsets into B45E14[0x34A..0x34B]. /*0x7feea4*/
      OB_ShaderConstantStorage_010201A0[0x34B] = v3[0x14]; /*0x7feead*/
      OB_ShaderConstantStorage_010201A0[0x355] = v3[0x15];// Fog decode: writes TexEffect fVars constant B45E14[0x355] / B46B68. /*0x7feeb6*/
      OB_ShaderConstantStorage_010201A0[0x356] = 1.0; /*0x7feebe*/
    }
    OB_ShaderConstantStorage_010201A0[0x35A] = 0.0; /*0x7feee3*/
    OB_ShaderConstantStorage_010201A0[0x359] = 0.0;// Fog decode: clears alternate TexEffect FogColor constant B46B78 before property-state fog override. /*0x7feef0*/
    OB_ShaderConstantStorage_010201A0[0x35D] = 0.0;// Fog decode: clears alternate TexEffect FogParam constant B46B88 before property-state fog override. /*0x7fef01*/
    OB_ShaderConstantStorage_010201A0[0x360] = 0.0; /*0x7fef0b*/
    OB_ShaderConstantStorage_010201A0[0x35B] = 0.0; /*0x7fef17*/
    OB_ShaderConstantStorage_010201A0[0x35C] = 0.0; /*0x7fef21*/
    OB_ShaderConstantStorage_010201A0[0x35E] = 0.0; /*0x7fef2a*/
    OB_ShaderConstantStorage_010201A0[0x35F] = 0.0; /*0x7fef30*/
    if ( a1 ) /*0x7fef35*/
    {
      v4 = *NiGeometry_GetPropertyState(a1, (volatile LONG **)&a2);// Fog decode: obtains NiGeometry+0xAC NiPropertyState via sub_405760 before reading fog property slot. /*0x7fef46*/
      if ( a2 != 0.0 ) /*0x7fef4e*/
      {
        v5 = a2; /*0x7fef51*/
        if ( !InterlockedDecrement((volatile LONG *)(LODWORD(a2) + 4)) ) /*0x7fef57*/
          (**(void (__thiscall ***)(_DWORD, int))LODWORD(v5))(LODWORD(v5), 1); /*0x7fef6d*/
      }
      v6 = *((float **)v4 + 3);                 // Fog render consumer decode: TexEffect alternate path reads NiPropertyState+0x0C fog property slot. /*0x7fef70*/
      if ( v6 ) /*0x7fef76*/
      {
        v11 = v6[0xB];                          // Fog render consumer decode: TexEffect reads BSFogProperty+0x2C fogStart. /*0x7fef7f*/
        a2 = v6[0xC];                           // Fog render consumer decode: TexEffect reads BSFogProperty+0x30 fogEnd. /*0x7fef86*/
        if ( a2 != 0.0 || 0.0 != v11 ) /*0x7fefaa*/
        {
          v7 = v6[8]; /*0x7fefbe*/
          v10 = a2 - v11; /*0x7fefc8*/
          v8 = v6[9]; /*0x7fefcc*/
          v9 = v6[0xA]; /*0x7fefda*/
          OB_ShaderConstantStorage_010201A0[0x35D] = a2;// Fog render consumer decode: TexEffect alternate FogParam B46B88 = (fogEnd, fogEnd - fogStart, 1, 0). /*0x7fefe2*/
          OB_ShaderConstantStorage_010201A0[0x35E] = v10; /*0x7feff3*/
          OB_ShaderConstantStorage_010201A0[0x35F] = 1.0; /*0x7ff005*/
          OB_ShaderConstantStorage_010201A0[0x360] = 0.0; /*0x7ff016*/
          OB_ShaderConstantStorage_010201A0[0x359] = v7;// Fog render consumer decode: TexEffect alternate FogColor B46B78 = (fog.r, fog.g, fog.b, 0). /*0x7ff024*/
          OB_ShaderConstantStorage_010201A0[0x35A] = v8; /*0x7ff032*/
          OB_ShaderConstantStorage_010201A0[0x35B] = v9; /*0x7ff037*/
          OB_ShaderConstantStorage_010201A0[0x35C] = 0.0; /*0x7ff03d*/
        }
      }
    }
  }
}
