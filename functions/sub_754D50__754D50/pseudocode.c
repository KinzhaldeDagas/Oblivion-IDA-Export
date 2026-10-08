unsigned int __thiscall sub_754D50(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x754d52*/
  sub_75F110(this, a2); /*0x754d5a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40ED0.name); /*0x754d65*/
  end = v2->end; /*0x754d6a*/
  capacity = v2->capacity; /*0x754d6e*/
  a2 = v4; /*0x754d77*/
  if ( end >= capacity ) /*0x754d7b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x754d86*/
  NiTArray_SetAt(v2, end, &a2); /*0x754d93*/
  v7 = *((_DWORD *)this + 0xB); /*0x754d98*/
  if ( v7 ) /*0x754d9d*/
    v8 = *(const char **)(v7 + 8); /*0x754d9f*/
  else
    v8 = "None"; /*0x754da4*/
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Collider Object", v8); /*0x754daf*/
  v10 = v2->end; /*0x754db4*/
  v11 = v2->capacity; /*0x754db8*/
  a2 = v9; /*0x754dc1*/
  if ( v10 >= v11 ) /*0x754dc5*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x754dd0*/
  NiTArray_SetAt(v2, v10, &a2); /*0x754ddd*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Radius", *(this + 0xC)); /*0x754dee*/
  v13 = v2->end; /*0x754df3*/
  v14 = v2->capacity; /*0x754df7*/
  a2 = v12; /*0x754e00*/
  if ( v13 >= v14 ) /*0x754e04*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x754e0f*/
  return NiTArray_SetAt(v2, v13, &a2); /*0x754e21*/
}
