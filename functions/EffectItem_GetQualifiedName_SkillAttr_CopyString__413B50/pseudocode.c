// positive sp value has been detected, the output may be wrong!
void __fastcall EffectItem_GetQualifiedName_SkillAttr_::CopyString(char *a1, _BYTE *a2, int a3)
{
  char v3; // al
  unsigned int v4; // [esp-8h] [ebp-8h]

  do
  {
    v3 = *a1;
    *a2++ = *a1++;
  }
  while ( v3 );
  FormHeapFree(v4);
}
