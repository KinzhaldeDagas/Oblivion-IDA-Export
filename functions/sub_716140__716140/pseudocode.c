unsigned int __thiscall sub_716140(unsigned __int8 *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // edx
  unsigned __int16 *v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // edx
  unsigned __int16 *v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // edx
  unsigned __int16 *v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  unsigned __int16 *v37; // eax
  unsigned int v38; // edi
  char *v40; // [esp+10h] [ebp-4h] BYREF

  v3 = TESOutput_PrintString(*(char **)dword_B3FC98);
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  v6 = a2[4];
  v40 = v3;
  if ( v5 >= v6 )
    NiTArray_SetSize(a2, v5 + a2[7]);
  NiTArray_SetAt(v4, v5, &v40);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fFrequency", *((float *)this + 3));
  end = v4->end;
  capacity = v4->capacity;
  a2 = v7;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize);
  NiTArray_SetAt(v4, end, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fPhase", *((float *)this + 4));
  v11 = v4->end;
  v12 = v4->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize);
  NiTArray_SetAt(v4, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fLoKeyTime", *((float *)this + 5));
  v14 = v4->end;
  v15 = v4->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v4, v14 + v4->growSize);
  NiTArray_SetAt(v4, v14, &a2);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fHiKeyTime", *((float *)this + 6));
  v17 = v4->end;
  v18 = v4->capacity;
  a2 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v4, v17 + v4->growSize);
  NiTArray_SetAt(v4, v17, &a2);
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fStartTime", *((float *)this + 7));
  v20 = v4->end;
  v21 = v4->capacity;
  a2 = v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v4, v20 + v4->growSize);
  NiTArray_SetAt(v4, v20, &a2);
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fLastTime", *((float *)this + 8));
  v23 = v4->end;
  v24 = v4->capacity;
  a2 = v22;
  if ( v23 >= v24 )
    NiTArray_SetSize((unsigned __int16 *)v4, v23 + v4->growSize);
  NiTArray_SetAt(v4, v23, &a2);
  v25 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pTarget", *((_DWORD *)this + 0xC));
  v26 = v4->end;
  v27 = v4->capacity;
  a2 = v25;
  if ( v26 >= v27 )
    NiTArray_SetSize((unsigned __int16 *)v4, v26 + v4->growSize);
  NiTArray_SetAt(v4, v26, &a2);
  v28 = (unsigned __int16 *)sub_7158A0("anim type", *(this + 8) & 1);
  v29 = v4->end;
  v30 = v4->capacity;
  a2 = v28;
  if ( v29 >= v30 )
    NiTArray_SetSize((unsigned __int16 *)v4, v29 + v4->growSize);
  NiTArray_SetAt(v4, v29, &a2);
  v31 = (unsigned __int16 *)sub_715910("cycle type", (*(this + 8) >> 1) & 3);
  v32 = v4->end;
  v33 = v4->capacity;
  a2 = v31;
  if ( v32 >= v33 )
    NiTArray_SetSize((unsigned __int16 *)v4, v32 + v4->growSize);
  NiTArray_SetAt(v4, v32, &a2);
  LOBYTE(a2) = (*(this + 8) & 8) != 0;
  v34 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Active", (char)a2);
  v35 = v4->end;
  v36 = v4->capacity;
  a2 = v34;
  if ( v35 >= v36 )
    NiTArray_SetSize((unsigned __int16 *)v4, v35 + v4->growSize);
  NiTArray_SetAt(v4, v35, &a2);
  LOBYTE(a2) = (*(this + 8) & 0x10) != 0;
  v37 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Play Backwards", (char)a2);
  v38 = v4->end;
  a2 = v37;
  if ( v38 >= v4->capacity )
    NiTArray_SetSize((unsigned __int16 *)v4, v38 + v4->growSize);
  return NiTArray_SetAt(v4, v38, &a2);
}
