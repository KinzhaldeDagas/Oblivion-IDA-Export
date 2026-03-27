void __thiscall sub_84F340(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v5; // edi
  NiD3DPass *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // ebp
  _DWORD **v11; // ebx
  int v12; // eax
  NiTexture *Texture; // ebx
  int v14; // eax
  UInt32 m_uiRefCount; // ebx
  int v16; // ebp
  NiTexture *v17; // ebx
  int v18; // eax
  int v20; // [esp+14h] [ebp-14h]
  NiTexture *v21; // [esp+14h] [ebp-14h]

  v5 = (NiD3DPass *)dword_B459B8;
  v6 = a5;
  v7 = **(_DWORD **)(dword_B459B8 + 0x24);
  v20 = v7;
  v8 = ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75FD90)(a5, 0);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 == v8 )
  {
    v11 = (_DWORD **)v20;
  }
  else
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    v11 = (_DWORD **)v20;
    *(_DWORD *)(v20 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  if ( v11 )
  {
    if ( byte_B42CDD )
    {
      v12 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6);
      sub_7715E0(v11, v12);
    }
  }
  Texture = v5->Stages.data->Texture;
  v21 = Texture;
  v14 = ((int (__thiscall *)(NiD3DPass *, int))v6->__vftable[8].sub_75FD90)(v6, 1);
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  v16 = v14;
  if ( m_uiRefCount == v14 )
  {
    v17 = v21;
  }
  else
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    v17 = v21;
    v21->members.super.super.m_uiRefCount = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  if ( v17 )
  {
    if ( byte_B42CDD )
    {
      v18 = ((int (__thiscall *)(NiD3DPass *))v6->__vftable[7].sub_75FD90)(v6);
      sub_7715E0(v17, v18);
    }
  }
  dword_B46628 = (int)v6[1].PixelShader;
  dword_B4662C = (int)v6[1].VertexConstantMap;
  dword_B46630 = (int)v6[1].VertexShaderProgramFile;
  dword_B46634 = (int)v6[1].VertexShaderEntryPoint;
  ++v5->RefCount;
  a5 = v5;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
  if ( v5->RefCount-- == 1 )
    sub_7604D0(v5);
  ++*((_DWORD *)this + 0xE);
}
