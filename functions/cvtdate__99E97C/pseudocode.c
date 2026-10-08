int __usercall cvtdate@<eax>(
        int a1@<eax>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edi
  int v13; // eax
  int (__stdcall **v14)(int, int); // esi
  char *v15; // esi
  int v16; // ebx
  int v17; // edx
  int result; // eax
  int v19; // esi
  int (__stdcall **v20)(int, int); // esi
  int v21; // ecx
  int v22; // edx
  int v23; // [esp-4h] [ebp-1Ch]
  int v24; // [esp+14h] [ebp-4h] BYREF
  int v25; // [esp+24h] [ebp+Ch]

  v24 = 0; /*0x99e982*/
  v11 = a5; /*0x99e98d*/
  if ( a4 == 1 ) /*0x99e994*/
  {
    if ( (a5 % 4 || !(a5 % 0x64)) && (a5 + 0x76C) % 0x190 ) /*0x99e9c3*/
    {
      v13 = 4 * a1; /*0x99e9cb*/
      v14 = (int (__stdcall **)(int, int))dword_B320B0[a1]; /*0x99e9ce*/
    }
    else
    {
      v13 = 4 * a1; /*0x99e9d8*/
      v14 = (&off_B3207C)[a1]; /*0x99e9db*/
    }
    v25 = v13; /*0x99e9e1*/
    v15 = (char *)v14 + 1; /*0x99e9f8*/
    v11 = a5; /*0x99ea06*/
    v16 = 7; /*0x99ea2d*/
    v17 = (int)&v15[0x16D * a5 - 0x63DB + (a5 - 1) / 4 + (a5 + 0x12B) / 0x190 - (a5 - 1) / 0x64] % 7; /*0x99ea2e*/
    result = a7 + 7 * a6 - v17; /*0x99ea38*/
    if ( v17 > a7 ) /*0x99ea3e*/
      v19 = (int)&v15[result]; /*0x99ea46*/
    else
      v19 = (int)&v15[result - 7]; /*0x99ea40*/
    if ( a6 == 5 ) /*0x99ea4c*/
    {
      if ( (a5 % 4 || (v16 = 0x64, !(a5 % 0x64))) && (v16 = 0x190, (a5 + 0x76C) % 0x190) ) /*0x99ea70*/
        result = *(int *)((char *)dword_B320B4 + v25); /*0x99ea79*/
      else
        result = *(int *)((char *)&dword_B32080 + v25); /*0x99ea84*/
      if ( v19 > result ) /*0x99ea8c*/
        v19 -= 7; /*0x99ea8e*/
    }
  }
  else
  {
    if ( (a5 % 4 || (v16 = 0x64, result = a5 / 0x64, !(a5 % 0x64))) /*0x99eab9*/
      && (v16 = 0x190, result = (a5 + 0x76C) / 0x190, (a5 + 0x76C) % 0x190) )
    {
      v20 = (int (__stdcall **)(int, int))dword_B320B0[a1]; /*0x99eabf*/
    }
    else
    {
      v20 = (&off_B3207C)[a1]; /*0x99eac8*/
    }
    v19 = (int)v20 + a8; /*0x99eacf*/
  }
  v21 = a11 + 0x3E8 * (a10 + 0x3C * (a9 + 0x3C * a2)); /*0x99eae4*/
  if ( a3 == 1 ) /*0x99eaeb*/
  {
    dword_B31FD4 = v19; /*0x99eaed*/
    dword_B31FD8 = v21; /*0x99eaf3*/
    dword_B31FD0 = v11; /*0x99eaf9*/
  }
  else
  {
    dword_B31FE0 = v19; /*0x99eb05*/
    dword_B31FE4 = v21; /*0x99eb0b*/
    if ( sub_99EDE3(v16, v11, &v24) ) /*0x99eb11*/
      _invoke_watson(0, v22, v23, v16, v11, v19); /*0x99eb22*/
    result = 0x3E8 * v24; /*0x99eb2d*/
    dword_B31FE4 += 0x3E8 * v24; /*0x99eb33*/
    if ( dword_B31FE4 >= 0 ) /*0x99eb39*/
    {
      result = 0x5265C00; /*0x99eb4d*/
      if ( dword_B31FE4 >= 0x5265C00 ) /*0x99eb58*/
      {
        dword_B31FE4 -= 0x5265C00; /*0x99eb5a*/
        ++dword_B31FE0; /*0x99eb60*/
      }
    }
    else
    {
      dword_B31FE4 += 0x5265C00; /*0x99eb3b*/
      --dword_B31FE0; /*0x99eb45*/
    }
    dword_B31FDC = v11; /*0x99eb66*/
  }
  return result; /*0x99eb6c*/
}
