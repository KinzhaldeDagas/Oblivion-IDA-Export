void __thiscall sub_84CFF0(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *a4, _DWORD *a5)
{
  int v5; // esi
  int *v6; // ecx
  _DWORD *v7; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  NiTexture *Texture; // ebp
  int v14; // ebx
  UInt32 m_uiRefCount; // edi
  int v16; // eax
  UInt32 Unk08; // ebx
  int v18; // eax
  int v19; // edi
  int v20; // ebp
  int v21; // eax
  int Stage; // edi
  int (__thiscall *v23)(_DWORD *, int); // eax
  int v24; // ebp
  int v25; // edi
  NiD3DPass *v26; // edi
  int v27; // eax
  NiD3DPass *v29; // [esp+18h] [ebp-14h]

  v5 = dword_B45640;
  v29 = (NiD3DPass *)dword_B45640;
  sub_848C40(*(float **)&a4->Name[0xC]);
  v6 = *(int **)(v5 + 0x24);
  v7 = a5;
  v8 = *v6;
  v9 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0);
  v10 = *(_DWORD *)(v8 + 4);
  v11 = v9;
  if ( v10 != v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *(_DWORD *)(v8 + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  if ( v8 )
  {
    if ( byte_B42CDD )
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0((_DWORD **)v8, v12);
    }
  }
  Texture = v29->Stages.data->Texture;
  if ( (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0) )
  {
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x8C))(v7, 0);
  }
  else
  {
    v14 = dword_B430F0;
    if ( (v7[7] & 0x80) == 0 )
      v14 = dword_B430DC;
  }
  m_uiRefCount = Texture->members.super.super.m_uiRefCount;
  if ( m_uiRefCount != v14 )
  {
    if ( m_uiRefCount )
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) )
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1);
    }
    Texture->members.super.super.m_uiRefCount = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  if ( Texture )
  {
    if ( byte_B42CDD )
    {
      v16 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0(Texture, v16);
    }
  }
  Unk08 = v29->Stages.data->Unk08;
  v18 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x88))(v7, 1);
  v19 = *(_DWORD *)(Unk08 + 4);
  v20 = v18;
  if ( v19 != v18 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v19 + 4)) )
        (**(void (__thiscall ***)(int, int))v19)(v19, 1);
    }
    *(_DWORD *)(Unk08 + 4) = v20;
    if ( v20 )
      InterlockedIncrement((volatile LONG *)(v20 + 4));
  }
  if ( Unk08 )
  {
    if ( byte_B42CDD )
    {
      v21 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0((_DWORD **)Unk08, v21);
    }
  }
  Stage = v29->Stages.data[1].Stage;
  v23 = *(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C);
  a4 = (NiD3DPass *)Stage;
  if ( v23(v7, 1) )
  {
    v24 = (*(int (__thiscall **)(_DWORD *, int))(*v7 + 0x8C))(v7, 1);
  }
  else
  {
    v24 = dword_B430F0;
    if ( (v7[7] & 0x80) == 0 )
      v24 = dword_B430DC;
  }
  v25 = *(_DWORD *)(Stage + 4);
  if ( v25 == v24 )
  {
    v26 = a4;
  }
  else
  {
    if ( v25 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
        (**(void (__thiscall ***)(int, int))v25)(v25, 1);
    }
    v26 = a4;
    *(_DWORD *)a4->Name = v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
  }
  if ( v26 )
  {
    if ( byte_B42CDD )
    {
      v27 = (*(int (__thiscall **)(_DWORD *))(*v7 + 0x78))(v7);
      sub_7715E0(v26, v27);
    }
  }
  ++v29->RefCount;
  a4 = v29;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a4);
  if ( v29->RefCount-- == 1 )
    sub_7604D0(v29);
  ++*((_DWORD *)this + 0xE);
}
