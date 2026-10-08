unsigned int __thiscall sub_7028C0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7028c2*/
  sub_701430(this, a2); /*0x7028ca*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F95C.name); /*0x7028d5*/
  end = v3->end; /*0x7028da*/
  capacity = v3->capacity; /*0x7028de*/
  a2 = v5; /*0x7028e7*/
  if ( end >= capacity ) /*0x7028eb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x7028f6*/
  NiTArray_SetAt(v3, end, &a2); /*0x702903*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledString("File:", (const char *)*(this + 0xE)); /*0x702911*/
  v9 = v3->end; /*0x702916*/
  v10 = v3->capacity; /*0x70291a*/
  a2 = v8; /*0x702923*/
  if ( v9 >= v10 ) /*0x702927*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x702932*/
  return NiTArray_SetAt(v3, v9, &a2); /*0x702944*/
}
