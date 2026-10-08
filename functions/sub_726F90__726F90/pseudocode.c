void __thiscall sub_726F90(_DWORD *this, unsigned __int16 *a2)
{
  char *v2; // [esp+Ch] [ebp-4h] BYREF

  switch ( *(this + 1) ) /*0x726fa2*/
  {
    case 0: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_INVALID"); /*0x726fbc*/
      NiTArray_Add(a2, &v2); /*0x726fca*/
      break; /*0x726fcf*/
    case 1: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT1"); /*0x726ff1*/
      NiTArray_Add(a2, &v2); /*0x726ff5*/
      break; /*0x726ffa*/
    case 2: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT2"); /*0x72701c*/
      NiTArray_Add(a2, &v2); /*0x727020*/
      break; /*0x727025*/
    case 3: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT3"); /*0x72703d*/
      NiTArray_Add(a2, &v2); /*0x72704b*/
      break; /*0x727050*/
    case 4: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT4"); /*0x727072*/
      NiTArray_Add(a2, &v2); /*0x727076*/
      break; /*0x72707b*/
    case 5: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG1"); /*0x72709d*/
      NiTArray_Add(a2, &v2); /*0x7270a1*/
      break; /*0x7270a6*/
    case 6: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG2"); /*0x7270be*/
      NiTArray_Add(a2, &v2); /*0x7270cc*/
      break; /*0x7270d1*/
    case 7: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG3"); /*0x7270f3*/
      NiTArray_Add(a2, &v2); /*0x7270f7*/
      break; /*0x7270fc*/
    case 8: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG4"); /*0x72711e*/
      NiTArray_Add(a2, &v2); /*0x727122*/
      break; /*0x727127*/
    case 9: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG1"); /*0x72713f*/
      NiTArray_Add(a2, &v2); /*0x72714d*/
      break; /*0x727152*/
    case 0xA: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG2"); /*0x727174*/
      NiTArray_Add(a2, &v2); /*0x727178*/
      break; /*0x72717d*/
    case 0xB: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG3"); /*0x72719f*/
      NiTArray_Add(a2, &v2); /*0x7271a3*/
      break; /*0x7271a8*/
    case 0xC: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG4"); /*0x7271c0*/
      NiTArray_Add(a2, &v2); /*0x7271ce*/
      break; /*0x7271d3*/
    case 0xD: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT1"); /*0x7271f5*/
      NiTArray_Add(a2, &v2); /*0x7271f9*/
      break; /*0x7271fe*/
    case 0xE: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT2"); /*0x727220*/
      NiTArray_Add(a2, &v2); /*0x727224*/
      break; /*0x727229*/
    case 0xF: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT3"); /*0x727241*/
      NiTArray_Add(a2, &v2); /*0x72724f*/
      break; /*0x727254*/
    case 0x10: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT4"); /*0x727276*/
      NiTArray_Add(a2, &v2); /*0x72727a*/
      break; /*0x72727f*/
    case 0x11: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT1"); /*0x7272a1*/
      NiTArray_Add(a2, &v2); /*0x7272a5*/
      break; /*0x7272aa*/
    case 0x12: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT2"); /*0x7272c2*/
      NiTArray_Add(a2, &v2); /*0x7272d0*/
      break; /*0x7272d5*/
    case 0x13: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT3"); /*0x7272f7*/
      NiTArray_Add(a2, &v2); /*0x7272fb*/
      break; /*0x727300*/
    case 0x14: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT4"); /*0x727322*/
      NiTArray_Add(a2, &v2); /*0x727326*/
      break; /*0x72732b*/
    case 0x15: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE1"); /*0x727343*/
      NiTArray_Add(a2, &v2); /*0x727351*/
      break; /*0x727356*/
    case 0x16: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE2"); /*0x727378*/
      NiTArray_Add(a2, &v2); /*0x72737c*/
      break; /*0x727381*/
    case 0x17: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE3"); /*0x7273a3*/
      NiTArray_Add(a2, &v2); /*0x7273a7*/
      break; /*0x7273ac*/
    case 0x18: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE4"); /*0x7273c4*/
      NiTArray_Add(a2, &v2); /*0x7273d2*/
      break; /*0x7273d7*/
    case 0x19: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE1"); /*0x7273f9*/
      NiTArray_Add(a2, &v2); /*0x7273fd*/
      break; /*0x727402*/
    case 0x1A: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE2"); /*0x727424*/
      NiTArray_Add(a2, &v2); /*0x727428*/
      break; /*0x72742d*/
    case 0x1B: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE3"); /*0x727445*/
      NiTArray_Add(a2, &v2); /*0x727453*/
      break; /*0x727458*/
    case 0x1C: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE4"); /*0x72747a*/
      NiTArray_Add(a2, &v2); /*0x72747e*/
      break; /*0x727483*/
    case 0x1D: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND1"); /*0x7274a5*/
      NiTArray_Add(a2, &v2); /*0x7274a9*/
      break; /*0x7274ae*/
    case 0x1E: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND2"); /*0x7274c6*/
      NiTArray_Add(a2, &v2); /*0x7274d4*/
      break; /*0x7274d9*/
    case 0x1F: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND3"); /*0x7274fb*/
      NiTArray_Add(a2, &v2); /*0x7274ff*/
      break; /*0x727504*/
    case 0x20: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND4"); /*0x727526*/
      NiTArray_Add(a2, &v2); /*0x72752a*/
      break; /*0x72752f*/
    case 0x21: /*0x726fa2*/
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_COUNT"); /*0x727544*/
      NiTArray_Add(a2, &v2); /*0x727552*/
      break; /*0x727557*/
    default:
      JUMPOUT(0x727559); /*0x727559*/
  }
  JUMPOUT(0x72759A); /*0x72759a*/
}
