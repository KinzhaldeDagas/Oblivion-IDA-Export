// positive sp value has been detected, the output may be wrong!
int __userpurge EffectItem_BuildDisplayString_::AppendRange@<eax>(
        BSStringT *a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  char *v12; // [esp-10h] [ebp-10h]
  char *v13; // [esp-Ch] [ebp-Ch]

  _sprintf((int)a1, a2, v12, v13); /*0x413f7c*/
  BSStringT_Append(a1, &a11); /*0x413f8b*/
  return EffectItem_BuildDisplayString_::Done((int)a1, a3, a4, a5, a6, a7, a8);
}
