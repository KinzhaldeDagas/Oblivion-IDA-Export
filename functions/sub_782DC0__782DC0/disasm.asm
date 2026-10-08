0x782DC0: cmp     dword ptr [ecx+28h], 0
0x782DC4: jz      short locret_782DCF
0x782DC6: push    ecx
0x782DC7: mov     ecx, [ecx+20h]
0x782DCA: call    sub_7630E0; MoonSugarEffect decode: pixel shader handle release helper. Clears current pixel shader on renderer state, Releases IDirect3DPixelShader9, then stores null on the wrapper.
0x782DCF: retn
