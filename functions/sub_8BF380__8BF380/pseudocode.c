void __thiscall sub_8BF380(int *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // edi
  int v4; // eax
  double v5; // st7
  char *v6; // eax
  unsigned int end; // ebx
  int v8; // eax
  double v9; // st7
  char *v10; // eax
  unsigned int v11; // ebx
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // esi

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2); /*0x8bf383*/
  sub_8A0D20(this, (unsigned __int16 *)LODWORD(a2)); /*0x8bf38a*/
  v4 = *(this + 1); /*0x8bf38f*/
  if ( v4 ) /*0x8bf394*/
    v5 = *(float *)(v4 + 0x14); /*0x8bf396*/
  else
    v5 = 0.0; /*0x8bf39b*/
  a2 = v5; /*0x8bf39d*/
  v6 = TESOutput_PrintLabeledFloat("DAMPING", a2); /*0x8bf3ae*/
  end = v2->end; /*0x8bf3b3*/
  a2 = *(float *)&v6; /*0x8bf3b7*/
  if ( end >= v2->capacity ) /*0x8bf3c4*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8bf3cf*/
  NiTArray_SetAt(v2, end, &a2); /*0x8bf3dc*/
  v8 = *(this + 1); /*0x8bf3e1*/
  if ( v8 ) /*0x8bf3e6*/
    v9 = *(float *)(v8 + 0x10); /*0x8bf3e8*/
  else
    v9 = 0.0; /*0x8bf3ed*/
  a2 = v9; /*0x8bf3ef*/
  v10 = TESOutput_PrintLabeledFloat((char *)&off_A98854, a2); /*0x8bf400*/
  v11 = v2->end; /*0x8bf405*/
  a2 = *(float *)&v10; /*0x8bf409*/
  if ( v11 >= v2->capacity ) /*0x8bf416*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x8bf421*/
  NiTArray_SetAt(v2, v11, &a2); /*0x8bf42e*/
  v12 = *(this + 1); /*0x8bf433*/
  if ( v12 ) /*0x8bf438*/
    v13 = *(_DWORD *)(v12 + 0xC); /*0x8bf43a*/
  else
    v13 = 0; /*0x8bf43f*/
  if ( v13 ) /*0x8bf443*/
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0xC))(v13); /*0x8bf44c*/
    v15 = sub_8E7E60(v14); /*0x8bf44f*/
    v16 = v15; /*0x8bf454*/
    if ( v15 ) /*0x8bf45b*/
    {
      sub_8A0200(v15, v13); /*0x8bf460*/
      (*(void (__thiscall **)(_DWORD *, NiTArray_NiTexturingPropertyMap *))(*v16 + 0x14))(v16, v2); /*0x8bf46d*/
      *v16 = &hkConstraintCinfo::`vftable'; /*0x8bf473*/
      sub_8A0200(v16, 0); /*0x8bf479*/
      FormHeapFree((unsigned int)v16); /*0x8bf47f*/
    }
  }
}
