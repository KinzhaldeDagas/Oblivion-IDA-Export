0x761DF0: push    esi
0x761DF1: xor     esi, esi
0x761DF3: cmp     ds:0B42154h, esi
0x761DF9: jnz     short loc_761E59
0x761DFB: mov     eax, ds:0B42158h
0x761E00: test    eax, eax
0x761E02: jnz     short loc_761E2D
0x761E04: push    offset aD3d9_dll; "D3D9.DLL"
0x761E09: call    dword ptr ds:0A28118h
0x761E0F: test    eax, eax
0x761E11: mov     ds:0B42150h, eax
0x761E16: jz      short loc_761E3A
0x761E18: push    offset aDirect3dcreate; "Direct3DCreate9"
0x761E1D: push    eax; hModule
0x761E1E: call    dword ptr ds:0A2811Ch
0x761E24: test    eax, eax
0x761E26: mov     ds:0B42158h, eax
0x761E2B: jz      short loc_761E3A
0x761E2D: push    20h ; ' '
0x761E2F: call    eax
0x761E31: test    eax, eax
0x761E33: mov     ds:0B42154h, eax
0x761E38: jnz     short loc_761E4C
0x761E3A: push    offset aCreateD3d9Inst; "Create D3D9 instance...FAILED\n"
0x761E3F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x761E44: add     esp, 4
0x761E47: or      eax, 0FFFFFFFFh
0x761E4A: pop     esi
0x761E4B: retn
0x761E4C: push    offset aCreateD3d9In_0; "Create D3D9 instance...SUCCESSFUL\n"
0x761E51: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x761E56: add     esp, 4
0x761E59: mov     eax, esi
0x761E5B: pop     esi
0x761E5C: retn
