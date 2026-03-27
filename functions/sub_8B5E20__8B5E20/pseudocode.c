void __usercall sub_8B5E20(int a1@<edi>, float *a2, __m128 *a3, __m128 *a4)
{
  float *v4; // esi
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // ecx
  int v8; // edi
  unsigned __int32 v9; // edx
  char *v10; // eax
  _DWORD *v11; // eax
  bool v12; // zf
  __m128 v13; // xmm0
  int v14; // eax
  __m128 *v15; // ebx
  bool v16; // cc
  int i; // edi
  float *v18; // eax
  __int32 v19; // ecx
  int v20; // edx
  __int32 v21; // eax
  int v22; // ecx
  __int128 v23; // xmm0
  __int32 v24; // ecx
  int v25; // edx
  __int32 v26; // eax
  int v27; // ecx
  __int128 v28; // xmm0
  int v29; // ecx
  float v30; // [esp+0h] [ebp-3BCh]
  float v31; // [esp+4h] [ebp-3B8h]
  int v32; // [esp+Ch] [ebp-3B0h]
  __m128 v33; // [esp+1Ch] [ebp-3A0h] BYREF
  __m128 v34; // [esp+2Ch] [ebp-390h] BYREF
  __m128 v35; // [esp+3Ch] [ebp-380h] BYREF
  __int128 v36; // [esp+4Ch] [ebp-370h]
  __int128 v37; // [esp+5Ch] [ebp-360h]
  __int128 v38; // [esp+6Ch] [ebp-350h]
  __int128 v39; // [esp+7Ch] [ebp-340h]
  __m128 v40; // [esp+8Ch] [ebp-330h] BYREF
  __m128 v41; // [esp+9Ch] [ebp-320h] BYREF
  __m128 v42; // [esp+ACh] [ebp-310h]
  __m128 v43; // [esp+BCh] [ebp-300h]
  __m128 v44; // [esp+CCh] [ebp-2F0h] BYREF
  _QWORD v45[2]; // [esp+DCh] [ebp-2E0h] BYREF
  __int128 v46; // [esp+ECh] [ebp-2D0h]
  __int128 v47; // [esp+FCh] [ebp-2C0h]
  __int128 v48; // [esp+10Ch] [ebp-2B0h]
  __int128 v49; // [esp+11Ch] [ebp-2A0h]
  __m128 v50; // [esp+12Ch] [ebp-290h]
  __m128 v51; // [esp+13Ch] [ebp-280h]
  __m128 v52; // [esp+14Ch] [ebp-270h]
  __m128 v53; // [esp+15Ch] [ebp-260h]
  __m128 v54[4]; // [esp+16Ch] [ebp-250h] BYREF
  char v55[524]; // [esp+1ACh] [ebp-210h] BYREF
  int v56; // [esp+3B8h] [ebp-4h]

  v4 = a2;
  v56 = __security_cookie;
  v5 = *(_DWORD *)a2;
  v32 = a1;
  v35.m128_u64[0] = 0;
  v40 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  switch ( (*(int (__thiscall **)(float *))(v5 + 8))(a2) )
  {
    case 2:
    case 3:
    case 0xC:
    case 0xD:
    case 0x10:
    case 0x18:
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2) == 3
        || (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2) == 0x18 )
      {
        v4 = *((float **)a2 + 3);
      }
      for ( i = (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 0x20))(v4);
            i != 0xFFFFFFFF;
            i = (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 0x24))(v4) )
      {
        v18 = (float *)(*(int (__thiscall **)(float *, int, char *, int))(*(_DWORD *)v4 + 0x28))(v4, i, v55, v32);
        if ( v18 )
          sub_8B5E20(i, v18, (int)a3, a4->m128_f32);
        v32 = i;
      }
      return;
    case 4:
      sub_8B3550(a2[3], 1.0, (int)&v35);
      goto LABEL_32;
    case 5:
      v30 = sub_8F2260(a2);
      sub_8B51C0((__m128 *)a2 + 2, (__m128 *)a2 + 3, v30, 0x3F800000u, &v35);
      goto LABEL_32;
    case 6:
      v31 = a2[3];
      v40 = *(__m128 *)(a2 + 4);
      v33 = *(__m128 *)(a2 + 8);
      v34 = *(__m128 *)(a2 + 0xC);
      sub_8B55D0(&v40, &v33, &v34, 1.0, v31, (int)&v35);
      goto LABEL_32;
    case 7:
      v34 = *(__m128 *)(a2 + 4);
      sub_8B35E0(v34.m128_f32, 1.0, (int)&v35);
      goto LABEL_32;
    case 8:
      sub_8B4790((__m128 *)a2 + 1, (__m128 *)a2 + 2, a2[3], 1.0, &v35);
      goto LABEL_32;
    case 9:
      (*(void (__thiscall **)(float *, __m128 *, int))(*(_DWORD *)a2 + 0x1C))(a2, &v33, a1);
      v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      v7 = *(_DWORD **)(v6 + 0x19C);
      if ( !v7 )
        v7 = (_DWORD *)dword_BA7D9C;
      v8 = v7[8];
      v9 = v8 + 0x10 * (v33.m128_i32[1] + 1);
      if ( v9 > v7[0xB] )
        v8 = (*(int (__thiscall **)(_DWORD *, __int32))(*v7 + 0xC))(v7, 0x10 * (v33.m128_i32[1] + 1));
      else
        v7[8] = v9;
      v10 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x20))(a2);
      sub_8B4540(v10, 0x10, v33.m128_i32[0], 1.0, (int)&v35);
      v11 = *(_DWORD **)(v6 + 0x19C);
      if ( !v11 )
        v11 = (_DWORD *)dword_BA7D9C;
      v12 = v8 == v11[0xA];
      v11[8] = v8;
      if ( v12 )
        (*(void (__thiscall **)(_DWORD *, int))(*v11 + 0x10))(v11, v8);
      goto LABEL_32;
    case 0xB:
      v14 = *((_DWORD *)a2 + 3);
      v33.m128_i32[0] = 0;
      if ( v14 > 0 )
      {
        v15 = (__m128 *)(a2 + 4);
        do
        {
          v41 = *a3;
          v42 = a3[1];
          v43 = a3[2];
          v44 = a3[3];
          sub_88FCC0(&v44, &v41, v15);
          sub_8ED410(&v34, v15->m128_i32[3]);
          sub_8B5E20((int)a3, v34.m128_f32, (int)&v41, a4->m128_f32);
          ++v15;
          v16 = v33.m128_i32[0] + 1 < *((_DWORD *)a2 + 3);
          v34.m128_i32[0] = (__int32)&hkBaseObject::`vftable';
          ++v33.m128_i32[0];
        }
        while ( v16 );
      }
      return;
    case 0xE:
      v41 = v40;
      v42 = v40;
      v43 = v40;
      v13 = *(__m128 *)(a2 + 8);
      v41.m128_i32[0] = 0x3F800000;
      v42.m128_i32[1] = 0x3F800000;
      v43.m128_i32[2] = 0x3F800000;
      v44 = v13;
      sub_8B1F70(v54, a3, &v41);
      sub_8B5E20(a1, *((float **)a2 + 4), (int)v54, a4->m128_f32);
      return;
    case 0xF:
      sub_8B1F70(v54, a3, (__m128 *)a2 + 2);
      sub_8B5E20(a1, *((float **)a2 + 4), (int)v54, a4->m128_f32);
      return;
    case 0x16:
      sub_8B5E20(a1, *((float **)a2 + 4), (int)a3, a4->m128_f32);
      return;
    case 0x17:
LABEL_32:
      if ( v35.m128_f32[0] != *(float *)&SrcStr )
      {
        sub_8B3810(&v35, v35.m128_u32[0]);
        v33.m128_u64[0] = 0;
        v33.m128_i32[2] = 0x80000000;
        sub_539B00((float *)v45);
        sub_8B3690(v45, (int)a4);
        v19 = v33.m128_i32[1];
        if ( v33.m128_i32[1] == (v33.m128_i32[2] & 0x3FFFFFFF) )
        {
          sub_8A6EE0((const void **)&v33, 0x90);
          v19 = v33.m128_i32[1];
        }
        v20 = HIDWORD(v45[0]);
        v21 = v33.m128_i32[0] + 0x90 * v19;
        v33.m128_i32[1] = v19 + 1;
        v22 = v45[0];
        *(__int128 *)(v21 + 0x10) = v46;
        v23 = v47;
        *(_DWORD *)v21 = v22;
        *(_DWORD *)(v21 + 4) = v20;
        *(_OWORD *)(v21 + 0x20) = v23;
        *(__int128 *)(v21 + 0x30) = v48;
        *(__int128 *)(v21 + 0x40) = v49;
        *(__m128 *)(v21 + 0x50) = v50;
        *(__m128 *)(v21 + 0x60) = v51;
        *(__m128 *)(v21 + 0x70) = v52;
        *(__m128 *)(v21 + 0x80) = v53;
        sub_539B00((float *)v45);
        v46 = v36;
        v47 = v37;
        v48 = v38;
        v49 = v39;
        v45[0] = v35.m128_u64[0];
        v50 = *a3;
        v51 = a3[1];
        v24 = v33.m128_i32[1];
        v52 = a3[2];
        v53 = a3[3];
        if ( v33.m128_i32[1] == (v33.m128_i32[2] & 0x3FFFFFFF) )
        {
          sub_8A6EE0((const void **)&v33, 0x90);
          v24 = v33.m128_i32[1];
        }
        v25 = HIDWORD(v45[0]);
        v26 = v33.m128_i32[0] + 0x90 * v24;
        v33.m128_i32[1] = v24 + 1;
        v27 = v45[0];
        *(__int128 *)(v26 + 0x10) = v46;
        v28 = v47;
        *(_DWORD *)v26 = v27;
        *(_DWORD *)(v26 + 4) = v25;
        *(_OWORD *)(v26 + 0x20) = v28;
        *(__int128 *)(v26 + 0x30) = v48;
        *(__int128 *)(v26 + 0x40) = v49;
        *(__m128 *)(v26 + 0x50) = v50;
        *(__m128 *)(v26 + 0x60) = v51;
        *(__m128 *)(v26 + 0x70) = v52;
        *(__m128 *)(v26 + 0x80) = v53;
        sub_8B3E60((int *)&v33, a4);
        if ( v33.m128_i32[2] >= 0 )
        {
          v29 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v29 )
            v29 = dword_BA7D9C;
          sub_8A75D0(v29, v33.m128_i32[0], 0x90 * (v33.m128_i32[2] & 0x3FFFFFFF), 0x14);
        }
      }
      break;
    case 0x19:
      sub_8B1F70(v54, a3, (__m128 *)a2 + 2);
      sub_8B5E20(a1, *((float **)a2 + 3), (int)v54, a4->m128_f32);
      break;
    default:
      return;
  }
}
