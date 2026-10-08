void __thiscall sub_844B50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45A3C; /*0x844b85*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844b93*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x844b9c*/
  v8 = sub_848FD0(value, 0); /*0x844ba3*/
  v9 = *(_DWORD *)(Stage + 4); /*0x844ba8*/
  v11 = v8; /*0x844bad*/
  if ( v9 != v8 ) /*0x844bb1*/
  {
    if ( v9 ) /*0x844bb5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x844bbb*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x844bd1*/
      v8 = v11; /*0x844bd3*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x844bd9*/
    if ( v8 ) /*0x844bdc*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x844be2*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x844bf0*/
  ++v6->RefCount; /*0x844bfa*/
  value = v6; /*0x844bfd*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844c15*/
  if ( v6->RefCount-- == 1 ) /*0x844c1d*/
    NiD3DPass_ReleaseToPool(v6); /*0x844c28*/
  ++*((_DWORD *)this + 0xE); /*0x844c2d*/
}
