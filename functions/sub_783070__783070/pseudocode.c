// MoonSugarEffect decode: NiD3DVertexShader vtable +0x58 release-live-handle path. If wrapper+0x30 is non-null, calls sub_763090 to clear render-state vertex shader, Release the IDirect3DVertexShader9, and store null through vtable +0x44.
int __usercall sub_783070@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int result; // eax

  if ( *(_DWORD *)(a1 + 0x30) ) /*0x783070*/
    return sub_763090(*(_DWORD *)(a1 + 0x20), a2, a1); /*0x78307a*/
  return result; /*0x78307f*/
}
