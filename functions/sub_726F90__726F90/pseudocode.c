void __thiscall sub_726F90(_DWORD *this, unsigned __int16 *a2)
{
  char *v2; // [esp+Ch] [ebp-4h] BYREF

  switch ( *(this + 1) )
  {
    case 0:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_INVALID");
      NiTArray_Add(a2, &v2);
      break;
    case 1:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT1");
      NiTArray_Add(a2, &v2);
      break;
    case 2:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT2");
      NiTArray_Add(a2, &v2);
      break;
    case 3:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT3");
      NiTArray_Add(a2, &v2);
      break;
    case 4:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_FLOAT4");
      NiTArray_Add(a2, &v2);
      break;
    case 5:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG1");
      NiTArray_Add(a2, &v2);
      break;
    case 6:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG2");
      NiTArray_Add(a2, &v2);
      break;
    case 7:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG3");
      NiTArray_Add(a2, &v2);
      break;
    case 8:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_LONG4");
      NiTArray_Add(a2, &v2);
      break;
    case 9:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG1");
      NiTArray_Add(a2, &v2);
      break;
    case 0xA:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG2");
      NiTArray_Add(a2, &v2);
      break;
    case 0xB:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG3");
      NiTArray_Add(a2, &v2);
      break;
    case 0xC:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_ULONG4");
      NiTArray_Add(a2, &v2);
      break;
    case 0xD:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT1");
      NiTArray_Add(a2, &v2);
      break;
    case 0xE:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT2");
      NiTArray_Add(a2, &v2);
      break;
    case 0xF:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT3");
      NiTArray_Add(a2, &v2);
      break;
    case 0x10:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_SHORT4");
      NiTArray_Add(a2, &v2);
      break;
    case 0x11:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT1");
      NiTArray_Add(a2, &v2);
      break;
    case 0x12:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT2");
      NiTArray_Add(a2, &v2);
      break;
    case 0x13:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT3");
      NiTArray_Add(a2, &v2);
      break;
    case 0x14:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_USHORT4");
      NiTArray_Add(a2, &v2);
      break;
    case 0x15:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE1");
      NiTArray_Add(a2, &v2);
      break;
    case 0x16:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE2");
      NiTArray_Add(a2, &v2);
      break;
    case 0x17:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE3");
      NiTArray_Add(a2, &v2);
      break;
    case 0x18:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BYTE4");
      NiTArray_Add(a2, &v2);
      break;
    case 0x19:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE1");
      NiTArray_Add(a2, &v2);
      break;
    case 0x1A:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE2");
      NiTArray_Add(a2, &v2);
      break;
    case 0x1B:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE3");
      NiTArray_Add(a2, &v2);
      break;
    case 0x1C:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_UBYTE4");
      NiTArray_Add(a2, &v2);
      break;
    case 0x1D:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND1");
      NiTArray_Add(a2, &v2);
      break;
    case 0x1E:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND2");
      NiTArray_Add(a2, &v2);
      break;
    case 0x1F:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND3");
      NiTArray_Add(a2, &v2);
      break;
    case 0x20:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_BLEND4");
      NiTArray_Add(a2, &v2);
      break;
    case 0x21:
      v2 = TESOutput_PrintLabeledString("        m_uiType", "AGD_NITYPE_COUNT");
      NiTArray_Add(a2, &v2);
      break;
    default:
      JUMPOUT(0x727559);
  }
  JUMPOUT(0x72759A);
}
