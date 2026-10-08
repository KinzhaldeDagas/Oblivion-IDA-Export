char __cdecl Cmd_GetActionRef(int a1, int a2, TESChildCELL *a3, int a4, int a5, int a6, BSExtraDataVtbl *vtbl)
{
  BSExtraDataVtbl *v7; // edi

  v7 = vtbl; /*0x50bf8a*/
  *(double *)vtbl = 0.0; /*0x50bf8e*/
  vtbl = 0; /*0x50bf90*/
  if ( a3 ) /*0x50bf98*/
  {
    if ( sub_4D8360(a3) ) /*0x50bf9c*/
    {
      vtbl = sub_4D8360(a3)[1].vtbl; /*0x50bfb5*/
      sub_4F9FB0(&vtbl, v7); /*0x50bfb9*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x50bfc1*/
    Interface_ConsolePrint("GetActionRef >> (%08x)", vtbl); /*0x50bfd6*/
  return 1; /*0x50bfc8*/
}
