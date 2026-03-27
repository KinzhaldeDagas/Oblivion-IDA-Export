0x916DD0: push    ecx
0x916DD1: push    ebx
0x916DD2: mov     ebx, [esp+8+arg_0]
0x916DD6: push    ebp
0x916DD7: mov     ebp, [esp+0Ch+arg_8]
0x916DDB: push    esi
0x916DDC: mov     esi, [esp+10h+arg_4]
0x916DE0: dec     esi
0x916DE1: lea     edx, [esi+1]
0x916DE4: cmp     edx, 4
0x916DE7: push    edi
0x916DE8: mov     [esp+14h+var_4], ecx
0x916DEC: jl      loc_916F07
0x916DF2: shr     edx, 2
0x916DF5: mov     [esp+14h+arg_8], edx
0x916DF9: neg     edx
0x916DFB: lea     edx, [esi+edx*4]
0x916DFE: lea     eax, [ebp+18h]
0x916E01: mov     [esp+14h+arg_4], edx
0x916E05: mov     edi, [ecx+30h]
0x916E08: movzx   esi, word ptr [ebx]
0x916E0B: mov     edx, esi
0x916E0D: sar     edx, 2
0x916E10: lea     edx, [edx+edx*2]
0x916E13: shl     edx, 4
0x916E16: add     edx, edi
0x916E18: mov     edi, esi
0x916E1A: and     edi, 3
0x916E1D: mov     ecx, [edx+edi*4]
0x916E20: mov     [ebp+0], ecx
0x916E23: mov     ecx, [edx+edi*4+10h]
0x916E27: mov     [eax-14h], ecx
0x916E2A: mov     edx, [edx+edi*4+20h]
0x916E2E: mov     [eax-10h], edx
0x916E31: mov     ecx, [esp+14h+var_4]
0x916E35: or      esi, 3F000000h
0x916E3B: mov     [eax-0Ch], esi
0x916E3E: movzx   esi, word ptr [ebx+2]
0x916E42: mov     edi, [ecx+30h]
0x916E45: mov     edx, esi
0x916E47: sar     edx, 2
0x916E4A: lea     edx, [edx+edx*2]
0x916E4D: shl     edx, 4
0x916E50: add     edx, edi
0x916E52: mov     edi, esi
0x916E54: and     edi, 3
0x916E57: mov     ecx, [edx+edi*4]
0x916E5A: mov     [eax-8], ecx
0x916E5D: mov     ecx, [edx+edi*4+10h]
0x916E61: mov     [eax-4], ecx
0x916E64: mov     edx, [edx+edi*4+20h]
0x916E68: mov     [eax], edx
0x916E6A: mov     ecx, [esp+14h+var_4]
0x916E6E: or      esi, 3F000000h
0x916E74: mov     [eax+4], esi
0x916E77: movzx   esi, word ptr [ebx+4]
0x916E7B: mov     edi, [ecx+30h]
0x916E7E: mov     edx, esi
0x916E80: sar     edx, 2
0x916E83: lea     edx, [edx+edx*2]
0x916E86: shl     edx, 4
0x916E89: add     edx, edi
0x916E8B: mov     edi, esi
0x916E8D: and     edi, 3
0x916E90: mov     ecx, [edx+edi*4]
0x916E93: mov     [eax+8], ecx
0x916E96: mov     ecx, [edx+edi*4+10h]
0x916E9A: mov     [eax+0Ch], ecx
0x916E9D: mov     edx, [edx+edi*4+20h]
0x916EA1: mov     ecx, [esp+14h+var_4]
0x916EA5: mov     [eax+10h], edx
0x916EA8: or      esi, 3F000000h
0x916EAE: mov     [eax+14h], esi
0x916EB1: movzx   esi, word ptr [ebx+6]
0x916EB5: mov     edi, [ecx+30h]
0x916EB8: mov     edx, esi
0x916EBA: sar     edx, 2
0x916EBD: lea     edx, [edx+edx*2]
0x916EC0: shl     edx, 4
0x916EC3: add     edx, edi
0x916EC5: mov     edi, esi
0x916EC7: and     edi, 3
0x916ECA: mov     ecx, [edx+edi*4]
0x916ECD: mov     [eax+18h], ecx
0x916ED0: mov     ecx, [edx+edi*4+10h]
0x916ED4: mov     [eax+1Ch], ecx
0x916ED7: mov     edx, [edx+edi*4+20h]
0x916EDB: mov     ecx, [esp+14h+arg_8]
0x916EDF: or      esi, 3F000000h
0x916EE5: mov     [eax+20h], edx
0x916EE8: mov     [eax+24h], esi
0x916EEB: add     ebx, 8
0x916EEE: add     ebp, 40h ; '@'
0x916EF1: add     eax, 40h ; '@'
0x916EF4: dec     ecx
0x916EF5: mov     [esp+14h+arg_8], ecx
0x916EF9: mov     ecx, [esp+14h+var_4]
0x916EFD: jnz     loc_916E05
0x916F03: mov     esi, [esp+14h+arg_4]
0x916F07: test    esi, esi
0x916F09: jl      short loc_916F56
0x916F0B: inc     esi
0x916F0C: mov     [esp+14h+arg_8], esi
0x916F10: movzx   edx, word ptr [ebx]
0x916F13: mov     esi, [ecx+30h]
0x916F16: mov     eax, edx
0x916F18: sar     eax, 2
0x916F1B: lea     eax, [eax+eax*2]
0x916F1E: shl     eax, 4
0x916F21: add     eax, esi
0x916F23: mov     esi, edx
0x916F25: and     esi, 3
0x916F28: mov     edi, [eax+esi*4]
0x916F2B: mov     [ebp+0], edi
0x916F2E: mov     edi, [eax+esi*4+10h]
0x916F32: mov     [ebp+4], edi
0x916F35: mov     eax, [eax+esi*4+20h]
0x916F39: mov     [ebp+8], eax
0x916F3C: mov     eax, [esp+14h+arg_8]
0x916F40: or      edx, 3F000000h
0x916F46: mov     [ebp+0Ch], edx
0x916F49: add     ebx, 2
0x916F4C: add     ebp, 10h
0x916F4F: dec     eax
0x916F50: mov     [esp+14h+arg_8], eax
0x916F54: jnz     short loc_916F10
0x916F56: pop     edi
0x916F57: pop     esi
0x916F58: pop     ebp
0x916F59: pop     ebx
0x916F5A: pop     ecx
0x916F5B: retn    0Ch
