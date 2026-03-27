void __thiscall sub_8BFBA0(int *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  int v4; // eax
  double v5; // st7
  char *v6; // eax
  unsigned int end; // edi
  int v8; // eax
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int capacity; // edx
  int v12; // eax
  char *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  int v16; // ebp
  int v17; // ebp
  int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2);
  sub_8A0D20(this, (unsigned __int16 *)LODWORD(a2));
  v4 = *(this + 1);
  if ( v4 )
    v5 = *(float *)(v4 + 0x14);
  else
    v5 = 0.0;
  a2 = v5;
  v6 = TESOutput_PrintLabeledFloat("Threshold", a2);
  end = v2->end;
  a2 = *(float *)&v6;
  if ( end >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v8 = *(this + 1);
  if ( v8 )
    LOBYTE(a2) = *(_BYTE *)(v8 + 0x19);
  else
    LOBYTE(a2) = 0;
  v9 = TESOutput_PrintLabeledBool("RemIfBroke", LOBYTE(a2) != 0);
  v10 = v2->end;
  capacity = v2->capacity;
  a2 = *(float *)&v9;
  if ( v10 >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v12 = *(this + 1);
  if ( v12 )
    LOBYTE(a2) = *(_BYTE *)(v12 + 0x18);
  else
    LOBYTE(a2) = 0;
  v13 = TESOutput_PrintLabeledBool("Broken", LOBYTE(a2) != 0);
  v14 = v2->end;
  v15 = v2->capacity;
  a2 = *(float *)&v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v16 = *(this + 1);
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 0xC);
  else
    v17 = 0;
  if ( v17 )
  {
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0xC))(v17);
    v19 = sub_8E7E60(v18);
    v20 = v19;
    if ( v19 )
    {
      sub_8A0200(v19, v17);
      (*(void (__thiscall **)(_DWORD *, NiTArray_NiTexturingPropertyMap *))(*v20 + 0x14))(v20, v2);
      *v20 = &hkConstraintCinfo::`vftable';
      sub_8A0200(v20, 0);
      FormHeapFree((unsigned int)v20);
    }
  }
}
