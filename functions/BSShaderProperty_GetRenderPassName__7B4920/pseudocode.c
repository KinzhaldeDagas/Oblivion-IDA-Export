//
// [2026-10-03 frond selector correction] Exact name-query ENTRY is7B4920. loc7B4A20 is only case15 switch arm with cookie/stack epilogue; prior disabled plugin probe wrongly treated it as entry. Case15 returns BSSM_FRONDS; case19 at7B4A70 returns ambient name. Plugin now uses RenderPass selector0F and corrects the still-disabled probe entry.
const char *__cdecl BSShaderProperty_GetRenderPassName(int a1)
{
  const char *result; // eax
  char v2[12]; // [esp+0h] [ebp-10h] BYREF

  switch ( a1 ) /*0x7b493d*/
  {
    case 0: /*0x7b493d*/
      result = "BSSM_ZONLY"; /*0x7b4944*/
      break; /*0x7b4957*/
    case 1: /*0x7b493d*/
      result = "BSSM_ZONLY_At"; /*0x7b4958*/
      break; /*0x7b496b*/
    case 2: /*0x7b493d*/
      result = "BSSM_ZONLY_S"; /*0x7b496c*/
      break; /*0x7b497f*/
    case 3: /*0x7b493d*/
      result = "BSSM_AMBIENT_OCCLUSION"; /*0x7b4980*/
      break; /*0x7b4993*/
    case 4: /*0x7b493d*/
      result = "BSSM_3XZONLY"; /*0x7b61b8*/
      break; /*0x7b61cb*/
    case 5: /*0x7b493d*/
      result = "BSSM_3XZONLY_S"; /*0x7b61cc*/
      break; /*0x7b61df*/
    case 6: /*0x7b493d*/
      result = "BSSM_DEPTHMAP"; /*0x7b4994*/
      break; /*0x7b49a7*/
    case 7: /*0x7b493d*/
      result = "BSSM_DEPTHMAP_At"; /*0x7b49a8*/
      break; /*0x7b49bb*/
    case 8: /*0x7b493d*/
      result = "BSSM_DEPTHMAP_S"; /*0x7b49bc*/
      break; /*0x7b49cf*/
    case 9: /*0x7b493d*/
      result = "BSSM_DEPTHMAP_SAt"; /*0x7b49d0*/
      break; /*0x7b49e3*/
    case 0xA: /*0x7b493d*/
      result = "BSSM_SELFILLUMALPHABLOCK"; /*0x7b68ac*/
      break; /*0x7b68bf*/
    case 0xB: /*0x7b493d*/
      result = "BSSM_SELFILLUMALPHABLOCK_S"; /*0x7b68c0*/
      break; /*0x7b68d3*/
    case 0xC: /*0x7b493d*/
      result = "BSSM_GRASS_NOALPHABLEND"; /*0x7b49e4*/
      break; /*0x7b49f7*/
    case 0xD: /*0x7b493d*/
      result = "BSSM_GRASSPT_NOALPHABLEND"; /*0x7b49f8*/
      break; /*0x7b4a0b*/
    case 0xE: /*0x7b493d*/
      result = "BSSM_LEAVES"; /*0x7b4a0c*/
      break; /*0x7b4a1f*/
    case 0xF: /*0x7b493d*/
      result = "BSSM_FRONDS";                   // BSSM_FRONDS string returned by BSShaderProperty_GetRenderPassName case 0x0F. Only string-table evidence; not a frond geometry attachment path. /*0x7b4a20*/
      break; /*0x7b4a33*/
    case 0x10: /*0x7b493d*/
      result = "BSSM_AMBIENT"; /*0x7b4a34*/
      break; /*0x7b4a47*/
    case 0x11: /*0x7b493d*/
      result = "BSSM_AMBIENT_G"; /*0x7b4a48*/
      break; /*0x7b4a5b*/
    case 0x12: /*0x7b493d*/
      result = "BSSM_AMBIENT_At"; /*0x7b4a5c*/
      break; /*0x7b4a6f*/
    case 0x13: /*0x7b493d*/
      result = "BSSM_AMBIENT_GAt"; /*0x7b4a70*/
      break; /*0x7b4a83*/
    case 0x14: /*0x7b493d*/
      result = "BSSM_AMBIENT_S"; /*0x7b4a84*/
      break; /*0x7b4a97*/
    case 0x15: /*0x7b493d*/
      result = "BSSM_AMBIENT_SG"; /*0x7b4a98*/
      break; /*0x7b4aab*/
    case 0x16: /*0x7b493d*/
      result = "BSSM_AMBIENT_SAt"; /*0x7b4aac*/
      break; /*0x7b4abf*/
    case 0x17: /*0x7b493d*/
      result = "BSSM_AMBIENT_SGAt"; /*0x7b4ac0*/
      break; /*0x7b4ad3*/
    case 0x18: /*0x7b493d*/
      result = "BSSM_AMBIENT_Sb"; /*0x7b4ad4*/
      break; /*0x7b4ae7*/
    case 0x19: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX"; /*0x7b4ae8*/
      break; /*0x7b4afb*/
    case 0x1A: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_Vc"; /*0x7b4afc*/
      break; /*0x7b4b0f*/
    case 0x1B: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_G"; /*0x7b4b38*/
      break; /*0x7b4b4b*/
    case 0x1C: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_GVc"; /*0x7b4b4c*/
      break; /*0x7b4b5f*/
    case 0x1D: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_Fg"; /*0x7b4b88*/
      break; /*0x7b4b9b*/
    case 0x1E: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_A"; /*0x7b4b9c*/
      break; /*0x7b4baf*/
    case 0x1F: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_AVc"; /*0x7b4bb0*/
      break; /*0x7b4bc3*/
    case 0x20: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_GA"; /*0x7b4bec*/
      break; /*0x7b4bff*/
    case 0x21: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_GAVc"; /*0x7b4c00*/
      break; /*0x7b4c13*/
    case 0x22: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FgA"; /*0x7b4c14*/
      break; /*0x7b4c27*/
    case 0x23: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_GFgA"; /*0x7b4c64*/
      break; /*0x7b4c77*/
    case 0x24: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_S"; /*0x7b4c8c*/
      break; /*0x7b4c9f*/
    case 0x25: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SVc"; /*0x7b4ca0*/
      break; /*0x7b4cb3*/
    case 0x26: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SG"; /*0x7b4cdc*/
      break; /*0x7b4cef*/
    case 0x27: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SGVc"; /*0x7b4cf0*/
      break; /*0x7b4d03*/
    case 0x28: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFg"; /*0x7b4d2c*/
      break; /*0x7b4d3f*/
    case 0x29: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SA"; /*0x7b4d54*/
      break; /*0x7b4d67*/
    case 0x2A: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SAVc"; /*0x7b4d68*/
      break; /*0x7b4d7b*/
    case 0x2B: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SGA"; /*0x7b4da4*/
      break; /*0x7b4db7*/
    case 0x2C: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SGAVc"; /*0x7b4db8*/
      break; /*0x7b4dcb*/
    case 0x2D: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFgA"; /*0x7b4dcc*/
      break; /*0x7b4ddf*/
    case 0x2E: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SGFgA"; /*0x7b4e08*/
      break; /*0x7b4e1b*/
    case 0x2F: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_Sb"; /*0x7b4e30*/
      break; /*0x7b4e43*/
    case 0x30: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SbF"; /*0x7b4e44*/
      break; /*0x7b4e57*/
    case 0x31: /*0x7b493d*/
      result = "BSSM_AMBDIFFDIRANDPT"; /*0x7b4e58*/
      break; /*0x7b4e6b*/
    case 0x32: /*0x7b493d*/
      result = "BSSM_AMBDIFFDIRANDPT_S"; /*0x7b4e6c*/
      break; /*0x7b4e7f*/
    case 0x33: /*0x7b493d*/
      result = "BSSM_AMBDIFFDIRANDPT_Sb"; /*0x7b4e80*/
      break; /*0x7b4e93*/
    case 0x34: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_F"; /*0x7b4b10*/
      break; /*0x7b4b23*/
    case 0x35: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FVc"; /*0x7b4b24*/
      break; /*0x7b4b37*/
    case 0x36: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FG"; /*0x7b4b60*/
      break; /*0x7b4b73*/
    case 0x37: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FGVc"; /*0x7b4b74*/
      break; /*0x7b4b87*/
    case 0x38: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FA"; /*0x7b4bc4*/
      break; /*0x7b4bd7*/
    case 0x39: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FAVc"; /*0x7b4bd8*/
      break; /*0x7b4beb*/
    case 0x3A: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FFg"; /*0x7b4c28*/
      break; /*0x7b4c3b*/
    case 0x3B: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FGA"; /*0x7b4c3c*/
      break; /*0x7b4c4f*/
    case 0x3C: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FGAVc"; /*0x7b4c50*/
      break; /*0x7b4c63*/
    case 0x3D: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_FGFgA"; /*0x7b4c78*/
      break; /*0x7b4c8b*/
    case 0x3E: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SF"; /*0x7b4cb4*/
      break; /*0x7b4cc7*/
    case 0x3F: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFVc"; /*0x7b4cc8*/
      break; /*0x7b4cdb*/
    case 0x40: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFG"; /*0x7b4d04*/
      break; /*0x7b4d17*/
    case 0x41: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFGVc"; /*0x7b4d18*/
      break; /*0x7b4d2b*/
    case 0x42: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFA"; /*0x7b4d7c*/
      break; /*0x7b4d8f*/
    case 0x43: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFAVc"; /*0x7b4d90*/
      break; /*0x7b4da3*/
    case 0x44: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFFg"; /*0x7b4d40*/
      break; /*0x7b4d53*/
    case 0x45: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFGA"; /*0x7b4de0*/
      break; /*0x7b4df3*/
    case 0x46: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFGAVc"; /*0x7b4df4*/
      break; /*0x7b4e07*/
    case 0x47: /*0x7b493d*/
      result = "BSSM_AMBDIFFTEX_SFGFgA"; /*0x7b4e1c*/
      break; /*0x7b4e2f*/
    case 0x48: /*0x7b493d*/
      result = "BSSM_LANDAD"; /*0x7b4e94*/
      break; /*0x7b4ea7*/
    case 0x49: /*0x7b493d*/
      result = "BSSM_LANDAD_Shp"; /*0x7b6000*/
      break; /*0x7b6013*/
    case 0x4A: /*0x7b493d*/
      result = "BSSM_AD2"; /*0x7b4ea8*/
      break; /*0x7b4ebb*/
    case 0x4B: /*0x7b493d*/
      result = "BSSM_AD2_G"; /*0x7b4ebc*/
      break; /*0x7b4ecf*/
    case 0x4C: /*0x7b493d*/
      result = "BSSM_AD2_Px"; /*0x7b4ed0*/
      break; /*0x7b4ee3*/
    case 0x4D: /*0x7b493d*/
      result = "BSSM_AD2_GPx"; /*0x7b4ee4*/
      break; /*0x7b4ef7*/
    case 0x4E: /*0x7b493d*/
      result = "BSSM_AD2_Fg"; /*0x7b4ef8*/
      break; /*0x7b4f0b*/
    case 0x4F: /*0x7b493d*/
      result = "BSSM_AD2_S"; /*0x7b4f0c*/
      break; /*0x7b4f1f*/
    case 0x50: /*0x7b493d*/
      result = "BSSM_AD2_SPx"; /*0x7b4f20*/
      break; /*0x7b4f33*/
    case 0x51: /*0x7b493d*/
      result = "BSSM_AD2_SG"; /*0x7b4f34*/
      break; /*0x7b4f47*/
    case 0x52: /*0x7b493d*/
      result = "BSSM_AD2_SGPx"; /*0x7b4f48*/
      break; /*0x7b4f5b*/
    case 0x53: /*0x7b493d*/
      result = "BSSM_AD2_SFg"; /*0x7b4f5c*/
      break; /*0x7b4f6f*/
    case 0x54: /*0x7b493d*/
      result = "BSSM_AD2_Sb"; /*0x7b4f70*/
      break; /*0x7b4f83*/
    case 0x55: /*0x7b493d*/
      result = "BSSM_AD2_Shp"; /*0x7b4f84*/
      break; /*0x7b4f97*/
    case 0x56: /*0x7b493d*/
      result = "BSSM_AD2_GShp"; /*0x7b4f98*/
      break; /*0x7b4fab*/
    case 0x57: /*0x7b493d*/
      result = "BSSM_AD2_PxShp"; /*0x7b4fac*/
      break; /*0x7b4fbf*/
    case 0x58: /*0x7b493d*/
      result = "BSSM_AD2_GPxShp"; /*0x7b4fc0*/
      break; /*0x7b4fd3*/
    case 0x59: /*0x7b493d*/
      result = "BSSM_AD2_FgShp"; /*0x7b4fd4*/
      break; /*0x7b4fe7*/
    case 0x5A: /*0x7b493d*/
      result = "BSSM_AD2_SShp"; /*0x7b4fe8*/
      break; /*0x7b4ffb*/
    case 0x5B: /*0x7b493d*/
      result = "BSSM_AD2_SPxShp"; /*0x7b4ffc*/
      break; /*0x7b500f*/
    case 0x5C: /*0x7b493d*/
      result = "BSSM_AD2_SGShp"; /*0x7b5010*/
      break; /*0x7b5023*/
    case 0x5D: /*0x7b493d*/
      result = "BSSM_AD2_SGPxShp"; /*0x7b5024*/
      break; /*0x7b5037*/
    case 0x5E: /*0x7b493d*/
      result = "BSSM_AD2_SFgShp"; /*0x7b5038*/
      break; /*0x7b504b*/
    case 0x5F: /*0x7b493d*/
      result = "BSSM_AD2_SbShp"; /*0x7b504c*/
      break; /*0x7b505f*/
    case 0x60: /*0x7b493d*/
      result = "BSSM_AD3"; /*0x7b5060*/
      break; /*0x7b5073*/
    case 0x61: /*0x7b493d*/
      result = "BSSM_AD3_G"; /*0x7b5074*/
      break; /*0x7b5087*/
    case 0x62: /*0x7b493d*/
      result = "BSSM_AD3_Px"; /*0x7b5088*/
      break; /*0x7b509b*/
    case 0x63: /*0x7b493d*/
      result = "BSSM_AD3_GPx"; /*0x7b509c*/
      break; /*0x7b50af*/
    case 0x64: /*0x7b493d*/
      result = "BSSM_AD3_Fg"; /*0x7b50b0*/
      break; /*0x7b50c3*/
    case 0x65: /*0x7b493d*/
      result = "BSSM_AD3_S"; /*0x7b50c4*/
      break; /*0x7b50d7*/
    case 0x66: /*0x7b493d*/
      result = "BSSM_AD3_SPx"; /*0x7b50d8*/
      break; /*0x7b50eb*/
    case 0x67: /*0x7b493d*/
      result = "BSSM_AD3_SG"; /*0x7b50ec*/
      break; /*0x7b50ff*/
    case 0x68: /*0x7b493d*/
      result = "BSSM_AD3_SGPx"; /*0x7b5100*/
      break; /*0x7b5113*/
    case 0x69: /*0x7b493d*/
      result = "BSSM_AD3_SFg"; /*0x7b5114*/
      break; /*0x7b5127*/
    case 0x6A: /*0x7b493d*/
      result = "BSSM_AD3_Sb"; /*0x7b5128*/
      break; /*0x7b513b*/
    case 0x6B: /*0x7b493d*/
      result = "BSSM_AD3_Shp"; /*0x7b513c*/
      break; /*0x7b514f*/
    case 0x6C: /*0x7b493d*/
      result = "BSSM_AD3_GShp"; /*0x7b5150*/
      break; /*0x7b5163*/
    case 0x6D: /*0x7b493d*/
      result = "BSSM_AD3_PxShp"; /*0x7b5164*/
      break; /*0x7b5177*/
    case 0x6E: /*0x7b493d*/
      result = "BSSM_AD3_GPxShp"; /*0x7b5178*/
      break; /*0x7b518b*/
    case 0x6F: /*0x7b493d*/
      result = "BSSM_AD3_FgShp"; /*0x7b518c*/
      break; /*0x7b519f*/
    case 0x70: /*0x7b493d*/
      result = "BSSM_AD3_SShp"; /*0x7b51a0*/
      break; /*0x7b51b3*/
    case 0x71: /*0x7b493d*/
      result = "BSSM_AD3_SPxShp"; /*0x7b51b4*/
      break; /*0x7b51c7*/
    case 0x72: /*0x7b493d*/
      result = "BSSM_AD3_SGShp"; /*0x7b51c8*/
      break; /*0x7b51db*/
    case 0x73: /*0x7b493d*/
      result = "BSSM_AD3_SGPxShp"; /*0x7b51dc*/
      break; /*0x7b51ef*/
    case 0x74: /*0x7b493d*/
      result = "BSSM_AD3_SFgShp"; /*0x7b51f0*/
      break; /*0x7b5203*/
    case 0x75: /*0x7b493d*/
      result = "BSSM_AD3_SbShp"; /*0x7b5204*/
      break; /*0x7b5217*/
    case 0x76: /*0x7b493d*/
      result = "BSSM_ADT"; /*0x7b5218*/
      break; /*0x7b522b*/
    case 0x77: /*0x7b493d*/
      result = "BSSM_ADT_Mn"; /*0x7b522c*/
      break; /*0x7b523f*/
    case 0x78: /*0x7b493d*/
      result = "BSSM_ADT_G"; /*0x7b5240*/
      break; /*0x7b5253*/
    case 0x79: /*0x7b493d*/
      result = "BSSM_ADT_Fg"; /*0x7b5254*/
      break; /*0x7b5267*/
    case 0x7A: /*0x7b493d*/
      result = "BSSM_ADT_Px"; /*0x7b5268*/
      break; /*0x7b527b*/
    case 0x7B: /*0x7b493d*/
      result = "BSSM_ADT_GPx"; /*0x7b527c*/
      break; /*0x7b528f*/
    case 0x7C: /*0x7b493d*/
      result = "BSSM_ADT_H"; /*0x7b5290*/
      break; /*0x7b52a3*/
    case 0x7D: /*0x7b493d*/
      result = "BSSM_ADT_S"; /*0x7b52a4*/
      break; /*0x7b52b7*/
    case 0x7E: /*0x7b493d*/
      result = "BSSM_ADT_SG"; /*0x7b52b8*/
      break; /*0x7b52cb*/
    case 0x7F: /*0x7b493d*/
      result = "BSSM_ADT_SFg"; /*0x7b52cc*/
      break; /*0x7b52df*/
    case 0x80: /*0x7b493d*/
      result = "BSSM_ADT_SPx"; /*0x7b52e0*/
      break; /*0x7b52f3*/
    case 0x81: /*0x7b493d*/
      result = "BSSM_ADT_SGPx"; /*0x7b52f4*/
      break; /*0x7b5307*/
    case 0x82: /*0x7b493d*/
      result = "BSSM_ADT_Sb"; /*0x7b5308*/
      break; /*0x7b531b*/
    case 0x83: /*0x7b493d*/
      result = "BSSM_ADT_SH"; /*0x7b531c*/
      break; /*0x7b532f*/
    case 0x84: /*0x7b493d*/
      result = "BSSM_ADT_Shp"; /*0x7b5330*/
      break; /*0x7b5343*/
    case 0x85: /*0x7b493d*/
      result = "BSSM_ADT_MnShp"; /*0x7b5344*/
      break; /*0x7b5357*/
    case 0x86: /*0x7b493d*/
      result = "BSSM_ADT_GShp"; /*0x7b5358*/
      break; /*0x7b536b*/
    case 0x87: /*0x7b493d*/
      result = "BSSM_ADT_FgShp"; /*0x7b536c*/
      break; /*0x7b537f*/
    case 0x88: /*0x7b493d*/
      result = "BSSM_ADT_PxShp"; /*0x7b5380*/
      break; /*0x7b5393*/
    case 0x89: /*0x7b493d*/
      result = "BSSM_ADT_GPxShp"; /*0x7b5394*/
      break; /*0x7b53a7*/
    case 0x8A: /*0x7b493d*/
      result = "BSSM_ADT_HShp"; /*0x7b53a8*/
      break; /*0x7b53bb*/
    case 0x8B: /*0x7b493d*/
      result = "BSSM_ADT_SShp"; /*0x7b53bc*/
      break; /*0x7b53cf*/
    case 0x8C: /*0x7b493d*/
      result = "BSSM_ADT_SGShp"; /*0x7b53d0*/
      break; /*0x7b53e3*/
    case 0x8D: /*0x7b493d*/
      result = "BSSM_ADT_SFgShp"; /*0x7b53e4*/
      break; /*0x7b53f7*/
    case 0x8E: /*0x7b493d*/
      result = "BSSM_ADT_SPxShp"; /*0x7b53f8*/
      break; /*0x7b540b*/
    case 0x8F: /*0x7b493d*/
      result = "BSSM_ADT_SGPxShp"; /*0x7b540c*/
      break; /*0x7b541f*/
    case 0x90: /*0x7b493d*/
      result = "BSSM_ADT_SbShp"; /*0x7b5420*/
      break; /*0x7b5433*/
    case 0x91: /*0x7b493d*/
      result = "BSSM_ADT_SHShp"; /*0x7b5434*/
      break; /*0x7b5447*/
    case 0x92: /*0x7b493d*/
      result = "BSSM_ADT2"; /*0x7b5448*/
      break; /*0x7b545b*/
    case 0x93: /*0x7b493d*/
      result = "BSSM_ADT2_G"; /*0x7b545c*/
      break; /*0x7b546f*/
    case 0x94: /*0x7b493d*/
      result = "BSSM_ADT2_Fg"; /*0x7b5470*/
      break; /*0x7b5483*/
    case 0x95: /*0x7b493d*/
      result = "BSSM_ADT2_Px"; /*0x7b5484*/
      break; /*0x7b5497*/
    case 0x96: /*0x7b493d*/
      result = "BSSM_ADT2_GPx"; /*0x7b5498*/
      break; /*0x7b54ab*/
    case 0x97: /*0x7b493d*/
      result = "BSSM_ADT2_H"; /*0x7b54ac*/
      break; /*0x7b54bf*/
    case 0x98: /*0x7b493d*/
      result = "BSSM_ADT2_S"; /*0x7b54c0*/
      break; /*0x7b54d3*/
    case 0x99: /*0x7b493d*/
      result = "BSSM_ADT2_SG"; /*0x7b54d4*/
      break; /*0x7b54e7*/
    case 0x9A: /*0x7b493d*/
      result = "BSSM_ADT2_SFg"; /*0x7b54e8*/
      break; /*0x7b54fb*/
    case 0x9B: /*0x7b493d*/
      result = "BSSM_ADT2_SPx"; /*0x7b54fc*/
      break; /*0x7b550f*/
    case 0x9C: /*0x7b493d*/
      result = "BSSM_ADT2_SGPx"; /*0x7b5510*/
      break; /*0x7b5523*/
    case 0x9D: /*0x7b493d*/
      result = "BSSM_ADT2_Sb"; /*0x7b5524*/
      break; /*0x7b5537*/
    case 0x9E: /*0x7b493d*/
      result = "BSSM_ADT2_SH"; /*0x7b5538*/
      break; /*0x7b554b*/
    case 0x9F: /*0x7b493d*/
      result = "BSSM_ADT2_Shp"; /*0x7b554c*/
      break; /*0x7b555f*/
    case 0xA0: /*0x7b493d*/
      result = "BSSM_ADT2_GShp"; /*0x7b5560*/
      break; /*0x7b5573*/
    case 0xA1: /*0x7b493d*/
      result = "BSSM_ADT2_FgShp"; /*0x7b5574*/
      break; /*0x7b5587*/
    case 0xA2: /*0x7b493d*/
      result = "BSSM_ADT2_PxShp"; /*0x7b5588*/
      break; /*0x7b559b*/
    case 0xA3: /*0x7b493d*/
      result = "BSSM_ADT2_GPxShp"; /*0x7b559c*/
      break; /*0x7b55af*/
    case 0xA4: /*0x7b493d*/
      result = "BSSM_ADT2_HShp"; /*0x7b55b0*/
      break; /*0x7b55c3*/
    case 0xA5: /*0x7b493d*/
      result = "BSSM_ADT2_SShp"; /*0x7b55c4*/
      break; /*0x7b55d7*/
    case 0xA6: /*0x7b493d*/
      result = "BSSM_ADT2_SGShp"; /*0x7b55d8*/
      break; /*0x7b55eb*/
    case 0xA7: /*0x7b493d*/
      result = "BSSM_ADT2_SFgShp"; /*0x7b55ec*/
      break; /*0x7b55ff*/
    case 0xA8: /*0x7b493d*/
      result = "BSSM_ADT2_SPxShp"; /*0x7b5600*/
      break; /*0x7b5613*/
    case 0xA9: /*0x7b493d*/
      result = "BSSM_ADT2_SGPxShp"; /*0x7b5614*/
      break; /*0x7b5627*/
    case 0xAA: /*0x7b493d*/
      result = "BSSM_ADT2_SbShp"; /*0x7b5628*/
      break; /*0x7b563b*/
    case 0xAB: /*0x7b493d*/
      result = "BSSM_ADT2_SHShp"; /*0x7b563c*/
      break; /*0x7b564f*/
    case 0xAC: /*0x7b493d*/
      result = "BSSM_ADTS"; /*0x7b5650*/
      break; /*0x7b5663*/
    case 0xAD: /*0x7b493d*/
      result = "BSSM_ADTS_G"; /*0x7b5664*/
      break; /*0x7b5677*/
    case 0xAE: /*0x7b493d*/
      result = "BSSM_ADTS_H"; /*0x7b5678*/
      break; /*0x7b568b*/
    case 0xAF: /*0x7b493d*/
      result = "BSSM_ADTS_Fg"; /*0x7b568c*/
      break; /*0x7b569f*/
    case 0xB0: /*0x7b493d*/
      result = "BSSM_ADTS_Px"; /*0x7b56a0*/
      break; /*0x7b56b3*/
    case 0xB1: /*0x7b493d*/
      result = "BSSM_ADTS_GPx"; /*0x7b56b4*/
      break; /*0x7b56c7*/
    case 0xB2: /*0x7b493d*/
      result = "BSSM_ADTS_S"; /*0x7b56c8*/
      break; /*0x7b56db*/
    case 0xB3: /*0x7b493d*/
      result = "BSSM_ADTS_SG"; /*0x7b56dc*/
      break; /*0x7b56ef*/
    case 0xB4: /*0x7b493d*/
      result = "BSSM_ADTS_SH"; /*0x7b56f0*/
      break; /*0x7b5703*/
    case 0xB5: /*0x7b493d*/
      result = "BSSM_ADTS_SFg"; /*0x7b5704*/
      break; /*0x7b5717*/
    case 0xB6: /*0x7b493d*/
      result = "BSSM_ADTS_SPx"; /*0x7b5718*/
      break; /*0x7b572b*/
    case 0xB7: /*0x7b493d*/
      result = "BSSM_ADTS_SGPx"; /*0x7b572c*/
      break; /*0x7b573f*/
    case 0xB8: /*0x7b493d*/
      result = "BSSM_ADTS_Sb"; /*0x7b5740*/
      break; /*0x7b5753*/
    case 0xB9: /*0x7b493d*/
      result = "BSSM_ADTS_Shp"; /*0x7b5754*/
      break; /*0x7b5767*/
    case 0xBA: /*0x7b493d*/
      result = "BSSM_ADTS_GShp"; /*0x7b5768*/
      break; /*0x7b577b*/
    case 0xBB: /*0x7b493d*/
      result = "BSSM_ADTS_HShp"; /*0x7b577c*/
      break; /*0x7b578f*/
    case 0xBC: /*0x7b493d*/
      result = "BSSM_ADTS_FgShp"; /*0x7b5790*/
      break; /*0x7b57a3*/
    case 0xBD: /*0x7b493d*/
      result = "BSSM_ADTS_PxShp"; /*0x7b57a4*/
      break; /*0x7b57b7*/
    case 0xBE: /*0x7b493d*/
      result = "BSSM_ADTS_GPxShp"; /*0x7b57b8*/
      break; /*0x7b57cb*/
    case 0xBF: /*0x7b493d*/
      result = "BSSM_ADTS_SShp"; /*0x7b57cc*/
      break; /*0x7b57df*/
    case 0xC0: /*0x7b493d*/
      result = "BSSM_ADTS_SGShp"; /*0x7b57e0*/
      break; /*0x7b57f3*/
    case 0xC1: /*0x7b493d*/
      result = "BSSM_ADTS_SHShp"; /*0x7b57f4*/
      break; /*0x7b5807*/
    case 0xC2: /*0x7b493d*/
      result = "BSSM_ADTS_SFgShp"; /*0x7b5808*/
      break; /*0x7b581b*/
    case 0xC3: /*0x7b493d*/
      result = "BSSM_ADTS_SPxShp"; /*0x7b581c*/
      break; /*0x7b582f*/
    case 0xC4: /*0x7b493d*/
      result = "BSSM_ADTS_SGPxShp"; /*0x7b5830*/
      break; /*0x7b5843*/
    case 0xC5: /*0x7b493d*/
      result = "BSSM_ADTS_SbShp"; /*0x7b5844*/
      break; /*0x7b5857*/
    case 0xC6: /*0x7b493d*/
      result = "BSSM_ADTS2"; /*0x7b5858*/
      break; /*0x7b586b*/
    case 0xC7: /*0x7b493d*/
      result = "BSSM_ADTS2_G"; /*0x7b586c*/
      break; /*0x7b587f*/
    case 0xC8: /*0x7b493d*/
      result = "BSSM_ADTS2_H"; /*0x7b5880*/
      break; /*0x7b5893*/
    case 0xC9: /*0x7b493d*/
      result = "BSSM_ADTS2_Fg"; /*0x7b5894*/
      break; /*0x7b58a7*/
    case 0xCA: /*0x7b493d*/
      result = "BSSM_ADTS2_Px"; /*0x7b58a8*/
      break; /*0x7b58bb*/
    case 0xCB: /*0x7b493d*/
      result = "BSSM_ADTS2_GPx"; /*0x7b58bc*/
      break; /*0x7b58cf*/
    case 0xCC: /*0x7b493d*/
      result = "BSSM_ADTS2_S"; /*0x7b58d0*/
      break; /*0x7b58e3*/
    case 0xCD: /*0x7b493d*/
      result = "BSSM_ADTS2_SG"; /*0x7b58e4*/
      break; /*0x7b58f7*/
    case 0xCE: /*0x7b493d*/
      result = "BSSM_ADTS2_SH"; /*0x7b58f8*/
      break; /*0x7b590b*/
    case 0xCF: /*0x7b493d*/
      result = "BSSM_ADTS2_SFg"; /*0x7b590c*/
      break; /*0x7b591f*/
    case 0xD0: /*0x7b493d*/
      result = "BSSM_ADTS2_SPx"; /*0x7b5920*/
      break; /*0x7b5933*/
    case 0xD1: /*0x7b493d*/
      result = "BSSM_ADTS2_SGPx"; /*0x7b5934*/
      break; /*0x7b5947*/
    case 0xD2: /*0x7b493d*/
      result = "BSSM_ADTS2_Sb"; /*0x7b5948*/
      break; /*0x7b595b*/
    case 0xD3: /*0x7b493d*/
      result = "BSSM_ADTS2_Shp"; /*0x7b595c*/
      break; /*0x7b596f*/
    case 0xD4: /*0x7b493d*/
      result = "BSSM_ADTS2_GShp"; /*0x7b5970*/
      break; /*0x7b5983*/
    case 0xD5: /*0x7b493d*/
      result = "BSSM_ADTS2_HShp"; /*0x7b5984*/
      break; /*0x7b5997*/
    case 0xD6: /*0x7b493d*/
      result = "BSSM_ADTS2_FgShp"; /*0x7b5998*/
      break; /*0x7b59ab*/
    case 0xD7: /*0x7b493d*/
      result = "BSSM_ADTS2_PxShp"; /*0x7b59ac*/
      break; /*0x7b59bf*/
    case 0xD8: /*0x7b493d*/
      result = "BSSM_ADTS2_GPxShp"; /*0x7b59c0*/
      break; /*0x7b59d3*/
    case 0xD9: /*0x7b493d*/
      result = "BSSM_ADTS2_SShp"; /*0x7b59d4*/
      break; /*0x7b59e7*/
    case 0xDA: /*0x7b493d*/
      result = "BSSM_ADTS2_SGShp"; /*0x7b59e8*/
      break; /*0x7b59fb*/
    case 0xDB: /*0x7b493d*/
      result = "BSSM_ADTS2_SHShp"; /*0x7b59fc*/
      break; /*0x7b5a0f*/
    case 0xDC: /*0x7b493d*/
      result = "BSSM_ADTS2_SFgShp"; /*0x7b5a10*/
      break; /*0x7b5a23*/
    case 0xDD: /*0x7b493d*/
      result = "BSSM_ADTS2_SPxShp"; /*0x7b5a24*/
      break; /*0x7b5a37*/
    case 0xDE: /*0x7b493d*/
      result = "BSSM_ADTS2_SGPxShp"; /*0x7b5a38*/
      break; /*0x7b5a4b*/
    case 0xDF: /*0x7b493d*/
      result = "BSSM_ADTS2_SbShp"; /*0x7b5a4c*/
      break; /*0x7b5a5f*/
    case 0xE0: /*0x7b493d*/
      result = "BSSM_ADTS_ONELIGHT"; /*0x7b5a60*/
      break; /*0x7b5a73*/
    case 0xE1: /*0x7b493d*/
      result = "BSSM_ADTS_DIRANDPT"; /*0x7b5a74*/
      break; /*0x7b5a87*/
    case 0xE2: /*0x7b493d*/
      result = "BSSM_DIFFUSEDIR"; /*0x7b5a88*/
      break; /*0x7b5a9b*/
    case 0xE3: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT"; /*0x7b5a9c*/
      break; /*0x7b5aaf*/
    case 0xE4: /*0x7b493d*/
      result = "BSSM_DIFFUSEDIR_S"; /*0x7b5ab0*/
      break; /*0x7b5ac3*/
    case 0xE5: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT_S"; /*0x7b5ac4*/
      break; /*0x7b5ad7*/
    case 0xE6: /*0x7b493d*/
      result = "BSSM_DIFFUSEDIR_Sb"; /*0x7b5ad8*/
      break; /*0x7b5aeb*/
    case 0xE7: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT_Sb"; /*0x7b5aec*/
      break; /*0x7b5aff*/
    case 0xE8: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2"; /*0x7b5b00*/
      break; /*0x7b5b13*/
    case 0xE9: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_Fg"; /*0x7b5b14*/
      break; /*0x7b5b27*/
    case 0xEA: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_Px"; /*0x7b5b28*/
      break; /*0x7b5b3b*/
    case 0xEB: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_S"; /*0x7b5b3c*/
      break; /*0x7b5b4f*/
    case 0xEC: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_SFg"; /*0x7b5b50*/
      break; /*0x7b5b63*/
    case 0xED: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_SPx"; /*0x7b5b64*/
      break; /*0x7b5b77*/
    case 0xEE: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_Sb"; /*0x7b5b78*/
      break; /*0x7b5b8b*/
    case 0xEF: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_Shp"; /*0x7b5b8c*/
      break; /*0x7b5b9f*/
    case 0xF0: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_FgShp"; /*0x7b5ba0*/
      break; /*0x7b5bb3*/
    case 0xF1: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_PxShp"; /*0x7b5bb4*/
      break; /*0x7b5bc7*/
    case 0xF2: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_SShp"; /*0x7b5bc8*/
      break; /*0x7b5bdb*/
    case 0xF3: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_SFgShp"; /*0x7b5bdc*/
      break; /*0x7b5bef*/
    case 0xF4: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_SPxShp"; /*0x7b5bf0*/
      break; /*0x7b5c03*/
    case 0xF5: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT2_SbShp"; /*0x7b5c04*/
      break; /*0x7b5c17*/
    case 0xF6: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3"; /*0x7b5c18*/
      break; /*0x7b5c2b*/
    case 0xF7: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_Fg"; /*0x7b5c2c*/
      break; /*0x7b5c3f*/
    case 0xF8: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_Px"; /*0x7b5c40*/
      break; /*0x7b5c53*/
    case 0xF9: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_S"; /*0x7b5c54*/
      break; /*0x7b5c67*/
    case 0xFA: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_SFg"; /*0x7b5c68*/
      break; /*0x7b5c7b*/
    case 0xFB: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_SPx"; /*0x7b5c7c*/
      break; /*0x7b5c8f*/
    case 0xFC: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_Sb"; /*0x7b5c90*/
      break; /*0x7b5ca3*/
    case 0xFD: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_Shp"; /*0x7b5ca4*/
      break; /*0x7b5cb7*/
    case 0xFE: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_FgShp"; /*0x7b5cb8*/
      break; /*0x7b5ccb*/
    case 0xFF: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_PxShp"; /*0x7b5ccc*/
      break; /*0x7b5cdf*/
    case 0x100: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_SShp"; /*0x7b5ce0*/
      break; /*0x7b5cf3*/
    case 0x101: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_SFgShp"; /*0x7b5cf4*/
      break; /*0x7b5d07*/
    case 0x102: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_SPxShp"; /*0x7b5d08*/
      break; /*0x7b5d1b*/
    case 0x103: /*0x7b493d*/
      result = "BSSM_DIFFUSEPT3_SbShp"; /*0x7b5d1c*/
      break; /*0x7b5d2f*/
    case 0x104: /*0x7b493d*/
      result = "BSSM_TEXTURE"; /*0x7b5d30*/
      break; /*0x7b5d43*/
    case 0x105: /*0x7b493d*/
      result = "BSSM_TEXTURE_Fg"; /*0x7b5d44*/
      break; /*0x7b5d57*/
    case 0x106: /*0x7b493d*/
      result = "BSSM_TEXTURE_H"; /*0x7b5d58*/
      break; /*0x7b5d6b*/
    case 0x107: /*0x7b493d*/
      result = "BSSM_TEXTURE_S"; /*0x7b5d6c*/
      break; /*0x7b5d7f*/
    case 0x108: /*0x7b493d*/
      result = "BSSM_TEXTURE_Vc"; /*0x7b5d80*/
      break; /*0x7b5d93*/
    case 0x109: /*0x7b493d*/
      result = "BSSM_TEXTURE_SVc"; /*0x7b5d94*/
      break; /*0x7b5da7*/
    case 0x10A: /*0x7b493d*/
      result = "BSSM_TEXTURE_SFg"; /*0x7b5da8*/
      break; /*0x7b5dbb*/
    case 0x10B: /*0x7b493d*/
      result = "BSSM_TEXTURE_Sb"; /*0x7b5dbc*/
      break; /*0x7b5dcf*/
    case 0x10C: /*0x7b493d*/
      result = "BSSM_TEXTURE_SH"; /*0x7b5dd0*/
      break; /*0x7b5de3*/
    case 0x10D: /*0x7b493d*/
      result = "BSSM_TEXTURE_Px"; /*0x7b5de4*/
      break; /*0x7b5df7*/
    case 0x10E: /*0x7b493d*/
      result = "BSSM_TEXTURE_SPx"; /*0x7b5df8*/
      break; /*0x7b5e0b*/
    case 0x10F: /*0x7b493d*/
      result = "BSSM_SPECULARDIR"; /*0x7b5e0c*/
      break; /*0x7b5e1f*/
    case 0x110: /*0x7b493d*/
      result = "BSSM_SPECULARPT"; /*0x7b5e20*/
      break; /*0x7b5e33*/
    case 0x111: /*0x7b493d*/
      result = "BSSM_SPECULARDIR_S"; /*0x7b5e34*/
      break; /*0x7b5e47*/
    case 0x112: /*0x7b493d*/
      result = "BSSM_SPECULARPT_S"; /*0x7b5e48*/
      break; /*0x7b5e5b*/
    case 0x115: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR"; /*0x7b5e5c*/
      break; /*0x7b5e6f*/
    case 0x116: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_H"; /*0x7b5e70*/
      break; /*0x7b5e83*/
    case 0x117: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_Px"; /*0x7b5e84*/
      break; /*0x7b5e97*/
    case 0x118: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_S"; /*0x7b5e98*/
      break; /*0x7b5eab*/
    case 0x119: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_SH"; /*0x7b5eac*/
      break; /*0x7b5ebf*/
    case 0x11A: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_SPx"; /*0x7b5ec0*/
      break; /*0x7b5ed3*/
    case 0x11B: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_Sb"; /*0x7b5ed4*/
      break; /*0x7b5ee7*/
    case 0x11C: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_Shp"; /*0x7b5ee8*/
      break; /*0x7b5efb*/
    case 0x11D: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_HShp"; /*0x7b5efc*/
      break; /*0x7b5f0f*/
    case 0x11E: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_PxShp"; /*0x7b5f10*/
      break; /*0x7b5f23*/
    case 0x11F: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_SShp"; /*0x7b5f24*/
      break; /*0x7b5f37*/
    case 0x120: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_SHShp"; /*0x7b5f38*/
      break; /*0x7b5f4b*/
    case 0x121: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_SPxShp"; /*0x7b5f4c*/
      break; /*0x7b5f5f*/
    case 0x122: /*0x7b493d*/
      result = "BSSM_2x_SPECULARDIR_SbShp"; /*0x7b5f60*/
      break; /*0x7b5f73*/
    case 0x123: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT"; /*0x7b5f74*/
      break; /*0x7b5f87*/
    case 0x124: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT_H"; /*0x7b5f88*/
      break; /*0x7b5f9b*/
    case 0x125: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT_Px"; /*0x7b5f9c*/
      break; /*0x7b5faf*/
    case 0x126: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT_S"; /*0x7b5fb0*/
      break; /*0x7b5fc3*/
    case 0x127: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT_SH"; /*0x7b5fc4*/
      break; /*0x7b5fd7*/
    case 0x128: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT_SPx"; /*0x7b5fd8*/
      break; /*0x7b5feb*/
    case 0x129: /*0x7b493d*/
      result = "BSSM_2x_SPECULARPT_Sb"; /*0x7b5fec*/
      break; /*0x7b5fff*/
    case 0x12A: /*0x7b493d*/
      result = "BSSM_3XOCCLUSION"; /*0x7b61a4*/
      break; /*0x7b61b7*/
    case 0x12D: /*0x7b493d*/
      result = "BSSM_3XLIGHTING"; /*0x7b61e0*/
      break; /*0x7b61f3*/
    case 0x12E: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_S"; /*0x7b61f4*/
      break; /*0x7b6207*/
    case 0x12F: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_HAIR"; /*0x7b6208*/
      break; /*0x7b621b*/
    case 0x130: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_Px"; /*0x7b621c*/
      break; /*0x7b622f*/
    case 0x131: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_Fg"; /*0x7b6230*/
      break; /*0x7b6243*/
    case 0x132: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SFg"; /*0x7b6244*/
      break; /*0x7b6257*/
    case 0x133: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_G"; /*0x7b6258*/
      break; /*0x7b626b*/
    case 0x134: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SG"; /*0x7b626c*/
      break; /*0x7b627f*/
    case 0x135: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_Vc"; /*0x7b6280*/
      break; /*0x7b6293*/
    case 0x136: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcS"; /*0x7b6294*/
      break; /*0x7b62a7*/
    case 0x137: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcPx"; /*0x7b62a8*/
      break; /*0x7b62bb*/
    case 0x138: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcG"; /*0x7b62bc*/
      break; /*0x7b62cf*/
    case 0x139: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcSG"; /*0x7b62d0*/
      break; /*0x7b62e3*/
    case 0x13A: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_Shp"; /*0x7b62e4*/
      break; /*0x7b62f7*/
    case 0x13B: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SShp"; /*0x7b62f8*/
      break; /*0x7b630b*/
    case 0x13C: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_HAIRShp"; /*0x7b630c*/
      break; /*0x7b631f*/
    case 0x13D: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_PxShp"; /*0x7b6320*/
      break; /*0x7b6333*/
    case 0x13E: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_FgShp"; /*0x7b6334*/
      break; /*0x7b6347*/
    case 0x13F: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SFgShp"; /*0x7b6348*/
      break; /*0x7b635b*/
    case 0x140: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_GShp"; /*0x7b635c*/
      break; /*0x7b636f*/
    case 0x141: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SGShp"; /*0x7b6370*/
      break; /*0x7b6383*/
    case 0x142: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcShp"; /*0x7b6384*/
      break; /*0x7b6397*/
    case 0x143: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcSShp"; /*0x7b6398*/
      break; /*0x7b63ab*/
    case 0x144: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcPxShp"; /*0x7b63ac*/
      break; /*0x7b63bf*/
    case 0x145: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcGShp"; /*0x7b63c0*/
      break; /*0x7b63d3*/
    case 0x146: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_VcSGShp"; /*0x7b63d4*/
      break; /*0x7b63e7*/
    case 0x147: /*0x7b493d*/
      result = "BSSM_3XENVMAP"; /*0x7b63e8*/
      break; /*0x7b63fb*/
    case 0x148: /*0x7b493d*/
      result = "BSSM_3XENVMAP_W"; /*0x7b63fc*/
      break; /*0x7b640f*/
    case 0x149: /*0x7b493d*/
      result = "BSSM_3XENVMAP_Vc"; /*0x7b6410*/
      break; /*0x7b6423*/
    case 0x14A: /*0x7b493d*/
      result = "BSSM_3XENVMAP_WVc"; /*0x7b6424*/
      break; /*0x7b6437*/
    case 0x14B: /*0x7b493d*/
      result = "BSSM_3XENVMAP_S"; /*0x7b6438*/
      break; /*0x7b644b*/
    case 0x14C: /*0x7b493d*/
      result = "BSSM_3XENVMAP_SVc"; /*0x7b644c*/
      break; /*0x7b645f*/
    case 0x14D: /*0x7b493d*/
      result = "BSSM_3XENVMAP_EYE"; /*0x7b6460*/
      break; /*0x7b6473*/
    case 0x14E: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SIMPLESHADOW"; /*0x7b6474*/
      break; /*0x7b6487*/
    case 0x14F: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SIMPLESHADOW_Vc"; /*0x7b6488*/
      break; /*0x7b649b*/
    case 0x150: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SIMPLESHADOW_S"; /*0x7b649c*/
      break; /*0x7b64af*/
    case 0x151: /*0x7b493d*/
      result = "BSSM_3XLIGHTING_SIMPLESHADOW_VcS"; /*0x7b64b0*/
      break; /*0x7b64c3*/
    case 0x152: /*0x7b493d*/
      result = "BSSM_3XDECAL";                  // [Verified] BSShaderProperty_GetRenderPassName maps selector 0x152 (338) to BSSM_3XDECAL. /*0x7b64c4*/
      break; /*0x7b64d7*/
    case 0x153: /*0x7b493d*/
      result = "BSSM_3XDECAL_A";                // [Verified] BSShaderProperty_GetRenderPassName maps selector 0x153 (339) to BSSM_3XDECAL_A. /*0x7b64d8*/
      break; /*0x7b64eb*/
    case 0x154: /*0x7b493d*/
      result = "BSSM_3XDEPTHMAP"; /*0x7b64ec*/
      break; /*0x7b64ff*/
    case 0x155: /*0x7b493d*/
      result = "BSSM_3XDEPTHMAP_S"; /*0x7b6500*/
      break; /*0x7b6513*/
    case 0x156: /*0x7b493d*/
      result = "BSSM_3XRENDERNORMALS"; /*0x7b6514*/
      break; /*0x7b6527*/
    case 0x157: /*0x7b493d*/
      result = "BSSM_3XRENDERNORMALS_S"; /*0x7b6528*/
      break; /*0x7b653b*/
    case 0x158: /*0x7b493d*/
      result = "BSSM_3XRENDERNORMALS_FIRE"; /*0x7b653c*/
      break; /*0x7b654f*/
    case 0x159: /*0x7b493d*/
      result = "BSSM_3XRENDERNORMALS_CLEAR"; /*0x7b6550*/
      break; /*0x7b6563*/
    case 0x15A: /*0x7b493d*/
      result = "BSSM_3XRENDERNORMALS_CLEAR_S"; /*0x7b6564*/
      break; /*0x7b6577*/
    case 0x15B: /*0x7b493d*/
      result = "BSSM_3XLOCALMAP"; /*0x7b6578*/
      break; /*0x7b658b*/
    case 0x15C: /*0x7b493d*/
      result = "BSSM_3XLOCALMAP_S"; /*0x7b658c*/
      break; /*0x7b659f*/
    case 0x15D: /*0x7b493d*/
      result = "BSSM_3XLOCALMAP_CLEAR"; /*0x7b65a0*/
      break; /*0x7b65b3*/
    case 0x15E: /*0x7b493d*/
      result = "BSSM_3XTEXEFFECT"; /*0x7b65b4*/
      break; /*0x7b65c7*/
    case 0x15F: /*0x7b493d*/
      result = "BSSM_3XTEXEFFECT_S"; /*0x7b65c8*/
      break; /*0x7b65db*/
    case 0x160: /*0x7b493d*/
      result = "BSSM_RENDERNORMALS"; /*0x7b6910*/
      break; /*0x7b6923*/
    case 0x161: /*0x7b493d*/
      result = "BSSM_RENDERNORMALS_S"; /*0x7b6924*/
      break; /*0x7b6937*/
    case 0x162: /*0x7b493d*/
      result = "BSSM_RENDERNORMALS_FIRE"; /*0x7b6938*/
      break; /*0x7b694b*/
    case 0x163: /*0x7b493d*/
      result = "BSSM_RENDERNORMALS_CLEAR"; /*0x7b694c*/
      break; /*0x7b695f*/
    case 0x164: /*0x7b493d*/
      result = "BSSM_RENDERNORMALS_CLEAR_S"; /*0x7b6960*/
      break; /*0x7b6973*/
    case 0x165: /*0x7b493d*/
      result = "BSSM_LOCALMAP"; /*0x7b6974*/
      break; /*0x7b6987*/
    case 0x166: /*0x7b493d*/
      result = "BSSM_LOCALMAP_S"; /*0x7b6988*/
      break; /*0x7b699b*/
    case 0x167: /*0x7b493d*/
      result = "BSSM_LOCALMAP_CLEAR"; /*0x7b699c*/
      break; /*0x7b69af*/
    case 0x168: /*0x7b493d*/
      result = "BSSM_LANDDIFF"; /*0x7b6014*/
      break; /*0x7b6027*/
    case 0x169: /*0x7b493d*/
      result = "BSSM_LAND2xDIFF"; /*0x7b6028*/
      break; /*0x7b603b*/
    case 0x16A: /*0x7b493d*/
      result = "BSSM_LAND2xSPECDIR"; /*0x7b603c*/
      break; /*0x7b604f*/
    case 0x16B: /*0x7b493d*/
      result = "BSSM_LAND2xSPECDIR_Shp"; /*0x7b6118*/
      break; /*0x7b612b*/
    case 0x16C: /*0x7b493d*/
      result = "BSSM_LAND2xSPEC"; /*0x7b6050*/
      break; /*0x7b6063*/
    case 0x16D: /*0x7b493d*/
      result = "BSSM_LAND_G"; /*0x7b6064*/
      break; /*0x7b6077*/
    case 0x16E: /*0x7b493d*/
      result = "BSSM_LANDAD_A"; /*0x7b6078*/
      break; /*0x7b608b*/
    case 0x16F: /*0x7b493d*/
      result = "BSSM_LANDAD_AShp"; /*0x7b608c*/
      break; /*0x7b609f*/
    case 0x170: /*0x7b493d*/
      result = "BSSM_LAND_GA"; /*0x7b60b4*/
      break; /*0x7b60c7*/
    case 0x171: /*0x7b493d*/
      result = "BSSM_LANDDIFF_A"; /*0x7b60c8*/
      break; /*0x7b60db*/
    case 0x172: /*0x7b493d*/
      result = "BSSM_LAND2xDIFF_A"; /*0x7b60dc*/
      break; /*0x7b60ef*/
    case 0x173: /*0x7b493d*/
      result = "BSSM_LAND2xSPECDIR_A"; /*0x7b60f0*/
      break; /*0x7b6103*/
    case 0x174: /*0x7b493d*/
      result = "BSSM_LAND2xSPEC_A"; /*0x7b6104*/
      break; /*0x7b6117*/
    case 0x175: /*0x7b493d*/
      result = "BSSM_LAND2xSPECDIR_AShp"; /*0x7b612c*/
      break; /*0x7b613f*/
    case 0x176: /*0x7b493d*/
      result = "BSSM_LANDLO_A"; /*0x7b60a0*/
      break; /*0x7b60b3*/
    case 0x177: /*0x7b493d*/
      result = "BSSM_2x_SIMPLESHADOW"; /*0x7b6140*/
      break; /*0x7b6153*/
    case 0x178: /*0x7b493d*/
      result = "BSSM_2x_SIMPLESHADOW_S"; /*0x7b6154*/
      break; /*0x7b6167*/
    case 0x179: /*0x7b493d*/
      result = "BSSM_2x_SIMPLESHADOW_LAND"; /*0x7b6168*/
      break; /*0x7b617b*/
    case 0x17A: /*0x7b493d*/
      result = "BSSM_2x_SIMPLESHADOW_Sb"; /*0x7b617c*/
      break; /*0x7b618f*/
    case 0x17B: /*0x7b493d*/
      result = "BSSM_ADT_Sbb"; /*0x7b6190*/
      break; /*0x7b61a3*/
    case 0x17C: /*0x7b493d*/
      result = "BSSM_WATER_LOD"; /*0x7b662c*/
      break; /*0x7b663f*/
    case 0x17D: /*0x7b493d*/
      result = "BSSM_SKYBASEPRE"; /*0x7b65dc*/
      break; /*0x7b65ef*/
    case 0x17E: /*0x7b493d*/
      result = "BSSM_PARTICLE"; /*0x7b6690*/
      break; /*0x7b66a3*/
    case 0x17F: /*0x7b493d*/
      result = "BSSM_BOLT"; /*0x7b66a4*/
      break; /*0x7b66b7*/
    case 0x180: /*0x7b493d*/
      result = "BSSM_ENVMAP"; /*0x7b66b8*/
      break; /*0x7b66cb*/
    case 0x181: /*0x7b493d*/
      result = "BSSM_ENVMAP_Vc"; /*0x7b66cc*/
      break; /*0x7b66df*/
    case 0x182: /*0x7b493d*/
      result = "BSSM_ENVMAP_S"; /*0x7b66e0*/
      break; /*0x7b66f3*/
    case 0x183: /*0x7b493d*/
      result = "BSSM_ENVMAP_SVc"; /*0x7b66f4*/
      break; /*0x7b6707*/
    case 0x184: /*0x7b493d*/
      result = "BSSM_2x_ENVMAP"; /*0x7b6708*/
      break; /*0x7b671b*/
    case 0x185: /*0x7b493d*/
      result = "BSSM_2x_ENVMAP_S"; /*0x7b671c*/
      break; /*0x7b672f*/
    case 0x186: /*0x7b493d*/
      result = "BSSM_2x_ENVMAP_W"; /*0x7b6730*/
      break; /*0x7b6743*/
    case 0x187: /*0x7b493d*/
      result = "BSSM_2x_ENVMAP_EYE"; /*0x7b6744*/
      break; /*0x7b6757*/
    case 0x188: /*0x7b493d*/
      result = "BSSM_GEOMDECAL"; /*0x7b67a8*/
      break; /*0x7b67bb*/
    case 0x189: /*0x7b493d*/
      result = "BSSM_GEOMDECAL_S"; /*0x7b67bc*/
      break; /*0x7b67cf*/
    case 0x18A: /*0x7b493d*/
      result = "BSSM_DECAL";                    // [Verified] BSShaderProperty_GetRenderPassName maps selector 0x18A (394) to the exact string BSSM_DECAL. /*0x7b67d0*/
      break; /*0x7b67e3*/
    case 0x18B: /*0x7b493d*/
      result = "BSSM_DECAL_A";                  // [Verified] BSShaderProperty_GetRenderPassName maps selector 0x18B (395) to the exact string BSSM_DECAL_A. /*0x7b67e4*/
      break; /*0x7b67f7*/
    case 0x18C: /*0x7b493d*/
      result = "BSSM_TEXEFFECT";                // Verified (Oblivion): BSShaderProperty_GetRenderPassName maps render-pass selector 0x18C (396) to the exact name "BSSM_TEXEFFECT". /*0x7b6758*/
      break; /*0x7b676b*/
    case 0x18D: /*0x7b493d*/
      result = "BSSM_TEXEFFECT_S";              // Verified (Oblivion): BSShaderProperty_GetRenderPassName maps selector 0x18D to "BSSM_TEXEFFECT_S". Probable: _S is the controller/skinned geometry pass variant; the selector is chosen from passInfo bit 0x02, set when SetupGeometry sees a non-null geometry controller, and Fallout's analogous helper branches on abSkinned. /*0x7b676c*/
      break; /*0x7b677f*/
    case 0x18E: /*0x7b493d*/
      result = "BSSM_2x_TEXEFFECT";             // Verified (Oblivion): BSShaderProperty_GetRenderPassName maps selector 0x18E (398) to "BSSM_2x_TEXEFFECT". /*0x7b6780*/
      break; /*0x7b6793*/
    case 0x18F: /*0x7b493d*/
      result = "BSSM_2x_TEXEFFECT_S";           // Verified (Oblivion): BSShaderProperty_GetRenderPassName maps selector 0x18F (399) to "BSSM_2x_TEXEFFECT_S". Probable: _S is the controller/skinned geometry variant, corroborated by passInfo bit 0x02 selection and Fallout's abSkinned 2x helper. /*0x7b6794*/
      break; /*0x7b67a7*/
    case 0x190: /*0x7b493d*/
      result = "BSSM_FOG"; /*0x7b67f8*/
      break; /*0x7b680b*/
    case 0x191: /*0x7b493d*/
      result = "BSSM_FOG_A"; /*0x7b680c*/
      break; /*0x7b681f*/
    case 0x192: /*0x7b493d*/
      result = "BSSM_FOG_S"; /*0x7b6820*/
      break; /*0x7b6833*/
    case 0x193: /*0x7b493d*/
      result = "BSSM_FOG_SA"; /*0x7b6834*/
      break; /*0x7b6847*/
    case 0x194: /*0x7b493d*/
      result = "BSSM_FOG_Sb"; /*0x7b6848*/
      break; /*0x7b685b*/
    case 0x195: /*0x7b493d*/
      result = "BSSM_GRASS"; /*0x7b6654*/
      break; /*0x7b6667*/
    case 0x196: /*0x7b493d*/
      result = "BSSM_GRASSPT"; /*0x7b6668*/
      break; /*0x7b667b*/
    case 0x197: /*0x7b493d*/
      result = "BSSM_GRASS_SIMPLESHADOW"; /*0x7b667c*/
      break; /*0x7b668f*/
    case 0x198: /*0x7b493d*/
      result = "BSSM_WATER_WADING"; /*0x7b65f0*/
      break; /*0x7b6603*/
    case 0x199: /*0x7b493d*/
      result = "BSSM_WATER"; /*0x7b6604*/
      break; /*0x7b6617*/
    case 0x19A: /*0x7b493d*/
      result = "BSSM_WATER_LAVA"; /*0x7b6618*/
      break; /*0x7b662b*/
    case 0x19B: /*0x7b493d*/
      result = "BSSM_PRECIPITATION_RAIN"; /*0x7b6640*/
      break; /*0x7b6653*/
    case 0x19C: /*0x7b493d*/
      result = "BSSM_SKYBASEPOST"; /*0x7b685c*/
      break; /*0x7b686f*/
    case 0x19D: /*0x7b493d*/
      result = "BSSM_SELFILLUM_SKY"; /*0x7b6870*/
      break; /*0x7b6883*/
    case 0x19E: /*0x7b493d*/
      result = "BSSM_SELFILLUMALPHA"; /*0x7b6884*/
      break; /*0x7b6897*/
    case 0x19F: /*0x7b493d*/
      result = "BSSM_SELFILLUMALPHA_S"; /*0x7b6898*/
      break; /*0x7b68ab*/
    case 0x1A0: /*0x7b493d*/
      result = "BSSM_SHADOWVOLUME_BACK"; /*0x7b68d4*/
      break; /*0x7b68e7*/
    case 0x1A1: /*0x7b493d*/
      result = "BSSM_SHADOWVOLUME_FRONT"; /*0x7b68e8*/
      break; /*0x7b68fb*/
    case 0x1A2: /*0x7b493d*/
      result = "BSSM_SHADOWVOLUME_WIRE"; /*0x7b68fc*/
      break; /*0x7b690f*/
    default:
      _sprintf(v2, "??? %d", a1); /*0x7b69bb*/
      result = "???"; /*0x7b69c9*/
      break; /*0x7b69c9*/
  }
  return result; /*0x7b4949*/
}
