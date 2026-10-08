int __thiscall sub_9181D0(int this, char *a2, int a3, int a4)
{
  int result; // eax
  unsigned int v5; // ebp
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  char *v10; // eax
  int v11; // esi
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // cl
  char *v16; // eax
  int v17; // esi
  char v18; // cl
  char v19; // cl
  char *v20; // eax
  int v21; // esi
  char v22; // cl
  char *v23; // [esp+8h] [ebp-214h]
  int v24; // [esp+Ch] [ebp-210h]
  _BYTE v26[2]; // [esp+18h] [ebp-204h] BYREF
  char v27; // [esp+1Ah] [ebp-202h] BYREF
  char v28; // [esp+1Eh] [ebp-1FEh] BYREF

  if ( !*(_BYTE *)(this + 0xC) ) /*0x9181e2*/
    return (*(int (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)(this + 8) + 0xC))( /*0x91820a*/
             *(_DWORD *)(this + 8),
             a2,
             a4 * a3);
  v23 = a2; /*0x91822b*/
  v5 = 0x200; /*0x91822f*/
  v6 = a3; /*0x918237*/
  v7 = a4 * a3; /*0x918244*/
  v8 = 0x200 / a3; /*0x918254*/
  v9 = a4 * a3 % 0x200; /*0x91825f*/
  result = v9 / a3; /*0x918263*/
  v24 = v9 / a3; /*0x91826f*/
  if ( a4 * a3 > 0 ) /*0x918273*/
  {
    while ( 1 ) /*0x918286*/
    {
      if ( v7 < 0x200 ) /*0x91828c*/
      {
        v8 = v24; /*0x91828e*/
        v5 = v9; /*0x918292*/
      }
      sub_8B1890(v26, v23, v5); /*0x91829f*/
      if ( v6 == 2 ) /*0x9182ac*/
      {
        v20 = v26; /*0x918330*/
        if ( v8 > 0 ) /*0x918334*/
        {
          v21 = v8; /*0x918336*/
          do /*0x918346*/
          {
            v22 = *v20; /*0x91833b*/
            *v20 = v20[1]; /*0x91833d*/
            v20[1] = v22; /*0x91833f*/
            v20 += 2; /*0x918342*/
            --v21; /*0x918345*/
          }
          while ( v21 ); /*0x918346*/
        }
      }
      else if ( v6 == 4 ) /*0x9182b5*/
      {
        if ( v8 > 0 ) /*0x918308*/
        {
          v16 = &v27; /*0x91830a*/
          v17 = v8; /*0x91830e*/
          do /*0x91832a*/
          {
            v18 = v16[0xFFFFFFFE]; /*0x918313*/
            v16[0xFFFFFFFE] = v16[1]; /*0x918316*/
            v16[1] = v18; /*0x918319*/
            v19 = v16[0xFFFFFFFF]; /*0x91831e*/
            v16[0xFFFFFFFF] = *v16; /*0x918321*/
            *v16 = v19; /*0x918324*/
            v16 += 4; /*0x918326*/
            --v17; /*0x918329*/
          }
          while ( v17 ); /*0x91832a*/
        }
      }
      else if ( v6 == 8 && v8 > 0 ) /*0x9182c2*/
      {
        v10 = &v28; /*0x9182c8*/
        v11 = v8; /*0x9182cc*/
        do /*0x918302*/
        {
          v12 = v10[0xFFFFFFFA]; /*0x9182d3*/
          v10[0xFFFFFFFA] = v10[1]; /*0x9182d6*/
          v10[1] = v12; /*0x9182d9*/
          v13 = v10[0xFFFFFFFB]; /*0x9182de*/
          v10[0xFFFFFFFB] = *v10; /*0x9182e1*/
          *v10 = v13; /*0x9182e4*/
          v14 = v10[0xFFFFFFFC]; /*0x9182e9*/
          v10[0xFFFFFFFC] = v10[0xFFFFFFFF]; /*0x9182ec*/
          v10[0xFFFFFFFF] = v14; /*0x9182ef*/
          v15 = v10[0xFFFFFFFD]; /*0x9182f5*/
          v10[0xFFFFFFFD] = v10[0xFFFFFFFE]; /*0x9182f8*/
          v10[0xFFFFFFFE] = v15; /*0x9182fb*/
          v10 += 8; /*0x9182fe*/
          --v11; /*0x918301*/
        }
        while ( v11 ); /*0x918302*/
      }
      result = (*(int (__thiscall **)(_DWORD, _BYTE *, unsigned int))(**(_DWORD **)(this + 8) + 0xC))( /*0x918357*/
                 *(_DWORD *)(this + 8),
                 v26,
                 v5);
      v7 -= v5; /*0x91835e*/
      v23 += v5; /*0x918364*/
      if ( v7 <= 0 ) /*0x918368*/
        break; /*0x918368*/
      v6 = a3; /*0x91827b*/
      v9 = a4 * a3 % 0x200; /*0x918282*/
    }
  }
  return result; /*0x91820d*/
}
