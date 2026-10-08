unsigned int __thiscall sub_73DCA0(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x73dca2*/
  sub_700B10(this, a2); /*0x73dcaa*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)NiRTTI_NiShadeProperty.name); /*0x73dcb5*/
  end = v3->end; /*0x73dcba*/
  capacity = v3->capacity; /*0x73dcbe*/
  a2 = v5; /*0x73dcc7*/
  if ( end >= capacity ) /*0x73dccb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x73dcd6*/
  NiTArray_SetAt(v3, end, &a2); /*0x73dce3*/
  LOBYTE(a2) = *(_BYTE *)(this + 6) & 1; /*0x73dcee*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bSmooth", (char)a2); /*0x73dcfc*/
  v9 = v3->end; /*0x73dd01*/
  a2 = v8; /*0x73dd05*/
  if ( v9 >= v3->capacity ) /*0x73dd12*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x73dd1d*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x73dd2f*/
}
