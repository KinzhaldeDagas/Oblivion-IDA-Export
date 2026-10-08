void __thiscall sub_8506B0(NiTArray_NiD3DPass *this, int a2, int a3, int Stage, int a5)
{
  NiD3DPass *v6; // esi
  int v7; // ebx
  int (__thiscall *v8)(int, _DWORD); // eax
  int v9; // eax
  int v10; // ebx
  int v11; // ebp

  v6 = (NiD3DPass *)unk_B45BE4; /*0x8506dd*/
  sub_848E50(*(_DWORD *)(Stage + 0xC)); /*0x8506e4*/
  v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88); /*0x8506f4*/
  Stage = v6->Stages.data->Stage; /*0x8506fc*/
  v7 = Stage; /*0x8506ec*/
  v9 = v8(a5, 0); /*0x850700*/
  v10 = *(_DWORD *)(v7 + 4); /*0x850702*/
  v11 = v9; /*0x850705*/
  if ( v10 != v9 ) /*0x850709*/
  {
    if ( v10 ) /*0x85070d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x850713*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x850729*/
    }
    *(_DWORD *)(Stage + 4) = v11; /*0x850731*/
    if ( v11 ) /*0x850734*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85073a*/
  }
  ++v6->RefCount; /*0x850745*/
  Stage = (int)v6; /*0x850748*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&Stage); /*0x850760*/
  if ( v6->RefCount-- == 1 ) /*0x850768*/
    NiD3DPass_ReleaseToPool(v6); /*0x850773*/
  ++*((_DWORD *)this + 0xE); /*0x850778*/
}
