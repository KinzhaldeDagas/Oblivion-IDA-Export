0x76C6D0: push    esi
0x76C6D1: push    44h ; 'D'; Size
0x76C6D3: call    FormHeapAlloc
0x76C6D8: add     esp, 4
0x76C6DB: test    eax, eax
0x76C6DD: jz      short loc_76C6FA
0x76C6DF: mov     ecx, eax; this
0x76C6E1: call    InitSurfacEData
0x76C6E6: mov     esi, eax
0x76C6E8: mov     eax, [esp+4+a1]
0x76C6EC: push    esi; a2
0x76C6ED: push    eax; a1
0x76C6EE: call    D3DFMTToTextureFormat
0x76C6F3: add     esp, 8
0x76C6F6: mov     eax, esi
0x76C6F8: pop     esi
0x76C6F9: retn
0x76C6FA: mov     eax, [esp+4+a1]
0x76C6FE: xor     esi, esi
0x76C700: push    esi; a2
0x76C701: push    eax; a1
0x76C702: call    D3DFMTToTextureFormat
0x76C707: add     esp, 8
0x76C70A: mov     eax, esi
0x76C70C: pop     esi
0x76C70D: retn
