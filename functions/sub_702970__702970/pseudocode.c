int __thiscall sub_702970(NiGeometry *this, unsigned __int16 a2, unsigned __int16 a3, void *Src)
{
  unsigned __int16 v5; // bp
  unsigned __int16 v7; // bx
  bool v8; // zf
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // dx
  unsigned __int16 scale_low; // ax
  unsigned __int16 v13; // bp
  void *v14; // ebx
  char *v15; // ebx
  unsigned __int16 *v16; // edi
  unsigned __int16 v17; // ax
  float z; // ecx
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // ax
  int v22; // ebp
  NiNode *v23; // ebx
  int v24; // edi
  void *v25; // ebx
  unsigned __int16 v26; // ax
  int v27; // ecx
  int v28; // edx
  float *v29; // eax
  void *v30; // eax
  void *v31; // edi
  int v32; // eax
  int v33; // edi
  float v34; // ebx
  int v35; // ebp
  int v36; // eax
  unsigned __int16 v37; // ax
  int v38; // ecx
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // cx
  unsigned __int16 v41; // bp
  void *v42; // ebx
  _WORD *v43; // eax
  int i; // ecx
  _WORD *v45; // eax
  size_t v46; // [esp-1Ch] [ebp-5Ch]
  size_t v47; // [esp-8h] [ebp-48h]
  size_t v48; // [esp-8h] [ebp-48h]
  size_t v49; // [esp-8h] [ebp-48h]
  size_t v50; // [esp-8h] [ebp-48h]
  size_t v51; // [esp-4h] [ebp-44h]
  unsigned __int16 v52; // [esp+14h] [ebp-2Ch]
  unsigned __int16 v53; // [esp+18h] [ebp-28h]
  float v54; // [esp+1Ch] [ebp-24h]
  float v55; // [esp+20h] [ebp-20h]
  int v56; // [esp+20h] [ebp-20h]
  int v57; // [esp+20h] [ebp-20h]
  unsigned __int16 *v58; // [esp+24h] [ebp-1Ch]
  int v59; // [esp+44h] [ebp+4h]
  float v60; // [esp+44h] [ebp+4h]
  float v61; // [esp+44h] [ebp+4h]
  __int16 v62; // [esp+44h] [ebp+4h]
  int v63; // [esp+44h] [ebp+4h]
  int v64; // [esp+44h] [ebp+4h]
  float v65; // [esp+44h] [ebp+4h]

  v5 = a2;
  if ( a2 < 3u )
    return 0xFFFFFFFF;
  v7 = a3;
  v8 = a3 == 0;
  if ( a3 )
  {
    if ( !Src )
      return 0xFFFFFFFF;
    v8 = a3 == 0;
  }
  if ( v8 )
  {
    a3 = a2 - 2;
    v7 = a2 - 2;
  }
  v9 = LOWORD(this->member.super.m_worldTransform.rot.data[0][0]);
  v10 = v9 + 1;
  v11 = v9;
  scale_low = LOWORD(this->member.super.m_localTransform.scale);
  v52 = v11;
  LOWORD(this->member.super.m_worldTransform.rot.data[0][0]) = v10;
  if ( v10 > scale_low )
  {
    v13 = scale_low + HIWORD(this->member.super.m_localTransform.scale);
    v14 = (void *)FormHeapAlloc((unsigned __int64)v13 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v13);
    LODWORD(v47) = 8 * LOWORD(this->member.super.m_localTransform.scale);
    memcpy(v14, (const void *)LODWORD(this->member.super.m_localTransform.pos.y), v47);
    FormHeapFree(LODWORD(this->member.super.m_localTransform.pos.y));
    LODWORD(this->member.super.m_localTransform.pos.y) = v14;
    v15 = (char *)FormHeapAlloc((unsigned __int64)v13 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v13);
    LODWORD(v46) = 2 * LOWORD(this->member.super.m_localTransform.scale);
    memcpy(v15, (const void *)LODWORD(this->member.super.m_localTransform.pos.z), v46);
    _memset(
      &v15[2 * LOWORD(this->member.super.m_localTransform.scale)],
      0xFF,
      2 * (v13 - LOWORD(this->member.super.m_localTransform.scale)));
    FormHeapFree(LODWORD(this->member.super.m_localTransform.pos.z));
    v11 = v52;
    LODWORD(this->member.super.m_localTransform.pos.z) = v15;
    v7 = a3;
    LOWORD(this->member.super.m_localTransform.scale) = v13;
    v5 = a2;
  }
  v16 = (unsigned __int16 *)(LODWORD(this->member.super.m_localTransform.pos.y) + 8 * v11);
  *v16 = v5;
  v16[1] = (unsigned __int16)this->member.super.super.m_pcName;
  v16[2] = v7;
  v17 = 0;
  v16[3] = 3 * LOWORD(this->member.super.m_localTransform.rot.data[1][1]);
  v58 = v16;
  if ( LOWORD(this->member.super.m_worldTransform.rot.data[0][0]) )
  {
    z = this->member.super.m_localTransform.pos.z;
    while ( *(_WORD *)(LODWORD(z) + 2 * v17) != 0xFFFF )
    {
      if ( ++v17 >= LOWORD(this->member.super.m_worldTransform.rot.data[0][0]) )
        goto LABEL_16;
    }
    *(_WORD *)(LODWORD(z) + 2 * v17) = v11;
    v52 = v17;
  }
LABEL_16:
  LOWORD(this->member.super.super.m_pcName) += *v16;
  v19 = HIWORD(this->member.super.m_worldTransform.rot.data[0][0]);
  v59 = LOWORD(this->member.super.super.m_pcName) - v19;
  if ( v59 > 0 )
  {
    v20 = LOWORD(this->member.super.m_worldTransform.rot.data[0][1]);
    v60 = (double)v59 / (double)v20;
    v21 = v19 + ((int)(v60 + dbl_A2FAA0) + 1) * v20;
    v22 = v21;
    v53 = v21;
    v23 = (NiNode *)FormHeapAlloc((0xC * (unsigned __int64)v21) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v21);
    v24 = 0xC * HIWORD(this->member.super.m_worldTransform.rot.data[0][0]);
    LODWORD(v48) = v24;
    memcpy(v23, this->member.super.m_parent, v48);
    FormHeapFree((unsigned int)this->member.super.m_parent);
    v8 = LODWORD(this->member.super.m_kWorldBound.Center.x) == 0;
    this->member.super.m_parent = v23;
    if ( !v8 )
    {
      v25 = (void *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v22) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v22);
      LODWORD(v49) = v24;
      memcpy(v25, (const void *)LODWORD(this->member.super.m_kWorldBound.Center.x), v49);
      FormHeapFree(LODWORD(this->member.super.m_kWorldBound.Center.x));
      v26 = HIWORD(this->member.super.m_worldTransform.rot.data[0][0]);
      LODWORD(this->member.super.m_kWorldBound.Center.x) = v25;
      if ( v26 < v53 )
      {
        v27 = 0xC * v26;
        v28 = (unsigned __int16)(v53 - v26);
        do
        {
          v29 = (float *)(v27 + LODWORD(this->member.super.m_kWorldBound.Center.x));
          v61 = -*(float *)&dword_B258E8;
          v27 += 0xC;
          --v28;
          v54 = -*(float *)&dword_B258EC;
          v55 = -*(float *)&dword_B258F0;
          *v29 = v61;
          v29[1] = v54;
          v29[2] = v55;
        }
        while ( v28 );
      }
    }
    if ( LODWORD(this->member.super.m_kWorldBound.Center.y) )
    {
      v30 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v22 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v22);
      v31 = v30;
      if ( v30 )
        sub_401080(v30, 0x10, v22, (void *(__thiscall *)(void *))sub_47EA50);
      else
        v31 = 0;
      LODWORD(v51) = 0x10 * HIWORD(this->member.super.m_worldTransform.rot.data[0][0]);
      memcpy(v31, (const void *)LODWORD(this->member.super.m_kWorldBound.Center.y), v51);
      FormHeapFree(LODWORD(this->member.super.m_kWorldBound.Center.y));
      LODWORD(this->member.super.m_kWorldBound.Center.y) = v31;
    }
    v62 = LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F;
    if ( (LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F) != 0 )
    {
      v56 = LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F;
      v32 = FormHeapAlloc((unsigned __int64)(unsigned int)(v22 * v56) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v22 * v56);
      v33 = 8 * HIWORD(this->member.super.m_worldTransform.rot.data[0][0]);
      v34 = *(float *)&v32;
      if ( v62 )
      {
        v35 = 0;
        v63 = v56;
        do
        {
          v36 = 8 * v35 * LOWORD(this->member.super.super.m_pcName);
          LODWORD(v51) = v33;
          memcpy(
            (void *)(LODWORD(v34) + v36),
            (const void *)(v36 + LODWORD(this->member.super.m_kWorldBound.Center.z)),
            v51);
          ++v35;
          --v63;
        }
        while ( v63 );
      }
      FormHeapFree(LODWORD(this->member.super.m_kWorldBound.Center.z));
      this->member.super.m_kWorldBound.Center.z = v34;
    }
    v16 = v58;
    v7 = a3;
    HIWORD(this->member.super.m_worldTransform.rot.data[0][0]) = v53;
  }
  LOWORD(this->member.super.m_localTransform.rot.data[1][1]) += v7;
  v37 = LOWORD(this->member.super.m_localTransform.rot.data[1][1]);
  v38 = v7;
  LODWORD(this->member.super.m_localTransform.rot.data[1][2]) += 3 * v7;
  v39 = HIWORD(this->member.super.m_worldTransform.rot.data[0][1]);
  v57 = v7;
  v64 = 3 * v37 - v39;
  if ( v64 > 0 )
  {
    v40 = LOWORD(this->member.super.m_worldTransform.rot.data[0][2]);
    v65 = (double)v64 / (double)v40;
    v41 = v39 + v40 * ((int)(v65 + dbl_A2FAA0) + 1);
    v42 = (void *)FormHeapAlloc((unsigned __int64)v41 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v41);
    LODWORD(v50) = 2 * HIWORD(this->member.super.m_worldTransform.rot.data[0][1]);
    memcpy(v42, (const void *)LODWORD(this->member.super.m_localTransform.rot.data[2][0]), v50);
    FormHeapFree(LODWORD(this->member.super.m_localTransform.rot.data[2][0]));
    v38 = v57;
    LODWORD(this->member.super.m_localTransform.rot.data[2][0]) = v42;
    v7 = a3;
    HIWORD(this->member.super.m_worldTransform.rot.data[0][1]) = v41;
  }
  v43 = (_WORD *)(LODWORD(this->member.super.m_localTransform.rot.data[2][0]) + 2 * v16[3]);
  if ( Src )
  {
    LODWORD(v51) = 6 * v38;
    memcpy(v43, Src, v51);
  }
  else
  {
    for ( i = 0; (unsigned __int16)i < v7; v43 = v45 + 1 )
    {
      *v43 = v16[1];
      v45 = v43 + 1;
      *v45++ = i + v16[1] + 1;
      *v45 = i++ + v16[1] + 2;
    }
  }
  return v52;
}
