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

  v4 = a2; /*0x8b5e33*/
  v56 = __security_cookie; /*0x8b5e39*/
  v5 = *(_DWORD *)a2; /*0x8b5e40*/
  v32 = a1; /*0x8b5e42*/
  v35.m128_u64[0] = 0; /*0x8b5e45*/
  v40 = 0; /*0x8b5e55*/
  v36 = 0; /*0x8b5e5d*/
  v37 = 0; /*0x8b5e62*/
  v38 = 0; /*0x8b5e67*/
  v39 = 0; /*0x8b5e6c*/
  switch ( (*(int (__thiscall **)(float *))(v5 + 8))(a2) ) /*0x8b5e87*/
  {
    case 2: /*0x8b5e87*/
    case 3: /*0x8b5e87*/
    case 0xC: /*0x8b5e87*/
    case 0xD: /*0x8b5e87*/
    case 0x10: /*0x8b5e87*/
    case 0x18: /*0x8b5e87*/
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2) == 3 /*0x8b61b3*/
        || (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 8))(a2) == 0x18 )
      {
        v4 = *((float **)a2 + 3); /*0x8b61b5*/
      }
      for ( i = (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 0x20))(v4); /*0x8b61c4*/
            i != 0xFFFFFFFF;
            i = (*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 0x24))(v4) )
      {
        v18 = (float *)(*(int (__thiscall **)(float *, int, char *, int))(*(_DWORD *)v4 + 0x28))(v4, i, v55, v32); /*0x8b61dd*/
        if ( v18 ) /*0x8b61e2*/
          sub_8B5E20(i, v18, a3, a4); /*0x8b61ea*/
        v32 = i; /*0x8b61f4*/
      }
      return; /*0x8b61ff*/
    case 4: /*0x8b5e87*/
      sub_8B3550(a2[3], 1.0, (int)&v35); /*0x8b5e9c*/
      goto LABEL_32; /*0x8b5ea4*/
    case 5: /*0x8b5e87*/
      v30 = sub_8F2260(a2); /*0x8b6246*/
      sub_8B51C0((__m128 *)a2 + 2, (__m128 *)a2 + 3, v30, 1.0, &v35); /*0x8b624e*/
      goto LABEL_32; /*0x8b624e*/
    case 6: /*0x8b5e87*/
      v31 = a2[3]; /*0x8b5f74*/
      v40 = *(__m128 *)(a2 + 4); /*0x8b5f7f*/
      v33 = *(__m128 *)(a2 + 8); /*0x8b5f97*/
      v34 = *(__m128 *)(a2 + 0xC); /*0x8b5fa1*/
      sub_8B55D0(&v40, &v33, &v34, 1.0, v31, (int)&v35); /*0x8b5fa6*/
      goto LABEL_32; /*0x8b5fae*/
    case 7: /*0x8b5e87*/
      v34 = *(__m128 *)(a2 + 4); /*0x8b5ebc*/
      sub_8B35E0(v34.m128_f32, 1.0, (int)&v35); /*0x8b5ec1*/
      goto LABEL_32; /*0x8b5ec9*/
    case 8: /*0x8b5e87*/
      sub_8B4790((__m128 *)a2 + 1, (__m128 *)a2 + 2, a2[3], 1.0, &v35); /*0x8b622a*/
      goto LABEL_32; /*0x8b622f*/
    case 9: /*0x8b5e87*/
      (*(void (__thiscall **)(float *, __m128 *, int))(*(_DWORD *)a2 + 0x1C))(a2, &v33, a1); /*0x8b5ed7*/
      v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8b5ee6*/
      v7 = *(_DWORD **)(v6 + 0x19C); /*0x8b5ee9*/
      if ( !v7 ) /*0x8b5ef1*/
        v7 = (_DWORD *)unk_BA7D9C; /*0x8b5ef3*/
      v8 = v7[8]; /*0x8b5efd*/
      v9 = v8 + 0x10 * (v33.m128_i32[1] + 1); /*0x8b5f09*/
      if ( v9 > v7[0xB] ) /*0x8b5f0f*/
        v8 = (*(int (__thiscall **)(_DWORD *, __int32))(*v7 + 0xC))(v7, 0x10 * (v33.m128_i32[1] + 1)); /*0x8b5f1c*/
      else
        v7[8] = v9; /*0x8b5f11*/
      v10 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x20))(a2); /*0x8b5f23*/
      sub_8B4540(v10, 0x10, v33.m128_i32[0], 1.0, (int)&v35); /*0x8b5f38*/
      v11 = *(_DWORD **)(v6 + 0x19C); /*0x8b5f3d*/
      if ( !v11 ) /*0x8b5f48*/
        v11 = (_DWORD *)unk_BA7D9C; /*0x8b5f4a*/
      v12 = v8 == v11[0xA]; /*0x8b5f4f*/
      v11[8] = v8; /*0x8b5f52*/
      if ( v12 ) /*0x8b5f55*/
        (*(void (__thiscall **)(_DWORD *, int))(*v11 + 0x10))(v11, v8); /*0x8b5f60*/
      goto LABEL_32; /*0x8b5f63*/
    case 0xB: /*0x8b5e87*/
      v14 = *((_DWORD *)a2 + 3); /*0x8b60e8*/
      v33.m128_i32[0] = 0; /*0x8b60ed*/
      if ( v14 > 0 ) /*0x8b60f5*/
      {
        v15 = (__m128 *)(a2 + 4); /*0x8b60fe*/
        do /*0x8b6184*/
        {
          v41 = *a3; /*0x8b6104*/
          v42 = a3[1]; /*0x8b6110*/
          v43 = a3[2]; /*0x8b6124*/
          v44 = a3[3]; /*0x8b6138*/
          hkTransform_TransformPosition(&v44, &v41, v15); /*0x8b6140*/
          sub_8ED410(&v34, v15->m128_i32[3]); /*0x8b614d*/
          sub_8B5E20((int)a3, v34.m128_f32, &v41, a4); /*0x8b6163*/
          ++v15; /*0x8b6173*/
          v16 = v33.m128_i32[0] + 1 < *((_DWORD *)a2 + 3); /*0x8b6176*/
          v34.m128_i32[0] = (__int32)&hkBaseObject::`vftable'; /*0x8b6178*/
          ++v33.m128_i32[0]; /*0x8b6180*/
        }
        while ( v16 ); /*0x8b6184*/
      }
      return; /*0x8b6184*/
    case 0xE: /*0x8b5e87*/
      v41 = v40; /*0x8b5fec*/
      v42 = v40; /*0x8b5ff4*/
      v43 = v40; /*0x8b5ffc*/
      v13 = *(__m128 *)(a2 + 8); /*0x8b6004*/
      v41.m128_i32[0] = 0x3F800000; /*0x8b6011*/
      v42.m128_i32[1] = 0x3F800000; /*0x8b601c*/
      v43.m128_i32[2] = 0x3F800000; /*0x8b6027*/
      v44 = v13; /*0x8b6032*/
      sub_8B1F70(v54, a3, &v41); /*0x8b603a*/
      sub_8B5E20(a1, *((float **)a2 + 4), v54, a4); /*0x8b604f*/
      return; /*0x8b6069*/
    case 0xF: /*0x8b5e87*/
      sub_8B1F70(v54, a3, (__m128 *)a2 + 2); /*0x8b6079*/
      sub_8B5E20(a1, *((float **)a2 + 4), v54, a4); /*0x8b608e*/
      return; /*0x8b60a8*/
    case 0x16: /*0x8b5e87*/
      sub_8B5E20(a1, *((float **)a2 + 4), a3, a4); /*0x8b5fbf*/
      return; /*0x8b5fd9*/
    case 0x17: /*0x8b5e87*/
LABEL_32:
      if ( v35.m128_f32[0] != *(float *)&SrcStr ) /*0x8b6267*/
      {
        sub_8B3810(&v35, v35.m128_f32[0]); /*0x8b6276*/
        v33.m128_u64[0] = 0; /*0x8b6287*/
        v33.m128_i32[2] = 0x80000000; /*0x8b628f*/
        sub_539B00((float *)v45); /*0x8b6297*/
        sub_8B3690(v45, (int)a4); /*0x8b62a7*/
        v19 = v33.m128_i32[1]; /*0x8b62b0*/
        if ( v33.m128_i32[1] == (v33.m128_i32[2] & 0x3FFFFFFF) ) /*0x8b62bc*/
        {
          sub_8A6EE0((const void **)&v33, 0x90); /*0x8b62c8*/
          v19 = v33.m128_i32[1]; /*0x8b62cd*/
        }
        v20 = HIDWORD(v45[0]); /*0x8b62e0*/
        v21 = v33.m128_i32[0] + 0x90 * v19; /*0x8b62ed*/
        v33.m128_i32[1] = v19 + 1; /*0x8b62f0*/
        v22 = v45[0]; /*0x8b62f4*/
        *(__int128 *)(v21 + 0x10) = v46; /*0x8b62fb*/
        v23 = v47; /*0x8b62ff*/
        *(_DWORD *)v21 = v22; /*0x8b6307*/
        *(_DWORD *)(v21 + 4) = v20; /*0x8b6309*/
        *(_OWORD *)(v21 + 0x20) = v23; /*0x8b630c*/
        *(__int128 *)(v21 + 0x30) = v48; /*0x8b6318*/
        *(__int128 *)(v21 + 0x40) = v49; /*0x8b6324*/
        *(__m128 *)(v21 + 0x50) = v50; /*0x8b6330*/
        *(__m128 *)(v21 + 0x60) = v51; /*0x8b633c*/
        *(__m128 *)(v21 + 0x70) = v52; /*0x8b6348*/
        *(__m128 *)(v21 + 0x80) = v53; /*0x8b635b*/
        sub_539B00((float *)v45); /*0x8b6362*/
        v46 = v36; /*0x8b6378*/
        v47 = v37; /*0x8b6385*/
        v48 = v38; /*0x8b6392*/
        v49 = v39; /*0x8b639f*/
        v45[0] = v35.m128_u64[0]; /*0x8b63a7*/
        v50 = *a3; /*0x8b63b4*/
        v51 = a3[1]; /*0x8b63c0*/
        v24 = v33.m128_i32[1]; /*0x8b63d3*/
        v52 = a3[2]; /*0x8b63df*/
        v53 = a3[3]; /*0x8b63eb*/
        if ( v33.m128_i32[1] == (v33.m128_i32[2] & 0x3FFFFFFF) ) /*0x8b63f3*/
        {
          sub_8A6EE0((const void **)&v33, 0x90); /*0x8b63ff*/
          v24 = v33.m128_i32[1]; /*0x8b6404*/
        }
        v25 = HIDWORD(v45[0]); /*0x8b640f*/
        v26 = v33.m128_i32[0] + 0x90 * v24; /*0x8b6424*/
        v33.m128_i32[1] = v24 + 1; /*0x8b6427*/
        v27 = v45[0]; /*0x8b642b*/
        *(__int128 *)(v26 + 0x10) = v46; /*0x8b6432*/
        v28 = v47; /*0x8b6436*/
        *(_DWORD *)v26 = v27; /*0x8b643e*/
        *(_DWORD *)(v26 + 4) = v25; /*0x8b6440*/
        *(_OWORD *)(v26 + 0x20) = v28; /*0x8b6443*/
        *(__int128 *)(v26 + 0x30) = v48; /*0x8b644f*/
        *(__int128 *)(v26 + 0x40) = v49; /*0x8b645b*/
        *(__m128 *)(v26 + 0x50) = v50; /*0x8b6467*/
        *(__m128 *)(v26 + 0x60) = v51; /*0x8b6473*/
        *(__m128 *)(v26 + 0x70) = v52; /*0x8b647f*/
        *(__m128 *)(v26 + 0x80) = v53; /*0x8b648b*/
        sub_8B3E60((int *)&v33, a4); /*0x8b6498*/
        if ( v33.m128_i32[2] >= 0 ) /*0x8b64a6*/
        {
          v29 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8b64b8*/
          if ( !v29 ) /*0x8b64c0*/
            v29 = unk_BA7D9C; /*0x8b64c2*/
          sub_8A75D0(v29, v33.m128_i32[0], 0x90 * (v33.m128_i32[2] & 0x3FFFFFFF), 0x14); /*0x8b64db*/
        }
      }
      break; /*0x8b64db*/
    case 0x19: /*0x8b5e87*/
      sub_8B1F70(v54, a3, (__m128 *)a2 + 2); /*0x8b60b8*/
      sub_8B5E20(a1, *((float **)a2 + 3), v54, a4); /*0x8b60cd*/
      break; /*0x8b60e7*/
    default:
      return;
  }
}
