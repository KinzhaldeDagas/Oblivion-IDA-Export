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

  v5 = (_DWORD **)a4;
  v6 = (int *)sub_953130(a4);
  v39 = v6;
  v7 = (*(int (__thiscall **)(int *))(*v6 + 0x1C))(v6);
  v38 = v7;
  v35 = 0;
  if ( sub_90D240(a5) > 0 )
  {
    while ( 1 )
    {
      v8 = sub_90D260(a5, v35);
      (*(void (__thiscall **)(int *, int, _DWORD))(*v6 + 0x18))(v6, v7 + *(unsigned __int16 *)(v8 + 0x12), 0);
      v9 = sub_90D2E0(a3, *(const char **)v8);
      v10 = (signed __int16 *)v9;
      if ( v9
        && (v11 = *(_BYTE *)(v8 + 0xC), *((_BYTE *)v9 + 0xC) == v11)
        && *((_BYTE *)v9 + 0xD) == *(_BYTE *)(v8 + 0xD) )
      {
        v12 = a2 + *((unsigned __int16 *)v9 + 9);
        switch ( v11 )
        {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x18:
            if ( sub_940B70((signed __int16 *)v9) )
              v32 = sub_940B70(v10);
            else
              v32 = 1;
            if ( sub_940B70((signed __int16 *)v8) )
              v13 = sub_940B70((signed __int16 *)v8);
            else
              v13 = 1;
            if ( v32 >= v13 )
              v32 = v13;
            v36 = *(unsigned __int8 *)(v8 + 0xC);
            v14 = sub_940B80(v8);
            sub_9535B0(v36, v14 / v13, v32, (int)v5, (int)v5, (char *)v12);
            break;
          case 0x13:
            sub_9537F0((int)this, (int)v5, v5, v8);
            break;
          case 0x14:
          case 0x15:
            v15 = sub_953560((signed __int16 *)v8);
            v41[2] = 0;
            v41[3] = 0;
            if ( v15 > 0 )
            {
              v16 = v15;
              do
              {
                sub_918390(v5);
                --v16;
              }
              while ( v16 );
            }
            break;
          case 0x16:
          case 0x17:
          case 0x1A:
          case 0x1B:
            if ( v11 == 0x1B )
            {
              v30 = *(this + 0xC);
              v40[0] = 0;
              v40[1] = 0;
              sub_9181D0((int)v5, (char *)v40, v30, 1);
              v17 = *(_DWORD *)(v12 + 8);
            }
            else
            {
              v17 = *(_DWORD *)(v12 + 4);
            }
            v31 = *(this + 0xC);
            v41[0] = 0;
            v41[1] = 0;
            sub_9181D0((int)v5, (char *)v41, v31, 1);
            sub_918440(v5, v17);
            if ( *(_BYTE *)(v8 + 0xC) == 0x16 )
              sub_918440(v5, v17);
            break;
          case 0x19:
            v18 = (_DWORD *)sub_90D1F0(v9);
            v33 = (_DWORD *)sub_90D1F0((_DWORD *)v8);
            v37 = sub_953560((signed __int16 *)v8);
            v19 = sub_953560(v10);
            v20 = v37;
            if ( v19 < v37 )
              v20 = v19;
            for ( i = 0; i < v20; ++i )
            {
              v22 = sub_953130(v18);
              sub_953A70(this, v12 + i * v22, v18, a4, v33);
            }
            v5 = (_DWORD **)a4;
            break;
          case 0x1C:
            memset(v42, 0, 0x10);
            v27 = sub_953560((signed __int16 *)v8);
            v28 = sub_953560(v10);
            if ( v28 >= v27 )
              v28 = v27;
            if ( v28 > 0 )
            {
              v29 = v28;
              do
              {
                sub_9181D0((int)v5, (char *)v42, *(this + 0xC), 2);
                --v29;
              }
              while ( v29 );
            }
            break;
          default:
            JUMPOUT(0x953D6F);
        }
      }
      else
      {
        sub_90D3B0(a5, v35, v6);
      }
      ++v35;
      v7 = v38;
      if ( v35 >= sub_90D240(a5) )
        break;
      v6 = v39;
    }
  }
  v23 = (int *)sub_953130(v5);
  v24 = *v23;
  v25 = sub_953130(a5);
  (*(void (__thiscall **)(int *, int, _DWORD))(v24 + 0x18))(v23, v7 + v25, 0);
  return v7;
}
