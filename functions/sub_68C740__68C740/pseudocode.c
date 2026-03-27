NiNode *__thiscall sub_68C740(NiDX92DBufferData **this)
{
  NiDX92DBufferData *SurfaceData; // eax
  unsigned int v3; // esi
  NiNode *v4; // eax
  _DWORD *v5; // ebx
  void *v6; // eax
  int v7; // edi
  int v8; // eax
  NiSurfaceData *v9; // ebp
  float *v10; // edi
  _DWORD *v11; // esi
  char *v12; // eax
  char *v13; // eax
  NiAVObject *v14; // eax
  NiAVObject *v15; // eax
  unsigned int v17; // [esp+14h] [ebp-34h]
  int v18; // [esp+18h] [ebp-30h]
  int v19; // [esp+1Ch] [ebp-2Ch]
  NiNode *v20; // [esp+20h] [ebp-28h]
  unsigned int v21; // [esp+24h] [ebp-24h]
  int v22; // [esp+28h] [ebp-20h]

  SurfaceData = *this;
  v3 = 0;
  if ( !*this )
    return 0;
  do
  {
    ++v3;
    SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData);
  }
  while ( SurfaceData );
  v21 = v3;
  if ( !v3 )
    return 0;
  v4 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v4 )
    v20 = NiNode::NiNode(v4, 0);
  else
    v20 = 0;
  v5 = (_DWORD *)FormHeapAlloc((0xC * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v3);
  v22 = (int)v5;
  v6 = (void *)FormHeapAlloc((unsigned __int64)v3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v3);
  v7 = (int)v6;
  if ( v6 )
  {
    sub_401080(v6, 0x10, v3, (void *(__thiscall *)(void *))sub_47EA50);
    v19 = v7;
  }
  else
  {
    v19 = 0;
  }
  v8 = FormHeapAlloc(v3);
  v9 = (NiSurfaceData *)*this;
  v18 = v8;
  v17 = 0;
  v10 = (float *)v19;
  do
  {
    if ( v9 )
    {
      v11 = (_DWORD *)sub_700900((void *)dword_B3C0A0);
      v12 = sub_6899C0((char *)v9);
      v11[0x15] = *(_DWORD *)v12;
      v11[0x16] = *((_DWORD *)v12 + 1);
      v11[0x17] = *((_DWORD *)v12 + 2);
      ((void (__thiscall *)(NiNode *, _DWORD *, _DWORD))v20->vtbl->AddObject)(v20, v11, 0);
      v13 = sub_6899C0((char *)v9);
      *v5 = *(_DWORD *)v13;
      v5[1] = *((_DWORD *)v13 + 1);
      v5[2] = *((_DWORD *)v13 + 2);
      *v10 = 0.0;
      v10[1] = 1.0;
      v10[2] = 0.0;
      v10[3] = 1.0;
      *(_BYTE *)(v17 + v18) = 1;
      v3 = v21;
      v9 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v9);
    }
    v5 += 3;
    v10 += 4;
    ++v17;
  }
  while ( v17 < v3 );
  *(_BYTE *)(v3 + v18 - 1) = 0;
  v14 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v14 )
    v15 = sub_7177E0(v14, v3, v22, v19, 0, 0, 0, v18);
  else
    v15 = 0;
  ((void (__thiscall *)(NiNode *, NiAVObject *, _DWORD))v20->vtbl->AddObject)(v20, v15, 0);
  return v20;
}
