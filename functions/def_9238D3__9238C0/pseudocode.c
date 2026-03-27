// positive sp value has been detected, the output may be wrong!
int __usercall def_9238D3@<eax>(
        char *a1@<eax>,
        int a2@<ebx>,
        int a3@<ebp>,
        _DWORD *a4@<edi>,
        char *a5@<esi>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // ecx
  int v13; // ebx
  int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  float *v24; // [esp+8h] [ebp+8h]
  float *v25; // [esp+8h] [ebp+8h]
  float *v26; // [esp+8h] [ebp+8h]
  float *v27; // [esp+8h] [ebp+8h]
  int v29; // [esp+20h] [ebp+20h]

  while ( 1 )
  {
    v29 = *a5;
    switch ( *a5 )
    {
      case 0:
        return 1;
      case 1:
        JUMPOUT(0x923873);
      case 2:
      case 5:
      case 6:
      case 0xB:
      case 0xD:
        v24 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4);
        do
        {
          *(_DWORD *)a2 = *a4;
          *(float *)(a2 + 4) = *((float *)a1 + 3) * *v24;
          a2 += a12;
          a1 = sub_8F0EE0(a1, 1);
          v14 = (unsigned __int8)a5[1];
          v15 = a5[v14];
          a5 += v14;
          ++a4;
        }
        while ( v15 == v29 );
        break;
      case 3:
        v12 = *(_DWORD *)(a3 + 8);
        *(_DWORD *)a2 = *a4;
        *(float *)(a2 + 4) = *((float *)a1 + 3) * *(float *)(v12 + 0xF4);
        v13 = a12 + a2;
        *(_DWORD *)v13 = a4[1];
        *(float *)(v13 + 4) = *((float *)a1 + 0xF) * *(float *)(v12 + 0xF4);
        a2 = a12 + v13;
        a1 = sub_8F0EE0(a1, 2);
        a4 += 2;
        a5 += 8;
        break;
      case 4:
      case 9:
      case 0xA:
      case 0xC:
        v25 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4);
        do
        {
          *(_DWORD *)a2 = *a4;
          *(float *)(a2 + 4) = *((float *)a1 + 7) * *v25;
          a2 += a12;
          a1 = sub_8F0ED0(a1, 1);
          v16 = (unsigned __int8)a5[1];
          v17 = a5[v16];
          a5 += v16;
          ++a4;
        }
        while ( v17 == v29 );
        break;
      case 7:
        v18 = *((_DWORD *)a5 + 1);
        *(_DWORD *)v18 = *a4;
        v26 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4);
        *(float *)(v18 + 4) = *((float *)a1 + 3) * *v26;
        v19 = *((_DWORD *)a5 + 4) + v18;
        *(_DWORD *)v19 = a4[1];
        *(float *)(v19 + 4) = *((float *)a1 + 0xF) * *v26;
        a1 = sub_8F0EE0(a1, 2);
        a4 += 2;
        a5 += 0x14;
        break;
      case 8:
        v20 = *((_DWORD *)a5 + 1);
        *(_DWORD *)v20 = *a4;
        v27 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4);
        *(float *)(v20 + 4) = *((float *)a1 + 3) * *v27;
        v21 = *((_DWORD *)a5 + 4) + v20;
        *(_DWORD *)v21 = a4[1];
        *(float *)(v21 + 4) = *((float *)a1 + 0xF) * *v27;
        v22 = *((_DWORD *)a5 + 4) + v21;
        *(_DWORD *)v22 = a4[2];
        *(float *)(v22 + 4) = *((float *)a1 + 0x1F) * *v27;
        a1 = sub_8F0ED0(a1 + 0x60, 1);
        a4 += 3;
        a5 += 0x18;
        break;
      case 0xE:
      case 0xF:
      case 0x10:
        a5 += (unsigned __int8)a5[1];
        break;
      default:
        continue;
    }
  }
}
