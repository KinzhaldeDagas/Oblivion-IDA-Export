void __thiscall sub_6CBAD0(float *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // ebx
  unsigned __int16 *v6; // eax
  unsigned int end; // ebx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  char *v12; // [esp+10h] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((int)"NiQuatTransform");
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  v12 = v3;
  if ( v5 >= a2[4] )
    NiTArray_SetSize(a2, v5 + a2[7]);
  NiTArray_SetAt(v4, v5, &v12);
  if ( -flt_A7DEB4 != *this )
  {
    v6 = (unsigned __int16 *)sub_707280(this, (int)"m_kTranslate");
    end = v4->end;
    a2 = v6;
    if ( end >= v4->capacity )
      NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize);
    NiTArray_SetAt(v4, end, &a2);
  }
  if ( -flt_A7DEB4 != *(this + 4) )
  {
    v8 = (unsigned __int16 *)sub_7153C0(this + 3, (int)"m_kRotate");
    v9 = v4->end;
    a2 = v8;
    if ( v9 >= v4->capacity )
      NiTArray_SetSize((unsigned __int16 *)v4, v9 + v4->growSize);
    NiTArray_SetAt(v4, v9, &a2);
  }
  if ( -flt_A7DEB4 != *(this + 7) )
  {
    v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fScale", *(this + 7));
    v11 = v4->end;
    a2 = v10;
    if ( v11 >= v4->capacity )
      NiTArray_SetSize((unsigned __int16 *)v4, v11 + v4->growSize);
    NiTArray_SetAt(v4, v11, &a2);
  }
}
