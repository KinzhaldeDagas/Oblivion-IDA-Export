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

  v24 = 0;
  v11 = a5;
  if ( a4 == 1 )
  {
    if ( (a5 % 4 || !(a5 % 0x64)) && (a5 + 0x76C) % 0x190 )
    {
      v13 = 4 * a1;
      v14 = (int (__stdcall **)(int, int))dword_B320B0[a1];
    }
    else
    {
      v13 = 4 * a1;
      v14 = (&off_B3207C)[a1];
    }
    v25 = v13;
    v15 = (char *)v14 + 1;
    v11 = a5;
    v16 = 7;
    v17 = (int)&v15[0x16D * a5 - 0x63DB + (a5 - 1) / 4 + (a5 + 0x12B) / 0x190 - (a5 - 1) / 0x64] % 7;
    result = a7 + 7 * a6 - v17;
    if ( v17 > a7 )
      v19 = (int)&v15[result];
    else
      v19 = (int)&v15[result - 7];
    if ( a6 == 5 )
    {
      if ( (a5 % 4 || (v16 = 0x64, !(a5 % 0x64))) && (v16 = 0x190, (a5 + 0x76C) % 0x190) )
        result = *(int *)((char *)dword_B320B4 + v25);
      else
        result = *(int *)((char *)&dword_B32080 + v25);
      if ( v19 > result )
        v19 -= 7;
    }
  }
  else
  {
    if ( (a5 % 4 || (v16 = 0x64, result = a5 / 0x64, !(a5 % 0x64)))
      && (v16 = 0x190, result = (a5 + 0x76C) / 0x190, (a5 + 0x76C) % 0x190) )
    {
      v20 = (int (__stdcall **)(int, int))dword_B320B0[a1];
    }
    else
    {
      v20 = (&off_B3207C)[a1];
    }
    v19 = (int)v20 + a8;
  }
  v21 = a11 + 0x3E8 * (a10 + 0x3C * (a9 + 0x3C * a2));
  if ( a3 == 1 )
  {
    dword_B31FD4 = v19;
    dword_B31FD8 = v21;
    dword_B31FD0 = v11;
  }
  else
  {
    dword_B31FE0 = v19;
    dword_B31FE4 = v21;
    if ( sub_99EDE3(&v24) )
      _invoke_watson(0, v22, v23, v16, v11, v19);
    result = 0x3E8 * v24;
    dword_B31FE4 += 0x3E8 * v24;
    if ( dword_B31FE4 >= 0 )
    {
      result = 0x5265C00;
      if ( dword_B31FE4 >= 0x5265C00 )
      {
        dword_B31FE4 -= 0x5265C00;
        ++dword_B31FE0;
      }
    }
    else
    {
      dword_B31FE4 += 0x5265C00;
      --dword_B31FE0;
    }
    dword_B31FDC = v11;
  }
  return result;
}
