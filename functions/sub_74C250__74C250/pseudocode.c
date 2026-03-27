void __thiscall sub_74C250(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned int i; // ebx
  int v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_74F4F0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B408C8);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  for ( i = 0; i < *((unsigned __int16 *)this + 0x2E); ++i )
  {
    v8 = *(_DWORD *)(*((_DWORD *)this + 0x15) + 4 * i);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Emitter Object", *(const char **)(v8 + 8));
      v10 = v2->end;
      v11 = v2->capacity;
      a2 = v9;
      if ( v10 >= v11 )
        NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
      NiTArray_SetAt(v2, v10, &a2);
    }
  }
  switch ( *((_DWORD *)this + 0x1D) )
  {
    case 0:
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_VERTICES");
      break;
    case 1:
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_FACE_CENTER");
      break;
    case 2:
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_EDGE_CENTER");
      break;
    case 3:
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_FACE_SURFACE");
      break;
    case 4:
      v12 = (unsigned __int16 *)TESOutput_PrintLabeledString("m_eEmissionType", "NI_EMIT_FROM_EDGE_SURFACE");
      break;
    default:
      JUMPOUT(0x74C365);
  }
  v13 = v2->capacity;
  v14 = v2->end;
  a2 = v12;
  if ( v14 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  JUMPOUT(0x74C3D6);
}
