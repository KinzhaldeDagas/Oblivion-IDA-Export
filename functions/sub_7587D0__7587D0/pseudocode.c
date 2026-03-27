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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7009A0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B41758);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Num Birth Rate Keys", *(this + 2));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  switch ( *(this + 4) )
  {
    case 1:
      v10 = "LINKEY";
      break;
    case 2:
      v10 = "BEZKEY";
      break;
    case 3:
      v10 = "TCBKEY";
      break;
    default:
      v10 = "Unknown";
      break;
  }
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("Birth Rate Key Type", v10);
  v12 = v2->end;
  v13 = v2->capacity;
  a2 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v2, v12 + v2->growSize);
  NiTArray_SetAt(v2, v12, &a2);
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Num Emitter Active Keys", *(this + 6));
  v15 = v2->end;
  a2 = v14;
  if ( v15 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
  return NiTArray_SetAt(v2, v15, &a2);
}
