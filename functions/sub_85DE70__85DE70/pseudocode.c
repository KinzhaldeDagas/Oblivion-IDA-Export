void __thiscall sub_85DE70(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  NiD3DPass *v7; // esi
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v13; // [esp+14h] [ebp-10h]

  v7 = (NiD3DPass *)unk_B477E8; /*0x85de97*/
  v8 = **(_DWORD **)(unk_B477E8 + 0x24); /*0x85dea4*/
  v13 = v8; /*0x85deab*/
  v9 = sub_848FD0(a5, 0); /*0x85deaf*/
  v10 = *(_DWORD *)(v8 + 4); /*0x85deb4*/
  v11 = v9; /*0x85deb7*/
  if ( v10 != v9 ) /*0x85debb*/
  {
    if ( v10 ) /*0x85debf*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85dec5*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85dedb*/
    }
    *(_DWORD *)(v13 + 4) = v11; /*0x85dee3*/
    if ( v11 ) /*0x85dee6*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x85deec*/
  }
  sub_848FA0((_DWORD **)v13, (int)a5); /*0x85defe*/
  if ( !(_BYTE)value ) /*0x85df08*/
  {
    ++v7->RefCount; /*0x85df0f*/
    value = v7; /*0x85df12*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x85df2a*/
    if ( v7->RefCount-- == 1 ) /*0x85df32*/
      NiD3DPass_ReleaseToPool(v7); /*0x85df3d*/
    ++*((_DWORD *)this + 0xE); /*0x85df42*/
  }
}
