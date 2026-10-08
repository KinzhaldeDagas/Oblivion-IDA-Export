0x7837B0: push    esi
0x7837B1: mov     esi, ecx
0x7837B3: mov     eax, [esi+40h]
0x7837B6: test    eax, eax
0x7837B8: jz      short loc_7837C9
0x7837BA: mov     ecx, [eax]
0x7837BC: mov     edx, [ecx+8]
0x7837BF: push    eax
0x7837C0: call    edx
0x7837C2: mov     dword ptr [esi+40h], 0
0x7837C9: mov     ecx, esi
0x7837CB: pop     esi
0x7837CC: jmp     sub_783070; MoonSugarEffect decode: NiD3DVertexShader vtable +0x58 release-live-handle path. If wrapper+0x30 is non-null, calls sub_763090 to clear render-state vertex shader, Release the IDirect3DVertexShader9, and store null through vtable +0x44.
