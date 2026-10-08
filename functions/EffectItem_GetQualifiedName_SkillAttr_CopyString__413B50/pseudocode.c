// positive sp value has been detected, the output may be wrong!
void __fastcall EffectItem_GetQualifiedName_SkillAttr_::CopyString(char *a1, _BYTE *a2, int a3)
{
  char v3; // al
  unsigned int v4; // [esp-8h] [ebp-8h]

  do /*0x413b5c*/
  {
    v3 = *a1; /*0x413b50*/
    *a2++ = *a1++; /*0x413b52*/
  }
  while ( v3 ); /*0x413b5c*/
  FormHeapFree(v4); /*0x413b63*/
}
