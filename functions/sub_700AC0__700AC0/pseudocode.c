int __thiscall sub_700AC0(NiRenderer *this, unsigned int *a2)
{
  unsigned int *v2; // esi
  int result; // eax
  int (__cdecl *v4)(unsigned int, unsigned int **, int, int *, int); // eax
  unsigned int v5; // [esp-14h] [ebp-1Ch]
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = a2; /*0x700ac2*/
  result = sub_6FFCE0(this, a2); /*0x700ac7*/
  if ( v2[0x36] < 0xA000102 ) /*0x700ad6*/
  {
    v5 = v2[0x87]; /*0x700aec*/
    v4 = *(int (__cdecl **)(unsigned int, unsigned int **, int, int *, int))(v5 + 4); /*0x700aed*/
    v6 = 2; /*0x700af0*/
    result = v4(v5, &a2, 2, &v6, 1); /*0x700af8*/
    *((_WORD *)v2 + 0x12E) = (_WORD)a2; /*0x700b02*/
  }
  return result; /*0x700b09*/
}
