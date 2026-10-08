unsigned int __thiscall sub_8C3B30(_DWORD *this, unsigned __int16 *a2)
{
  char *v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // edi
  char *v8; // eax
  unsigned int v9; // edi
  char *v11; // [esp+Ch] [ebp-28h] BYREF
  char v12[32]; // [esp+10h] [ebp-24h] BYREF

  sub_8B04D0(this, a2); /*0x8c3b48*/
  v3 = TESOutput_PrintString((char *)stru_BA80F8.name); /*0x8c3b53*/
  v4 = a2[5]; /*0x8c3b58*/
  v5 = a2[4]; /*0x8c3b5c*/
  v11 = v3; /*0x8c3b65*/
  if ( v4 >= v5 ) /*0x8c3b69*/
    NiTArray_SetSize(a2, v4 + a2[7]); /*0x8c3b74*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v4, &v11); /*0x8c3b81*/
  if ( this && (v6 = *(this + 2)) != 0 ) /*0x8c3b8f*/
    v7 = *(_DWORD *)(v6 + 0x10); /*0x8c3b91*/
  else
    v7 = 0; /*0x8c3b96*/
  _sprintf(v12, "0x%8X", v7); /*0x8c3ba3*/
  v8 = TESOutput_PrintLabeledString("MoppCode", v12); /*0x8c3bb2*/
  v9 = a2[5]; /*0x8c3bb7*/
  v11 = v8; /*0x8c3bbb*/
  if ( v9 >= a2[4] ) /*0x8c3bc8*/
    NiTArray_SetSize(a2, v9 + a2[7]); /*0x8c3bd3*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a2, v9, &v11); /*0x8c3be5*/
}
