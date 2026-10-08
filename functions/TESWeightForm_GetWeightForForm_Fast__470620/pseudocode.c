double __cdecl TESWeightForm_GetWeightForForm_Fast(int a1)
{
  int v1; // eax

  if ( !a1 ) /*0x470626*/
    return kTerrainLODQuadRayDirectionZ; /*0x470626*/
  switch ( *(_BYTE *)(a1 + 4) ) /*0x47063b*/
  {
    case 0x13: /*0x47063b*/
    case 0x1B: /*0x47063b*/
    case 0x26: /*0x47063b*/
    case 0x27: /*0x47063b*/
    case 0x2A: /*0x47063b*/
      v1 = a1 + 0x68; /*0x47064c*/
      break; /*0x47064f*/
    case 0x14: /*0x47063b*/
    case 0x16: /*0x47063b*/
      v1 = a1 + 0x54; /*0x470656*/
      break; /*0x470659*/
    case 0x15: /*0x47063b*/
    case 0x21: /*0x47063b*/
      v1 = a1 + 0x78; /*0x470647*/
      break; /*0x47064a*/
    case 0x17: /*0x47063b*/
      v1 = a1 + 0x64; /*0x470651*/
      break; /*0x470654*/
    case 0x19: /*0x47063b*/
    case 0x28: /*0x47063b*/
      v1 = a1 + 0x70; /*0x470642*/
      break; /*0x470645*/
    case 0x1A: /*0x47063b*/
      v1 = a1 + 0x60; /*0x47065b*/
      break; /*0x47065e*/
    case 0x22: /*0x47063b*/
      v1 = a1 + 0x6C; /*0x470660*/
      break; /*0x470660*/
    default:
      return kTerrainLODQuadRayDirectionZ;
  }
  if ( v1 ) /*0x470665*/
    return *(float *)(v1 + 4); /*0x470667*/
  else
    return kTerrainLODQuadRayDirectionZ; /*0x47066b*/
}
