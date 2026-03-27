unsigned int __usercall __loctotime64_t@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
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

  v9 = a3 - 0x76C;
  v25 = 0;
  v24 = 0;
  v26 = 0;
  v23 = a3 - 0x76C;
  if ( a3 - 0x76C < 0x46 || v9 > 0x44C )
    goto LABEL_3;
  a1 = a4;
  if ( (unsigned int)(a4 - 1) <= 0xB && a6 <= 0x17 && a7 <= 0x3B && a8 <= 0x3B )
  {
    if ( a5 < 1
      || (a2 = dword_B320B0[a4], dword_B320B4[a4] - a2 < a5)
      && ((v9 % 4 || !(v9 % 0x64)) && (a1 = 0x190, a3 % 0x190) || (a1 = a4, a4 != 2) || a5 > 0x1D) )
    {
LABEL_3:
      *_errno() = 0x16;
      _invalid_parameter(a1, a2, 0);
      return 0xFFFFFFFF;
    }
    v27 = a5 + a2;
    if ( (!(v9 % 4) && v9 % 0x64 || !((v9 + 0x76C) % 0x190)) && a1 > 2 )
      ++v27;
    v11 = (int)a8
        + 0x3C
        * ((int)a7
         + 0x3C
         * ((int)a6 + 0x18
                    * (v27 + 0x16D * (v9 - 0x46LL) + (v9 + 0x12B) / 0x190 - (v9 - 1) / 0x64 + (v9 - 1) / 4 - 0x11)));
    __tzset();
    v12 = sub_99EDAF(&v25);
    if ( v12 )
      _invoke_watson(v12, v13, v19, SHIDWORD(v11), v11, 0);
    v14 = sub_99EDE3(&v24);
    if ( v14 )
      _invoke_watson(v14, v15, v20, SHIDWORD(v11), v11, 0);
    v16 = sub_99EE17(&v26);
    if ( v16 )
      _invoke_watson(v16, v17, v21, SHIDWORD(v11), v11, 0);
    v22[7] = v27;
    v22[5] = v23;
    v18 = v26 + v11;
    v22[4] = a4 - 1;
    v22[2] = a6;
    v22[1] = a7;
    v22[0] = a8;
    if ( a9 == 1 || a9 == 0xFFFFFFFF && v25 && _isindst(v22) )
      v18 += v24;
    return v18;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(a4, a2, 0);
    return 0xFFFFFFFF;
  }
}
