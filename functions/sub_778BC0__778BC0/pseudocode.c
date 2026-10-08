// Pass225: NiD3DGeometryGroupManager admit/add dispatcher; if object+0x1C is null, asks target group to create buffer cache.
char __stdcall sub_778BC0(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 0x1C) ) /*0x778bc4*/
    return 0; /*0x778bca*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, a2); /*0x778bd9*/
  return 1; /*0x778bcc*/
}
