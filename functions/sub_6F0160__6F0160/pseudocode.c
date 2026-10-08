int __thiscall sub_6F0160(int *this, int a2, int a3, unsigned int a4, int *a5)
{
  int result; // eax
  int v7; // ebx
  __int16 v8; // dx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  unsigned int v20; // edi
  int v21; // [esp-1Ch] [ebp-48h]
  int v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-8h] [ebp-34h]
  int v24; // [esp+0h] [ebp-2Ch] BYREF
  int v25; // [esp+10h] [ebp-1Ch] BYREF
  __int16 v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  int *v28; // [esp+1Ch] [ebp-10h]
  int v29; // [esp+28h] [ebp-4h]
  int v30; // [esp+3Ch] [ebp+10h]
  int v31; // [esp+40h] [ebp+14h]
  int v32; // [esp+40h] [ebp+14h]

  v28 = &v24; /*0x6f0188*/
  result = (int)a5; /*0x6f018d*/
  v7 = *(this + 1); /*0x6f0190*/
  v8 = *((_WORD *)a5 + 2); /*0x6f0197*/
  v25 = *a5; /*0x6f019b*/
  v26 = v8; /*0x6f019e*/
  if ( v7 ) /*0x6f01a2*/
  {
    result = 0x2AAAAAAB * (*(this + 3) - v7); /*0x6f01b2*/
    v9 = (*(this + 3) - v7) / 6; /*0x6f01b9*/
  }
  else
  {
    v9 = 0; /*0x6f01a4*/
  }
  if ( a4 ) /*0x6f01c0*/
  {
    if ( v7 ) /*0x6f01c8*/
      v10 = (*(this + 2) - v7) / 6; /*0x6f01df*/
    else
      v10 = 0; /*0x6f01ca*/
    if ( 0xFFFFFFFF - v10 < a4 ) /*0x6f01e8*/
      OB_stVector_ThrowLengthError_010201A0(a4); /*0x6f01ea*/
    if ( v7 ) /*0x6f01f1*/
      v11 = (*(this + 2) - v7) / 6; /*0x6f0208*/
    else
      v11 = 0; /*0x6f01f3*/
    if ( v9 >= a4 + v11 ) /*0x6f020e*/
    {
      v19 = *(this + 2); /*0x6f031e*/
      v32 = v19; /*0x6f0338*/
      if ( (v19 - a3) / 6 >= a4 ) /*0x6f033b*/
      {
        v20 = 6 * a4; /*0x6f03af*/
        v30 = v19 - 6 * a4; /*0x6f03b7*/
        *(this + 2) = sub_6F0130(v30, v19, v19); /*0x6f03c2*/
        sub_6F0100(a3, v30, v32); /*0x6f03cb*/
        return sub_6F0090(a3, a3 + v20, (int)&v25); /*0x6f03d8*/
      }
      else
      {
        sub_6F0130(a3, v19, a3 + 6 * a4); /*0x6f034c*/
        v23 = a4 - (*(this + 2) - a3) / 6; /*0x6f036c*/
        v22 = *(this + 2); /*0x6f036d*/
        v29 = 2; /*0x6f0370*/
        sub_6F00C0(v22, v23, (int)&v25); /*0x6f0377*/
        *(this + 2) += 6 * a4; /*0x6f037f*/
        return sub_6F0090(a3, *(this + 2) - 6 * a4, (int)&v25); /*0x6f038d*/
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v9 >> 1) >= v9 ) /*0x6f021f*/
        v12 = (v9 >> 1) + v9; /*0x6f0225*/
      else
        v12 = 0; /*0x6f0221*/
      if ( v7 ) /*0x6f0229*/
        v13 = (*(this + 2) - v7) / 6; /*0x6f0240*/
      else
        v13 = 0; /*0x6f022b*/
      if ( v12 < a4 + v13 ) /*0x6f0246*/
        v12 = a4 + sub_54F700(this); /*0x6f0251*/
      v27 = 6 * v12; /*0x6f0259*/
      v31 = FormHeapAlloc(6 * v12); /*0x6f026f*/
      v21 = *(this + 1); /*0x6f0279*/
      v29 = 0; /*0x6f027a*/
      v14 = sub_5567D0(v21, a3, v31); /*0x6f0281*/
      v15 = sub_6F00C0(v14, a4, (int)&v25); /*0x6f0291*/
      sub_5567D0(a3, *(this + 2), v15); /*0x6f02a9*/
      v16 = *(this + 1); /*0x6f02ae*/
      if ( v16 ) /*0x6f02b6*/
        v17 = (*(this + 2) - v16) / 6; /*0x6f02cd*/
      else
        v17 = 0; /*0x6f02b8*/
      v18 = v17 + a4; /*0x6f02cf*/
      if ( v16 ) /*0x6f02d3*/
        FormHeapFree(*(this + 1)); /*0x6f02d6*/
      *(this + 3) = v31 + v27; /*0x6f02e9*/
      *(this + 2) = v31 + 6 * v18; /*0x6f02ef*/
      *(this + 1) = v31; /*0x6f02f2*/
      return v31; /*0x6f02de*/
    }
  }
  return result; /*0x6f02f5*/
}
