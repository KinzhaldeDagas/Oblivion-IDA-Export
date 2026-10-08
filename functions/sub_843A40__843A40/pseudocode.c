void __thiscall sub_843A40(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+14h] [ebp-10h]

  v6 = (NiD3DPass *)unk_B45940; /*0x843a67*/
  v7 = **(_DWORD **)(unk_B45940 + 0x24); /*0x843a74*/
  v8 = sub_848FD0(value, 0); /*0x843a7b*/
  v9 = *(_DWORD *)(v7 + 4); /*0x843a80*/
  v11 = v8; /*0x843a85*/
  if ( v9 != v8 ) /*0x843a89*/
  {
    if ( v9 ) /*0x843a8d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x843a93*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x843aa9*/
      v8 = v11; /*0x843aab*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x843ab1*/
    if ( v8 ) /*0x843ab4*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x843aba*/
  }
  sub_848FA0((_DWORD **)v7, (int)value); /*0x843ac8*/
  NiD3DTextureStage_ApplyAddressModePreset((NiD3DTextureStage *)v6->Stages.data[1].Stage, 0); /*0x843ad5*/
  ++v6->RefCount; /*0x843adf*/
  value = v6; /*0x843ae2*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x843afa*/
  if ( v6->RefCount-- == 1 ) /*0x843b02*/
    NiD3DPass_ReleaseToPool(v6); /*0x843b0d*/
  ++*((_DWORD *)this + 0xE); /*0x843b12*/
}
