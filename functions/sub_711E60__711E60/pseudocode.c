unsigned int __thiscall sub_711E60(int *this, unsigned __int16 *a2)
{
  char *v3; // eax
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned __int16 *v7; // eax
  unsigned int end; // edi
  unsigned int capacity; // edx
  char *v11; // [esp+Ch] [ebp-4h] BYREF

  v3 = TESOutput_PrintString((char *)stru_B3FB00.name); /*0x711e6c*/
  v4 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x711e71*/
  v5 = a2[5]; /*0x711e75*/
  v6 = a2[4]; /*0x711e79*/
  v11 = v3; /*0x711e82*/
  if ( v5 >= v6 ) /*0x711e86*/
    NiTArray_SetSize(a2, v5 + a2[7]); /*0x711e91*/
  NiTArray_SetAt(v4, v5, &v11); /*0x711e9e*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_pkSceneObject", *(this + 2)); /*0x711eac*/
  end = v4->end; /*0x711eb1*/
  capacity = v4->capacity; /*0x711eb5*/
  a2 = v7; /*0x711ebe*/
  if ( end >= capacity ) /*0x711ec2*/
    NiTArray_SetSize((unsigned __int16 *)v4, end + v4->growSize); /*0x711ecd*/
  return NiTArray_SetAt(v4, end, &a2); /*0x711edf*/
}
