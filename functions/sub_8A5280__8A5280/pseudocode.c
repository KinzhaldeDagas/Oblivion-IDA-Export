unsigned int __cdecl sub_8A5280(unsigned __int16 *a1, char *a2)
{
  unsigned int result; // eax

  switch ( (unsigned int)a2 ) /*0x8a5290*/
  {
    case 1u: /*0x8a5290*/
      a2 = TESOutput_PrintLabeledString("MOTION", "DYNAMIC"); /*0x8a52aa*/
      result = NiTArray_Add(a1, &a2); /*0x8a52b6*/
      break; /*0x8a52bb*/
    case 2u: /*0x8a5290*/
    case 3u: /*0x8a5290*/
      a2 = TESOutput_PrintLabeledString("MOTION", "SPHERE"); /*0x8a52d7*/
      result = NiTArray_Add(a1, &a2); /*0x8a52db*/
      break; /*0x8a52e0*/
    case 4u: /*0x8a5290*/
    case 5u: /*0x8a5290*/
      a2 = TESOutput_PrintLabeledString("MOTION", (const char *)&off_A97474); /*0x8a52fc*/
      result = NiTArray_Add(a1, &a2); /*0x8a5300*/
      break; /*0x8a5305*/
    case 6u: /*0x8a5290*/
      a2 = TESOutput_PrintLabeledString("MOTION", "KEYFRAMED"); /*0x8a5319*/
      result = NiTArray_Add(a1, &a2); /*0x8a5325*/
      break; /*0x8a532a*/
    case 7u: /*0x8a5290*/
      a2 = TESOutput_PrintLabeledString("MOTION", "FIXED"); /*0x8a5346*/
      result = NiTArray_Add(a1, &a2); /*0x8a534a*/
      break; /*0x8a534f*/
    default:
      JUMPOUT(0x8A5350); /*0x8a5350*/
  }
  return result; /*0x8a52bb*/
}
