NiNode *__thiscall sub_68C740(NiDX92DBufferData **this)
{
  NiDX92DBufferData *SurfaceData; // eax
  unsigned int v3; // esi
  NiNode *v4; // eax
  NiPoint3 *v5; // ebx
  NiColorAlpha *v6; // eax
  NiColorAlpha *v7; // edi
  int v8; // eax
  NiSurfaceData *v9; // ebp
  float *v10; // edi
  NiObject *v11; // esi
  char *Head; // eax
  char *v13; // eax
  NiAVObject *v14; // eax
  NiAVObject *v15; // eax
  unsigned int v17; // [esp+14h] [ebp-34h]
  int lineFlags; // [esp+18h] [ebp-30h]
  NiColorAlpha *colors; // [esp+1Ch] [ebp-2Ch]
  NiNode *v20; // [esp+20h] [ebp-28h]
  unsigned int v21; // [esp+24h] [ebp-24h]
  NiPoint3 *v22; // [esp+28h] [ebp-20h]

  SurfaceData = *this; /*0x68c769*/
  v3 = 0; /*0x68c76e*/
  if ( !*this ) /*0x68c769*/
    return 0; /*0x68c769*/
  do /*0x68c78c*/
  {
    ++v3; /*0x68c782*/
    SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(SurfaceData); /*0x68c785*/
  }
  while ( SurfaceData ); /*0x68c78c*/
  v21 = v3; /*0x68c790*/
  if ( !v3 ) /*0x68c794*/
    return 0; /*0x68c98e*/
  v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x68c79f*/
  if ( v4 ) /*0x68c7b1*/
    v20 = NiNode::NiNode(v4, 0); /*0x68c7bb*/
  else
    v20 = 0; /*0x68c7c1*/
  v5 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)v3) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v3);
  v22 = v5; /*0x68c7f5*/
  v6 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)v3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v3);
  v7 = v6; /*0x68c803*/
  if ( v6 ) /*0x68c816*/
  {
    sub_401080(v6, 0x10, v3, (void *(__thiscall *)(void *))sub_47EA50); /*0x68c821*/
    colors = v7; /*0x68c826*/
  }
  else
  {
    colors = 0; /*0x68c82c*/
  }
  v8 = FormHeapAlloc(v3); /*0x68c83d*/
  v9 = (NiSurfaceData *)*this; /*0x68c842*/
  lineFlags = v8; /*0x68c84a*/
  v17 = 0; /*0x68c84e*/
  v10 = (float *)colors; /*0x68c85c*/
  do /*0x68c910*/
  {
    if ( v9 ) /*0x68c862*/
    {
      v11 = NiObject_CloneWithPointerMap((NiObject *)dword_B3C094[3]); /*0x68c875*/
      Head = EmbeddedList_GetHead((char *)v9); /*0x68c877*/
      v11[0xA].members.m_uiRefCount = *(_DWORD *)Head; /*0x68c87e*/
      v11[0xB] = *(NiObject *)(Head + 4); /*0x68c888*/
      ((void (__thiscall *)(NiNode *, NiObject *, _DWORD))v20->vtbl->AddObject)(v20, v11, 0); /*0x68c89c*/
      v13 = EmbeddedList_GetHead((char *)v9); /*0x68c8a0*/
      v5->x = *(float *)v13; /*0x68c8af*/
      v5->y = *((float *)v13 + 1); /*0x68c8c0*/
      v5->z = *((float *)v13 + 2); /*0x68c8ca*/
      *v10 = 0.0; /*0x68c8d5*/
      v10[1] = 1.0; /*0x68c8db*/
      v10[2] = 0.0; /*0x68c8e2*/
      v10[3] = 1.0; /*0x68c8e9*/
      *(_BYTE *)(v17 + lineFlags) = 1; /*0x68c8ee*/
      v3 = v21; /*0x68c8f7*/
      v9 = NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v9); /*0x68c8fb*/
    }
    ++v5; /*0x68c904*/
    v10 += 4; /*0x68c907*/
    ++v17; /*0x68c90c*/
  }
  while ( v17 < v3 ); /*0x68c910*/
  *(_BYTE *)(v3 + lineFlags - 1) = 0; /*0x68c923*/
  v14 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x68c928*/
  if ( v14 ) /*0x68c93e*/
    v15 = NiLines_ctorWithGeometryData(v14, v3, v22, colors, 0, 0, 0, lineFlags); /*0x68c954*/
  else
    v15 = 0; /*0x68c95b*/
  ((void (__thiscall *)(NiNode *, NiAVObject *, _DWORD))v20->vtbl->AddObject)(v20, v15, 0); /*0x68c976*/
  return v20; /*0x68c97a*/
}
