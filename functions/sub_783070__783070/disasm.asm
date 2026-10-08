0x783070: cmp     dword ptr [ecx+30h], 0; MoonSugarEffect decode: NiD3DVertexShader vtable +0x58 release-live-handle path. If wrapper+0x30 is non-null, calls sub_763090 to clear render-state vertex shader, Release the IDirect3DVertexShader9, and store null through vtable +0x44.
0x783074: jz      short locret_78307F
0x783076: push    ecx
0x783077: mov     ecx, [ecx+20h]
0x78307A: call    sub_763090; MoonSugarEffect decode: vertex shader handle release helper. Clears current vertex shader on renderer state, calls wrapper +0x40 getter, Releases IDirect3DVertexShader9, then wrapper +0x44 stores null.
0x78307F: retn
