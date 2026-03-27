void __thiscall sub_4C1170(_BYTE *this, signed int *a2)
{
  _BYTE *v2; // esi
  int v3; // ebx
  int v4; // ebp
  int i; // edi
  int v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // ebp
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  _WORD *v11; // ebp
  unsigned __int16 v12; // dx
  int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  signed int *v18; // edx
  bool v19; // al
  int v20; // eax
  double v21; // st7
  float *v22; // eax
  _BYTE *v23; // ecx
  bool v24; // al
  int v25; // eax
  double v26; // st7
  float *v27; // eax
  int v28; // eax
  double v29; // st7
  float *v30; // eax
  int v32; // [esp+8h] [ebp-2Ch]
  int v33; // [esp+Ch] [ebp-28h]
  float v34; // [esp+10h] [ebp-24h] BYREF
  float v35; // [esp+14h] [ebp-20h]
  float v36; // [esp+18h] [ebp-1Ch]
  float v37; // [esp+1Ch] [ebp-18h]
  float v38; // [esp+20h] [ebp-14h]
  float v39; // [esp+24h] [ebp-10h]
  float v40; // [esp+28h] [ebp-Ch]
  float v41; // [esp+2Ch] [ebp-8h]
  float v42; // [esp+30h] [ebp-4h]

  v2 = this;
  if ( (*(this + 0x1C) & 8) == 0 )
    return;
  v3 = 0;
  v32 = 0;
  while ( 2 )
  {
    v4 = 0;
    for ( i = 0; i < 0xD8C; i += 0xC )
    {
      if ( !a2
        || sub_4C1080((TESObjectCELL **)v2, a2, (float *)(i + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 9) + 4) + v3))) )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 9) + 8) + v3);
        *(float *)(v6 + i) = Vector3_InitValue_;
        v7 = i + v6;
        *(float *)(v7 + 4) = *(&Vector3_InitValue_ + 1);
        *(float *)(v7 + 8) = dword_B3F9B0;
        *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 9) + 0x10) + v3) + v4) = 0;
      }
      ++v4;
    }
    v8 = (unsigned __int16 *)dword_B35BC8;
    v33 = 0x200;
    while ( 1 )
    {
      v9 = *v8;
      v10 = v8[1];
      v11 = v8 + 1;
      v12 = v11[1];
      v13 = v9;
      v14 = *(_DWORD *)(v3 + *(_DWORD *)(*((_DWORD *)v2 + 9) + 4));
      v15 = 0xC * v10;
      v16 = 0xC * v13;
      v40 = *(float *)(v14 + v15) - *(float *)(v14 + v16);
      v17 = 0xC * v12;
      v8 = v11 + 2;
      v41 = *(float *)(v14 + v15 + 4) - *(float *)(v14 + v16 + 4);
      v42 = *(float *)(v14 + v15 + 8) - *(float *)(v14 + v16 + 8);
      v37 = *(float *)(v14 + v17) - *(float *)(v14 + v15);
      v38 = *(float *)(v14 + v17 + 4) - *(float *)(v14 + v15 + 4);
      v39 = *(float *)(v14 + v17 + 8) - *(float *)(v14 + v15 + 8);
      v34 = v39 * v41 - v38 * v42;
      v35 = v42 * v37 - v39 * v40;
      v36 = v40 * v38 - v37 * v41;
      sub_4BFAA0(&v34);
      v18 = a2;
      if ( !a2
        || (v19 = sub_4C1080(
                    (TESObjectCELL **)this,
                    a2,
                    (float *)(v16 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 4) + v32))),
            v18 = a2,
            v19) )
      {
        v20 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 8) + v32);
        v21 = *(float *)(v20 + v16);
        v22 = (float *)(v16 + v20);
        *v22 = v21 + v34;
        v22[1] = v35 + v22[1];
        v22[2] = v22[2] + v36;
      }
      v23 = this;
      if ( !v18
        || (v24 = sub_4C1080(
                    (TESObjectCELL **)this,
                    v18,
                    (float *)(v15 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 9) + 4) + v32))),
            v23 = this,
            v18 = a2,
            v24) )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v23 + 9) + 8) + v32);
        v26 = *(float *)(v25 + v15);
        v27 = (float *)(v15 + v25);
        *v27 = v26 + v34;
        v27[1] = v27[1] + v35;
        v27[2] = v36 + v27[2];
      }
      if ( v18 )
      {
        if ( !sub_4C1080(
                (TESObjectCELL **)v23,
                v18,
                (float *)(v17 + *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v23 + 9) + 4) + v32))) )
          goto LABEL_21;
        v23 = this;
      }
      v28 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v23 + 9) + 8) + v32);
      v29 = *(float *)(v28 + v17);
      v30 = (float *)(v17 + v28);
      *v30 = v29 + v34;
      v30[1] = v30[1] + v35;
      v30[2] = v36 + v30[2];
LABEL_21:
      if ( !--v33 )
        break;
      v2 = this;
      v3 = v32;
    }
    sub_725890(*(float **)(*(_DWORD *)(*((_DWORD *)this + 9) + 8) + v32), 0x121, 0xC);
    v32 += 4;
    if ( v32 < 0x10 )
    {
      v2 = this;
      v3 = v32;
      continue;
    }
    break;
  }
}
