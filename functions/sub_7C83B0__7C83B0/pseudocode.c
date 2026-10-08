// Pass231: BSFogProperty debug/text dump; prints fog start at +0x2C and fog end at +0x30 after base NiFogProperty dump.
unsigned int __userpurge sub_7C83B0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned __int16 *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x7c83b2*/
  sub_7411F0(this, a2, a3); /*0x7c83ba*/
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B43484); /*0x7c83c5*/
  end = v3->end; /*0x7c83ca*/
  capacity = v3->capacity; /*0x7c83ce*/
  a3 = v5; /*0x7c83d7*/
  if ( end >= capacity ) /*0x7c83db*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x7c83e6*/
  NiTArray_SetAt(v3, end, &a3); /*0x7c83f3*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("fog start distance", *(this + 0xB)); /*0x7c8404*/
  v9 = v3->end; /*0x7c8409*/
  v10 = v3->capacity; /*0x7c840d*/
  a3 = v8; /*0x7c8416*/
  if ( v9 >= v10 ) /*0x7c841a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x7c8425*/
  NiTArray_SetAt(v3, v9, &a3); /*0x7c8432*/
  v11 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("fog end distance", *(this + 0xC)); /*0x7c8443*/
  v12 = v3->end; /*0x7c8448*/
  v13 = v3->capacity; /*0x7c844c*/
  a3 = v11; /*0x7c8455*/
  if ( v12 >= v13 ) /*0x7c8459*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x7c8464*/
  return NiTArray_SetAt(v3, v12, &a3); /*0x7c8476*/
}
