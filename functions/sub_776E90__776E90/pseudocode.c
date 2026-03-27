int *__userpurge sub_776E90@<eax>(char *this@<ecx>, int a2@<esi>, NiGeometry *a3, _DWORD *a4, char a5, int *a6, int a7)
{
  NiGeometry *v7; // ebp
  unsigned __int16 v8; // ax
  float x; // ecx
  unsigned int v11; // eax
  float y; // esi
  NiGeometryBufferData *v13; // edi
  int v14; // ebx
  int v15; // eax
  int *v16; // eax
  float *v17; // eax
  char *v18; // edi
  int *v19; // ecx
  int v20; // ebp
  int v21; // eax
  int v22; // edx
  int v23; // edi
  unsigned int v24; // esi
  int v25; // edi
  _DWORD *v26; // ebx
  _DWORD *v27; // eax
  _DWORD *v28; // ecx
  int v29; // edx
  int v30; // esi
  _BYTE v32[12]; // [esp-Ch] [ebp-64h]
  char v33; // [esp+Fh] [ebp-49h]
  int v35; // [esp+14h] [ebp-44h] BYREF
  int *v36; // [esp+18h] [ebp-40h] BYREF
  int v37; // [esp+1Ch] [ebp-3Ch]
  unsigned int v38; // [esp+20h] [ebp-38h]
  void *Src; // [esp+24h] [ebp-34h]
  int v40; // [esp+28h] [ebp-30h] BYREF
  void *v41; // [esp+2Ch] [ebp-2Ch]
  int v42; // [esp+30h] [ebp-28h] BYREF
  float v43; // [esp+34h] [ebp-24h] BYREF
  int v44; // [esp+38h] [ebp-20h] BYREF
  int v45; // [esp+3Ch] [ebp-1Ch] BYREF
  _DWORD v46[6]; // [esp+40h] [ebp-18h] BYREF

  v7 = a3;
  v8 = ((int (__thiscall *)(NiGeometry *))a3->__vftable->super.Unk_14)(a3);
  v37 = v8;
  if ( !v8 )
    return a6;
  x = a3->member.super.m_kWorldBound.Center.x;
  Src = a3->member.super.m_parent;
  v11 = LOBYTE(a3->member.super.m_kWorldBound.Radius) & 0x3F;
  *(_DWORD *)&v32[8] = a2;
  y = a3->member.super.m_kWorldBound.Center.y;
  v41 = (void *)LODWORD(x);
  v38 = v11;
  if ( v11 > 8 )
    v38 = 8;
  v36 = 0;
  v35 = 0;
  sub_776DD0((int)a3, 0, &v36, &v35, &v40, &v45, &v42, &v43, &v44);
  v13 = (NiGeometryBufferData *)LODWORD(a3->member.super.m_localTransform.rot.data[0][2]);
  sub_7780A0(v13, (UInt32)v36);
  if ( v13->StreamCount )
    *v13->VertexStride = v35;
  v14 = a7;
  v33 = 1;
  if ( a7 )
  {
    v36 = a6;
    v33 = 0;
  }
  else
  {
    if ( a6
      && (v15 = a6[2]) != 0
      && (HIWORD(a3->member.super.m_kWorldBound.Radius) & 0xF000) != 0x8000
      && ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v15 + 0x34))(v15, v46), v46[0] == 0x64)
      && (int *)v46[5] == v36
      && v46[4] >= v35 * (unsigned int)(unsigned __int16)v37 )
    {
      v16 = a6;
      v36 = a6;
    }
    else
    {
      if ( !NiGeometryBufferData::RefreshVBChips(v13, 0) )
        return 0;
      if ( v13->StreamCount )
        v36 = (int *)*v13->VBChip;
      else
        v36 = 0;
      v16 = v36;
      a5 = 0xFF;
    }
    v14 = sub_776C90(this, v16[2], v16[3], __PAIR64__(v16[4], v16[5]), *(int *)&v32[8]);
  }
  if ( a4 )
  {
    if ( Src )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( v41 )
          v17 = (float *)(v14 + v42);
        else
          v17 = 0;
        sub_56CD20(a4, (int)a3, (float *)(v14 + v40), v17, 0, 0, v35);
      }
    }
    v18 = this;
  }
  else
  {
    if ( Src && (a5 & 1) != 0 )
    {
      v18 = this;
      *(_DWORD *)&v32[4] = (unsigned __int16)v37;
      *(_DWORD *)v32 = 0xC;
      sub_776D40((int)this, (char *)(v14 + v40), (char *)Src, v35, *(size_t *)v32, *(int *)&v32[8]);
    }
    else
    {
      v18 = this;
    }
    if ( v41 )
    {
      if ( (a5 & 2) != 0 )
      {
        *(_DWORD *)&v32[4] = (unsigned __int16)v37;
        *(_DWORD *)v32 = 0xC;
        sub_776D40((int)v18, (char *)(v14 + v42), (char *)v41, v35, *(size_t *)v32, *(int *)&v32[8]);
      }
    }
  }
  if ( y != 0.0 && (a5 & 4) != 0 )
  {
    v19 = (int *)(v14 + LODWORD(v43));
    if ( (_WORD)v37 )
    {
      v20 = (unsigned __int16)v37;
      do
      {
        v43 = *(float *)(LODWORD(y) + 0xC) * dbl_A3DDD8;
        v21 = (int)v43;
        v43 = *(float *)LODWORD(y) * dbl_A3DDD8;
        v22 = (int)v43;
        v43 = *(float *)(LODWORD(y) + 4) * dbl_A3DDD8;
        v23 = (int)v43;
        v43 = *(float *)(LODWORD(y) + 8) * dbl_A3DDD8;
        v42 = (int)v43;
        LODWORD(y) += 0x10;
        *v19 = v42 | ((v23 | ((v22 | (v21 << 8)) << 8)) << 8);
        v19 = (int *)((char *)v19 + v35);
        --v20;
      }
      while ( v20 );
      v7 = a3;
      v18 = this;
    }
  }
  if ( (a5 & 8) != 0 )
  {
    v24 = 0;
    if ( v38 )
    {
      v25 = (unsigned __int16)v37;
      v26 = (_DWORD *)(v44 + v14);
      do
      {
        v27 = (_DWORD *)sub_7282F0(v7, v24);
        v28 = v26;
        if ( v25 )
        {
          v29 = v25;
          do
          {
            *v28 = *v27;
            v28[1] = v27[1];
            v28 = (_DWORD *)((char *)v28 + v35);
            v27 += 2;
            --v29;
          }
          while ( v29 );
          v7 = a3;
        }
        ++v24;
        v26 += 2;
      }
      while ( v24 < v38 );
      v18 = this;
    }
  }
  if ( v33 )
  {
    v30 = v36[2];
    *(_DWORD *)&v32[4] = *((_DWORD *)v18 + 0x13);
    memcpy(*((void **)v18 + 0x12), *((const void **)v18 + 0x10), *(size_t *)&v32[4]);
    *((_DWORD *)v18 + 0x12) = 0;
    *((_DWORD *)v18 + 0x13) = 0;
    if ( (*((_DWORD *)v18 + 0x3F))-- == 1 )
      *((_DWORD *)v18 + 0x3E) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)v18 + 4);
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)v30 + 0x30))(v30) < 0 )
      return 0;
  }
  return v36;
}
