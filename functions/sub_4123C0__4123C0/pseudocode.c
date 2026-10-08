int __cdecl sub_4123C0(float *a1, char a2, signed int *a3, signed int *a4)
{
  signed int v4; // edi
  signed int v5; // esi
  signed int v6; // edi
  int result; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]

  if ( a2 ) /*0x4123d1*/
  {
    v9 = (int)a1[1]; /*0x4123ee*/
    v4 = (int)*a1 - (((int)*a1 - 0x800) & 0xFFFFF000) - 0x800; /*0x412418*/
    *a3 = v4; /*0x41241e*/
    *a3 = v4 / Double_To_SInt32(flt_B03174); /*0x412432*/
    v5 = (int)a1[1] - ((v9 - 0x800) & 0xFFFFF000) - 0x800; /*0x412459*/
  }
  else
  {
    v8 = (int)a1[1]; /*0x412478*/
    v6 = (int)*a1 - ((int)*a1 & 0xFFFFF000); /*0x41249c*/
    *a3 = v6; /*0x41249e*/
    *a3 = v6 / Double_To_SInt32(flt_B03174); /*0x4124b2*/
    v5 = (int)a1[1] - (v8 & 0xFFFFF000); /*0x4124d1*/
  }
  *a4 = v5; /*0x4124d7*/
  result = v5 / Double_To_SInt32(flt_B03174); /*0x4124e9*/
  *a4 = result; /*0x4124eb*/
  return result; /*0x4124ed*/
}
