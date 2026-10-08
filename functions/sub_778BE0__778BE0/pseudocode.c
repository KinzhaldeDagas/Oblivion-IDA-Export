// Pass225: NiD3DGeometryGroupManager purge dispatcher; removes object's +0x1C geometry buffer through owning group.
char __stdcall sub_778BE0(int a1)
{
  int v1; // eax
  _DWORD *v3; // esi

  v1 = *(_DWORD *)(a1 + 0x1C); /*0x778be4*/
  if ( !v1 ) /*0x778be9*/
    return 0; /*0x778beb*/
  v3 = *(_DWORD **)(v1 + 4); /*0x778bf1*/
  (*(void (__thiscall **)(_DWORD *, int))(*v3 + 0xC))(v3, a1); /*0x778bfc*/
  if ( !v3[1] ) /*0x778bfe*/
    (*(void (__thiscall **)(_DWORD *))*v3)(v3); /*0x778c0a*/
  return 1; /*0x778bed*/
}
