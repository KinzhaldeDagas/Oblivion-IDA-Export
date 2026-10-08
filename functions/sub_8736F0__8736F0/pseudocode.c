void __thiscall sub_8736F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = (NiD3DPass *)unk_B47620[0]; /*0x87371d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x873724*/
  v7 = *(float **)(a4 + 0xC); /*0x873729*/
  sub_848E50(v7); /*0x87372f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x873746*/
  Stage = v6->Stages.data->Stage; /*0x87374f*/
  v20 = Stage; /*0x87375b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87375f*/
  v10 = *(_DWORD *)(Stage + 4); /*0x873761*/
  v11 = v9; /*0x873764*/
  if ( v10 != v9 ) /*0x873768*/
  {
    if ( v10 ) /*0x87376c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x873772*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x873788*/
    }
    *(_DWORD *)(v20 + 4) = v11; /*0x873790*/
    if ( v11 ) /*0x873793*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x873799*/
  }
  Texture = v6->Stages.data->Texture; /*0x8737a6*/
  v21 = Texture; /*0x8737ae*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8737b2*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x8737b7*/
  v15 = v13; /*0x8737ba*/
  if ( m_uiRefCount != v13 ) /*0x8737be*/
  {
    if ( m_uiRefCount ) /*0x8737c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8737c8*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8737de*/
    }
    v21->members.super.super.m_uiRefCount = v15; /*0x8737e6*/
    if ( v15 ) /*0x8737e9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8737ef*/
  }
  v16 = v6->Stages.data[1].Texture; /*0x8737f8*/
  v17 = v16->members.super.super.m_uiRefCount; /*0x873800*/
  v18 = v17 == LODWORD(flt_B43110[0]); /*0x873803*/
  v19 = flt_B43110[0]; /*0x873805*/
  value = flt_B43110[0]; /*0x873807*/
  if ( !v18 ) /*0x87380b*/
  {
    if ( v17 ) /*0x87380f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x873815*/
        (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x87382b*/
      v19 = value; /*0x87382d*/
    }
    *(float *)&v16->members.super.super.m_uiRefCount = v19; /*0x873833*/
    if ( v19 != 0.0 ) /*0x873836*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v19) + 4)); /*0x87383c*/
  }
  ++v6->RefCount; /*0x873847*/
  value = *(float *)&v6; /*0x87384a*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value);// MoonSugarEffect decode: sub_76CE40(&shader->Passes, shader->PassCount, &dword_B47620[0]) stores the selected global pass in the shader pass array with refcount ownership. /*0x873862*/
  v18 = v6->RefCount-- == 1; /*0x87386a*/
  if ( v18 ) /*0x873871*/
    NiD3DPass_ReleaseToPool(v6); /*0x873875*/
  ++*((_DWORD *)this + 0xE);                    // MoonSugarEffect decode: increments shader+0x38 PassCount after appending dword_B47620[0]. vtable +0x48 will later copy Passes.data[0] into CurrentPass. /*0x87387a*/
}
