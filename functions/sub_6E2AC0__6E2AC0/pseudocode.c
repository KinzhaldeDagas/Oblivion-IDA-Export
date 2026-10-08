unsigned int __userpurge sub_6E2AC0@<eax>(unsigned __int8 *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx

  v3 = (NiTArray_NiTexturingPropertyMap *)a3; /*0x6e2ac2*/
  sub_6ED000(this, a2, a3); /*0x6e2aca*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E128.name); /*0x6e2ad5*/
  end = v3->end; /*0x6e2ada*/
  capacity = v3->capacity; /*0x6e2ade*/
  a3 = v5; /*0x6e2ae7*/
  if ( end >= capacity ) /*0x6e2aeb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x6e2af6*/
  NiTArray_SetAt(v3, end, &a3); /*0x6e2b03*/
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledSignedInt("m_iFloatsExtraDataIndex", *((_DWORD *)this + 0x12)); /*0x6e2b11*/
  v9 = v3->end; /*0x6e2b16*/
  v10 = v3->capacity; /*0x6e2b1a*/
  a3 = v8; /*0x6e2b23*/
  if ( v9 >= v10 ) /*0x6e2b27*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x6e2b32*/
  return NiTArray_SetAt(v3, v9, &a3); /*0x6e2b44*/
}
