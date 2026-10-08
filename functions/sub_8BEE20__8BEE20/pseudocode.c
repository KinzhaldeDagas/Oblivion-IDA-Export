int __thiscall sub_8BEE20(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi

  v3 = *(this + 1); /*0x8bee22*/
  v4 = a2; /*0x8bee27*/
  if ( !a2 ) /*0x8bee31*/
  {
    v5 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x29); /*0x8bee42*/
    *(_DWORD *)(v5 + 0xC) = 0; /*0x8bee44*/
    *(_WORD *)(v5 + 4) = 0x18; /*0x8bee47*/
    *(_WORD *)(v5 + 6) = 1; /*0x8bee4d*/
    *(_DWORD *)v5 = &ahkMalleableConstraintData::`vftable'; /*0x8bee53*/
    v4 = v5; /*0x8bee59*/
  }
  v6 = *(_DWORD *)(v3 + 0xC); /*0x8bee5b*/
  if ( v6 ) /*0x8bee64*/
  {
    v7 = sub_8E7FD0(v6, a3); /*0x8bee69*/
    v8 = v7; /*0x8bee6e*/
    if ( v7 ) /*0x8bee75*/
    {
      sub_8BED90((_DWORD *)v4, v7); /*0x8bee7a*/
      if ( *(_WORD *)(v8 + 4) ) /*0x8bee7f*/
      {
        if ( !--*(_WORD *)(v8 + 6) ) /*0x8bee8b*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x8bee9c*/
      }
    }
  }
  *(float *)(v4 + 0x10) = *(float *)(v3 + 0x10); /*0x8beea6*/
  *(float *)(v4 + 0x14) = *(float *)(v3 + 0x14); /*0x8beeae*/
  return sub_8A07B0(this, v4, a3); /*0x8beeb6*/
}
