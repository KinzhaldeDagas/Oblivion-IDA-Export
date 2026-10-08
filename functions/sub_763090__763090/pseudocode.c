// MoonSugarEffect decode: vertex shader handle release helper. Clears current vertex shader on renderer state, calls wrapper +0x40 getter, Releases IDirect3DVertexShader9, then wrapper +0x44 stores null.
int __userpurge sub_763090@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 0x8AC) ) /*0x763090*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0x88))(*(_DWORD *)(a1 + 0x8AC), 0, 0); /*0x7630ab*/
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x40))(a3, a2); /*0x7630b9*/
  if ( v3 ) /*0x7630bd*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x7630c5*/
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x44))(a3, 0); /*0x7630d3*/
}
