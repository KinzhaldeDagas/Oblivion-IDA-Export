void __thiscall MAkeTreetopsCollisions_(void *this, _DWORD *a2, float a3)
{
  unsigned int v4; // edi
  int (__thiscall *v5)(void *); // edx
  unsigned int v6; // esi
  double v7; // rt0
  double v8; // st7
  int i; // eax
  double v10; // st6
  bhkRefObject *v11; // eax
  bhkRefObject *v12; // eax
  bhkRefObject *v13; // eax
  bhkRefObject *v14; // eax
  bhkRefObject *v15; // eax
  bhkRefObject *v16; // eax
  bhkRefObject *v17; // eax
  bhkRefObject *v18; // eax
  bhkRefObject *v19; // eax
  double v20; // rtt
  __m128 *v21; // eax
  bhkRefObject *v22; // eax
  bhkRefObject *v23; // eax
  int v24; // ecx
  bhkRefObject *v25; // eax
  bhkRefObject *v26; // edi
  _DWORD *v27; // eax
  _DWORD *v28; // esi
  _DWORD *v29; // ecx
  int v30; // ecx
  float v31; // [esp+24h] [ebp-118h]
  float v32; // [esp+28h] [ebp-114h] BYREF
  float v33; // [esp+2Ch] [ebp-110h]
  float v34; // [esp+30h] [ebp-10Ch]
  float v35; // [esp+34h] [ebp-108h] BYREF
  float v36; // [esp+38h] [ebp-104h]
  float v37; // [esp+3Ch] [ebp-100h]
  int v38; // [esp+40h] [ebp-FCh] BYREF
  float v39; // [esp+44h] [ebp-F8h]
  _DWORD *v40; // [esp+48h] [ebp-F4h]
  float v41; // [esp+4Ch] [ebp-F0h] BYREF
  float v42; // [esp+50h] [ebp-ECh]
  float v43; // [esp+5Ch] [ebp-E0h]
  float v44; // [esp+60h] [ebp-DCh]
  float v45; // [esp+64h] [ebp-D8h]
  float v46; // [esp+68h] [ebp-D4h]
  float v47; // [esp+6Ch] [ebp-D0h]
  float v48; // [esp+70h] [ebp-CCh]
  float v49; // [esp+74h] [ebp-C8h]
  float v50; // [esp+78h] [ebp-C4h]
  float v51[4]; // [esp+8Ch] [ebp-B0h] BYREF
  int v52; // [esp+9Ch] [ebp-A0h] BYREF
  hkRefObject *hkObject; // [esp+A0h] [ebp-9Ch]
  _DWORD *v54; // [esp+A8h] [ebp-94h]
  int v55; // [esp+B0h] [ebp-8Ch]
  __m128 v56; // [esp+FCh] [ebp-40h] BYREF
  __m128 v57; // [esp+10Ch] [ebp-30h] BYREF
  unsigned int v58; // [esp+138h] [ebp-4h]

  if ( bTreetops == 1 )
  {
    v4 = sub_787D90(a2);
    if ( v4 )
    {
      v5 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 0xA4);
      v39 = flt_B39E18 * a3;
      v40 = (_DWORD *)v5(this);
      sub_532250(&v52);
      v6 = 0;
      v58 = 0;
      if ( v4 != 1 )
      {
        v56.m128_u64[0] = 0;
        v56.m128_u64[1] = 0x8000000000000000uLL;
        LOBYTE(v58) = 6;
        do
        {
          sub_789D40(a2, v6, &v38, &v32, &v35);
          if ( v38 )
          {
            PrintError("Multiple bounding volumes around a tree must all be spheres.");
          }
          else
          {
            v20 = hkFactor;
            v31 = v32 * v20;
            v32 = v31 * v39;
            v31 = v33 * v20;
            v33 = v31 * v39;
            v31 = v34 * v20;
            v34 = v31 * v39;
            v31 = v20 * v35;
            v35 = v39 * v31;
            v57.m128_f32[0] = v32;
            v57.m128_f32[1] = v33;
            v57.m128_f32[2] = v34;
            v57.m128_f32[3] = v35;
            if ( v56.m128_i32[2] == (v56.m128_i32[3] & 0x3FFFFFFF) )
              sub_8A6EE0((int)&v56.m128_i32[1], 0x10);
            v21 = (__m128 *)(v56.m128_i32[1] + 0x10 * v56.m128_i32[2]++);
            *v21 = v57;
          }
          ++v6;
        }
        while ( v6 < v4 );
        v22 = (bhkRefObject *)FormHeapAlloc(0x14u);
        v31 = *(float *)&v22;
        LOBYTE(v58) = 7;
        if ( v22 && (v23 = sub_563A30(v22, (int)&v56)) != 0 )
          hkObject = v23->hkObject;
        else
          hkObject = 0;
        LOBYTE(v58) = 0;
        if ( v56.m128_i32[3] >= 0 )
        {
          v24 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v24 )
            v24 = dword_BA7D9C;
          sub_8A75D0(v24, (_DWORD *)v56.m128_i32[1], 0x10 * v56.m128_i32[3], 0x14);
        }
        goto LABEL_49;
      }
      sub_789D40(a2, 0, &v38, &v35, &v32);
      v7 = hkFactor;
      v31 = v35 * v7;
      v35 = v31 * v39;
      v31 = v36 * v7;
      v36 = v31 * v39;
      v31 = v37 * v7;
      v37 = v31 * v39;
      v31 = v32 * v7;
      v32 = v31 * v39;
      v31 = v33 * v7;
      v33 = v31 * v39;
      v31 = v7 * v34;
      v34 = v39 * v31;
      switch ( v38 )
      {
        case 0:
          sub_564B70(&v41);
          v57.m128_f32[0] = v35;
          v57.m128_f32[1] = v36;
          v57.m128_f32[2] = v37;
          v57.m128_f32[3] = 0.0;
          sub_47DCD0(v51, &v57);
          v16 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v31 = *(float *)&v16;
          LOBYTE(v58) = 1;
          if ( v16 )
            v17 = sub_532090(v16, v32, 0.0);
          else
            v17 = 0;
          LOBYTE(v58) = 0;
          if ( v17 )
            v42 = *(float *)&v17->hkObject;
          else
            v42 = 0.0;
          v18 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v31 = *(float *)&v18;
          LOBYTE(v58) = 2;
          if ( v18 )
            v19 = sub_563AF0(v18, (int)&v41);
          else
            v19 = 0;
          LOBYTE(v58) = 0;
          if ( v19 )
          {
            hkObject = v19->hkObject;
            goto LABEL_49;
          }
          goto LABEL_33;
        case 1:
          sub_564030(&v41);
          v31 = v32 + v37;
          v43 = v35;
          v44 = v36;
          v45 = v31;
          v46 = 0.0;
          v31 = v37 + v33 - v32;
          v47 = v35;
          v48 = v36;
          v49 = v31;
          v50 = 0.0;
          v42 = v32;
          v15 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v31 = *(float *)&v15;
          LOBYTE(v58) = 3;
          if ( v15 )
          {
            v14 = sub_563BB0(v15, (int)&v41);
LABEL_18:
            LOBYTE(v58) = 0;
            if ( v14 )
            {
              hkObject = v14->hkObject;
              goto LABEL_49;
            }
LABEL_33:
            hkObject = 0;
            goto LABEL_49;
          }
          break;
        case 2:
          sub_564B70(&v41);
          v8 = dbl_A2FAA0;
          for ( i = 0; i < 3; *(&v31 + i) = v10 * v8 )
            v10 = *(&v32 + i++);
          v31 = v34 + v37;
          v56.m128_f32[0] = v35;
          v56.m128_f32[1] = v36;
          v56.m128_f32[2] = v31;
          v56.m128_f32[3] = 0.0;
          v57.m128_f32[0] = v32;
          v57.m128_f32[1] = v33;
          v57.m128_f32[2] = v34;
          v57.m128_f32[3] = 0.0;
          sub_47DCD0(v51, &v56);
          v11 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v31 = *(float *)&v11;
          LOBYTE(v58) = 4;
          if ( v11 )
            v12 = sub_564BF0(v11, &v57);
          else
            v12 = 0;
          LOBYTE(v58) = 0;
          if ( v12 )
            v42 = *(float *)&v12->hkObject;
          else
            v42 = 0.0;
          v13 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v31 = *(float *)&v13;
          LOBYTE(v58) = 5;
          if ( v13 )
          {
            v14 = sub_563AF0(v13, (int)&v41);
            goto LABEL_18;
          }
          break;
        default:
LABEL_49:
          v52 = 0x40009;
          v25 = (bhkRefObject *)FormHeapAlloc(0x14u);
          v31 = *(float *)&v25;
          LOBYTE(v58) = 8;
          if ( v25 )
            v26 = sub_531FC0(v25, (int)&v52);
          else
            v26 = 0;
          LOBYTE(v58) = 0;
          v27 = (_DWORD *)FormHeapAlloc(0x14u);
          v28 = v27;
          v31 = *(float *)&v27;
          LOBYTE(v58) = 9;
          if ( v27 )
          {
            sub_897640(v27, v40);
            *v28 = &bhkSPCollisionObject::`vftable';
            v29 = v28;
          }
          else
          {
            v29 = 0;
          }
          LOBYTE(v58) = 0;
          sub_897670(v29, (int)v26);
          v58 = 0xFFFFFFFF;
          if ( v55 >= 0 )
          {
            v30 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
            if ( !v30 )
              v30 = dword_BA7D9C;
            sub_8A75D0(v30, v54, 8 * v55, 0x14);
          }
          return;
      }
      v14 = 0;
      goto LABEL_18;
    }
  }
}
