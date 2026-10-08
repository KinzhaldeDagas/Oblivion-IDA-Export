bhkRefObject *__cdecl sub_8D2770(int *a1)
{
  bhkRefObject *v1; // esi
  bool v2; // zf
  bhkRefObject *v3; // eax
  int v5[2]; // [esp+8h] [ebp-2Ch] BYREF
  int v6[3]; // [esp+10h] [ebp-24h] BYREF
  _DWORD v7[3]; // [esp+1Ch] [ebp-18h] BYREF
  unsigned int v8; // [esp+30h] [ebp-4h]

  v1 = 0; /*0x8d2794*/
  v5[0] = 0; /*0x8d279b*/
  v6[0] = 0; /*0x8d279f*/
  v6[1] = 0; /*0x8d27a3*/
  v6[2] = 0x80000000; /*0x8d27a7*/
  v7[0] = 0; /*0x8d27ab*/
  v7[1] = 0; /*0x8d27af*/
  v7[2] = 0x80000000; /*0x8d27b3*/
  *(float *)&v5[1] = flt_B2EFC4; /*0x8d27c1*/
  v2 = a1[1] == 0; /*0x8d27c5*/
  v8 = 0; /*0x8d27c8*/
  if ( !v2 ) /*0x8d27cc*/
  {
    sub_917820(a1, (int)v7, v6); /*0x8d27d9*/
    v3 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8d27e0*/
    LOBYTE(v8) = 1; /*0x8d27ee*/
    if ( v3 ) /*0x8d27f3*/
      v1 = sub_8D26C0(v3, (float *)v5); /*0x8d2801*/
  }
  v8 = 0xFFFFFFFF; /*0x8d2807*/
  sub_8C8DB0(v5); /*0x8d280f*/
  return v1; /*0x8d2816*/
}
