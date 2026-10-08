void __thiscall __noreturn sub_6F05C0(_DWORD *this, int a2, float *a3, unsigned int a4, float *a5)
{
  int v6; // edi
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int *v12; // eax
  float *v13; // ecx
  float *v14; // ecx
  float v15[5]; // [esp+0h] [ebp-40h] BYREF
  int v16; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v17; // [esp+18h] [ebp-28h]
  int v18; // [esp+24h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-18h]
  _DWORD *v20; // [esp+2Ch] [ebp-14h]
  float *v21; // [esp+30h] [ebp-10h]
  int v22; // [esp+3Ch] [ebp-4h]

  v21 = v15; /*0x6f05e8*/
  v20 = this; /*0x6f05ed*/
  v15[4] = *a5; /*0x6f05f9*/
  sub_557250(&v16, (int)(a5 + 1)); /*0x6f05ff*/
  v6 = *(this + 1); /*0x6f0604*/
  v7 = 0; /*0x6f0607*/
  v22 = 0; /*0x6f060b*/
  if ( v6 ) /*0x6f060e*/
    v7 = (*(this + 3) - v6) / 0x14; /*0x6f0624*/
  if ( a4 ) /*0x6f062b*/
  {
    if ( v6 ) /*0x6f0633*/
      v8 = (*(this + 2) - v6) / 0x14; /*0x6f064d*/
    else
      v8 = 0; /*0x6f0635*/
    if ( 0xFFFFFFFF - v8 < a4 ) /*0x6f0656*/
      OB_stVector_ThrowLengthError_010201A0(v6); /*0x6f0658*/
    if ( v6 ) /*0x6f065f*/
      v9 = (*(this + 2) - v6) / 0x14; /*0x6f0679*/
    else
      v9 = 0; /*0x6f0661*/
    if ( v7 < a4 + v9 ) /*0x6f067f*/
    {
      if ( 0xFFFFFFFF - (v7 >> 1) >= v7 ) /*0x6f0690*/
        v10 = (v7 >> 1) + v7; /*0x6f0696*/
      else
        v10 = 0; /*0x6f0692*/
      if ( v6 ) /*0x6f069a*/
        v11 = (*(this + 2) - v6) / 0x14; /*0x6f06b4*/
      else
        v11 = 0; /*0x6f069c*/
      if ( v10 < a4 + v11 ) /*0x6f06ba*/
        v10 = a4 + sub_54F720(this); /*0x6f06c5*/
      v18 = 0x14 * v10; /*0x6f06cf*/
      v12 = (unsigned int *)FormHeapAlloc(0x14 * v10); /*0x6f06d2*/
      v13 = (float *)*(this + 1); /*0x6f06da*/
      LOBYTE(v19) = 0; /*0x6f06dd*/
      LOBYTE(v22) = 1; /*0x6f06f3*/
      sub_557880(v13, a3, v12); /*0x6f06f7*/
    }
    v14 = (float *)*(this + 2); /*0x6f07ad*/
    if ( ((char *)v14 - (char *)a3) / 0x14 < a4 ) /*0x6f07cd*/
      sub_559300(a3, v14, (unsigned int *)&a3[5 * a4]); /*0x6f07e4*/
    sub_559300(&v14[0xFFFFFFFB * a4], v14, (unsigned int *)v14); /*0x6f0884*/
  }
  if ( v17 ) /*0x6f08c0*/
    FormHeapFree(v17); /*0x6f08c3*/
}
