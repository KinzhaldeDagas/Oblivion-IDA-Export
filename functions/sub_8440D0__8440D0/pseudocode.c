void __thiscall sub_8440D0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // edi
  UInt32 Stage; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+2Ch] [ebp+Ch]

  v6 = (NiD3DPass *)unk_B45A04; /*0x844105*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844113*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v6->Stages.data->Stage; /*0x84411c*/
  v8 = sub_848FD0(value, 0); /*0x844123*/
  v9 = *(_DWORD *)(Stage + 4); /*0x844128*/
  v11 = v8; /*0x84412d*/
  if ( v9 != v8 ) /*0x844131*/
  {
    if ( v9 ) /*0x844135*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x84413b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x844151*/
      v8 = v11; /*0x844153*/
    }
    *(_DWORD *)(Stage + 4) = v8; /*0x844159*/
    if ( v8 ) /*0x84415c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x844162*/
  }
  sub_848FA0((_DWORD **)Stage, (int)value); /*0x844170*/
  ++v6->RefCount; /*0x84417a*/
  value = v6; /*0x84417d*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844195*/
  if ( v6->RefCount-- == 1 ) /*0x84419d*/
    NiD3DPass_ReleaseToPool(v6); /*0x8441a8*/
  ++*((_DWORD *)this + 0xE); /*0x8441ad*/
}
