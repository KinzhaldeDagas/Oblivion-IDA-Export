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
  void *v15; // ebx
  unsigned __int16 *v16; // edi
  unsigned __int16 v17; // ax
  float z; // ecx
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // ax
  int v22; // ebp
  NiNode *v23; // ebx
  unsigned int v24; // edi
  void *v25; // ebx
  unsigned __int16 v26; // ax
  int v27; // ecx
  int v28; // edx
  float *v29; // eax
  void *v30; // eax
  void *v31; // edi
  int v32; // eax
  unsigned int v33; // edi
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
  unsigned __int16 v46; // [esp+14h] [ebp-2Ch]
  unsigned __int16 v47; // [esp+18h] [ebp-28h]
  float v48; // [esp+1Ch] [ebp-24h]
  float v49; // [esp+20h] [ebp-20h]
  int v50; // [esp+20h] [ebp-20h]
  int v51; // [esp+20h] [ebp-20h]
  unsigned __int16 *v52; // [esp+24h] [ebp-1Ch]
  int v53; // [esp+44h] [ebp+4h]
  float v54; // [esp+44h] [ebp+4h]
  float v55; // [esp+44h] [ebp+4h]
  __int16 v56; // [esp+44h] [ebp+4h]
  int v57; // [esp+44h] [ebp+4h]
  int v58; // [esp+44h] [ebp+4h]
  float v59; // [esp+44h] [ebp+4h]

  v5 = a2; /*0x702999*/
  if ( a2 < 3u ) /*0x7029a1*/
    return 0xFFFFFFFF; /*0x7029a1*/
  v7 = a3; /*0x7029ab*/
  v8 = a3 == 0; /*0x7029af*/
  if ( a3 ) /*0x7029b2*/
  {
    if ( !Src ) /*0x7029b9*/
      return 0xFFFFFFFF; /*0x7029a6*/
    v8 = a3 == 0; /*0x7029bb*/
  }
  if ( v8 ) /*0x7029be*/
  {
    a3 = a2 - 2; /*0x7029c6*/
    v7 = a2 - 2; /*0x7029ca*/
  }
  v9 = LOWORD(this->member.super.m_worldTransform.rot.data[0][0]); /*0x7029cc*/
  v10 = v9 + 1; /*0x7029d0*/
  v11 = v9; /*0x7029d3*/
  scale_low = LOWORD(this->member.super.m_localTransform.scale); /*0x7029d6*/
  v46 = v11; /*0x7029dd*/
  LOWORD(this->member.super.m_worldTransform.rot.data[0][0]) = v10; /*0x7029e1*/
  if ( v10 > scale_low )
  {
    v13 = scale_low + HIWORD(this->member.super.m_localTransform.scale); /*0x7029f2*/
    v14 = (void *)FormHeapAlloc((unsigned __int64)v13 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v13);
    memcpy( /*0x702a22*/
      v14,
      (const void *)LODWORD(this->member.super.m_localTransform.pos.y),
      8 * LOWORD(this->member.super.m_localTransform.scale));
    FormHeapFree(LODWORD(this->member.super.m_localTransform.pos.y)); /*0x702a2b*/
    LODWORD(this->member.super.m_localTransform.pos.y) = v14; /*0x702a3e*/
    v15 = (void *)FormHeapAlloc((unsigned __int64)v13 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v13);
    memcpy( /*0x702a59*/
      v15,
      (const void *)LODWORD(this->member.super.m_localTransform.pos.z),
      2 * LOWORD(this->member.super.m_localTransform.scale));
    _memset( /*0x702a70*/
      (int)v15 + 2 * LOWORD(this->member.super.m_localTransform.scale),
      0xFF,
      2 * (v13 - LOWORD(this->member.super.m_localTransform.scale)));
    FormHeapFree(LODWORD(this->member.super.m_localTransform.pos.z)); /*0x702a79*/
    v11 = v46; /*0x702a7e*/
    LODWORD(this->member.super.m_localTransform.pos.z) = v15; /*0x702a82*/
    v7 = a3; /*0x702a85*/
    LOWORD(this->member.super.m_localTransform.scale) = v13; /*0x702a89*/
    v5 = a2; /*0x702a8d*/
  }
  v16 = (unsigned __int16 *)(LODWORD(this->member.super.m_localTransform.pos.y) + 8 * v11); /*0x702a9a*/
  *v16 = v5; /*0x702a9d*/
  v16[1] = (unsigned __int16)this->member.super.super.m_pcName; /*0x702aa4*/
  v16[2] = v7; /*0x702aa8*/
  v17 = 0; /*0x702ab4*/
  v16[3] = 3 * LOWORD(this->member.super.m_localTransform.rot.data[1][1]); /*0x702ab6*/
  v52 = v16; /*0x702abe*/
  if ( LOWORD(this->member.super.m_worldTransform.rot.data[0][0]) ) /*0x702aba*/
  {
    z = this->member.super.m_localTransform.pos.z; /*0x702ac4*/
    while ( *(_WORD *)(LODWORD(z) + 2 * v17) != 0xFFFF ) /*0x702ad9*/
    {
      if ( ++v17 >= LOWORD(this->member.super.m_worldTransform.rot.data[0][0]) ) /*0x702ae2*/
        goto LABEL_16; /*0x702ae2*/
    }
    *(_WORD *)(LODWORD(z) + 2 * v17) = v11; /*0x702ae9*/
    v46 = v17; /*0x702af0*/
  }
