unsigned int __thiscall sub_706820(int *this, unsigned __int16 *a2)
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

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x706822*/
  sub_700B10(this, a2); /*0x70682a*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F978.name); /*0x706835*/
  end = v3->end; /*0x70683a*/
  capacity = v3->capacity; /*0x70683e*/
  a2 = v5; /*0x706847*/
  if ( end >= capacity ) /*0x70684b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x706856*/
  NiTArray_SetAt(v3, end, &a2); /*0x706863*/
  v8 = (unsigned __int16 *)sub_7063B0("Source Mode", (*((unsigned __int8 *)this + 0x18) >> 4) & 3); /*0x706878*/
  v9 = v3->end; /*0x70687d*/
  v10 = v3->capacity; /*0x706881*/
  a2 = v8; /*0x70688a*/
  if ( v9 >= v10 ) /*0x70688e*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x706899*/
  NiTArray_SetAt(v3, v9, &a2); /*0x7068a6*/
  v11 = (unsigned __int16 *)sub_706430("Lighting Mode", (*((unsigned __int8 *)this + 0x18) >> 3) & 1); /*0x7068bb*/
  v12 = v3->end; /*0x7068c0*/
  v13 = v3->capacity; /*0x7068c4*/
  a2 = v11; /*0x7068cd*/
  if ( v12 >= v13 ) /*0x7068d1*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x7068dc*/
  return NiTArray_SetAt(v3, v12, &a2); /*0x7068ee*/
}
