int __usercall __loctotime64_t@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  __int64 v11; // kr18_8
  signed int v12; // eax
  int v13; // edx
  signed int v14; // eax
  int v15; // edx
  signed int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // [esp-Ch] [ebp-44h]
  int v20; // [esp-Ch] [ebp-44h]
  int v21; // [esp-Ch] [ebp-44h]
  _DWORD v22[9]; // [esp+4h] [ebp-34h] BYREF
  int v23; // [esp+28h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-Ch] BYREF
  int v25; // [esp+30h] [ebp-8h] BYREF
  int v26; // [esp+34h] [ebp-4h] BYREF
  int v27; // [esp+40h] [ebp+8h]

  v9 = a3 - 0x76C; /*0x9920bc*/
  v25 = 0; /*0x9920c8*/
  v24 = 0; /*0x9920cb*/
  v26 = 0; /*0x9920ce*/
  v23 = a3 - 0x76C; /*0x9920d1*/
  if ( a3 - 0x76C < 0x46 || v9 > 0x44C ) /*0x9920dc*/
    goto LABEL_3; /*0x9920dc*/
  a1 = a4; /*0x992102*/
  if ( (unsigned int)(a4 - 1) <= 0xB && (unsigned int)a6 <= 0x17 && (unsigned int)a7 <= 0x3B && (unsigned int)a8 <= 0x3B ) /*0x99211d*/
  {
    if ( a5 < 1 /*0x992196*/
      || (a2 = dword_B320B0[a4], dword_B320B4[a4] - a2 < a5)
      && ((v9 % 4 || !(v9 % 0x64)) && (a1 = 0x190, a3 % 0x190) || (a1 = a4, a4 != 2) || a5 > 0x1D) )
    {
LABEL_3:
      *_errno() = 0x16; /*0x9920de*/
      _invalid_parameter(a1, a2, 0); /*0x9920ee*/
      return 0xFFFFFFFF; /*0x9920fc*/
    }
    v27 = a5 + a2; /*0x9921c7*/
    if ( (!(v9 % 4) && v9 % 0x64 || !((v9 + 0x76C) % 0x190)) && a1 > 2 ) /*0x9921f4*/
      ++v27; /*0x9921f6*/
    v11 = a8 /*0x99228c*/
        + 0x3C
        * (a7
         + 0x3C
         * (a6 + 0x18 * (v27 + 0x16D * (v9 - 0x46LL) + (v9 + 0x12B) / 0x190 - (v9 - 1) / 0x64 + (v9 - 1) / 4 - 0x11)));
    __tzset(v11); /*0x99228e*/
    v12 = sub_99EDAF(SHIDWORD(v11), v11, &v25); /*0x992297*/
    if ( v12 ) /*0x99229f*/
      _invoke_watson(v12, v13, v19, SHIDWORD(v11), v11, 0); /*0x9922a6*/
    v14 = sub_99EDE3(SHIDWORD(v11), v11, &v24); /*0x9922b2*/
    if ( v14 ) /*0x9922ba*/
      _invoke_watson(v14, v15, v20, SHIDWORD(v11), v11, 0); /*0x9922c1*/
    v16 = sub_99EE17(SHIDWORD(v11), v11, &v26); /*0x9922cd*/
    if ( v16 ) /*0x9922d5*/
      _invoke_watson(v16, v17, v21, SHIDWORD(v11), v11, 0); /*0x9922dc*/
    v22[7] = v27; /*0x9922ed*/
    v22[5] = v23; /*0x9922f3*/
    v18 = v26 + v11; /*0x9922f9*/
    v22[4] = a4 - 1; /*0x992300*/
    v22[2] = a6; /*0x992306*/
    v22[1] = a7; /*0x99230c*/
    v22[0] = a8; /*0x992312*/
    if ( a9 == 1 || a9 == 0xFFFFFFFF && v25 && _isindst((unsigned __int64)(v26 + v11) >> 0x20, v22) ) /*0x992326*/
      v18 += v24; /*0x992336*/
    return v18; /*0x992338*/
  }
  else
  {
    *_errno() = 0x16; /*0x992129*/
    _invalid_parameter(a4, a2, 0); /*0x99212f*/
    return 0xFFFFFFFF; /*0x992137*/
  }
}
