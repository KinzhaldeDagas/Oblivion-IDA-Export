unsigned int __thiscall sub_5512A0(unsigned int **this)
{
  char v1; // dl
  unsigned int *v2; // eax
  unsigned int v3; // esi
  unsigned int v5; // [esp+4h] [ebp-8h] BYREF
  __int16 v6; // [esp+8h] [ebp-4h]
  __int16 v7; // [esp+Ah] [ebp-2h]

  v1 = 0; /*0x5512a3*/
  v5 = 0; /*0x5512a6*/
  v2 = *(this + 3); /*0x5512aa*/
  if ( !v2 ) /*0x5512b1*/
  {
    FormHeapFree(0); /*0x5512b4*/
    v5 = 0; /*0x5512bc*/
    v7 = 0; /*0x5512c0*/
    v6 = 0; /*0x5512c5*/
    v2 = &v5; /*0x5512ca*/
    v1 = 1; /*0x5512ce*/
  }
  v3 = *v2; /*0x5512d6*/
  if ( (v1 & 1) != 0 ) /*0x5512d8*/
    FormHeapFree(v5); /*0x5512df*/
  return v3; /*0x5512e9*/
}
