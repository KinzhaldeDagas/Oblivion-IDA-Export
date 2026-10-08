// MoonSugarEffect decode: NiDX9Renderer::PackSkinnedGeometryBuffer. Same ownership as non-skinned packer but uses skin partition data for vertex/index counts, stream repacking, and optional software-VP index-buffer usage.
char __thiscall NiDX9Renderer::PackSkinnedGeometryBuffer(
        NiDX9Renderer *this,
        int a2,
        int a3,
        int a4,
        int a5,
        NiD3DShaderDeclaration *a6,
        int a7)
{
  char v7; // al
  int v9; // edx
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // cx
  int v13; // ebp
  UInt32 StreamCount; // ecx
  __int16 v15; // bx
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int *v21; // ebp
  int v22; // ebx
  int v23; // eax
  int v24; // edi
  int v25; // edx
  int v26; // [esp+20h] [ebp-1Ch]
  int Src; // [esp+24h] [ebp-18h]
  unsigned __int16 v28; // [esp+28h] [ebp-14h]
  int v29; // [esp+2Ch] [ebp-10h]
  unsigned __int16 v31; // [esp+34h] [ebp-8h]
  int v32; // [esp+38h] [ebp-4h]
  unsigned int a5a; // [esp+4Ch] [ebp+10h]

  if ( !a2 || !a3 ) /*0x76314b*/
    return 0; /*0x7633be*/
  v7 = NiGeometryBufferData_HasLiveStreams((NiGeometryBufferData *)a2); /*0x763153*/
  if ( !(_BYTE)a7 && v7 && (*(_WORD *)(a3 + 0x2E) & 0xF000) == 0x4000 ) /*0x763173*/
    return 1; /*0x76317c*/
  v9 = 0; /*0x76318a*/
  if ( *(_DWORD *)(a3 + 0x24) ) /*0x76318f*/
    v9 = 0x400000; /*0x763194*/
  if ( *(_DWORD *)(a3 + 0x20) ) /*0x76317f*/
    v9 |= (unsigned int)&loc_800000; /*0x76319d*/
  *(_DWORD *)a2 = v9 | ((*(_BYTE *)(a3 + 0x2C) & 0x3F) << 0x18); /*0x7631a9*/
  v11 = *(_WORD *)(a5 + 0x1E); /*0x7631b7*/
  v31 = *(_WORD *)(a5 + 0x1C); /*0x7631bb*/
  v32 = *(_DWORD *)(a5 + 0x18); /*0x7631c2*/
  v12 = *(_WORD *)(a5 + 0x22); /*0x7631c6*/
  v29 = *(_DWORD *)(a5 + 0x14); /*0x7631cd*/
  v28 = v12; /*0x7631d1*/
  if ( v12 ) /*0x7631d5*/
  {
    v26 = v11; /*0x7631f9*/
    Src = v11 + 2 * v12; /*0x7631fd*/
    v13 = v11; /*0x763201*/
  }
  else
  {
    v13 = v11; /*0x7631d7*/
    v26 = v11; /*0x7631de*/
    Src = 3 * v11; /*0x7631e2*/
    v28 = 1; /*0x7631e6*/
  }
  if ( a6 ) /*0x763209*/
  {
    StreamCount = a6->member.StreamCount; /*0x76320b*/
    a5a = StreamCount; /*0x76320e*/
  }
  else
  {
    a5a = 1; /*0x763214*/
    StreamCount = 1; /*0x76321c*/
  }
  v15 = *(_WORD *)(a3 + 0x2E); /*0x763224*/
  v16 = v15 & 0xF000; /*0x763226*/
  v17 = v15 & 0xFFF; /*0x76322c*/
  if ( v16 == 0x8000 || (_BYTE)a7 ) /*0x76323f*/
    v17 = 0xFFF; /*0x763241*/
  if ( v7 ) /*0x76324b*/
  {
    if ( StreamCount == *(_DWORD *)(a2 + 0x1C) ) /*0x763250*/
      goto LABEL_28; /*0x763250*/
    sub_777F70((NiGeometryBufferData *)a2, StreamCount); /*0x763255*/
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 4); /*0x76325c*/
    v19 = 0; /*0x76325f*/
    if ( StreamCount ) /*0x763263*/
    {
      do /*0x763278*/
        (*(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)v18 + 0x1C))(v18, a2, v19++); /*0x76326f*/
      while ( v19 < a5a ); /*0x763278*/
      StreamCount = a5a; /*0x76327a*/
    }
    sub_777F70((NiGeometryBufferData *)a2, StreamCount); /*0x763281*/
    *(_DWORD *)(a2 + 0x34) = 0; /*0x763286*/
  }
  v13 = v26; /*0x76328d*/
  StreamCount = a5a; /*0x763291*/
  v17 = 0xFFF; /*0x763295*/
