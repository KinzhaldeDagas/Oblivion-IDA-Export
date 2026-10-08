int __thiscall sub_8C9F30(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // ecx
  int *v5; // esi
  int v6; // ecx
  int result; // eax
  int v8; // edi

  v3 = *(this + 3); /*0x8c9f39*/
  v4 = *(_DWORD *)(v3 + 8 * a2 + 4); /*0x8c9f3f*/
  v5 = (int *)(8 * a2 + v3); /*0x8c9f43*/
  if ( v4 ) /*0x8c9f47*/
  {
    if ( *(_WORD *)(v4 + 4) ) /*0x8c9f49*/
    {
      if ( !--*(_WORD *)(v4 + 6) ) /*0x8c9f54*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8c9f5f*/
    }
  }
  v6 = *v5; /*0x8c9f61*/
  if ( *v5 ) /*0x8c9f61*/
  {
    if ( *(_WORD *)(v6 + 4) ) /*0x8c9f67*/
    {
      if ( !--*(_WORD *)(v6 + 6) ) /*0x8c9f72*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x8c9f7d*/
    }
  }
  result = *(this + 4) - 1; /*0x8c9f82*/
  *(this + 4) = result; /*0x8c9f83*/
  v8 = *(this + 3); /*0x8c9f86*/
  *(_DWORD *)(v8 + 8 * a2) = *(_DWORD *)(v8 + 8 * result); /*0x8c9f8c*/
  *(_DWORD *)(v8 + 8 * a2 + 4) = *(_DWORD *)(v8 + 8 * result + 4); /*0x8c9f93*/
  return result; /*0x8c9f97*/
}
