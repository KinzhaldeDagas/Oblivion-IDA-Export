void __thiscall sub_840580(NiTArray_NiD3DPass *this, int a2, int a3, NiD3DPass *Stage, _DWORD *a5)
{
  NiD3DPass *v6; // ebx
  NiD3DPass *v7; // edi
  float *v8; // ebp
  _DWORD *v9; // ebx
  NiD3DPass *v10; // ebp
  int (__thiscall *v11)(_DWORD *, _DWORD); // eax
  int v12; // eax
  int v13; // ebp
  NiD3DPass *v14; // ebp
  int v15; // eax
  int v16; // ebp
  int v18; // [esp+28h] [ebp+4h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = Stage; /*0x8405a6*/
  v7 = (NiD3DPass *)unk_B458D0; /*0x8405ad*/
  sub_848C40(*(float **)&Stage->Name[0xC]); /*0x8405b4*/
  v8 = *(float **)&v6->Name[8]; /*0x8405b9*/
  sub_848E50(v8); /*0x8405bf*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x8405d8*/
    this,
    a2,
    v8,
    *(_DWORD *)&v6->Name[0xC]);
  v9 = a5; /*0x8405dd*/
  v11 = *(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88); /*0x8405e5*/
  Stage = (NiD3DPass *)v7->Stages.data->Stage; /*0x8405ef*/
  v10 = Stage; /*0x8405e1*/
  v12 = v11(a5, 0); /*0x8405f3*/
  v13 = *(_DWORD *)v10->Name; /*0x8405f5*/
  v18 = v12; /*0x8405fa*/
  if ( v13 != v12 ) /*0x8405fe*/
  {
    if ( v13 ) /*0x840602*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x840608*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x84061f*/
      v12 = v18; /*0x840621*/
    }
    *(_DWORD *)Stage->Name = v12; /*0x84062b*/
    if ( v12 ) /*0x84062e*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x840634*/
  }
  sub_848FA0(Stage, (int)v9); /*0x840642*/
  Stage = (NiD3DPass *)v7->Stages.data->Texture; /*0x840652*/
  v14 = Stage; /*0x84064a*/
  v15 = sub_848FD0(v9, 0); /*0x840656*/
  v16 = *(_DWORD *)v14->Name; /*0x84065b*/
  v19 = v15; /*0x840660*/
  if ( v16 != v15 ) /*0x840664*/
  {
    if ( v16 ) /*0x840668*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x84066e*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x840685*/
      v15 = v19; /*0x840687*/
    }
    *(_DWORD *)Stage->Name = v15; /*0x840691*/
    if ( v15 ) /*0x840694*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x84069a*/
  }
  sub_848FA0(Stage, (int)v9); /*0x8406a8*/
  ++v7->RefCount; /*0x8406b2*/
  Stage = v7; /*0x8406b5*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &Stage); /*0x8406cd*/
  if ( v7->RefCount-- == 1 ) /*0x8406d5*/
    NiD3DPass_ReleaseToPool(v7); /*0x8406e0*/
  ++*((_DWORD *)this + 0xE); /*0x8406e5*/
}
