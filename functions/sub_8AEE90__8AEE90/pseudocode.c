unsigned int __thiscall sub_8AEE90(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  char *v8; // eax
  unsigned int v9; // edi
  char *v11; // [esp+18h] [ebp-88h] BYREF
  float v12[9]; // [esp+1Ch] [ebp-84h] BYREF
  float v13[4]; // [esp+40h] [ebp-60h] BYREF
  __m128 v14[3]; // [esp+50h] [ebp-50h] BYREF
  __m128 v15; // [esp+80h] [ebp-20h] BYREF

  sub_8AED00(this, a2); /*0x8aeeb3*/
  v3 = TESOutput_PrintString((char *)stru_BA7F6C.name); /*0x8aeebe*/
  v4 = a2[5]; /*0x8aeec3*/
  v5 = a2[4]; /*0x8aeec7*/
  v11 = v3; /*0x8aeed0*/
  if ( v4 >= v5 ) /*0x8aeed4*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8aeedf*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v11); /*0x8aeeec*/
  bhkRefObject_CopyHavokObjectTransform(this, v14); /*0x8aeef8*/
  sub_607740((int)v12, v14); /*0x8aef07*/
  HavokVector_ToWorldVector(v13, &v15); /*0x8aef19*/
  v6 = sub_711A50(v12, (char *)&off_A97270); /*0x8aef2a*/
  v7 = a2[5]; /*0x8aef2f*/
  v11 = v6; /*0x8aef33*/
  if ( v7 >= a2[4] ) /*0x8aef3d*/
    NiTArray_SetSize(a2, v7 + a2[7]); /*0x8aef48*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v7, &v11); /*0x8aef55*/
  v8 = sub_707280(v13, "Trans"); /*0x8aef63*/
  v9 = a2[5]; /*0x8aef68*/
  v11 = v8; /*0x8aef6c*/
  if ( v9 >= a2[4] ) /*0x8aef76*/
    NiTArray_SetSize(a2, v9 + a2[7]); /*0x8aef81*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v11); /*0x8aef93*/
}
