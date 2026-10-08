0x7D1C60: push    esi; Clears texture stages/state for every one of Oblivion's 419 cached ShadowLightShader passes by dispatching the per-pass clear virtual.
0x7D1C61: push    edi
0x7D1C62: mov     edi, ecx
0x7D1C64: mov     esi, offset g_ShadowLightPassBySelector
0x7D1C69: lea     esp, [esp+0]
0x7D1C70: mov     ecx, [esi]
0x7D1C72: mov     eax, [edi]
0x7D1C74: mov     edx, [eax+94h]
0x7D1C7A: push    ecx
0x7D1C7B: mov     ecx, edi
0x7D1C7D: call    edx
0x7D1C7F: add     esi, 4
0x7D1C82: cmp     esi, offset unk_B45C2C
0x7D1C88: jl      short loc_7D1C70
0x7D1C8A: pop     edi
0x7D1C8B: pop     esi
0x7D1C8C: retn
