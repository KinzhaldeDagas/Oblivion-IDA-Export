0x735CD0: push    0FFFFFFFFh
0x735CD2: push    offset SEH_735CD0
0x735CD7: mov     eax, large fs:0
0x735CDD: push    eax
0x735CDE: sub     esp, 6Ch
0x735CE1: push    ebx
0x735CE2: push    ebp
0x735CE3: push    esi
0x735CE4: push    edi
0x735CE5: mov     eax, ds:0B30AACh
0x735CEA: xor     eax, esp
0x735CEC: push    eax
0x735CED: lea     eax, [esp+8Ch+var_C]
0x735CF4: mov     large fs:0, eax
0x735CFA: mov     esi, ecx
0x735CFC: lea     ecx, [esp+8Ch+var_50]
0x735D00: call    InitSurfacEData
0x735D05: lea     ebx, [esi+80h]
0x735D0B: push    ebx; lpCriticalSection
0x735D0C: mov     [esp+90h+lpCriticalSection], ebx
0x735D10: call    dword ptr ds:0A2806Ch
0x735D16: call    dword ptr ds:0A2808Ch
0x735D1C: add     dword ptr [ebx+7Ch], 1
0x735D20: mov     edi, [esp+8Ch+arg_0]
0x735D27: lea     ecx, [esp+8Ch+var_5C]
0x735D2B: push    ecx
0x735D2C: lea     edx, [esp+90h+var_75]
0x735D30: push    edx
0x735D31: lea     ecx, [esp+94h+var_50]
0x735D35: push    ecx
0x735D36: lea     edx, [esp+98h+var_58]
0x735D3A: push    edx
0x735D3B: lea     ecx, [esp+9Ch+var_54]
0x735D3F: mov     [ebx+78h], eax
0x735D42: mov     eax, [esi]
0x735D44: mov     edx, [eax+0Ch]
0x735D47: push    ecx
0x735D48: push    edi
0x735D49: mov     ecx, esi
0x735D4B: call    edx
0x735D4D: test    al, al
0x735D4F: jnz     short loc_735D6C
0x735D51: add     dword ptr [ebx+7Ch], 0FFFFFFFFh
0x735D55: jnz     short loc_735D5E
0x735D57: mov     dword ptr [ebx+78h], 0
0x735D5E: push    ebx; lpCriticalSection
0x735D5F: call    dword ptr ds:0A28074h
0x735D65: xor     eax, eax
0x735D67: jmp     loc_736278
0x735D6C: mov     ebp, [esp+8Ch+arg_4]
0x735D73: test    ebp, ebp
0x735D75: jz      short loc_735DB3
0x735D77: mov     eax, [ebp+54h]
0x735D7A: movzx   ecx, word ptr [esi+100h]
0x735D81: mov     eax, [eax]
0x735D83: cmp     eax, ecx
0x735D85: jnz     short loc_735DB3
0x735D87: mov     edx, [ebp+58h]
0x735D8A: movzx   ecx, word ptr [esi+102h]
0x735D91: mov     eax, [edx]
0x735D93: cmp     eax, ecx
0x735D95: jnz     short loc_735DB3
0x735D97: lea     edx, [esi+108h]
0x735D9D: push    edx
0x735D9E: lea     ecx, [ebp+8]
0x735DA1: call    sub_71AD40
0x735DA6: test    al, al
0x735DA8: jz      short loc_735DB3
0x735DAA: mov     [esp+8Ch+arg_4], ebp
0x735DB1: jmp     short loc_735E0B
0x735DB3: push    70h ; 'p'; Size
0x735DB5: call    FormHeapAlloc
0x735DBA: add     esp, 4
0x735DBD: mov     [esp+8Ch+arg_0], eax
0x735DC4: test    eax, eax
0x735DC6: mov     [esp+8Ch+var_4], 0
0x735DD1: jz      short loc_735DF7
0x735DD3: movzx   edx, word ptr [esi+102h]
0x735DDA: push    1
0x735DDC: push    1
0x735DDE: lea     ecx, [esi+108h]
0x735DE4: push    ecx
0x735DE5: movzx   ecx, word ptr [esi+100h]
0x735DEC: push    edx
0x735DED: push    ecx
0x735DEE: mov     ecx, eax
0x735DF0: call    NiPixelData__NiPixelData
0x735DF5: jmp     short loc_735DF9
0x735DF7: xor     eax, eax
0x735DF9: mov     [esp+8Ch+var_4], 0FFFFFFFFh
0x735E04: mov     [esp+8Ch+arg_4], eax
0x735E0B: cmp     byte ptr [esi+107h], 0
0x735E12: movzx   edx, word ptr [esi+102h]
0x735E19: mov     [esp+8Ch+var_6C], 0
0x735E21: jz      short loc_735EA0
0x735E23: movzx   ebp, word ptr [esi+104h]
0x735E2A: imul    ebp, edx
0x735E2D: xor     ecx, ecx
0x735E2F: mov     eax, ebp
0x735E31: mov     edx, 4
0x735E36: mul     edx
0x735E38: seto    cl
0x735E3B: neg     ecx
0x735E3D: or      ecx, eax
0x735E3F: push    ecx; Size
0x735E40: call    FormHeapAlloc
0x735E45: add     esp, 4
0x735E48: test    eax, eax
0x735E4A: mov     [esp+8Ch+var_6C], eax
0x735E4E: jz      loc_735D51
0x735E54: push    ebp
0x735E55: push    eax
0x735E56: push    edi
0x735E57: call    sub_735A40
0x735E5C: add     esp, 0Ch
0x735E5F: xor     ebx, ebx
0x735E61: test    ebp, ebp
0x735E63: jbe     short loc_735EBE
0x735E65: jmp     short loc_735E70
0x735E67: align 10h
0x735E70: mov     edx, [edi+4]
0x735E73: push    1
0x735E75: lea     eax, [esp+90h+arg_0]
0x735E7C: push    eax
0x735E7D: push    4
0x735E7F: lea     ecx, [esp+98h+var_64]
0x735E83: push    ecx
0x735E84: push    edi
0x735E85: mov     [esp+0A0h+arg_0], 4
0x735E90: call    edx
0x735E92: add     ebx, [esp+0A0h+var_64]
0x735E96: add     esp, 14h
0x735E99: sub     ebp, 1
0x735E9C: jnz     short loc_735E70
0x735E9E: jmp     short loc_735EBE
0x735EA0: movzx   ebx, byte ptr [esi+106h]
0x735EA7: movzx   eax, word ptr [esi+100h]
0x735EAE: movzx   ecx, word ptr [esi+104h]
0x735EB5: imul    ebx, eax
0x735EB8: imul    ebx, ecx
0x735EBB: imul    ebx, edx
0x735EBE: push    ebx; Size
0x735EBF: call    FormHeapAlloc
0x735EC4: add     esp, 4
0x735EC7: test    eax, eax
0x735EC9: mov     [esp+8Ch+var_70], eax
0x735ECD: jnz     short loc_735EEE
0x735ECF: mov     eax, [esp+8Ch+lpCriticalSection]
0x735ED3: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x735ED7: jnz     short loc_735EE0
0x735ED9: mov     dword ptr [eax+78h], 0
0x735EE0: push    eax; lpCriticalSection
0x735EE1: call    dword ptr ds:0A28074h
0x735EE7: xor     eax, eax
0x735EE9: jmp     loc_736278
0x735EEE: mov     edx, [edi+4]
0x735EF1: push    1
0x735EF3: lea     ecx, [esp+90h+var_68]
0x735EF7: push    ecx
0x735EF8: push    ebx
0x735EF9: push    eax
0x735EFA: push    edi
0x735EFB: mov     [esp+0A0h+var_68], 1
0x735F03: call    edx
0x735F05: mov     edi, [esp+0A0h+arg_4]
0x735F0C: mov     eax, [edi+54h]
0x735F0F: mov     ebx, [edi+64h]
0x735F12: mov     edx, [eax]
0x735F14: mov     ecx, [edi+5Ch]
0x735F17: imul    edx, ebx
0x735F1A: mov     ebp, [ecx]
0x735F1C: add     ebp, [edi+50h]
0x735F1F: add     esp, 14h
0x735F22: cmp     byte ptr [esi+107h], 0
0x735F29: mov     [esp+8Ch+arg_0], edx
0x735F30: mov     [esp+8Ch+var_74], ebp
0x735F34: jz      loc_736055
0x735F3A: movzx   edi, word ptr [esi+104h]
0x735F41: movzx   eax, word ptr [esi+102h]
0x735F48: mov     ecx, edi
0x735F4A: imul    ecx, eax
0x735F4D: lea     ecx, ds:200h[ecx*8]
0x735F54: mov     [esp+8Ch+var_64], ecx
0x735F58: xor     ecx, ecx
0x735F5A: cmp     byte ptr [esi+106h], 1
0x735F61: mov     [esp+8Ch+var_68], ecx
0x735F65: jnz     short loc_735FDA
0x735F67: test    edi, edi
0x735F69: jbe     loc_7361C2
0x735F6F: jmp     short loc_735F75
0x735F71: mov     ebp, [esp+8Ch+var_74]
0x735F75: lea     edi, [eax-1]
0x735F78: imul    edi, edx
0x735F7B: add     edi, ecx
0x735F7D: add     edi, ebp
0x735F7F: xor     ebp, ebp
0x735F81: test    eax, eax
0x735F83: jbe     short loc_735FC3
0x735F85: mov     edx, [esp+8Ch+var_6C]
0x735F89: imul    eax, ecx
0x735F8C: add     eax, ebp
0x735F8E: mov     eax, [edx+eax*4]
0x735F91: sub     eax, [esp+8Ch+var_64]
0x735F95: push    ebx
0x735F96: add     eax, [esp+90h+var_70]
0x735F9A: mov     ecx, esi
0x735F9C: push    eax
0x735F9D: push    edi
0x735F9E: call    sub_735800
0x735FA3: movzx   eax, word ptr [esi+102h]
0x735FAA: sub     edi, [esp+8Ch+arg_0]
0x735FB1: mov     ecx, [esp+8Ch+var_68]
0x735FB5: add     ebp, 1
0x735FB8: cmp     ebp, eax
0x735FBA: jb      short loc_735F85
0x735FBC: mov     edx, [esp+8Ch+arg_0]
0x735FC3: movzx   edi, word ptr [esi+104h]
0x735FCA: add     ecx, 1
0x735FCD: cmp     ecx, edi
0x735FCF: mov     [esp+8Ch+var_68], ecx
0x735FD3: jb      short loc_735F71
0x735FD5: jmp     loc_7361C2
0x735FDA: test    edi, edi
0x735FDC: jbe     loc_7361C2
0x735FE2: jmp     short loc_735FE8
0x735FE4: mov     ebp, [esp+8Ch+var_74]
0x735FE8: lea     edi, [eax-1]
0x735FEB: imul    edi, edx
0x735FEE: add     edi, ecx
0x735FF0: add     edi, ebp
0x735FF2: xor     ebp, ebp
0x735FF4: test    eax, eax
0x735FF6: jbe     short loc_73603E
0x735FF8: jmp     short loc_736000
0x735FFA: align 10h
0x736000: imul    eax, ecx
0x736003: mov     ecx, [esp+8Ch+var_6C]
0x736007: add     eax, ebp
0x736009: mov     edx, [ecx+eax*4]
0x73600C: sub     edx, [esp+8Ch+var_64]
0x736010: push    ebx
0x736011: add     edx, [esp+90h+var_70]
0x736015: mov     ecx, esi
0x736017: push    edx
0x736018: push    edi
0x736019: call    sub_735890
0x73601E: movzx   eax, word ptr [esi+102h]
0x736025: sub     edi, [esp+8Ch+arg_0]
0x73602C: mov     ecx, [esp+8Ch+var_68]
0x736030: add     ebp, 1
0x736033: cmp     ebp, eax
0x736035: jb      short loc_736000
0x736037: mov     edx, [esp+8Ch+arg_0]
0x73603E: movzx   edi, word ptr [esi+104h]
0x736045: add     ecx, 1
0x736048: cmp     ecx, edi
0x73604A: mov     [esp+8Ch+var_68], ecx
0x73604E: jb      short loc_735FE4
0x736050: jmp     loc_7361C2
0x736055: cmp     byte ptr [esi+106h], 1
0x73605C: mov     ecx, [esp+8Ch+var_70]
0x736060: mov     [esp+8Ch+var_64], 0
0x736068: jnz     loc_736116
0x73606E: cmp     word ptr [esi+104h], 0
0x736076: jbe     loc_7361C9
0x73607C: movzx   eax, word ptr [esi+102h]
0x736083: movzx   edi, word ptr [esi+102h]
0x73608A: add     eax, 0FFFFFFFFh
0x73608D: imul    eax, edx
0x736090: add     eax, [esp+8Ch+var_64]
0x736094: mov     [esp+8Ch+var_68], 0
0x73609C: add     eax, ebp
0x73609E: test    edi, edi
0x7360A0: jbe     short loc_7360F7
0x7360A2: mov     ebp, [esp+8Ch+arg_0]
0x7360A9: movzx   edx, word ptr [esi+100h]
0x7360B0: add     ebp, ebp
0x7360B2: xor     edi, edi
0x7360B4: test    dx, dx
0x7360B7: jbe     short loc_7360D8
0x7360B9: lea     esp, [esp+0]
0x7360C0: mov     dl, [ecx]
0x7360C2: mov     [eax], dl
0x7360C4: movzx   edx, word ptr [esi+100h]
0x7360CB: add     edi, 1
0x7360CE: add     ecx, 1
0x7360D1: add     eax, ebx
0x7360D3: cmp     di, dx
0x7360D6: jb      short loc_7360C0
0x7360D8: movzx   edi, word ptr [esi+102h]
0x7360DF: add     [esp+8Ch+var_68], 1
0x7360E4: sub     eax, ebp
0x7360E6: cmp     [esp+8Ch+var_68], edi
0x7360EA: jb      short loc_7360B2
0x7360EC: mov     edx, [esp+8Ch+arg_0]
0x7360F3: mov     ebp, [esp+8Ch+var_74]
0x7360F7: mov     eax, [esp+8Ch+var_64]
0x7360FB: movzx   edi, word ptr [esi+104h]
0x736102: add     eax, 1
0x736105: cmp     eax, edi
0x736107: mov     [esp+8Ch+var_64], eax
0x73610B: jb      loc_73607C
0x736111: jmp     loc_7361C2
0x736116: cmp     word ptr [esi+104h], 0
0x73611E: jbe     loc_7361C9
0x736124: jmp     short loc_736130
0x736126: align 10h
0x736130: movzx   eax, word ptr [esi+102h]
0x736137: movzx   edi, word ptr [esi+102h]
0x73613E: add     eax, 0FFFFFFFFh
0x736141: imul    eax, edx
0x736144: add     eax, [esp+8Ch+var_64]
0x736148: mov     [esp+8Ch+var_68], 0
0x736150: add     eax, ebp
0x736152: test    edi, edi
0x736154: jbe     short loc_7361A8
0x736156: movzx   edx, word ptr [esi+100h]
0x73615D: xor     edi, edi
0x73615F: test    dx, dx
0x736162: jbe     short loc_73617C
0x736164: mov     dl, [ecx]
0x736166: mov     [eax], dl
0x736168: movzx   edx, word ptr [esi+100h]
0x73616F: add     edi, 1
0x736172: add     ecx, 2
0x736175: add     eax, ebx
0x736177: cmp     di, dx
0x73617A: jb      short loc_736164
0x73617C: mov     edi, [esp+8Ch+arg_0]
0x736183: movzx   ebp, word ptr [esi+102h]
0x73618A: add     edi, edi
0x73618C: sub     eax, edi
0x73618E: mov     edi, [esp+8Ch+var_68]
0x736192: add     edi, 1
0x736195: cmp     edi, ebp
0x736197: mov     [esp+8Ch+var_68], edi
0x73619B: jb      short loc_73615D
0x73619D: mov     edx, [esp+8Ch+arg_0]
0x7361A4: mov     ebp, [esp+8Ch+var_74]
0x7361A8: mov     eax, [esp+8Ch+var_64]
0x7361AC: movzx   edi, word ptr [esi+104h]
0x7361B3: add     eax, 1
0x7361B6: cmp     eax, edi
0x7361B8: mov     [esp+8Ch+var_64], eax
0x7361BC: jb      loc_736130
0x7361C2: mov     edi, [esp+8Ch+arg_4]
0x7361C9: mov     eax, [esp+8Ch+var_70]
0x7361CD: push    eax
0x7361CE: call    FormHeapFree
0x7361D3: mov     ecx, [esp+90h+var_6C]
0x7361D7: push    ecx
0x7361D8: call    FormHeapFree
0x7361DD: movzx   eax, word ptr [esi+104h]
0x7361E4: add     esp, 8
0x7361E7: cmp     ax, 1
0x7361EB: jnz     short loc_736222
0x7361ED: movzx   ecx, word ptr [esi+100h]
0x7361F4: movzx   edx, word ptr [esi+102h]
0x7361FB: mov     eax, [edi+5Ch]
0x7361FE: imul    ecx, edx
0x736201: mov     eax, [eax]
0x736203: add     eax, [edi+50h]
0x736206: test    ecx, ecx
0x736208: jbe     short loc_73625E
0x73620A: mov     edx, ecx
0x73620C: lea     esp, [esp+0]
0x736210: mov     cl, [eax]
0x736212: mov     [eax+2], cl
0x736215: mov     [eax+1], cl
0x736218: add     eax, 3
0x73621B: sub     edx, 1
0x73621E: jnz     short loc_736210
0x736220: jmp     short loc_73625E
0x736222: cmp     ax, 2
0x736226: jnz     short loc_73625E
0x736228: movzx   ecx, word ptr [esi+100h]
0x73622F: movzx   edx, word ptr [esi+102h]
0x736236: mov     eax, [edi+5Ch]
0x736239: imul    ecx, edx
0x73623C: mov     eax, [eax]
0x73623E: add     eax, [edi+50h]
0x736241: test    ecx, ecx
0x736243: jbe     short loc_73625E
0x736245: mov     edx, ecx
0x736247: movzx   ecx, byte ptr [eax+1]
0x73624B: mov     [eax+3], cl
0x73624E: mov     cl, [eax]
0x736250: mov     [eax+2], cl
0x736253: mov     [eax+1], cl
0x736256: add     eax, 4
0x736259: sub     edx, 1
0x73625C: jnz     short loc_736247
0x73625E: mov     eax, [esp+8Ch+lpCriticalSection]
0x736262: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x736266: jnz     short loc_73626F
0x736268: mov     dword ptr [eax+78h], 0
0x73626F: push    eax; lpCriticalSection
0x736270: call    dword ptr ds:0A28074h
0x736276: mov     eax, edi
0x736278: mov     ecx, dword ptr [esp+8Ch+var_C]
0x73627F: mov     large fs:0, ecx
0x736286: pop     ecx
0x736287: pop     edi
0x736288: pop     esi
0x736289: pop     ebp
0x73628A: pop     ebx
0x73628B: add     esp, 78h
0x73628E: retn    8
