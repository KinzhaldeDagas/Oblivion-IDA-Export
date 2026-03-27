void __thiscall sub_85E410(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  UInt32 Stage; // ebp
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v13; // edi
  NiRenderedTexture *v14; // ebx
  int v17; // [esp+18h] [ebp-10h]

  v6 = (NiD3DPass *)dword_B477FC;
  v7 = **(_DWORD **)(dword_B477FC + 0x24);
  v17 = **(_DWORD **)(dword_B42EB8 + 0xC);
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88))(a5, 0);
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v8;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)(v7 + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)v7, a5);
  Stage = v6->Stages.data[2].Stage;
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114));
  v13 = *(NiRenderedTexture **)(Stage + 4);
  v14 = InnerTexture;
  if ( v13 != InnerTexture )
  {
    if ( v13 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v13->member) )
        v13->__vftable->super.super.super.Destructor((NiRefObject *)v13, 1);
    }
    *(_DWORD *)(Stage + 4) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)&v14->member);
  }
  sub_7715E0((_DWORD **)Stage, 0);
  if ( !(_BYTE)a6 )
  {
    ++v6->RefCount;
    a6 = v6;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a6);
    if ( v6->RefCount-- == 1 )
      sub_7604D0(v6);
    ++*((_DWORD *)this + 0xE);
  }
}
