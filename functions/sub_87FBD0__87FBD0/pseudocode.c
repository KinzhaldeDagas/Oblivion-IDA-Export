void __thiscall sub_87FBD0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  NiD3DPass *v6; // edi
  float *v7; // ebx
  UInt32 Stage; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  NiTexture *Texture; // ebx
  int v13; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // ebp
  NiTexture *v16; // ebp
  UInt32 v17; // ebx
  bool v18; // zf
  float v19; // ecx
  UInt32 v20; // [esp+34h] [ebp+Ch]
  NiTexture *v21; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B4771C; /*0x87fbfd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x87fc04*/
  v7 = *(float **)(a4 + 0xC); /*0x87fc09*/
  sub_848E50(v7); /*0x87fc0f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x87fc26*/
  Stage = v6->Stages.data->Stage; /*0x87fc2f*/
  v20 = Stage; /*0x87fc3b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87fc3f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x87fc41*/
  v11 = v9; /*0x87fc44*/
  if ( v10 != v9 ) /*0x87fc48*/
  {
    if ( v10 ) /*0x87fc4c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x87fc52*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87fc68*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x87fc70*/
    if ( v11 ) /*0x87fc73*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87fc79*/
  }
  Texture = v6->Stages.data->Texture; /*0x87fc86*/
  v21 = Texture; /*0x87fc8e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x87fc92*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x87fc97*/
  v15 = v13; /*0x87fc9a*/
  if ( m_uiRefCount != v13 ) /*0x87fc9e*/
  {
    if ( m_uiRefCount ) /*0x87fca2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x87fca8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x87fcbe*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x87fcc6*/
    if ( v15 ) /*0x87fcc9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x87fccf*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x87fcd8*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x87fce0*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x87fce3*/
  v19 = flt_B43110[0]; /*0x87fce5*/
  value = flt_B43110[0]; /*0x87fce7*/
  if ( !v18 ) /*0x87fceb*/
  {
    if ( v17 ) /*0x87fcef*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x87fcf5*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x87fd0b*/
      v19 = value; /*0x87fd0d*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x87fd13*/
    if ( v19 != 0.0 ) /*0x87fd16*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x87fd1c*/
  }
  ++v6->RefCount; /*0x87fd27*/
  value = *(float *)&v6; /*0x87fd2a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87fd42*/
  v18 = v6->RefCount-- == 1; /*0x87fd4a*/
  if ( v18 ) /*0x87fd51*/
    NiD3DPass_ReleaseToPool(v6); /*0x87fd55*/
  ++*((_DWORD *)this + 0xE); /*0x87fd5a*/
}
