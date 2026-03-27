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

  if ( !a2 || !a3 )
    return 0;
  v7 = sub_777F10((NiGeometryBufferData *)a2);
  if ( !(_BYTE)a7 && v7 && (*(_WORD *)(a3 + 0x2E) & 0xF000) == 0x4000 )
    return 1;
  v9 = 0;
  if ( *(_DWORD *)(a3 + 0x24) )
    v9 = 0x400000;
  if ( *(_DWORD *)(a3 + 0x20) )
    v9 |= (unsigned int)&loc_800000;
  *(_DWORD *)a2 = v9 | ((*(_BYTE *)(a3 + 0x2C) & 0x3F) << 0x18);
  v11 = *(_WORD *)(a5 + 0x1E);
  v31 = *(_WORD *)(a5 + 0x1C);
  v32 = *(_DWORD *)(a5 + 0x18);
  v12 = *(_WORD *)(a5 + 0x22);
  v29 = *(_DWORD *)(a5 + 0x14);
  v28 = v12;
  if ( v12 )
  {
    v26 = v11;
    Src = v11 + 2 * v12;
    v13 = v11;
  }
  else
  {
    v13 = v11;
    v26 = v11;
    Src = 3 * v11;
    v28 = 1;
  }
  if ( a6 )
  {
    StreamCount = a6->member.StreamCount;
    a5a = StreamCount;
  }
  else
  {
    a5a = 1;
    StreamCount = 1;
  }
  v15 = *(_WORD *)(a3 + 0x2E);
  v16 = v15 & 0xF000;
  v17 = v15 & 0xFFF;
  if ( v16 == 0x8000 || (_BYTE)a7 )
    v17 = 0xFFF;
  if ( v7 )
  {
    if ( StreamCount == *(_DWORD *)(a2 + 0x1C) )
      goto LABEL_28;
    sub_777F70((NiGeometryBufferData *)a2, StreamCount);
  }
  else
  {
    v18 = *(_DWORD *)(a2 + 4);
    v19 = 0;
    if ( StreamCount )
    {
      do
        (*(void (__thiscall **)(int, int, unsigned int))(*(_DWORD *)v18 + 0x1C))(v18, a2, v19++);
      while ( v19 < a5a );
      StreamCount = a5a;
    }
    sub_777F70((NiGeometryBufferData *)a2, StreamCount);
    *(_DWORD *)(a2 + 0x34) = 0;
  }
  v13 = v26;
  StreamCount = a5a;
  v17 = 0xFFF;
LABEL_28:
  *(_DWORD *)(a2 + 0x14) = v31;
  *(_DWORD *)(a2 + 0x18) = v31;
  *(_DWORD *)(a2 + 0x48) = v32;
  *(_DWORD *)(a2 + 0x4C) = v29;
  *(_DWORD *)(a2 + 0x3C) = v13;
  *(_DWORD *)(a2 + 0x40) = v13;
  *(_DWORD *)(a2 + 0x44) = v28;
  if ( (v17 & 0xFFEF) != 0 )
  {
    v20 = 0;
    a7 = 0;
    if ( StreamCount )
    {
      while ( 1 )
      {
        v21 = v20 >= *(_DWORD *)(a2 + 0x1C) ? 0 : *(int **)(*(_DWORD *)(a2 + 0x24) + 4 * v20);
        if ( (!a6
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
          return 0;
        }
        if ( ++a7 >= a5a )
          break;
        v20 = a7;
      }
    }
  }
  if ( (v17 & 0x30) != 0 )
  {
    v22 = *(_DWORD *)(a2 + 0x30);
    a7 = *(_DWORD *)(a2 + 0x2C);
    v23 = sub_7781F0(
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
    v24 = v23;
    if ( !v23 )
      return 0;
    if ( v22 != v23 )
    {
      sub_777F40((NiGeometryBufferData *)a2);
      v25 = a7;
      *(_DWORD *)(a2 + 0x30) = v24;
      *(_DWORD *)(a2 + 0x28) = Src;
      *(_DWORD *)(a2 + 0x2C) = v25;
    }
  }
  return 1;
}
