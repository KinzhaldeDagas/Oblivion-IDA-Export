char *__thiscall sub_5215C0(_DWORD *this, char *a2)
{
  char *v3; // edi
  char *result; // eax
  char *v5; // esi
  char *v6; // eax

  v3 = a2; /*0x5215e5*/
  result = 0; /*0x5215e9*/
  if ( a2 ) /*0x5215ed*/
  {
    if ( *a2 ) /*0x5215f3*/
    {
      a2 = 0; /*0x5215fb*/
      v5 = 0; /*0x521605*/
      if ( NiTMap_GetAt(this, (int)v3, &a2) ) /*0x521607*/
      {
        if ( a2 ) /*0x521616*/
          v5 = a2; /*0x521618*/
      }
      if ( !v5 ) /*0x52161c*/
      {
        v6 = (char *)FormHeapAlloc(0x24u); /*0x521620*/
        a2 = v6; /*0x521628*/
        if ( v6 ) /*0x521632*/
          v5 = (char *)sub_521340(v6); /*0x52163b*/
        else
          v5 = 0; /*0x52163f*/
        BSStringT_Set((BSStringT *)v5 + 3, v3, 0); /*0x52164f*/
        NiTLargeArray_Resize32((unsigned int *)v5, 1u); /*0x521658*/
        *((_DWORD *)v5 + 5) = 1; /*0x52165f*/
        *((_DWORD *)v5 + 8) = BuildKFListForModelDirectory(v3, 1); /*0x521676*/
        sub_412D30(this, (int)v3, (TESForm *)v5); /*0x521679*/
      }
      return v5; /*0x52167e*/
    }
  }
  return result; /*0x521680*/
}
