// Verified: maps Havok/material hit IDs to the corresponding sHitParticle* GameSetting string. 1/0x10 Stone; 2/0x11 Cloth; 3/0x12 Dirt; 4/0x13 Glass; 5/0x0B/0x14/0x1A Grass; 6/0x15 Metal; 7/0x16 Organic; 8/0x17 Skin; 9/0x0C/0x18/0x1B Water; 0x0D/0x1C Wood; 0x0E/0x1D Chain; default (including remaining material IDs) Snow. Distinct from Actor/TESCreature blood NIF path.
const char *__cdecl ImpactMaterial_GetHitParticlePath(int materialId)
{
  const char *result; // eax

  switch ( materialId ) /*0x5361c0*/
  {
    case 1: /*0x5361c0*/
    case 0x10: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x120]); /*0x5361c7*/
      break; /*0x5361cc*/
    case 2: /*0x5361c0*/
    case 0x11: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x122]); /*0x5361cd*/
      break; /*0x5361d2*/
    case 3: /*0x5361c0*/
    case 0x12: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x124]); /*0x5361d3*/
      break; /*0x5361d8*/
    case 4: /*0x5361c0*/
    case 0x13: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x126]); /*0x5361d9*/
      break; /*0x5361de*/
    case 5: /*0x5361c0*/
    case 0xB: /*0x5361c0*/
    case 0x14: /*0x5361c0*/
    case 0x1A: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x128]); /*0x5361df*/
      break; /*0x5361e4*/
    case 6: /*0x5361c0*/
    case 0x15: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]); /*0x5361e5*/
      break; /*0x5361ea*/
    case 7: /*0x5361c0*/
    case 0x16: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]); /*0x5361eb*/
      break; /*0x5361f0*/
    case 8: /*0x5361c0*/
    case 0x17: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]); /*0x5361f1*/
      break; /*0x5361f6*/
    case 9: /*0x5361c0*/
    case 0xC: /*0x5361c0*/
    case 0x18: /*0x5361c0*/
    case 0x1B: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x130]); /*0x5361f7*/
      break; /*0x5361fc*/
    case 0xD: /*0x5361c0*/
    case 0x1C: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x132]); /*0x5361fd*/
      break; /*0x536202*/
    case 0xE: /*0x5361c0*/
    case 0x1D: /*0x5361c0*/
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x134]); /*0x536203*/
      break; /*0x536208*/
    default:
      result = (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]); /*0x536209*/
      break; /*0x536209*/
  }
  return result; /*0x5361cc*/
}
