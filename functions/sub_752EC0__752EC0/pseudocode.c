unsigned int __thiscall sub_752EC0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x752ec2*/
  sub_7009A0(this, a2); /*0x752eca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40D08.name); /*0x752ed5*/
  end = v2->end; /*0x752eda*/
  capacity = v2->capacity; /*0x752ede*/
  a2 = v4; /*0x752ee7*/
  if ( end >= capacity ) /*0x752eeb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x752ef6*/
  NiTArray_SetAt(v2, end, &a2); /*0x752f03*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledString("Name", *((const char **)this + 2)); /*0x752f11*/
  v8 = v2->end; /*0x752f16*/
  v9 = v2->capacity; /*0x752f1a*/
  a2 = v7; /*0x752f23*/
  if ( v8 >= v9 ) /*0x752f27*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x752f32*/
  NiTArray_SetAt(v2, v8, &a2); /*0x752f3f*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("Order", *((_DWORD *)this + 3)); /*0x752f4d*/
  v11 = v2->end; /*0x752f52*/
  a2 = v10; /*0x752f56*/
  if ( v11 >= v2->capacity ) /*0x752f63*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x752f6e*/
  NiTArray_SetAt(v2, v11, &a2); /*0x752f7b*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Active", *((_BYTE *)this + 0x14)); /*0x752f8a*/
  v13 = v2->end; /*0x752f8f*/
  v14 = v2->capacity; /*0x752f93*/
  a2 = v12; /*0x752f9c*/
  if ( v13 >= v14 ) /*0x752fa0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x752fab*/
  return NiTArray_SetAt(v2, v13, &a2); /*0x752fbd*/
}
