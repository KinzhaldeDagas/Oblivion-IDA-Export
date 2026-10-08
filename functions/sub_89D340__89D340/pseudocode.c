void __thiscall sub_89D340(_DWORD *this, _WORD *a2, char a3, int a4, int a5)
{
  _WORD *v5; // esi
  _WORD *v7; // eax
  int v8; // ecx
  _WORD *v9; // eax

  v5 = a2; /*0x89d341*/
  if ( a2 ) /*0x89d34a*/
  {
    if ( a2[2] ) /*0x89d36c*/
      ++a2[3]; /*0x89d373*/
  }
  else
  {
    v7 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x89d358*/
    v7[2] = 0x18; /*0x89d35d*/
    v5 = sub_899330(v7); /*0x89d368*/
  }
  v8 = *(this + 0x1E); /*0x89d377*/
  if ( *(_WORD *)(v8 + 4) ) /*0x89d37a*/
  {
    if ( !--*(_WORD *)(v8 + 6) ) /*0x89d385*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x89d390*/
  }
  *(this + 0x1E) = v5; /*0x89d394*/
  if ( v5 ) /*0x89d397*/
    v9 = v5 + 6; /*0x89d399*/
  else
    v9 = 0; /*0x89d39e*/
  *(_DWORD *)(*(this + 0x1D) + 4) = v9; /*0x89d3a3*/
  if ( a3 ) /*0x89d3ac*/
    sub_89BF50((int)this, a4, a5); /*0x89d3ba*/
}
