0x84FA10: push    0FFFFFFFFh
0x84FA12: push    offset SEH_851CA0
0x84FA17: mov     eax, large fs:0
0x84FA1D: push    eax
0x84FA1E: push    ecx
0x84FA1F: push    ebx
0x84FA20: push    ebp
0x84FA21: push    esi
0x84FA22: push    edi
0x84FA23: mov     eax, ds:0B30AACh
0x84FA28: xor     eax, esp
0x84FA2A: push    eax
0x84FA2B: lea     eax, [esp+24h+var_C]
0x84FA2F: mov     large fs:0, eax
0x84FA35: mov     ebp, ecx
0x84FA37: mov     esi, ds:0B459DCh
0x84FA3D: mov     eax, [esi+24h]
0x84FA40: mov     ebx, [esp+24h+arg_C]
0x84FA44: mov     edi, [eax]
0x84FA46: mov     edx, [ebx]
0x84FA48: mov     eax, [edx+8Ch]
0x84FA4E: push    0
0x84FA50: mov     ecx, ebx
0x84FA52: mov     [esp+28h+var_10], edi
0x84FA56: call    eax
0x84FA58: test    eax, eax
0x84FA5A: jz      short loc_84FA6E
0x84FA5C: mov     edx, [ebx]
0x84FA5E: mov     eax, [edx+8Ch]
0x84FA64: push    0
0x84FA66: mov     ecx, ebx
0x84FA68: call    eax
0x84FA6A: mov     ebx, eax
0x84FA6C: jmp     short loc_84FA83
0x84FA6E: test    dword ptr [ebx+1Ch], 80h
0x84FA75: mov     ebx, ds:0B430F0h
0x84FA7B: ja      short loc_84FA83
0x84FA7D: mov     ebx, ds:0B430DCh
0x84FA83: mov     edi, [edi+4]
0x84FA86: cmp     edi, ebx
0x84FA88: jz      short loc_84FAC1
0x84FA8A: test    edi, edi
0x84FA8C: jz      short loc_84FAAA
0x84FA8E: lea     ecx, [edi+4]
0x84FA91: push    ecx; lpAddend
0x84FA92: call    dword ptr ds:0A2807Ch
0x84FA98: test    eax, eax
0x84FA9A: jnz     short loc_84FAAA
0x84FA9C: test    edi, edi
0x84FA9E: jz      short loc_84FAAA
0x84FAA0: mov     edx, [edi]
0x84FAA2: mov     eax, [edx]
0x84FAA4: push    1
0x84FAA6: mov     ecx, edi
0x84FAA8: call    eax
0x84FAAA: test    ebx, ebx
0x84FAAC: mov     edi, [esp+24h+var_10]
0x84FAB0: mov     [edi+4], ebx
0x84FAB3: jz      short loc_84FAC5
0x84FAB5: add     ebx, 4
0x84FAB8: push    ebx; lpAddend
0x84FAB9: call    dword ptr ds:0A28078h
0x84FABF: jmp     short loc_84FAC5
0x84FAC1: mov     edi, [esp+24h+var_10]
0x84FAC5: test    edi, edi
0x84FAC7: jz      short loc_84FAE5
0x84FAC9: cmp     byte ptr ds:0B42CDDh, 0
0x84FAD0: jz      short loc_84FAE5
0x84FAD2: mov     ecx, [esp+24h+arg_C]
0x84FAD6: mov     edx, [ecx]
0x84FAD8: mov     eax, [edx+78h]
0x84FADB: call    eax
0x84FADD: push    eax
0x84FADE: mov     ecx, edi
0x84FAE0: call    sub_7715E0
0x84FAE5: mov     edi, 1
0x84FAEA: add     [esi+60h], edi
0x84FAED: mov     [esp+24h+arg_C], esi
0x84FAF1: mov     edx, [ebp+38h]
0x84FAF4: lea     ecx, [esp+24h+arg_C]
0x84FAF8: push    ecx
0x84FAF9: push    edx
0x84FAFA: lea     ecx, [ebp+40h]
0x84FAFD: mov     [esp+2Ch+var_4], 0
0x84FB05: call    sub_76CE40
0x84FB0A: or      eax, 0FFFFFFFFh
0x84FB0D: add     [esi+60h], eax
0x84FB10: mov     [esp+24h+var_4], eax
0x84FB14: jnz     short loc_84FB1D
0x84FB16: mov     ecx, esi
0x84FB18: call    sub_7604D0
0x84FB1D: add     [ebp+38h], edi
0x84FB20: mov     ecx, dword ptr [esp+24h+var_C]
0x84FB24: mov     large fs:0, ecx
0x84FB2B: pop     ecx
0x84FB2C: pop     edi
0x84FB2D: pop     esi
0x84FB2E: pop     ebp
0x84FB2F: pop     ebx
0x84FB30: add     esp, 10h
0x84FB33: retn    10h
