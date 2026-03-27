unsigned int __thiscall sub_75A0E0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_73FB80(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B41864);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkParticleInfo", *((_DWORD *)this + 0x17));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pfRotationSpeeds", *((_DWORD *)this + 0x18));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("NumAddedParticles", *((_WORD *)this + 0x32));
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("AddedParticlesBase", *((_WORD *)this + 0x33));
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  return NiTArray_SetAt(v2, v16, &a2);
}
