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
  int v28; // [esp+20h] [ebp+20h]

  while ( 1 ) /*0x9238d3*/
  {
    v28 = *a5; /*0x9238c6*/
    switch ( *a5 ) /*0x9238d3*/
    {
      case 0: /*0x9238d3*/
        return 1;
      case 1: /*0x9238d3*/
        JUMPOUT(0x923873); /*0x923873*/
      case 2: /*0x9238d3*/
      case 5: /*0x9238d3*/
      case 6: /*0x9238d3*/
      case 0xB: /*0x9238d3*/
      case 0xD: /*0x9238d3*/
        v24 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4); /*0x923926*/
        do /*0x923962*/
        {
          *(_DWORD *)a2 = *a4; /*0x923936*/
          *(float *)(a2 + 4) = *((float *)a1 + 3) * *v24; /*0x923945*/
          a2 += a12; /*0x923948*/
          a1 = sub_8F0EE0(a1, 1); /*0x92394a*/
          v14 = (unsigned __int8)a5[1]; /*0x92394f*/
          v15 = a5[v14]; /*0x923953*/
          a5 += v14; /*0x923957*/
          ++a4; /*0x92395d*/
        }
        while ( v15 == v28 ); /*0x923962*/
        break; /*0x923962*/
      case 3: /*0x9238d3*/
        v12 = *(_DWORD *)(a3 + 8); /*0x9238dc*/
        *(_DWORD *)a2 = *a4; /*0x9238df*/
        *(float *)(a2 + 4) = *((float *)a1 + 3) * *(float *)(v12 + 0xF4); /*0x9238f6*/
        v13 = a12 + a2; /*0x9238f9*/
        *(_DWORD *)v13 = a4[1]; /*0x9238fe*/
        *(float *)(v13 + 4) = *((float *)a1 + 0xF) * *(float *)(v12 + 0xF4); /*0x92390b*/
        a2 = a12 + v13; /*0x92390e*/
        a1 = sub_8F0EE0(a1, 2); /*0x923910*/
        a4 += 2; /*0x923915*/
        a5 += 8; /*0x923918*/
        break; /*0x92391b*/
      case 4: /*0x9238d3*/
      case 9: /*0x9238d3*/
      case 0xA: /*0x9238d3*/
      case 0xC: /*0x9238d3*/
        v25 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4); /*0x923972*/
        do /*0x9239a8*/
        {
          *(_DWORD *)a2 = *a4; /*0x92397c*/
          *(float *)(a2 + 4) = *((float *)a1 + 7) * *v25; /*0x923989*/
          a2 += a12; /*0x92398c*/
          a1 = sub_8F0ED0(a1, 1); /*0x923990*/
          v16 = (unsigned __int8)a5[1]; /*0x923995*/
          v17 = a5[v16]; /*0x923999*/
          a5 += v16; /*0x92399d*/
          ++a4; /*0x9239a3*/
        }
        while ( v17 == v28 ); /*0x9239a8*/
        break; /*0x9239a8*/
      case 7: /*0x9238d3*/
        v18 = *((_DWORD *)a5 + 1); /*0x9239af*/
        *(_DWORD *)v18 = *a4; /*0x9239b4*/
        v26 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4); /*0x9239c8*/
        *(float *)(v18 + 4) = *((float *)a1 + 3) * *v26; /*0x9239ce*/
        v19 = *((_DWORD *)a5 + 4) + v18; /*0x9239d4*/
        *(_DWORD *)v19 = a4[1]; /*0x9239d9*/
        *(float *)(v19 + 4) = *((float *)a1 + 0xF) * *v26; /*0x9239e4*/
        a1 = sub_8F0EE0(a1, 2); /*0x9239e9*/
        a4 += 2; /*0x9239ee*/
        a5 += 0x14; /*0x9239f1*/
        break; /*0x9239f4*/
      case 8: /*0x9238d3*/
        v20 = *((_DWORD *)a5 + 1); /*0x9239f9*/
        *(_DWORD *)v20 = *a4; /*0x9239fe*/
        v27 = (float *)(*(_DWORD *)(a3 + 8) + 0xF4); /*0x923a12*/
        *(float *)(v20 + 4) = *((float *)a1 + 3) * *v27; /*0x923a18*/
        v21 = *((_DWORD *)a5 + 4) + v20; /*0x923a1e*/
        *(_DWORD *)v21 = a4[1]; /*0x923a23*/
        *(float *)(v21 + 4) = *((float *)a1 + 0xF) * *v27; /*0x923a2e*/
        v22 = *((_DWORD *)a5 + 4) + v21; /*0x923a34*/
        *(_DWORD *)v22 = a4[2]; /*0x923a39*/
        *(float *)(v22 + 4) = *((float *)a1 + 0x1F) * *v27; /*0x923a44*/
        a1 = sub_8F0ED0(a1 + 0x60, 1); /*0x923a4a*/
        a4 += 3; /*0x923a4f*/
        a5 += 0x18; /*0x923a52*/
        break; /*0x923a55*/
      case 0xE: /*0x9238d3*/
      case 0xF: /*0x9238d3*/
      case 0x10: /*0x9238d3*/
        a5 += (unsigned __int8)a5[1]; /*0x923a5e*/
        break; /*0x923a60*/
      default:
        continue;
    }
  }
}
