unsigned int __userpurge sub_4A1050@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // ebx
  char *v10; // eax
  unsigned int v11; // ebx
  char *v12; // eax
  unsigned int v13; // edi
  double v15; // [esp+0h] [ebp-14h]
  double v16; // [esp+0h] [ebp-14h]
  int v17; // [esp+0h] [ebp-14h]

  v3 = a3; /*0x4a1052*/
  sub_70BAE0(this, a2, a3); /*0x4a105a*/
  v5 = TESOutput_PrintString(*(char **)&MEMORY[0xB33E90][0x13F8]); /*0x4a1065*/
  end = v3->end; /*0x4a106a*/
  capacity = v3->capacity; /*0x4a106e*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x4a1077*/
  if ( end >= capacity ) /*0x4a107b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x4a1086*/
  NiTArray_SetAt(v3, end, &a3); /*0x4a1093*/
  v8 = (char *)FormHeapAlloc(0x20u); /*0x4a109a*/
  v15 = *(this + 0x38); /*0x4a10a6*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x4a10af*/
  _sprintf(v8, "fNearDistSqr = %.2f", v15); /*0x4a10b3*/
  v9 = v3->end; /*0x4a10b8*/
  if ( v9 >= v3->capacity ) /*0x4a10c5*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x4a10d0*/
  NiTArray_SetAt(v3, v9, &a3); /*0x4a10dd*/
  v10 = (char *)FormHeapAlloc(0x20u); /*0x4a10e4*/
  v16 = *(this + 0x39); /*0x4a10f0*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v10; /*0x4a10f9*/
  _sprintf(v10, "fFarDistSqr = %.2f", v16); /*0x4a10fd*/
  v11 = v3->end; /*0x4a1102*/
  if ( v11 >= v3->capacity ) /*0x4a110f*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x4a111a*/
  NiTArray_SetAt(v3, v11, &a3); /*0x4a1127*/
  v12 = (char *)FormHeapAlloc(0x20u); /*0x4a112e*/
  v17 = *((unsigned __int8 *)this + 0xEC); /*0x4a113a*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v12; /*0x4a1141*/
  _sprintf(v12, "cMultType = %d", v17); /*0x4a1145*/
  v13 = v3->end; /*0x4a114a*/
  if ( v13 >= v3->capacity ) /*0x4a1157*/
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize); /*0x4a1162*/
  return NiTArray_SetAt(v3, v13, &a3); /*0x4a1174*/
}