LABEL_16:
  LOWORD(this->member.super.super.m_pcName) += *v16; /*0x702af4*/
  v19 = HIWORD(this->member.super.m_worldTransform.rot.data[0][0]); /*0x702aff*/
  v53 = LOWORD(this->member.super.super.m_pcName) - v19; /*0x702b0d*/
  if ( v53 > 0 )
  {
    v20 = LOWORD(this->member.super.m_worldTransform.rot.data[0][1]); /*0x702b17*/
    v54 = (double)v53 / (double)v20; /*0x702b2c*/
    v21 = v19 + ((int)(v54 + dbl_A2FAA0) + 1) * v20; /*0x702b69*/
    v22 = v21; /*0x702b6c*/
    v47 = v21; /*0x702b6f*/
    v23 = (NiNode *)FormHeapAlloc((0xC * (unsigned __int64)v21) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v21);
    v24 = 0xC * HIWORD(this->member.super.m_worldTransform.rot.data[0][0]); /*0x702b99*/
    memcpy(v23, this->member.super.m_parent, v24); /*0x702b9e*/
    FormHeapFree((unsigned int)this->member.super.m_parent); /*0x702ba7*/
    v8 = LODWORD(this->member.super.m_kWorldBound.Center.x) == 0; /*0x702baf*/
    this->member.super.m_parent = v23; /*0x702bb3*/
    if ( !v8 )
    {
      v25 = (void *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v22) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v22);
      memcpy(v25, (const void *)LODWORD(this->member.super.m_kWorldBound.Center.x), v24); /*0x702bdc*/
      FormHeapFree(LODWORD(this->member.super.m_kWorldBound.Center.x)); /*0x702be5*/
      v26 = HIWORD(this->member.super.m_worldTransform.rot.data[0][0]); /*0x702bea*/
      LODWORD(this->member.super.m_kWorldBound.Center.x) = v25; /*0x702bf8*/
      if ( v26 < v47 ) /*0x702bfb*/
      {
        v27 = 0xC * v26; /*0x702c05*/
        v28 = (unsigned __int16)(v47 - v26); /*0x702c09*/
        do /*0x702c6b*/
        {
          v29 = (float *)(v27 + LODWORD(this->member.super.m_kWorldBound.Center.x)); /*0x702c1b*/
          v55 = -rhs.x; /*0x702c1d*/
          v27 += 0xC; /*0x702c21*/
          --v28; /*0x702c24*/
          v48 = -rhs.y; /*0x702c2f*/
          v49 = -rhs.z; /*0x702c3b*/
          *v29 = v55; /*0x702c4f*/
          v29[1] = v48; /*0x702c5d*/
          v29[2] = v49; /*0x702c68*/
        }
        while ( v28 ); /*0x702c6b*/
      }
    }
    if ( LODWORD(this->member.super.m_kWorldBound.Center.y) )
    {
      v30 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)v22 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v22);
      v31 = v30; /*0x702c8b*/
      if ( v30 ) /*0x702c9e*/
        sub_401080(v30, 0x10, v22, (void *(__thiscall *)(void *))sub_47EA50); /*0x702ca9*/
      else
        v31 = 0; /*0x702cb0*/
      memcpy( /*0x702cc7*/
        v31,
        (const void *)LODWORD(this->member.super.m_kWorldBound.Center.y),
        0x10 * HIWORD(this->member.super.m_worldTransform.rot.data[0][0]));
      FormHeapFree(LODWORD(this->member.super.m_kWorldBound.Center.y)); /*0x702cd0*/
      LODWORD(this->member.super.m_kWorldBound.Center.y) = v31; /*0x702cd8*/
    }
    v56 = LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F; /*0x702ce5*/
    if ( (LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F) != 0 )
    {
      v50 = LOBYTE(this->member.super.m_kWorldBound.Radius) & 0x3F; /*0x702cee*/
      v32 = FormHeapAlloc((unsigned __int64)(unsigned int)(v22 * v50) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v22 * v50);
      v33 = 8 * HIWORD(this->member.super.m_worldTransform.rot.data[0][0]); /*0x702d16*/
      v34 = *(float *)&v32; /*0x702d1e*/
      if ( v56 ) /*0x702d20*/
      {
        v35 = 0; /*0x702d26*/
        v57 = v50; /*0x702d28*/
        do /*0x702d57*/
        {
          v36 = 8 * v35 * LOWORD(this->member.super.super.m_pcName); /*0x702d3e*/
          memcpy( /*0x702d47*/
            (void *)(LODWORD(v34) + v36),
            (const void *)(v36 + LODWORD(this->member.super.m_kWorldBound.Center.z)),
            v33);
          ++v35; /*0x702d4f*/
          --v57; /*0x702d52*/
        }
        while ( v57 ); /*0x702d57*/
      }
      FormHeapFree(LODWORD(this->member.super.m_kWorldBound.Center.z)); /*0x702d5d*/
      this->member.super.m_kWorldBound.Center.z = v34; /*0x702d65*/
    }
    v16 = v52; /*0x702d6d*/
    v7 = a3; /*0x702d71*/
    HIWORD(this->member.super.m_worldTransform.rot.data[0][0]) = v47; /*0x702d75*/
  }
  LOWORD(this->member.super.m_localTransform.rot.data[1][1]) += v7; /*0x702d79*/
  v37 = LOWORD(this->member.super.m_localTransform.rot.data[1][1]); /*0x702d7d*/
  v38 = v7; /*0x702d81*/
  LODWORD(this->member.super.m_localTransform.rot.data[1][2]) += 3 * v7; /*0x702d87*/
  v39 = HIWORD(this->member.super.m_worldTransform.rot.data[0][1]); /*0x702d8a*/
  v51 = v7; /*0x702d9b*/
  v58 = 3 * v37 - v39; /*0x702d9f*/
  if ( v58 > 0 )
  {
    v40 = LOWORD(this->member.super.m_worldTransform.rot.data[0][2]); /*0x702da9*/
    v59 = (double)v58 / (double)v40; /*0x702dbe*/
    v41 = v39 + v40 * ((int)(v59 + dbl_A2FAA0) + 1); /*0x702dfa*/
    v42 = (void *)FormHeapAlloc((unsigned __int64)v41 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * v41);
    memcpy( /*0x702e24*/
      v42,
      (const void *)LODWORD(this->member.super.m_localTransform.rot.data[2][0]),
      2 * HIWORD(this->member.super.m_worldTransform.rot.data[0][1]));
    FormHeapFree(LODWORD(this->member.super.m_localTransform.rot.data[2][0])); /*0x702e2d*/
    v38 = v51; /*0x702e32*/
    LODWORD(this->member.super.m_localTransform.rot.data[2][0]) = v42; /*0x702e36*/
    v7 = a3; /*0x702e39*/
    HIWORD(this->member.super.m_worldTransform.rot.data[0][1]) = v41; /*0x702e40*/
  }
  v43 = (_WORD *)(LODWORD(this->member.super.m_localTransform.rot.data[2][0]) + 2 * v16[3]); /*0x702e4b*/
  if ( Src ) /*0x702e54*/
  {
    memcpy(v43, Src, 6 * v38); /*0x702e5e*/
  }
  else
  {
    for ( i = 0; (unsigned __int16)i < v7; v43 = v45 + 1 ) /*0x702e6d*/
    {
      *v43 = v16[1]; /*0x702e74*/
      v45 = v43 + 1; /*0x702e82*/
      *v45++ = i + v16[1] + 1; /*0x702e85*/
      *v45 = i++ + v16[1] + 2; /*0x702e96*/
    }
  }
  return v46; /*0x702ea9*/
}
