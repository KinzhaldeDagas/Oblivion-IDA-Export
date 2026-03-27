unsigned int __cdecl sub_8A5280(unsigned __int16 *a1, char *a2)
{
  unsigned int result; // eax

  switch ( (unsigned int)a2 )
  {
    case 1u:
      a2 = TESOutput_PrintLabeledString("MOTION", "DYNAMIC");
      result = NiTArray_Add(a1, &a2);
      break;
    case 2u:
    case 3u:
      a2 = TESOutput_PrintLabeledString("MOTION", "SPHERE");
      result = NiTArray_Add(a1, &a2);
      break;
    case 4u:
    case 5u:
      a2 = TESOutput_PrintLabeledString("MOTION", (const char *)&off_A97474);
      result = NiTArray_Add(a1, &a2);
      break;
    case 6u:
      a2 = TESOutput_PrintLabeledString("MOTION", "KEYFRAMED");
      result = NiTArray_Add(a1, &a2);
      break;
    case 7u:
      a2 = TESOutput_PrintLabeledString("MOTION", "FIXED");
      result = NiTArray_Add(a1, &a2);
      break;
    default:
      JUMPOUT(0x8A5350);
  }
  return result;
}
