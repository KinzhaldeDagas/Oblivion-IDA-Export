unsigned int __thiscall sub_7587D0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  const char *v10; // eax
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edx
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7587d2*/
  sub_7009A0(this, a2); /*0x7587da*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41758.name); /*0x7587e5*/
  end = v2->end; /*0x7587ea*/
  capacity = v2->capacity; /*0x7587ee*/
  a2 = v4; /*0x7587f7*/
  if ( end >= capacity ) /*0x7587fb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x758806*/
  NiTArray_SetAt(v2, end, &a2); /*0x758813*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Num Birth Rate Keys", *(this + 2)); /*0x758821*/
  v8 = v2->end; /*0x758826*/
  v9 = v2->capacity; /*0x75882a*/
  a2 = v7; /*0x758833*/
  if ( v8 >= v9 ) /*0x758837*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x758842*/
  NiTArray_SetAt(v2, v8, &a2); /*0x75884f*/
  switch ( *(this + 4) ) /*0x75885a*/
  {
    case 1: /*0x75885a*/
      v10 = "LINKEY"; /*0x75887b*/
      break;
    case 2: /*0x75885a*/
      v10 = "BEZKEY"; /*0x758874*/
      break;
    case 3: /*0x75885a*/
      v10 = "TCBKEY"; /*0x75886d*/
      break;
    default:
      v10 = "Unknown"; /*0x758866*/
      break;
  }
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("Birth Rate Key Type", v10); /*0x758886*/
  v12 = v2->end; /*0x75888b*/
  v13 = v2->capacity; /*0x75888f*/
  a2 = v11; /*0x758898*/
  if ( v12 >= v13 ) /*0x75889c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize); /*0x7588a7*/
  NiTArray_SetAt(v2, v12, &a2); /*0x7588b4*/
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Num Emitter Active Keys", *(this + 6)); /*0x7588c2*/
  v15 = v2->end; /*0x7588c7*/
  a2 = v14; /*0x7588cb*/
  if ( v15 >= v2->capacity ) /*0x7588d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x7588e3*/
  return NiTArray_SetAt(v2, v15, &a2); /*0x7588f5*/
}
