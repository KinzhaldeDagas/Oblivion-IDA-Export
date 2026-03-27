0x952C90: push    ebp
0x952C91: mov     ebp, esp
0x952C93: and     esp, 0FFFFFFF0h
0x952C96: sub     esp, 94h
0x952C9C: mov     ecx, large fs:2Ch
0x952CA3: mov     eax, ds:0BA9DE4h
0x952CA8: mov     eax, [ecx+eax*4]
0x952CAB: mov     ecx, [eax+19Ch]
0x952CB1: push    ebx
0x952CB2: mov     ebx, [ebp+arg_C]
0x952CB5: mov     [esp+98h+var_78], eax
0x952CB9: lea     eax, [ebx+ebx*2]
0x952CBC: shl     eax, 0Ch
0x952CBF: push    esi
0x952CC0: mov     esi, [ecx+2Ch]
0x952CC3: add     eax, 10h
0x952CC6: push    edi
0x952CC7: mov     edi, [ecx+20h]
0x952CCA: and     eax, 0FFFFFFF0h
0x952CCD: lea     edx, [edi+eax]
0x952CD0: cmp     edx, esi
0x952CD2: ja      short loc_952CDD
0x952CD4: mov     [ecx+20h], edx
0x952CD7: mov     [esp+0A0h+var_84], edi
0x952CDB: jmp     short loc_952CE9
0x952CDD: mov     edx, [ecx]
0x952CDF: push    eax
0x952CE0: call    dword ptr [edx+0Ch]
0x952CE3: mov     [esp+0A0h+var_84], eax
0x952CE7: mov     edi, eax
0x952CE9: test    ebx, ebx
0x952CEB: mov     [esp+0A0h+var_88], 0
0x952CF3: jle     loc_952E2F
0x952CF9: mov     ecx, [ebp+arg_8]
0x952CFC: mov     eax, [ebp+arg_14]
0x952CFF: mov     ebx, [ebp+arg_10]
0x952D02: mov     [esp+0A0h+var_7C], 38D1B717h
0x952D0A: movss   xmm0, [esp+0A0h+var_7C]
0x952D10: sub     eax, ecx
0x952D12: shufps  xmm0, xmm0, 0
0x952D16: movaps  xmmword ptr [esp+0A0h+var_74+4], xmm0
0x952D1B: mov     [esp+0A0h+var_7C], ecx
0x952D1F: lea     esi, [edi+138h]
0x952D25: mov     [esp+0A0h+var_80], eax
0x952D29: jmp     short loc_952D38
0x952D2B: movaps  xmm0, xmmword ptr [esp+0A0h+var_74+4]
0x952D30: mov     eax, [esp+0A0h+var_80]
0x952D34: mov     ecx, [esp+0A0h+var_7C]
0x952D38: mov     edx, [ecx]
0x952D3A: mov     [esi-4], edx
0x952D3D: mov     eax, [ecx+eax]
0x952D40: mov     edx, [ebp+arg_4]
0x952D43: mov     [esi], eax
0x952D45: mov     dword ptr [esi-8], 0
0x952D4C: mov     ecx, [ecx]
0x952D4E: movaps  xmm1, xmmword ptr [ebx]
0x952D51: lea     eax, [esi-8]
0x952D54: lea     edi, [esi-138h]
0x952D5A: movaps  xmmword ptr [edi], xmm1
0x952D5D: movaps  xmm1, xmmword ptr [ebx+10h]
0x952D61: movaps  xmmword ptr [esi-128h], xmm1
0x952D68: movaps  xmm1, xmmword ptr [ebx+20h]
0x952D6C: movaps  xmmword ptr [esi-118h], xmm1
0x952D73: movaps  xmm1, xmmword ptr [ebx+30h]
0x952D77: mov     [esi-0E4h], edx
0x952D7D: mov     [esi-0E0h], ecx
0x952D83: lea     edx, [esi-88h]
0x952D89: lea     ecx, [esi-0C8h]
0x952D8F: mov     [esi-0D8h], ecx
0x952D95: mov     [esi-0D4h], edx
0x952D9B: lea     edx, [esp+0A0h+var_74]
0x952D9F: lea     ecx, [esi-48h]
0x952DA2: mov     [esi-0CCh], eax
0x952DA8: push    edx
0x952DA9: lea     eax, [esp+0A4h+var_30]
0x952DAD: mov     [esi-0D0h], ecx
0x952DB3: push    eax
0x952DB4: mov     ecx, edi
0x952DB6: movaps  xmmword ptr [esi-108h], xmm1
0x952DBD: movaps  xmmword ptr [esi-0F8h], xmm0
0x952DC4: mov     dword ptr [esi-0E8h], 322BCC76h
0x952DCE: mov     dword ptr [esi-0DCh], 0
0x952DD8: call    sub_952480
0x952DDD: cmp     eax, 1
0x952DE0: jnz     short loc_952DE7
0x952DE2: dec     [ebp+arg_C]
0x952DE5: jmp     short loc_952E0A
0x952DE7: lea     ecx, [edi+0F0h]
0x952DED: push    ecx
0x952DEE: lea     edx, [edi+0B0h]
0x952DF4: push    edx
0x952DF5: lea     eax, [edi+70h]
0x952DF8: push    eax
0x952DF9: lea     ecx, [edi+140h]
0x952DFF: add     esi, 3000h
0x952E05: call    sub_951BD0
0x952E0A: mov     eax, [esp+0A0h+var_88]
0x952E0E: mov     edx, [esp+0A0h+var_7C]
0x952E12: mov     ecx, [ebp+arg_C]
0x952E15: inc     eax
0x952E16: add     edx, 4
0x952E19: cmp     eax, ecx
0x952E1B: mov     [esp+0A0h+var_88], eax
0x952E1F: mov     [esp+0A0h+var_7C], edx
0x952E23: jl      loc_952D2B
0x952E29: mov     edi, [esp+0A0h+var_84]
0x952E2D: mov     ebx, ecx
0x952E2F: cmp     ebx, 2
0x952E32: jle     loc_952F11
0x952E38: mov     [ebp+arg_C], 2
0x952E3F: mov     ebx, [ebp+arg_C]
0x952E42: lea     eax, [edi+5FF0h]
0x952E48: push    eax
0x952E49: lea     eax, [edi+2FF0h]
0x952E4F: push    eax
0x952E50: lea     eax, [esp+48h]
0x952E54: push    eax
0x952E55: lea     eax, [edi+3140h]
0x952E5B: push    eax
0x952E5C: lea     eax, [edi+140h]
0x952E62: push    eax
0x952E63: call    sub_959090
0x952E68: add     esp, 14h
0x952E6B: test    ebx, ebx
0x952E6D: mov     byte ptr [esp+0A0h+var_8C+3], 0
0x952E72: mov     [esp+0A0h+var_88], 0
0x952E7A: jle     loc_952F6A
0x952E80: lea     esi, [edi+148h]
0x952E86: jmp     short loc_952E90
0x952E88: align 10h
0x952E90: mov     eax, [esi]
0x952E92: cmp     eax, 37h ; '7'
0x952E95: jge     loc_952F47
0x952E9B: mov     ecx, eax
0x952E9D: shl     ecx, 6
0x952EA0: lea     ebx, [esi-8]
0x952EA3: lea     edi, [ecx+ebx+20h]
0x952EA7: inc     eax
0x952EA8: mov     [esi], eax
0x952EAA: mov     dword ptr [edi+30h], 0
0x952EB1: mov     edx, [esi+2EA8h]
0x952EB7: push    edi
0x952EB8: lea     ecx, [esi-148h]
0x952EBE: push    edx
0x952EBF: call    sub_951D00
0x952EC4: mov     ecx, [esi+2EA8h]
0x952ECA: lea     eax, [esp+0A0h+var_80]
0x952ECE: push    eax
0x952ECF: push    edi
0x952ED0: push    ecx
0x952ED1: push    ebx
0x952ED2: lea     ecx, [esi-148h]
0x952ED8: call    sub_9518B0
0x952EDD: cmp     eax, 1
0x952EE0: jnz     short loc_952F3B
0x952EE2: cmp     [esp+0A0h+var_80], 3
0x952EE7: jnz     short loc_952F40
0x952EE9: mov     edx, [esp+0A0h+var_78]
0x952EED: mov     ecx, [edx+19Ch]
0x952EF3: mov     eax, [esp+0A0h+var_84]
0x952EF7: cmp     eax, [ecx+28h]
0x952EFA: mov     [ecx+20h], eax
0x952EFD: jnz     short loc_952F05
0x952EFF: mov     edx, [ecx]
0x952F01: push    eax
0x952F02: call    dword ptr [edx+10h]
0x952F05: mov     eax, 1
0x952F0A: pop     edi
0x952F0B: pop     esi
0x952F0C: pop     ebx
0x952F0D: mov     esp, ebp
0x952F0F: pop     ebp
0x952F10: retn
0x952F11: jge     loc_952E42
0x952F17: mov     ecx, [esp+0A0h+var_78]
0x952F1B: mov     ecx, [ecx+19Ch]
0x952F21: cmp     edi, [ecx+28h]
0x952F24: mov     [ecx+20h], edi
0x952F27: jnz     short loc_952F2F
0x952F29: mov     edx, [ecx]
0x952F2B: push    edi
0x952F2C: call    dword ptr [edx+10h]
0x952F2F: mov     eax, 1
0x952F34: pop     edi
0x952F35: pop     esi
0x952F36: pop     ebx
0x952F37: mov     esp, ebp
0x952F39: pop     ebp
0x952F3A: retn
0x952F3B: mov     byte ptr [esp+0A0h+var_8C+3], 1
0x952F40: mov     edi, [esp+0A0h+var_84]
0x952F44: mov     ebx, [ebp+arg_C]
0x952F47: mov     eax, [esp+0A0h+var_88]
0x952F4B: inc     eax
0x952F4C: add     esi, 3000h
0x952F52: cmp     eax, ebx
0x952F54: mov     [esp+0A0h+var_88], eax
0x952F58: jl      loc_952E90
0x952F5E: mov     al, byte ptr [esp+0A0h+var_8C+3]
0x952F62: test    al, al
0x952F64: jnz     loc_952E42
0x952F6A: test    ebx, ebx
0x952F6C: fld     dword ptr [esp+0A0h+var_54]
0x952F70: mov     eax, [ebp+arg_4]
0x952F73: fchs
0x952F75: movaps  xmm1, xmmword ptr ds:0A965C0h
0x952F7C: fld     dword ptr [eax+0Ch]
0x952F7F: movaps  xmm0, xmmword ptr [esp+40h]
0x952F84: xorps   xmm0, xmm1
0x952F87: jle     loc_95307E
0x952F8D: mov     ecx, [ebp+arg_C]
0x952F90: fxch    st(1)
0x952F92: mov     esi, [ebp+arg_0]
0x952F95: fsub    st, st(1)
0x952F97: movaps  xmm1, xmm0
0x952F9A: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x952F9E: movaps  xmmword ptr [esp+0A0h+var_74+4], xmm1
0x952FA3: fstp    [esp+0A0h+var_80]
0x952FA7: movaps  xmm1, xmm0
0x952FAA: shufps  xmm1, xmm0, 55h ; 'U'
0x952FAE: fstp    st
0x952FB0: shufps  xmm0, xmm0, 0
0x952FB4: movaps  xmmword ptr [esp+0A0h+var_44+4], xmm1
0x952FB9: movaps  [esp+0A0h+var_54+4], xmm0
0x952FBE: lea     ebx, [edi+138h]
0x952FC4: mov     [esp+0A0h+var_88], ecx
0x952FC8: jmp     short loc_952FD0
0x952FCA: align 10h
0x952FD0: mov     ecx, [ebx+2EB8h]
0x952FD6: lea     eax, [ebx+8]
0x952FD9: lea     edx, [esp+0A0h+var_30]
0x952FDD: push    edx
0x952FDE: push    ecx
0x952FDF: push    eax
0x952FE0: lea     ecx, [ebx-138h]
0x952FE6: call    sub_9519C0
0x952FEB: movaps  xmm1, xmmword ptr [esi+10h]
0x952FEF: mulps   xmm1, xmmword ptr [esp+0A0h+var_44+4]
0x952FF4: movaps  xmm2, xmmword ptr [esi]
0x952FF7: mulps   xmm2, [esp+0A0h+var_54+4]
0x952FFC: movaps  xmm0, xmmword ptr [esi+20h]
0x953000: mulps   xmm0, xmmword ptr [esp+0A0h+var_74+4]
0x953005: mov     edx, [ebx]
0x953007: addps   xmm2, xmm1
0x95300A: addps   xmm2, xmm0
0x95300D: movaps  xmm0, xmmword ptr [esp+0A0h+var_24+4]
0x953015: movaps  xmmword ptr [edx+10h], xmm2
0x953019: movaps  xmm1, xmmword ptr [esi+30h]
0x95301D: movaps  xmm3, xmmword ptr [esi+20h]
0x953021: mov     eax, [ebx-4]
0x953024: fld     dword ptr [eax+0Ch]
0x953027: mov     ecx, [ebx]
0x953029: fld     [esp+0A0h+var_80]
0x95302D: mov     eax, [esp+0A0h+var_88]
0x953031: movaps  xmm2, xmm0
0x953034: fsub    st, st(1)
0x953036: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x95303A: mulps   xmm3, xmm2
0x95303D: movaps  xmm2, xmmword ptr [esi+10h]
0x953041: addps   xmm3, xmm1
0x953044: movaps  xmm1, xmm0
0x953047: shufps  xmm1, xmm0, 55h ; 'U'
0x95304B: mulps   xmm2, xmm1
0x95304E: movaps  xmm1, xmm0
0x953051: shufps  xmm1, xmm0, 0
0x953055: movaps  xmm0, xmmword ptr [esi]
0x953058: mulps   xmm0, xmm1
0x95305B: addps   xmm0, xmm2
0x95305E: addps   xmm0, xmm3
0x953061: movaps  xmmword ptr [ecx], xmm0
0x953064: mov     edx, [ebx]
0x953066: fstp    dword ptr [edx+1Ch]
0x953069: add     ebx, 3000h
0x95306F: dec     eax
0x953070: fstp    st
0x953072: mov     [esp+0A0h+var_88], eax
0x953076: jnz     loc_952FD0
0x95307C: jmp     short loc_953082
0x95307E: fstp    st
0x953080: fstp    st
0x953082: mov     eax, [esp+0A0h+var_78]
0x953086: mov     ecx, [eax+19Ch]
0x95308C: cmp     edi, [ecx+28h]
0x95308F: mov     [ecx+20h], edi
0x953092: jnz     short loc_95309A
0x953094: mov     edx, [ecx]
0x953096: push    edi
0x953097: call    dword ptr [edx+10h]
0x95309A: pop     edi
0x95309B: pop     esi
0x95309C: xor     eax, eax
0x95309E: pop     ebx
0x95309F: mov     esp, ebp
0x9530A1: pop     ebp
0x9530A2: retn
