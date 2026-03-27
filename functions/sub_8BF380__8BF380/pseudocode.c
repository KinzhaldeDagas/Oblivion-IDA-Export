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

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2);
  sub_8A0D20(this, (unsigned __int16 *)LODWORD(a2));
  v4 = *(this + 1);
  if ( v4 )
    v5 = *(float *)(v4 + 0x14);
  else
    v5 = 0.0;
  a2 = v5;
  v6 = TESOutput_PrintLabeledFloat("DAMPING", a2);
  end = v2->end;
  a2 = *(float *)&v6;
  if ( end >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v8 = *(this + 1);
  if ( v8 )
    v9 = *(float *)(v8 + 0x10);
  else
    v9 = 0.0;
  a2 = v9;
  v10 = TESOutput_PrintLabeledFloat((char *)&off_A98854, a2);
  v11 = v2->end;
  a2 = *(float *)&v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = *(this + 1);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 0xC);
  else
    v13 = 0;
  if ( v13 )
  {
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0xC))(v13);
    v15 = sub_8E7E60(v14);
    v16 = v15;
    if ( v15 )
    {
      sub_8A0200(v15, v13);
      (*(void (__thiscall **)(_DWORD *, NiTArray_NiTexturingPropertyMap *))(*v16 + 0x14))(v16, v2);
      *v16 = &hkConstraintCinfo::`vftable';
      sub_8A0200(v16, 0);
      FormHeapFree((unsigned int)v16);
    }
  }
}
