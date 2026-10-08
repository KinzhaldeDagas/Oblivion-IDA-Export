int __thiscall sub_953A70(unsigned __int8 *this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD **v5; // ebx
  int *v6; // ebp
  int v7; // edi
  int v8; // esi
  const char **v9; // eax
  signed __int16 *v10; // edi
  char v11; // cl
  int v12; // ebp
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // ebp
  _DWORD *v18; // ebx
  int v19; // eax
  int v20; // edi
  int i; // esi
  int v22; // eax
  int *v23; // esi
  int v24; // ebx
  int v25; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // esi
  int v30; // [esp-8h] [ebp-264h]
  int v31; // [esp-8h] [ebp-264h]
  int v32; // [esp+10h] [ebp-24Ch]
  _DWORD *v33; // [esp+10h] [ebp-24Ch]
  int v35; // [esp+18h] [ebp-244h]
  int v36; // [esp+1Ch] [ebp-240h]
  int v37; // [esp+1Ch] [ebp-240h]
  int v38; // [esp+20h] [ebp-23Ch]
  int *v39; // [esp+24h] [ebp-238h]
  _DWORD v40[2]; // [esp+28h] [ebp-234h] BYREF
  _DWORD v41[4]; // [esp+30h] [ebp-22Ch] BYREF
  _DWORD v42[135]; // [esp+40h] [ebp-21Ch] BYREF

  v5 = (_DWORD **)a4; /*0x953a77*/
  v6 = (int *)sub_953130(a4); /*0x953a8c*/
  v39 = v6; /*0x953a93*/
  v7 = (*(int (__thiscall **)(int *))(*v6 + 0x1C))(v6); /*0x953aa1*/
  v38 = v7; /*0x953aa3*/
  v35 = 0; /*0x953aa7*/
  if ( sub_90D240(a5) > 0 ) /*0x953ab6*/
  {
    while ( 1 ) /*0x953af9*/
    {
      v8 = sub_90D260(a5, v35); /*0x953ad6*/
      (*(void (__thiscall **)(int *, int, _DWORD))(*v6 + 0x18))(v6, v7 + *(unsigned __int16 *)(v8 + 0x12), 0); /*0x953ae3*/
      v9 = sub_90D2E0(a3, *(const char **)v8); /*0x953af0*/
      v10 = (signed __int16 *)v9; /*0x953af5*/
      if ( v9 /*0x953b11*/
        && (v11 = *(_BYTE *)(v8 + 0xC), *((_BYTE *)v9 + 0xC) == v11)
        && *((_BYTE *)v9 + 0xD) == *(_BYTE *)(v8 + 0xD) )
      {
        v12 = a2 + *((unsigned __int16 *)v9 + 9); /*0x953b1b*/
        switch ( v11 ) /*0x953b36*/
        {
          case 1: /*0x953b36*/
          case 2: /*0x953b36*/
          case 3: /*0x953b36*/
          case 4: /*0x953b36*/
          case 5: /*0x953b36*/
          case 6: /*0x953b36*/
          case 7: /*0x953b36*/
          case 8: /*0x953b36*/
          case 9: /*0x953b36*/
          case 0xA: /*0x953b36*/
          case 0xB: /*0x953b36*/
          case 0xC: /*0x953b36*/
          case 0xD: /*0x953b36*/
          case 0xE: /*0x953b36*/
          case 0xF: /*0x953b36*/
          case 0x10: /*0x953b36*/
          case 0x11: /*0x953b36*/
          case 0x12: /*0x953b36*/
          case 0x18: /*0x953b36*/
            if ( sub_940B70((signed __int16 *)v9) ) /*0x953b3f*/
              v32 = sub_940B70(v10); /*0x953b4f*/
            else
              v32 = 1; /*0x953b55*/
            if ( sub_940B70((signed __int16 *)v8) ) /*0x953b5f*/
              v13 = sub_940B70((signed __int16 *)v8); /*0x953b6f*/
            else
              v13 = 1; /*0x953b73*/
            if ( v32 >= v13 ) /*0x953b82*/
              v32 = v13; /*0x953b84*/
            v36 = *(unsigned __int8 *)(v8 + 0xC); /*0x953b8c*/
            v14 = sub_940B80(v8); /*0x953b93*/
            sub_9535B0(v36, v14 / v13, v32, (int)v5, (int)v5, (char *)v12); /*0x953ba6*/
            break; /*0x953bae*/
          case 0x13: /*0x953b36*/
            sub_9537F0((int)this, (int)v5, v5, v8); /*0x953bb9*/
            break; /*0x953bbe*/
          case 0x14: /*0x953b36*/
          case 0x15: /*0x953b36*/
            v15 = sub_953560((signed __int16 *)v8); /*0x953bc3*/
            v41[2] = 0; /*0x953bcc*/
            v41[3] = 0; /*0x953bd0*/
            if ( v15 > 0 ) /*0x953bd4*/
            {
              v16 = v15; /*0x953bda*/
              do /*0x953bf6*/
              {
                sub_918390(v5); /*0x953bf0*/
                --v16; /*0x953bf5*/
              }
              while ( v16 ); /*0x953bf6*/
            }
            break; /*0x953bf6*/
          case 0x16: /*0x953b36*/
          case 0x17: /*0x953b36*/
          case 0x1A: /*0x953b36*/
          case 0x1B: /*0x953b36*/
            if ( v11 == 0x1B ) /*0x953c02*/
            {
              v30 = *(this + 0xC); /*0x953c0e*/
              v40[0] = 0; /*0x953c16*/
              v40[1] = 0; /*0x953c1a*/
              sub_9181D0((int)v5, (char *)v40, v30, 1); /*0x953c1e*/
              v17 = *(_DWORD *)(v12 + 8); /*0x953c23*/
            }
            else
            {
              v17 = *(_DWORD *)(v12 + 4); /*0x953c28*/
            }
            v31 = *(this + 0xC); /*0x953c35*/
            v41[0] = 0; /*0x953c3d*/
            v41[1] = 0; /*0x953c41*/
            sub_9181D0((int)v5, (char *)v41, v31, 1); /*0x953c45*/
            sub_918440(v5, v17); /*0x953c4d*/
            if ( *(_BYTE *)(v8 + 0xC) == 0x16 ) /*0x953c56*/
              sub_918440(v5, v17); /*0x953c61*/
            break; /*0x953c66*/
          case 0x19: /*0x953b36*/
            v18 = (_DWORD *)sub_90D1F0(v9); /*0x953c71*/
            v33 = (_DWORD *)sub_90D1F0((_DWORD *)v8); /*0x953c78*/
            v37 = sub_953560((signed __int16 *)v8); /*0x953c83*/
            v19 = sub_953560(v10); /*0x953c87*/
            v20 = v37; /*0x953c8c*/
            if ( v19 < v37 ) /*0x953c92*/
              v20 = v19; /*0x953c94*/
            for ( i = 0; i < v20; ++i ) /*0x953c9a*/
            {
              v22 = sub_953130(v18); /*0x953ca2*/
              sub_953A70(this, v12 + i * v22, v18, a4, v33); /*0x953cbf*/
            }
            v5 = (_DWORD **)a4; /*0x953cc9*/
            break; /*0x953cc9*/
          case 0x1C: /*0x953b36*/
            memset(v42, 0, 0x10); /*0x953d23*/
            v27 = sub_953560((signed __int16 *)v8); /*0x953d3a*/
            v28 = sub_953560(v10); /*0x953d3c*/
            if ( v28 >= v27 ) /*0x953d43*/
              v28 = v27; /*0x953d45*/
            if ( v28 > 0 ) /*0x953d49*/
            {
              v29 = v28; /*0x953d4b*/
              do /*0x953d68*/
              {
                sub_9181D0((int)v5, (char *)v42, *(this + 0xC), 2); /*0x953d62*/
                --v29; /*0x953d67*/
              }
              while ( v29 ); /*0x953d68*/
            }
            break; /*0x953d68*/
          default:
            JUMPOUT(0x953D6F); /*0x953d6f*/
        }
      }
      else
      {
        sub_90D3B0(a5, v35, v6); /*0x953dd2*/
      }
      ++v35; /*0x953cdc*/
      v7 = v38; /*0x953ce7*/
      if ( v35 >= sub_90D240(a5) ) /*0x953ceb*/
        break; /*0x953ceb*/
      v6 = v39; /*0x953abe*/
    }
  }
  v23 = (int *)sub_953130(v5); /*0x953cff*/
  v24 = *v23; /*0x953d01*/
  v25 = sub_953130(a5); /*0x953d05*/
  (*(void (__thiscall **)(int *, int, _DWORD))(v24 + 0x18))(v23, v7 + v25, 0); /*0x953d0f*/
  return v7; /*0x953d14*/
}
