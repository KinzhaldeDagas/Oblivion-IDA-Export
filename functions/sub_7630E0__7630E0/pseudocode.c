// MoonSugarEffect decode: pixel shader handle release helper. Clears current pixel shader on renderer state, Releases IDirect3DPixelShader9, then stores null on the wrapper.
int __userpurge sub_7630E0@<eax>(int a1@<ecx>, int a2@<esi>, int a3)
{
  int v3; // eax

  if ( *(_DWORD *)(a1 + 0x8AC) ) /*0x7630e0*/
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 0x8AC) + 0x78))(*(_DWORD *)(a1 + 0x8AC), 0, 0); /*0x7630f8*/
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x38))(a3, a2); /*0x763106*/
  if ( v3 ) /*0x76310a*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x763112*/
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 0x3C))(a3, 0); /*0x763120*/
}