LABEL_28:
  *(_DWORD *)(a2 + 0x14) = v31; /*0x76329a*/
  *(_DWORD *)(a2 + 0x18) = v31; /*0x7632a6*/
  *(_DWORD *)(a2 + 0x48) = v32; /*0x7632ad*/
  *(_DWORD *)(a2 + 0x4C) = v29; /*0x7632b0*/
  *(_DWORD *)(a2 + 0x3C) = v13; /*0x7632c0*/
  *(_DWORD *)(a2 + 0x40) = v13; /*0x7632c3*/
  *(_DWORD *)(a2 + 0x44) = v28; /*0x7632c6*/
  if ( (v17 & 0xFFEF) != 0 )
  {
    v20 = 0; /*0x7632cb*/
    a7 = 0; /*0x7632cf*/
    if ( StreamCount )
    {
      while ( 1 )
      {
        v21 = v20 >= *(_DWORD *)(a2 + 0x1C) ? 0 : *(int **)(*(_DWORD *)(a2 + 0x24) + 4 * v20);
        if ( (!a6 /*0x76332d*/
           || !(*((int (__thiscall **)(NiD3DShaderDeclaration *, int, int, int, int, int *, unsigned int, _DWORD))a6->__vftable
                + 0x1B))(
                 a6,
                 a3,
                 a4,
                 a5,
                 v17,
                 v21,
                 v20,
                 0))
          && (a5a != 1 || !sub_7774C0((char *)this->member.vertexBufferMgr, a3, a4, a5, v17, v21, 0)) )
        {
          return 0; /*0x763334*/
        }
        if ( ++a7 >= a5a ) /*0x763345*/
          break; /*0x763345*/
        v20 = a7; /*0x7632d7*/
      }
    }
  }
  if ( (v17 & 0x30) != 0 )
  {
    v22 = *(_DWORD *)(a2 + 0x30); /*0x76334f*/
    a7 = *(_DWORD *)(a2 + 0x2C); /*0x763356*/
    v23 = NiDX9IndexBufferManager_PackBuffer(
            (int)this->member.indexBufferMgr,
            (NiGeometryBufferData *)a5,
            a2,
            v29,
            (void *)Src,
            Src,
            v22,
            (unsigned int *)&a7,
            1,
            *(_BYTE *)(a2 + 0x10) != 0 ? (void *)0x10 : 0);
    v24 = v23; /*0x763383*/
    if ( !v23 ) /*0x763387*/
      return 0; /*0x763392*/
    if ( v22 != v23 ) /*0x763397*/
    {
      sub_777F40((NiGeometryBufferData *)a2); /*0x76339b*/
      v25 = a7; /*0x7633a4*/
      *(_DWORD *)(a2 + 0x30) = v24; /*0x7633a8*/
      *(_DWORD *)(a2 + 0x28) = Src; /*0x7633ab*/
      *(_DWORD *)(a2 + 0x2C) = v25; /*0x7633ae*/
    }
  }
  return 1; /*0x763175*/
}
