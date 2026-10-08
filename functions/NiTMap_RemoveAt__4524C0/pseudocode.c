//
// [2026-10-03 frond clone rollback] Verified thiscall(map,key), AL bool, ret4; unlinks node, virtual+10 clears value, virtual+18 frees node, decrements map+C. For NiCloningProcess map vtablesA3CCB0/A3CCD0, +10 is noop68F970 and +18 returns a raw12byte node to its pool(4B2ED0/4B8400). No NiObject release: values are borrowed pointers/flags. Plugin validates these callbacks, checkpoints nodes before group CopyMembers, restores older values/removes introduced entries before destroying failed clone group.
char __thiscall NiTMap_RemoveAt(_DWORD *this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // edi

  v3 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x4524d2*/
  v4 = *(_DWORD **)(*(this + 2) + 4 * v3); /*0x4524d7*/
  if ( !v4 ) /*0x4524dc*/
    return 0; /*0x4524dc*/
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v4[1]) ) /*0x4524ea*/
  {
    *(_DWORD *)(*(this + 2) + 4 * v3) = *v4; /*0x4524f5*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v4); /*0x452500*/
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x18))(this, v4); /*0x45250a*/
    --*(this + 3); /*0x45250c*/
    return 1; /*0x452516*/
  }
  v6 = v4; /*0x452519*/
  v7 = (_DWORD *)*v4; /*0x45251b*/
  if ( !v7 ) /*0x45251f*/
    return 0; /*0x45253b*/
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*this + 8))(this, a2, v7[1]) ) /*0x452531*/
  {
    v6 = v7; /*0x452533*/
    v7 = (_DWORD *)*v7; /*0x452535*/
    if ( !v7 ) /*0x452539*/
      return 0; /*0x452539*/
  }
  *v6 = *v7; /*0x452546*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x10))(this, v7); /*0x452550*/
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 0x18))(this, v7); /*0x45255a*/
  --*(this + 3); /*0x45255c*/
  return 1; /*0x452510*/
}
