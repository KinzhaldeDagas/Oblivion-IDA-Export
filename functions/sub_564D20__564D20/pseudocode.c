unsigned int __userpurge sub_564D20@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // ebx
  char *v7; // eax
  bool v8; // zf
  unsigned int v9; // ebx
  char *v10; // eax
  unsigned int v11; // edi
  int v13; // [esp-8h] [ebp-14h]

  v3 = a3; /*0x564d22*/
  sub_70BAE0(this, a2, a3); /*0x564d2a*/
  v5 = TESOutput_PrintString("BSTreeNode"); /*0x564d34*/
  end = v3->end; /*0x564d39*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x564d3d*/
  if ( end >= v3->capacity ) /*0x564d4a*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x564d55*/
  NiTArray_SetAt(v3, end, &a3); /*0x564d62*/
  if ( *((_DWORD *)this + 0x37) ) /*0x564d67*/
  {
    v7 = (char *)FormHeapAlloc(0x20u); /*0x564d72*/
    v8 = *(_DWORD *)(*((_DWORD *)this + 0x37) + 8) == 2; /*0x564d80*/
    a3 = (NiTArray_NiTexturingPropertyMap *)v7; /*0x564d84*/
    if ( v8 ) /*0x564d88*/
      _sprintf(v7, "Type = Instance"); /*0x564d8f*/
    else
      _sprintf(v7, "Type = Base"); /*0x564d97*/
    v9 = v3->end; /*0x564d9c*/
    if ( v9 >= v3->capacity ) /*0x564da9*/
      NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x564db4*/
    NiTArray_SetAt(v3, v9, &a3); /*0x564dc1*/
    v10 = (char *)FormHeapAlloc(0x20u); /*0x564dc8*/
    v13 = *(_DWORD *)(*((_DWORD *)this + 0x37) + 0x48); /*0x564dd6*/
    a3 = (NiTArray_NiTexturingPropertyMap *)v10; /*0x564ddd*/
    _sprintf(v10, "Seed = %d", v13); /*0x564de1*/
  }
  else
  {
    a3 = (NiTArray_NiTexturingPropertyMap *)FormHeapAlloc(0x20u); /*0x564df6*/
    _sprintf((char *)a3, "-No Model-"); /*0x564dfa*/
  }
  v11 = v3->end; /*0x564e06*/
  if ( v11 >= v3->capacity ) /*0x564e0c*/
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize); /*0x564e17*/
  return NiTArray_SetAt(v3, v11, &a3); /*0x564e29*/
}
