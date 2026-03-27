0x940F60: mov     eax, [esp+arg_0]
0x940F64: push    ebx
0x940F65: mov     ebx, ecx
0x940F67: push    0FFFFFFFFh
0x940F69: push    eax
0x940F6A: lea     ecx, [ebx+54h]
0x940F6D: call    sub_8B1550
0x940F72: cmp     eax, 0FFFFFFFFh
0x940F75: jnz     loc_94105F
0x940F7B: push    ebp
0x940F7C: mov     ebp, [esp+8+arg_4]
0x940F80: push    esi
0x940F81: push    edi
0x940F82: push    eax
0x940F83: lea     edi, [ebx+60h]
0x940F86: push    ebp
0x940F87: mov     ecx, edi
0x940F89: mov     esi, ebp
0x940F8B: call    sub_8B1550
0x940F90: cmp     eax, 0FFFFFFFFh
0x940F93: jnz     loc_94105C
0x940F99: lea     esp, [esp+0]
0x940FA0: mov     ecx, esi
0x940FA2: call    sub_90D1F0
0x940FA7: mov     esi, eax
0x940FA9: test    esi, esi
0x940FAB: jz      short loc_940FC3
0x940FAD: push    0FFFFFFFFh
0x940FAF: push    esi
0x940FB0: mov     ecx, edi
0x940FB2: call    sub_8B1550
0x940FB7: cmp     eax, 0FFFFFFFFh
0x940FBA: jz      short loc_940FA0
0x940FBC: pop     edi
0x940FBD: pop     esi
0x940FBE: pop     ebp
0x940FBF: pop     ebx
0x940FC0: retn    0Ch
0x940FC3: mov     ecx, offset unk_BA8788
0x940FC8: call    sub_90D1E0
0x940FCD: push    eax
0x940FCE: mov     ecx, ebp
0x940FD0: call    sub_90D1E0
0x940FD5: push    eax
0x940FD6: call    sub_8B1770
0x940FDB: add     esp, 8
0x940FDE: test    eax, eax
0x940FE0: jnz     short loc_940FF0
0x940FE2: mov     ecx, ds:0B30594h
0x940FE8: push    ecx
0x940FE9: mov     ecx, ebx
0x940FEB: call    sub_940EF0
0x940FF0: mov     ecx, offset unk_BA8764
0x940FF5: call    sub_90D1E0
0x940FFA: push    eax
0x940FFB: mov     ecx, ebp
0x940FFD: call    sub_90D1E0
0x941002: push    eax
0x941003: call    sub_8B1770
0x941008: add     esp, 8
0x94100B: test    eax, eax
0x94100D: jnz     short loc_94101D
0x94100F: mov     edx, ds:0B30594h
0x941015: push    edx
0x941016: mov     ecx, ebx
0x941018: call    sub_940EF0
0x94101D: mov     ecx, offset unk_BA871C
0x941022: call    sub_90D1E0
0x941027: push    eax
0x941028: mov     ecx, ebp
0x94102A: call    sub_90D1E0
0x94102F: push    eax
0x941030: call    sub_8B1770
0x941035: add     esp, 8
0x941038: test    eax, eax
0x94103A: jnz     short loc_941050
0x94103C: mov     eax, ds:0B30594h
0x941041: push    eax
0x941042: mov     ecx, ebx
0x941044: call    sub_940EF0
0x941049: pop     edi
0x94104A: pop     esi
0x94104B: pop     ebp
0x94104C: pop     ebx
0x94104D: retn    0Ch
0x941050: mov     ecx, [esp+10h+arg_8]
0x941054: push    ecx
0x941055: mov     ecx, ebx
0x941057: call    sub_940EF0
0x94105C: pop     edi
0x94105D: pop     esi
0x94105E: pop     ebp
0x94105F: pop     ebx
0x941060: retn    0Ch
