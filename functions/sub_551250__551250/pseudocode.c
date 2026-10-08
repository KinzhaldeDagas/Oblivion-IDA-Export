unsigned int __thiscall sub_551250(unsigned int **this)
{
  char v1; // dl
  unsigned int *v2; // eax
  unsigned int v3; // esi
  unsigned int v5; // [esp+4h] [ebp-8h] BYREF
  __int16 v6; // [esp+8h] [ebp-4h]
  __int16 v7; // [esp+Ah] [ebp-2h]

  v1 = 0; /*0x551253*/
  v5 = 0; /*0x551256*/
  v2 = *(this + 2); /*0x55125a*/
  if ( !v2 ) /*0x551261*/
  {
    FormHeapFree(0); /*0x551264*/
    v5 = 0; /*0x55126c*/
    v7 = 0; /*0x551270*/
    v6 = 0; /*0x551275*/
    v2 = &v5; /*0x55127a*/
    v1 = 1; /*0x55127e*/
  }
  v3 = *v2; /*0x551286*/
  if ( (v1 & 1) != 0 ) /*0x551288*/
    FormHeapFree(v5); /*0x55128f*/
  return v3; /*0x551299*/
}
