// MoonSugarEffect decode: fallback FVF/one-stream non-skinned vertex packer. Position begins at stream offset 0, then optional normals/color/UVs. A pack-time wobble here would persist in the geometry VB until a later clean repack.
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
  size_t v32; // [esp-Ch] [ebp-64h]
  size_t v33; // [esp-Ch] [ebp-64h]
  int v34; // [esp-4h] [ebp-5Ch]
  char v35; // [esp+Fh] [ebp-49h]
  int v37; // [esp+14h] [ebp-44h] BYREF
  int *v38; // [esp+18h] [ebp-40h] BYREF
  int v39; // [esp+1Ch] [ebp-3Ch]
  unsigned int v40; // [esp+20h] [ebp-38h]
  void *Src; // [esp+24h] [ebp-34h]
  int v42; // [esp+28h] [ebp-30h] BYREF
  void *v43; // [esp+2Ch] [ebp-2Ch]
  int v44; // [esp+30h] [ebp-28h] BYREF
  float v45; // [esp+34h] [ebp-24h] BYREF
  int v46; // [esp+38h] [ebp-20h] BYREF
  int v47; // [esp+3Ch] [ebp-1Ch] BYREF
  _DWORD v48[6]; // [esp+40h] [ebp-18h] BYREF

  v7 = a3; /*0x776e95*/
  v8 = ((int (__thiscall *)(NiGeometry *))a3->__vftable->super.Unk_14)(a3); /*0x776ea8*/
  v39 = v8; /*0x776eb2*/
  if ( !v8 ) /*0x776eb6*/
    return a6; /*0x776ec2*/
  x = a3->member.super.m_kWorldBound.Center.x; /*0x776ec8*/
  Src = a3->member.super.m_parent; /*0x776ecb*/
  v11 = LOBYTE(a3->member.super.m_kWorldBound.Radius) & 0x3F; /*0x776ed3*/
  v34 = a2; /*0x776ed9*/
  y = a3->member.super.m_kWorldBound.Center.y; /*0x776eda*/
  v43 = (void *)LODWORD(x); /*0x776edd*/
  v40 = v11; /*0x776ee1*/
  if ( v11 > 8 ) /*0x776ee5*/
    v40 = 8; /*0x776ee7*/
  v38 = 0; /*0x776f16*/
  v37 = 0; /*0x776f1a*/
  sub_776DD0((int)a3, 0, &v38, &v37, &v42, &v47, &v44, &v45, &v46); /*0x776f1e*/
  v13 = (NiGeometryBufferData *)LODWORD(a3->member.super.m_localTransform.rot.data[0][2]); /*0x776f23*/
  sub_7780A0(v13, (UInt32)v38); /*0x776f2d*/
  if ( v13->StreamCount ) /*0x776f32*/
    *v13->VertexStride = v37; /*0x776f3e*/
  v14 = a7; /*0x776f40*/
  v35 = 1; /*0x776f46*/
  if ( a7 ) /*0x776f4b*/
  {
    v38 = a6; /*0x776f51*/
    v35 = 0; /*0x776f55*/
  }
  else
  {
    if ( a6 /*0x776faa*/
      && (v15 = a6[2]) != 0
      && (HIWORD(a3->member.super.m_kWorldBound.Radius) & 0xF000) != 0x8000
      && ((*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v15 + 0x34))(v15, v48), v48[0] == 0x64)
      && (int *)v48[5] == v38
      && v48[4] >= v37 * (unsigned int)(unsigned __int16)v39 )
    {
      v16 = a6; /*0x776fac*/
      v38 = a6; /*0x776fae*/
    }
    else
    {
      if ( !NiGeometryBufferData::RefreshVBChips(v13, 0) ) /*0x776fc2*/
        return 0; /*0x7771b3*/
      if ( v13->StreamCount ) /*0x776fc8*/
        v38 = (int *)*v13->VBChip; /*0x776fd3*/
      else
        v38 = 0; /*0x776fd9*/
      v16 = v38; /*0x776fe1*/
      a5 = 0xFF; /*0x776fe5*/
    }
    v14 = NiDX9VertexBufferManager_LockToStaging(this, v16[2], v16[3], __PAIR64__(v16[4], v16[5]), v34); /*0x777006*/
  }
  if ( a4 ) /*0x77700e*/
  {
    if ( Src ) /*0x777019*/
    {
      if ( (a5 & 1) != 0 ) /*0x777020*/
      {
        if ( v43 ) /*0x77702d*/
          v17 = (float *)(v14 + v44); /*0x777033*/
        else
          v17 = 0; /*0x777037*/
        sub_56CD20(a4, (int)a3, (float *)(v14 + v42), v17, 0, 0, v37); /*0x777045*/
      }
    }
    v18 = this; /*0x77704a*/
  }
  else
  {
    if ( Src && (a5 & 1) != 0 ) /*0x7771c3*/
    {
      v18 = this; /*0x7771ce*/
      HIDWORD(v32) = (unsigned __int16)v39; /*0x7771d2*/
      LODWORD(v32) = 0xC; /*0x7771d3*/
      NiDX9VertexBufferManager_CopyStrided((char *)(v14 + v42), (char *)Src, v37, v32, v34); /*0x7771e0*/
    }
    else
    {
      v18 = this; /*0x7771e7*/
    }
    if ( v43 ) /*0x7771f1*/
    {
      if ( (a5 & 2) != 0 ) /*0x7771fc*/
      {
        HIDWORD(v33) = (unsigned __int16)v39; /*0x77720b*/
        LODWORD(v33) = 0xC; /*0x77720c*/
        NiDX9VertexBufferManager_CopyStrided((char *)(v14 + v44), (char *)v43, v37, v33, v34); /*0x777219*/
      }
    }
  }
  if ( y != 0.0 && (a5 & 4) != 0 ) /*0x77705b*/
  {
    v19 = (int *)(v14 + LODWORD(v45)); /*0x77706a*/
    if ( (_WORD)v39 ) /*0x77706e*/
    {
      v20 = (unsigned __int16)v39; /*0x777074*/
      do /*0x7770fc*/
      {
        v45 = *(float *)(LODWORD(y) + 0xC) * dbl_A3DDD8; /*0x777089*/
        v21 = (int)v45; /*0x777097*/
        v45 = *(float *)LODWORD(y) * dbl_A3DDD8; /*0x7770a1*/
        v22 = (int)v45; /*0x7770b0*/
        v45 = *(float *)(LODWORD(y) + 4) * dbl_A3DDD8; /*0x7770ba*/
        v23 = (int)v45; /*0x7770c9*/
        v45 = *(float *)(LODWORD(y) + 8) * dbl_A3DDD8; /*0x7770d3*/
        v44 = (int)v45; /*0x7770db*/
        LODWORD(y) += 0x10; /*0x7770f0*/
        *v19 = v44 | ((v23 | ((v22 | (v21 << 8)) << 8)) << 8); /*0x7770f3*/
        v19 = (int *)((char *)v19 + v37); /*0x7770f5*/
        --v20; /*0x7770f9*/
      }
      while ( v20 ); /*0x7770fc*/
      v7 = a3; /*0x7770fe*/
      v18 = this; /*0x777102*/
    }
  }
  if ( (a5 & 8) != 0 ) /*0x77710b*/
  {
    v24 = 0; /*0x77710d*/
    if ( v40 ) /*0x777113*/
    {
      v25 = (unsigned __int16)v39; /*0x777119*/
      v26 = (_DWORD *)(v46 + v14); /*0x77711e*/
      do /*0x777154*/
      {
        v27 = (_DWORD *)sub_7282F0(v7, v24); /*0x777123*/
        v28 = v26; /*0x77712a*/
        if ( v25 ) /*0x77712c*/
        {
          v29 = v25; /*0x77712e*/
          do /*0x777144*/
          {
            *v28 = *v27; /*0x777132*/
            v28[1] = v27[1]; /*0x777137*/
            v28 = (_DWORD *)((char *)v28 + v37); /*0x77713a*/
            v27 += 2; /*0x77713e*/
            --v29; /*0x777141*/
          }
          while ( v29 ); /*0x777144*/
          v7 = a3; /*0x777146*/
        }
        ++v24; /*0x77714a*/
        v26 += 2; /*0x77714d*/
      }
      while ( v24 < v40 ); /*0x777154*/
      v18 = this; /*0x777156*/
    }
  }
  if ( v35 ) /*0x77715f*/
  {
    v30 = v38[2]; /*0x77716f*/
    memcpy(*((void **)v18 + 0x12), *((const void **)v18 + 0x10), *((_DWORD *)v18 + 0x13)); /*0x777178*/
    *((_DWORD *)v18 + 0x12) = 0; /*0x777188*/
    *((_DWORD *)v18 + 0x13) = 0; /*0x77718b*/
    if ( (*((_DWORD *)v18 + 0x3F))-- == 1 ) /*0x77718e*/
      *((_DWORD *)v18 + 0x3E) = 0; /*0x777194*/
    LeaveCriticalSection((LPCRITICAL_SECTION)v18 + 4); /*0x777198*/
    if ( (*(int (__stdcall **)(int))(*(_DWORD *)v30 + 0x30))(v30) < 0 ) /*0x7771a8*/
      return 0; /*0x7771a8*/
  }
  return v38; /*0x776ebc*/
}
