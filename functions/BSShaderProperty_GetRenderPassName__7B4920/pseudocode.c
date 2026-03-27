const char *__cdecl BSShaderProperty_GetRenderPassName(int a1)
{
  const char *result; // eax
  char v2[12]; // [esp+0h] [ebp-10h] BYREF

  switch ( a1 )
  {
    case 0:
      result = "BSSM_ZONLY";
      break;
    case 1:
      result = "BSSM_ZONLY_At";
      break;
    case 2:
      result = "BSSM_ZONLY_S";
      break;
    case 3:
      result = "BSSM_AMBIENT_OCCLUSION";
      break;
    case 4:
      result = "BSSM_3XZONLY";
      break;
    case 5:
      result = "BSSM_3XZONLY_S";
      break;
    case 6:
      result = "BSSM_DEPTHMAP";
      break;
    case 7:
      result = "BSSM_DEPTHMAP_At";
      break;
    case 8:
      result = "BSSM_DEPTHMAP_S";
      break;
    case 9:
      result = "BSSM_DEPTHMAP_SAt";
      break;
    case 0xA:
      result = "BSSM_SELFILLUMALPHABLOCK";
      break;
    case 0xB:
      result = "BSSM_SELFILLUMALPHABLOCK_S";
      break;
    case 0xC:
      result = "BSSM_GRASS_NOALPHABLEND";
      break;
    case 0xD:
      result = "BSSM_GRASSPT_NOALPHABLEND";
      break;
    case 0xE:
      result = "BSSM_LEAVES";
      break;
    case 0xF:
      result = "BSSM_FRONDS";
      break;
    case 0x10:
      result = "BSSM_AMBIENT";
      break;
    case 0x11:
      result = "BSSM_AMBIENT_G";
      break;
    case 0x12:
      result = "BSSM_AMBIENT_At";
      break;
    case 0x13:
      result = "BSSM_AMBIENT_GAt";
      break;
    case 0x14:
      result = "BSSM_AMBIENT_S";
      break;
    case 0x15:
      result = "BSSM_AMBIENT_SG";
      break;
    case 0x16:
      result = "BSSM_AMBIENT_SAt";
      break;
    case 0x17:
      result = "BSSM_AMBIENT_SGAt";
      break;
    case 0x18:
      result = "BSSM_AMBIENT_Sb";
      break;
    case 0x19:
      result = "BSSM_AMBDIFFTEX";
      break;
    case 0x1A:
      result = "BSSM_AMBDIFFTEX_Vc";
      break;
    case 0x1B:
      result = "BSSM_AMBDIFFTEX_G";
      break;
    case 0x1C:
      result = "BSSM_AMBDIFFTEX_GVc";
      break;
    case 0x1D:
      result = "BSSM_AMBDIFFTEX_Fg";
      break;
    case 0x1E:
      result = "BSSM_AMBDIFFTEX_A";
      break;
    case 0x1F:
      result = "BSSM_AMBDIFFTEX_AVc";
      break;
    case 0x20:
      result = "BSSM_AMBDIFFTEX_GA";
      break;
    case 0x21:
      result = "BSSM_AMBDIFFTEX_GAVc";
      break;
    case 0x22:
      result = "BSSM_AMBDIFFTEX_FgA";
      break;
    case 0x23:
      result = "BSSM_AMBDIFFTEX_GFgA";
      break;
    case 0x24:
      result = "BSSM_AMBDIFFTEX_S";
      break;
    case 0x25:
      result = "BSSM_AMBDIFFTEX_SVc";
      break;
    case 0x26:
      result = "BSSM_AMBDIFFTEX_SG";
      break;
    case 0x27:
      result = "BSSM_AMBDIFFTEX_SGVc";
      break;
    case 0x28:
      result = "BSSM_AMBDIFFTEX_SFg";
      break;
    case 0x29:
      result = "BSSM_AMBDIFFTEX_SA";
      break;
    case 0x2A:
      result = "BSSM_AMBDIFFTEX_SAVc";
      break;
    case 0x2B:
      result = "BSSM_AMBDIFFTEX_SGA";
      break;
    case 0x2C:
      result = "BSSM_AMBDIFFTEX_SGAVc";
      break;
    case 0x2D:
      result = "BSSM_AMBDIFFTEX_SFgA";
      break;
    case 0x2E:
      result = "BSSM_AMBDIFFTEX_SGFgA";
      break;
    case 0x2F:
      result = "BSSM_AMBDIFFTEX_Sb";
      break;
    case 0x30:
      result = "BSSM_AMBDIFFTEX_SbF";
      break;
    case 0x31:
      result = "BSSM_AMBDIFFDIRANDPT";
      break;
    case 0x32:
      result = "BSSM_AMBDIFFDIRANDPT_S";
      break;
    case 0x33:
      result = "BSSM_AMBDIFFDIRANDPT_Sb";
      break;
    case 0x34:
      result = "BSSM_AMBDIFFTEX_F";
      break;
    case 0x35:
      result = "BSSM_AMBDIFFTEX_FVc";
      break;
    case 0x36:
      result = "BSSM_AMBDIFFTEX_FG";
      break;
    case 0x37:
      result = "BSSM_AMBDIFFTEX_FGVc";
      break;
    case 0x38:
      result = "BSSM_AMBDIFFTEX_FA";
      break;
    case 0x39:
      result = "BSSM_AMBDIFFTEX_FAVc";
      break;
    case 0x3A:
      result = "BSSM_AMBDIFFTEX_FFg";
      break;
    case 0x3B:
      result = "BSSM_AMBDIFFTEX_FGA";
      break;
    case 0x3C:
      result = "BSSM_AMBDIFFTEX_FGAVc";
      break;
    case 0x3D:
      result = "BSSM_AMBDIFFTEX_FGFgA";
      break;
    case 0x3E:
      result = "BSSM_AMBDIFFTEX_SF";
      break;
    case 0x3F:
      result = "BSSM_AMBDIFFTEX_SFVc";
      break;
    case 0x40:
      result = "BSSM_AMBDIFFTEX_SFG";
      break;
    case 0x41:
      result = "BSSM_AMBDIFFTEX_SFGVc";
      break;
    case 0x42:
      result = "BSSM_AMBDIFFTEX_SFA";
      break;
    case 0x43:
      result = "BSSM_AMBDIFFTEX_SFAVc";
      break;
    case 0x44:
      result = "BSSM_AMBDIFFTEX_SFFg";
      break;
    case 0x45:
      result = "BSSM_AMBDIFFTEX_SFGA";
      break;
    case 0x46:
      result = "BSSM_AMBDIFFTEX_SFGAVc";
      break;
    case 0x47:
      result = "BSSM_AMBDIFFTEX_SFGFgA";
      break;
    case 0x48:
      result = "BSSM_LANDAD";
      break;
    case 0x49:
      result = "BSSM_LANDAD_Shp";
      break;
    case 0x4A:
      result = "BSSM_AD2";
      break;
    case 0x4B:
      result = "BSSM_AD2_G";
      break;
    case 0x4C:
      result = "BSSM_AD2_Px";
      break;
    case 0x4D:
      result = "BSSM_AD2_GPx";
      break;
    case 0x4E:
      result = "BSSM_AD2_Fg";
      break;
    case 0x4F:
      result = "BSSM_AD2_S";
      break;
    case 0x50:
      result = "BSSM_AD2_SPx";
      break;
    case 0x51:
      result = "BSSM_AD2_SG";
      break;
    case 0x52:
      result = "BSSM_AD2_SGPx";
      break;
    case 0x53:
      result = "BSSM_AD2_SFg";
      break;
    case 0x54:
      result = "BSSM_AD2_Sb";
      break;
    case 0x55:
      result = "BSSM_AD2_Shp";
      break;
    case 0x56:
      result = "BSSM_AD2_GShp";
      break;
    case 0x57:
      result = "BSSM_AD2_PxShp";
      break;
    case 0x58:
      result = "BSSM_AD2_GPxShp";
      break;
    case 0x59:
      result = "BSSM_AD2_FgShp";
      break;
    case 0x5A:
      result = "BSSM_AD2_SShp";
      break;
    case 0x5B:
      result = "BSSM_AD2_SPxShp";
      break;
    case 0x5C:
      result = "BSSM_AD2_SGShp";
      break;
    case 0x5D:
      result = "BSSM_AD2_SGPxShp";
      break;
    case 0x5E:
      result = "BSSM_AD2_SFgShp";
      break;
    case 0x5F:
      result = "BSSM_AD2_SbShp";
      break;
    case 0x60:
      result = "BSSM_AD3";
      break;
    case 0x61:
      result = "BSSM_AD3_G";
      break;
    case 0x62:
      result = "BSSM_AD3_Px";
      break;
    case 0x63:
      result = "BSSM_AD3_GPx";
      break;
    case 0x64:
      result = "BSSM_AD3_Fg";
      break;
    case 0x65:
      result = "BSSM_AD3_S";
      break;
    case 0x66:
      result = "BSSM_AD3_SPx";
      break;
    case 0x67:
      result = "BSSM_AD3_SG";
      break;
    case 0x68:
      result = "BSSM_AD3_SGPx";
      break;
    case 0x69:
      result = "BSSM_AD3_SFg";
      break;
    case 0x6A:
      result = "BSSM_AD3_Sb";
      break;
    case 0x6B:
      result = "BSSM_AD3_Shp";
      break;
    case 0x6C:
      result = "BSSM_AD3_GShp";
      break;
    case 0x6D:
      result = "BSSM_AD3_PxShp";
      break;
    case 0x6E:
      result = "BSSM_AD3_GPxShp";
      break;
    case 0x6F:
      result = "BSSM_AD3_FgShp";
      break;
    case 0x70:
      result = "BSSM_AD3_SShp";
      break;
    case 0x71:
      result = "BSSM_AD3_SPxShp";
      break;
    case 0x72:
      result = "BSSM_AD3_SGShp";
      break;
    case 0x73:
      result = "BSSM_AD3_SGPxShp";
      break;
    case 0x74:
      result = "BSSM_AD3_SFgShp";
      break;
    case 0x75:
      result = "BSSM_AD3_SbShp";
      break;
    case 0x76:
      result = "BSSM_ADT";
      break;
    case 0x77:
      result = "BSSM_ADT_Mn";
      break;
    case 0x78:
      result = "BSSM_ADT_G";
      break;
    case 0x79:
      result = "BSSM_ADT_Fg";
      break;
    case 0x7A:
      result = "BSSM_ADT_Px";
      break;
    case 0x7B:
      result = "BSSM_ADT_GPx";
      break;
    case 0x7C:
      result = "BSSM_ADT_H";
      break;
    case 0x7D:
      result = "BSSM_ADT_S";
      break;
    case 0x7E:
      result = "BSSM_ADT_SG";
      break;
    case 0x7F:
      result = "BSSM_ADT_SFg";
      break;
    case 0x80:
      result = "BSSM_ADT_SPx";
      break;
    case 0x81:
      result = "BSSM_ADT_SGPx";
      break;
    case 0x82:
      result = "BSSM_ADT_Sb";
      break;
    case 0x83:
      result = "BSSM_ADT_SH";
      break;
    case 0x84:
      result = "BSSM_ADT_Shp";
      break;
    case 0x85:
      result = "BSSM_ADT_MnShp";
      break;
    case 0x86:
      result = "BSSM_ADT_GShp";
      break;
    case 0x87:
      result = "BSSM_ADT_FgShp";
      break;
    case 0x88:
      result = "BSSM_ADT_PxShp";
      break;
    case 0x89:
      result = "BSSM_ADT_GPxShp";
      break;
    case 0x8A:
      result = "BSSM_ADT_HShp";
      break;
    case 0x8B:
      result = "BSSM_ADT_SShp";
      break;
    case 0x8C:
      result = "BSSM_ADT_SGShp";
      break;
    case 0x8D:
      result = "BSSM_ADT_SFgShp";
      break;
    case 0x8E:
      result = "BSSM_ADT_SPxShp";
      break;
    case 0x8F:
      result = "BSSM_ADT_SGPxShp";
      break;
    case 0x90:
      result = "BSSM_ADT_SbShp";
      break;
    case 0x91:
      result = "BSSM_ADT_SHShp";
      break;
    case 0x92:
      result = "BSSM_ADT2";
      break;
    case 0x93:
      result = "BSSM_ADT2_G";
      break;
    case 0x94:
      result = "BSSM_ADT2_Fg";
      break;
    case 0x95:
      result = "BSSM_ADT2_Px";
      break;
    case 0x96:
      result = "BSSM_ADT2_GPx";
      break;
    case 0x97:
      result = "BSSM_ADT2_H";
      break;
    case 0x98:
      result = "BSSM_ADT2_S";
      break;
    case 0x99:
      result = "BSSM_ADT2_SG";
      break;
    case 0x9A:
      result = "BSSM_ADT2_SFg";
      break;
    case 0x9B:
      result = "BSSM_ADT2_SPx";
      break;
    case 0x9C:
      result = "BSSM_ADT2_SGPx";
      break;
    case 0x9D:
      result = "BSSM_ADT2_Sb";
      break;
    case 0x9E:
      result = "BSSM_ADT2_SH";
      break;
    case 0x9F:
      result = "BSSM_ADT2_Shp";
      break;
    case 0xA0:
      result = "BSSM_ADT2_GShp";
      break;
    case 0xA1:
      result = "BSSM_ADT2_FgShp";
      break;
    case 0xA2:
      result = "BSSM_ADT2_PxShp";
      break;
    case 0xA3:
      result = "BSSM_ADT2_GPxShp";
      break;
    case 0xA4:
      result = "BSSM_ADT2_HShp";
      break;
    case 0xA5:
      result = "BSSM_ADT2_SShp";
      break;
    case 0xA6:
      result = "BSSM_ADT2_SGShp";
      break;
    case 0xA7:
      result = "BSSM_ADT2_SFgShp";
      break;
    case 0xA8:
      result = "BSSM_ADT2_SPxShp";
      break;
    case 0xA9:
      result = "BSSM_ADT2_SGPxShp";
      break;
    case 0xAA:
      result = "BSSM_ADT2_SbShp";
      break;
    case 0xAB:
      result = "BSSM_ADT2_SHShp";
      break;
    case 0xAC:
      result = "BSSM_ADTS";
      break;
    case 0xAD:
      result = "BSSM_ADTS_G";
      break;
    case 0xAE:
      result = "BSSM_ADTS_H";
      break;
    case 0xAF:
      result = "BSSM_ADTS_Fg";
      break;
    case 0xB0:
      result = "BSSM_ADTS_Px";
      break;
    case 0xB1:
      result = "BSSM_ADTS_GPx";
      break;
    case 0xB2:
      result = "BSSM_ADTS_S";
      break;
    case 0xB3:
      result = "BSSM_ADTS_SG";
      break;
    case 0xB4:
      result = "BSSM_ADTS_SH";
      break;
    case 0xB5:
      result = "BSSM_ADTS_SFg";
      break;
    case 0xB6:
      result = "BSSM_ADTS_SPx";
      break;
    case 0xB7:
      result = "BSSM_ADTS_SGPx";
      break;
    case 0xB8:
      result = "BSSM_ADTS_Sb";
      break;
    case 0xB9:
      result = "BSSM_ADTS_Shp";
      break;
    case 0xBA:
      result = "BSSM_ADTS_GShp";
      break;
    case 0xBB:
      result = "BSSM_ADTS_HShp";
      break;
    case 0xBC:
      result = "BSSM_ADTS_FgShp";
      break;
    case 0xBD:
      result = "BSSM_ADTS_PxShp";
      break;
    case 0xBE:
      result = "BSSM_ADTS_GPxShp";
      break;
    case 0xBF:
      result = "BSSM_ADTS_SShp";
      break;
    case 0xC0:
      result = "BSSM_ADTS_SGShp";
      break;
    case 0xC1:
      result = "BSSM_ADTS_SHShp";
      break;
    case 0xC2:
      result = "BSSM_ADTS_SFgShp";
      break;
    case 0xC3:
      result = "BSSM_ADTS_SPxShp";
      break;
    case 0xC4:
      result = "BSSM_ADTS_SGPxShp";
      break;
    case 0xC5:
      result = "BSSM_ADTS_SbShp";
      break;
    case 0xC6:
      result = "BSSM_ADTS2";
      break;
    case 0xC7:
      result = "BSSM_ADTS2_G";
      break;
    case 0xC8:
      result = "BSSM_ADTS2_H";
      break;
    case 0xC9:
      result = "BSSM_ADTS2_Fg";
      break;
    case 0xCA:
      result = "BSSM_ADTS2_Px";
      break;
    case 0xCB:
      result = "BSSM_ADTS2_GPx";
      break;
    case 0xCC:
      result = "BSSM_ADTS2_S";
      break;
    case 0xCD:
      result = "BSSM_ADTS2_SG";
      break;
    case 0xCE:
      result = "BSSM_ADTS2_SH";
      break;
    case 0xCF:
      result = "BSSM_ADTS2_SFg";
      break;
    case 0xD0:
      result = "BSSM_ADTS2_SPx";
      break;
    case 0xD1:
      result = "BSSM_ADTS2_SGPx";
      break;
    case 0xD2:
      result = "BSSM_ADTS2_Sb";
      break;
    case 0xD3:
      result = "BSSM_ADTS2_Shp";
      break;
    case 0xD4:
      result = "BSSM_ADTS2_GShp";
      break;
    case 0xD5:
      result = "BSSM_ADTS2_HShp";
      break;
    case 0xD6:
      result = "BSSM_ADTS2_FgShp";
      break;
    case 0xD7:
      result = "BSSM_ADTS2_PxShp";
      break;
    case 0xD8:
      result = "BSSM_ADTS2_GPxShp";
      break;
    case 0xD9:
      result = "BSSM_ADTS2_SShp";
      break;
    case 0xDA:
      result = "BSSM_ADTS2_SGShp";
      break;
    case 0xDB:
      result = "BSSM_ADTS2_SHShp";
      break;
    case 0xDC:
      result = "BSSM_ADTS2_SFgShp";
      break;
    case 0xDD:
      result = "BSSM_ADTS2_SPxShp";
      break;
    case 0xDE:
      result = "BSSM_ADTS2_SGPxShp";
      break;
    case 0xDF:
      result = "BSSM_ADTS2_SbShp";
      break;
    case 0xE0:
      result = "BSSM_ADTS_ONELIGHT";
      break;
    case 0xE1:
      result = "BSSM_ADTS_DIRANDPT";
      break;
    case 0xE2:
      result = "BSSM_DIFFUSEDIR";
      break;
    case 0xE3:
      result = "BSSM_DIFFUSEPT";
      break;
    case 0xE4:
      result = "BSSM_DIFFUSEDIR_S";
      break;
    case 0xE5:
      result = "BSSM_DIFFUSEPT_S";
      break;
    case 0xE6:
      result = "BSSM_DIFFUSEDIR_Sb";
      break;
    case 0xE7:
      result = "BSSM_DIFFUSEPT_Sb";
      break;
    case 0xE8:
      result = "BSSM_DIFFUSEPT2";
      break;
    case 0xE9:
      result = "BSSM_DIFFUSEPT2_Fg";
      break;
    case 0xEA:
      result = "BSSM_DIFFUSEPT2_Px";
      break;
    case 0xEB:
      result = "BSSM_DIFFUSEPT2_S";
      break;
    case 0xEC:
      result = "BSSM_DIFFUSEPT2_SFg";
      break;
    case 0xED:
      result = "BSSM_DIFFUSEPT2_SPx";
      break;
    case 0xEE:
      result = "BSSM_DIFFUSEPT2_Sb";
      break;
    case 0xEF:
      result = "BSSM_DIFFUSEPT2_Shp";
      break;
    case 0xF0:
      result = "BSSM_DIFFUSEPT2_FgShp";
      break;
    case 0xF1:
      result = "BSSM_DIFFUSEPT2_PxShp";
      break;
    case 0xF2:
      result = "BSSM_DIFFUSEPT2_SShp";
      break;
    case 0xF3:
      result = "BSSM_DIFFUSEPT2_SFgShp";
      break;
    case 0xF4:
      result = "BSSM_DIFFUSEPT2_SPxShp";
      break;
    case 0xF5:
      result = "BSSM_DIFFUSEPT2_SbShp";
      break;
    case 0xF6:
      result = "BSSM_DIFFUSEPT3";
      break;
    case 0xF7:
      result = "BSSM_DIFFUSEPT3_Fg";
      break;
    case 0xF8:
      result = "BSSM_DIFFUSEPT3_Px";
      break;
    case 0xF9:
      result = "BSSM_DIFFUSEPT3_S";
      break;
    case 0xFA:
      result = "BSSM_DIFFUSEPT3_SFg";
      break;
    case 0xFB:
      result = "BSSM_DIFFUSEPT3_SPx";
      break;
    case 0xFC:
      result = "BSSM_DIFFUSEPT3_Sb";
      break;
    case 0xFD:
      result = "BSSM_DIFFUSEPT3_Shp";
      break;
    case 0xFE:
      result = "BSSM_DIFFUSEPT3_FgShp";
      break;
    case 0xFF:
      result = "BSSM_DIFFUSEPT3_PxShp";
      break;
    case 0x100:
      result = "BSSM_DIFFUSEPT3_SShp";
      break;
    case 0x101:
      result = "BSSM_DIFFUSEPT3_SFgShp";
      break;
    case 0x102:
      result = "BSSM_DIFFUSEPT3_SPxShp";
      break;
    case 0x103:
      result = "BSSM_DIFFUSEPT3_SbShp";
      break;
    case 0x104:
      result = "BSSM_TEXTURE";
      break;
    case 0x105:
      result = "BSSM_TEXTURE_Fg";
      break;
    case 0x106:
      result = "BSSM_TEXTURE_H";
      break;
    case 0x107:
      result = "BSSM_TEXTURE_S";
      break;
    case 0x108:
      result = "BSSM_TEXTURE_Vc";
      break;
    case 0x109:
      result = "BSSM_TEXTURE_SVc";
      break;
    case 0x10A:
      result = "BSSM_TEXTURE_SFg";
      break;
    case 0x10B:
      result = "BSSM_TEXTURE_Sb";
      break;
    case 0x10C:
      result = "BSSM_TEXTURE_SH";
      break;
    case 0x10D:
      result = "BSSM_TEXTURE_Px";
      break;
    case 0x10E:
      result = "BSSM_TEXTURE_SPx";
      break;
    case 0x10F:
      result = "BSSM_SPECULARDIR";
      break;
    case 0x110:
      result = "BSSM_SPECULARPT";
      break;
    case 0x111:
      result = "BSSM_SPECULARDIR_S";
      break;
    case 0x112:
      result = "BSSM_SPECULARPT_S";
      break;
    case 0x115:
      result = "BSSM_2x_SPECULARDIR";
      break;
    case 0x116:
      result = "BSSM_2x_SPECULARDIR_H";
      break;
    case 0x117:
      result = "BSSM_2x_SPECULARDIR_Px";
      break;
    case 0x118:
      result = "BSSM_2x_SPECULARDIR_S";
      break;
    case 0x119:
      result = "BSSM_2x_SPECULARDIR_SH";
      break;
    case 0x11A:
      result = "BSSM_2x_SPECULARDIR_SPx";
      break;
    case 0x11B:
      result = "BSSM_2x_SPECULARDIR_Sb";
      break;
    case 0x11C:
      result = "BSSM_2x_SPECULARDIR_Shp";
      break;
    case 0x11D:
      result = "BSSM_2x_SPECULARDIR_HShp";
      break;
    case 0x11E:
      result = "BSSM_2x_SPECULARDIR_PxShp";
      break;
    case 0x11F:
      result = "BSSM_2x_SPECULARDIR_SShp";
      break;
    case 0x120:
      result = "BSSM_2x_SPECULARDIR_SHShp";
      break;
    case 0x121:
      result = "BSSM_2x_SPECULARDIR_SPxShp";
      break;
    case 0x122:
      result = "BSSM_2x_SPECULARDIR_SbShp";
      break;
    case 0x123:
      result = "BSSM_2x_SPECULARPT";
      break;
    case 0x124:
      result = "BSSM_2x_SPECULARPT_H";
      break;
    case 0x125:
      result = "BSSM_2x_SPECULARPT_Px";
      break;
    case 0x126:
      result = "BSSM_2x_SPECULARPT_S";
      break;
    case 0x127:
      result = "BSSM_2x_SPECULARPT_SH";
      break;
    case 0x128:
      result = "BSSM_2x_SPECULARPT_SPx";
      break;
    case 0x129:
      result = "BSSM_2x_SPECULARPT_Sb";
      break;
    case 0x12A:
      result = "BSSM_3XOCCLUSION";
      break;
    case 0x12D:
      result = "BSSM_3XLIGHTING";
      break;
    case 0x12E:
      result = "BSSM_3XLIGHTING_S";
      break;
    case 0x12F:
      result = "BSSM_3XLIGHTING_HAIR";
      break;
    case 0x130:
      result = "BSSM_3XLIGHTING_Px";
      break;
    case 0x131:
      result = "BSSM_3XLIGHTING_Fg";
      break;
    case 0x132:
      result = "BSSM_3XLIGHTING_SFg";
      break;
    case 0x133:
      result = "BSSM_3XLIGHTING_G";
      break;
    case 0x134:
      result = "BSSM_3XLIGHTING_SG";
      break;
    case 0x135:
      result = "BSSM_3XLIGHTING_Vc";
      break;
    case 0x136:
      result = "BSSM_3XLIGHTING_VcS";
      break;
    case 0x137:
      result = "BSSM_3XLIGHTING_VcPx";
      break;
    case 0x138:
      result = "BSSM_3XLIGHTING_VcG";
      break;
    case 0x139:
      result = "BSSM_3XLIGHTING_VcSG";
      break;
    case 0x13A:
      result = "BSSM_3XLIGHTING_Shp";
      break;
    case 0x13B:
      result = "BSSM_3XLIGHTING_SShp";
      break;
    case 0x13C:
      result = "BSSM_3XLIGHTING_HAIRShp";
      break;
    case 0x13D:
      result = "BSSM_3XLIGHTING_PxShp";
      break;
    case 0x13E:
      result = "BSSM_3XLIGHTING_FgShp";
      break;
    case 0x13F:
      result = "BSSM_3XLIGHTING_SFgShp";
      break;
    case 0x140:
      result = "BSSM_3XLIGHTING_GShp";
      break;
    case 0x141:
      result = "BSSM_3XLIGHTING_SGShp";
      break;
    case 0x142:
      result = "BSSM_3XLIGHTING_VcShp";
      break;
    case 0x143:
      result = "BSSM_3XLIGHTING_VcSShp";
      break;
    case 0x144:
      result = "BSSM_3XLIGHTING_VcPxShp";
      break;
    case 0x145:
      result = "BSSM_3XLIGHTING_VcGShp";
      break;
    case 0x146:
      result = "BSSM_3XLIGHTING_VcSGShp";
      break;
    case 0x147:
      result = "BSSM_3XENVMAP";
      break;
    case 0x148:
      result = "BSSM_3XENVMAP_W";
      break;
    case 0x149:
      result = "BSSM_3XENVMAP_Vc";
      break;
    case 0x14A:
      result = "BSSM_3XENVMAP_WVc";
      break;
    case 0x14B:
      result = "BSSM_3XENVMAP_S";
      break;
    case 0x14C:
      result = "BSSM_3XENVMAP_SVc";
      break;
    case 0x14D:
      result = "BSSM_3XENVMAP_EYE";
      break;
    case 0x14E:
      result = "BSSM_3XLIGHTING_SIMPLESHADOW";
      break;
    case 0x14F:
      result = "BSSM_3XLIGHTING_SIMPLESHADOW_Vc";
      break;
    case 0x150:
      result = "BSSM_3XLIGHTING_SIMPLESHADOW_S";
      break;
    case 0x151:
      result = "BSSM_3XLIGHTING_SIMPLESHADOW_VcS";
      break;
    case 0x152:
      result = "BSSM_3XDECAL";
      break;
    case 0x153:
      result = "BSSM_3XDECAL_A";
      break;
    case 0x154:
      result = "BSSM_3XDEPTHMAP";
      break;
    case 0x155:
      result = "BSSM_3XDEPTHMAP_S";
      break;
    case 0x156:
      result = "BSSM_3XRENDERNORMALS";
      break;
    case 0x157:
      result = "BSSM_3XRENDERNORMALS_S";
      break;
    case 0x158:
      result = "BSSM_3XRENDERNORMALS_FIRE";
      break;
    case 0x159:
      result = "BSSM_3XRENDERNORMALS_CLEAR";
      break;
    case 0x15A:
      result = "BSSM_3XRENDERNORMALS_CLEAR_S";
      break;
    case 0x15B:
      result = "BSSM_3XLOCALMAP";
      break;
    case 0x15C:
      result = "BSSM_3XLOCALMAP_S";
      break;
    case 0x15D:
      result = "BSSM_3XLOCALMAP_CLEAR";
      break;
    case 0x15E:
      result = "BSSM_3XTEXEFFECT";
      break;
    case 0x15F:
      result = "BSSM_3XTEXEFFECT_S";
      break;
    case 0x160:
      result = "BSSM_RENDERNORMALS";
      break;
    case 0x161:
      result = "BSSM_RENDERNORMALS_S";
      break;
    case 0x162:
      result = "BSSM_RENDERNORMALS_FIRE";
      break;
    case 0x163:
      result = "BSSM_RENDERNORMALS_CLEAR";
      break;
    case 0x164:
      result = "BSSM_RENDERNORMALS_CLEAR_S";
      break;
    case 0x165:
      result = "BSSM_LOCALMAP";
      break;
    case 0x166:
      result = "BSSM_LOCALMAP_S";
      break;
    case 0x167:
      result = "BSSM_LOCALMAP_CLEAR";
      break;
    case 0x168:
      result = "BSSM_LANDDIFF";
      break;
    case 0x169:
      result = "BSSM_LAND2xDIFF";
      break;
    case 0x16A:
      result = "BSSM_LAND2xSPECDIR";
      break;
    case 0x16B:
      result = "BSSM_LAND2xSPECDIR_Shp";
      break;
    case 0x16C:
      result = "BSSM_LAND2xSPEC";
      break;
    case 0x16D:
      result = "BSSM_LAND_G";
      break;
    case 0x16E:
      result = "BSSM_LANDAD_A";
      break;
    case 0x16F:
      result = "BSSM_LANDAD_AShp";
      break;
    case 0x170:
      result = "BSSM_LAND_GA";
      break;
    case 0x171:
      result = "BSSM_LANDDIFF_A";
      break;
    case 0x172:
      result = "BSSM_LAND2xDIFF_A";
      break;
    case 0x173:
      result = "BSSM_LAND2xSPECDIR_A";
      break;
    case 0x174:
      result = "BSSM_LAND2xSPEC_A";
      break;
    case 0x175:
      result = "BSSM_LAND2xSPECDIR_AShp";
      break;
    case 0x176:
      result = "BSSM_LANDLO_A";
      break;
    case 0x177:
      result = "BSSM_2x_SIMPLESHADOW";
      break;
    case 0x178:
      result = "BSSM_2x_SIMPLESHADOW_S";
      break;
    case 0x179:
      result = "BSSM_2x_SIMPLESHADOW_LAND";
      break;
    case 0x17A:
      result = "BSSM_2x_SIMPLESHADOW_Sb";
      break;
    case 0x17B:
      result = "BSSM_ADT_Sbb";
      break;
    case 0x17C:
      result = "BSSM_WATER_LOD";
      break;
    case 0x17D:
      result = "BSSM_SKYBASEPRE";
      break;
    case 0x17E:
      result = "BSSM_PARTICLE";
      break;
    case 0x17F:
      result = "BSSM_BOLT";
      break;
    case 0x180:
      result = "BSSM_ENVMAP";
      break;
    case 0x181:
      result = "BSSM_ENVMAP_Vc";
      break;
    case 0x182:
      result = "BSSM_ENVMAP_S";
      break;
    case 0x183:
      result = "BSSM_ENVMAP_SVc";
      break;
    case 0x184:
      result = "BSSM_2x_ENVMAP";
      break;
    case 0x185:
      result = "BSSM_2x_ENVMAP_S";
      break;
    case 0x186:
      result = "BSSM_2x_ENVMAP_W";
      break;
    case 0x187:
      result = "BSSM_2x_ENVMAP_EYE";
      break;
    case 0x188:
      result = "BSSM_GEOMDECAL";
      break;
    case 0x189:
      result = "BSSM_GEOMDECAL_S";
      break;
    case 0x18A:
      result = "BSSM_DECAL";
      break;
    case 0x18B:
      result = "BSSM_DECAL_A";
      break;
    case 0x18C:
      result = "BSSM_TEXEFFECT";
      break;
    case 0x18D:
      result = "BSSM_TEXEFFECT_S";
      break;
    case 0x18E:
      result = "BSSM_2x_TEXEFFECT";
      break;
    case 0x18F:
      result = "BSSM_2x_TEXEFFECT_S";
      break;
    case 0x190:
      result = "BSSM_FOG";
      break;
    case 0x191:
      result = "BSSM_FOG_A";
      break;
    case 0x192:
      result = "BSSM_FOG_S";
      break;
    case 0x193:
      result = "BSSM_FOG_SA";
      break;
    case 0x194:
      result = "BSSM_FOG_Sb";
      break;
    case 0x195:
      result = "BSSM_GRASS";
      break;
    case 0x196:
      result = "BSSM_GRASSPT";
      break;
    case 0x197:
      result = "BSSM_GRASS_SIMPLESHADOW";
      break;
    case 0x198:
      result = "BSSM_WATER_WADING";
      break;
    case 0x199:
      result = "BSSM_WATER";
      break;
    case 0x19A:
      result = "BSSM_WATER_LAVA";
      break;
    case 0x19B:
      result = "BSSM_PRECIPITATION_RAIN";
      break;
    case 0x19C:
      result = "BSSM_SKYBASEPOST";
      break;
    case 0x19D:
      result = "BSSM_SELFILLUM_SKY";
      break;
    case 0x19E:
      result = "BSSM_SELFILLUMALPHA";
      break;
    case 0x19F:
      result = "BSSM_SELFILLUMALPHA_S";
      break;
    case 0x1A0:
      result = "BSSM_SHADOWVOLUME_BACK";
      break;
    case 0x1A1:
      result = "BSSM_SHADOWVOLUME_FRONT";
      break;
    case 0x1A2:
      result = "BSSM_SHADOWVOLUME_WIRE";
      break;
    default:
      _sprintf(v2, "??? %d", a1);
      result = "???";
      break;
  }
  return result;
}
