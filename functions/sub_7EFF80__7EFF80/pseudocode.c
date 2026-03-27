unsigned int __thiscall sub_7EFF80(float *this, unsigned __int16 *a2)
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
  unsigned int v12; // edx
  unsigned int v13; // edi
  unsigned __int16 *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7E28E0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B46720);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("iParticleCount", *((_DWORD *)this + 0x1B));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  if ( *((_DWORD *)this + 0x27) )
  {
    v10 = (const char *)sub_6F9540(*((_DWORD *)this + 0x27));
    if ( v10 )
      v11 = (unsigned __int16 *)TESOutput_PrintLabeledString("base texture", v10);
    else
      v11 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("base texture", *((_DWORD *)this + 0x27));
    v12 = v2->capacity;
    v13 = v2->end;
    a2 = v11;
    if ( v13 >= v12 )
      NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
    NiTArray_SetAt(v2, v13, &a2);
  }
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x70))(this) )
  {
    v14 = (unsigned __int16 *)TESOutput_PrintLabeledBool("clamp", 1);
    v15 = v2->end;
    v16 = v2->capacity;
    a2 = v14;
    if ( v15 >= v16 )
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
    NiTArray_SetAt(v2, v15, &a2);
  }
  v17 = (unsigned __int16 *)sub_721A90("billboard mode", *((_DWORD *)this + 0x29));
  v18 = v2->end;
  v19 = v2->capacity;
  a2 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
  return NiTArray_SetAt(v2, v18, &a2);
}
