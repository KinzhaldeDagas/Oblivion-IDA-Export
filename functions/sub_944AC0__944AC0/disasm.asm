0x944AC0: push    ebp
0x944AC1: mov     ebp, esp
0x944AC3: and     esp, 0FFFFFFF0h
0x944AC6: sub     esp, 2E4h
0x944ACC: mov     al, ds:0BA94E6h
0x944AD1: test    al, al
0x944AD3: push    ebx
0x944AD4: push    esi
0x944AD5: push    edi
0x944AD6: mov     [esp+2F0h+var_2C0], ecx
0x944ADA: jnz     short loc_944AF3
0x944ADC: push    4
0x944ADE: call    sub_9246E0
0x944AE3: add     esp, 4
0x944AE6: test    al, al
0x944AE8: mov     ds:0BA94E6h, al
0x944AED: jz      loc_945788; jumptable 00944B1B case 0
0x944AF3: mov     edi, [ebp+arg_8]
0x944AF6: mov     esi, [ebp+arg_4]
0x944AF9: jmp     short loc_944B00
0x944AFB: fstp    st
0x944AFD: fstp    st
0x944AFF: nop
0x944B00: movzx   ecx, byte ptr [esi]
0x944B03: cmp     ecx, 6Bh; switch 108 cases
0x944B06: mov     [esp+2F0h+var_2C8], 3E7h
0x944B0E: ja      def_944B1B; jumptable 00944B1B default case, cases 8,12-15,29-31,44-47,84-95
0x944B14: movzx   eax, ds:byte_945814[ecx]
0x944B1B: jmp     ds:jpt_944B1B[eax*4]; switch jump
0x944B22: movzx   ecx, byte ptr [esi+1]; jumptable 00944B1B case 19
0x944B26: movzx   edx, byte ptr [esi+2]
0x944B2A: shl     ecx, 1
0x944B2C: mov     [esp+2F0h+var_2D8], ecx
0x944B30: shl     edx, 1
0x944B32: fild    [esp+2F0h+var_2D8]
0x944B36: mov     [esp+2F0h+var_2D8], edx
0x944B3A: fstp    [esp+2F0h+var_2CC]
0x944B3E: fild    [esp+2F0h+var_2D8]
0x944B42: fstp    [esp+2F0h+var_2D0]
0x944B46: fld     dword ptr [edi+8]
0x944B49: fadd    dword ptr [edi+4]
0x944B4C: fld     dword ptr [edi+18h]
0x944B4F: fadd    dword ptr [edi+14h]
0x944B52: jmp     loc_944E2F
0x944B57: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 20
0x944B5B: movzx   edx, byte ptr [esi+2]
0x944B5F: lea     ecx, [eax+eax-0FFh]
0x944B66: mov     [esp+2F0h+var_2D8], ecx
0x944B6A: lea     eax, [edx+edx-0FFh]
0x944B71: fild    [esp+2F0h+var_2D8]
0x944B75: mov     [esp+2F0h+var_2D8], eax
0x944B79: fstp    [esp+2F0h+var_2CC]
0x944B7D: fild    [esp+2F0h+var_2D8]
0x944B81: fstp    [esp+2F0h+var_2D0]
0x944B85: fld     dword ptr [edi+4]
0x944B88: fsub    dword ptr [edi+8]
0x944B8B: fld     dword ptr [edi+14h]
0x944B8E: fsub    dword ptr [edi+18h]
0x944B91: jmp     loc_944E2F
0x944B96: movzx   ecx, byte ptr [esi+1]; jumptable 00944B1B case 21
0x944B9A: movzx   edx, byte ptr [esi+2]
0x944B9E: shl     ecx, 1
0x944BA0: mov     [esp+2F0h+var_2D8], ecx
0x944BA4: shl     edx, 1
0x944BA6: fild    [esp+2F0h+var_2D8]
0x944BAA: mov     [esp+2F0h+var_2D8], edx
0x944BAE: fstp    [esp+2F0h+var_2CC]
0x944BB2: fild    [esp+2F0h+var_2D8]
0x944BB6: fstp    [esp+2F0h+var_2D0]
0x944BBA: fld     dword ptr [edi+8]
0x944BBD: fadd    dword ptr [edi]
0x944BBF: fld     dword ptr [edi+18h]
0x944BC2: fadd    dword ptr [edi+10h]
0x944BC5: jmp     loc_944E2F
0x944BCA: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 22
0x944BCE: movzx   edx, byte ptr [esi+2]
0x944BD2: lea     ecx, [eax+eax-0FFh]
0x944BD9: mov     [esp+2F0h+var_2D8], ecx
0x944BDD: lea     eax, [edx+edx-0FFh]
0x944BE4: fild    [esp+2F0h+var_2D8]
0x944BE8: mov     [esp+2F0h+var_2D8], eax
0x944BEC: fstp    [esp+2F0h+var_2CC]
0x944BF0: fild    [esp+2F0h+var_2D8]
0x944BF4: fstp    [esp+2F0h+var_2D0]
0x944BF8: fld     dword ptr [edi]
0x944BFA: fsub    dword ptr [edi+8]
0x944BFD: fld     dword ptr [edi+10h]
0x944C00: fsub    dword ptr [edi+18h]
0x944C03: jmp     loc_944E2F
0x944C08: movzx   ecx, byte ptr [esi+1]; jumptable 00944B1B case 23
0x944C0C: movzx   edx, byte ptr [esi+2]
0x944C10: shl     ecx, 1
0x944C12: mov     [esp+2F0h+var_2D8], ecx
0x944C16: shl     edx, 1
0x944C18: fild    [esp+2F0h+var_2D8]
0x944C1C: mov     [esp+2F0h+var_2D8], edx
0x944C20: fstp    [esp+2F0h+var_2CC]
0x944C24: fild    [esp+2F0h+var_2D8]
0x944C28: fstp    [esp+2F0h+var_2D0]
0x944C2C: fld     dword ptr [edi+4]
0x944C2F: fadd    dword ptr [edi]
0x944C31: fld     dword ptr [edi+14h]
0x944C34: fadd    dword ptr [edi+10h]
0x944C37: jmp     loc_944E2F
0x944C3C: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 24
0x944C40: movzx   edx, byte ptr [esi+2]
0x944C44: lea     ecx, [eax+eax-0FFh]
0x944C4B: mov     [esp+2F0h+var_2D8], ecx
0x944C4F: lea     eax, [edx+edx-0FFh]
0x944C56: fild    [esp+2F0h+var_2D8]
0x944C5A: mov     [esp+2F0h+var_2D8], eax
0x944C5E: fstp    [esp+2F0h+var_2CC]
0x944C62: fild    [esp+2F0h+var_2D8]
0x944C66: fstp    [esp+2F0h+var_2D0]
0x944C6A: fld     dword ptr [edi]
0x944C6C: fsub    dword ptr [edi+4]
0x944C6F: fld     dword ptr [edi+10h]
0x944C72: fsub    dword ptr [edi+14h]
0x944C75: jmp     loc_944E2F
0x944C7A: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 25
0x944C7E: lea     ecx, [eax+eax*2]
0x944C81: movzx   eax, byte ptr [esi+2]
0x944C85: mov     [esp+2F0h+var_2D8], ecx
0x944C89: lea     edx, [eax+eax*2]
0x944C8C: fild    [esp+2F0h+var_2D8]
0x944C90: mov     [esp+2F0h+var_2D8], edx
0x944C94: fstp    [esp+2F0h+var_2CC]
0x944C98: fild    [esp+2F0h+var_2D8]
0x944C9C: fstp    [esp+2F0h+var_2D0]
0x944CA0: fld     dword ptr [edi+8]
0x944CA3: fadd    dword ptr [edi+4]
0x944CA6: fadd    dword ptr [edi]
0x944CA8: fld     dword ptr [edi+18h]
0x944CAB: fadd    dword ptr [edi+14h]
0x944CAE: fadd    dword ptr [edi+10h]
0x944CB1: jmp     loc_944E2F
0x944CB6: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 26
0x944CBA: sub     eax, 55h ; 'U'
0x944CBD: lea     eax, [eax+eax*2]
0x944CC0: mov     [esp+2F0h+var_2D8], eax
0x944CC4: movzx   eax, byte ptr [esi+2]
0x944CC8: fild    [esp+2F0h+var_2D8]
0x944CCC: sub     eax, 55h ; 'U'
0x944CCF: lea     ecx, [eax+eax*2]
0x944CD2: fstp    [esp+2F0h+var_2CC]
0x944CD6: mov     [esp+2F0h+var_2D8], ecx
0x944CDA: fild    [esp+2F0h+var_2D8]
0x944CDE: fstp    [esp+2F0h+var_2D0]
0x944CE2: fld     dword ptr [edi+4]
0x944CE5: fadd    dword ptr [edi]
0x944CE7: fsub    dword ptr [edi+8]
0x944CEA: fld     dword ptr [edi+14h]
0x944CED: fadd    dword ptr [edi+10h]
0x944CF0: fsub    dword ptr [edi+18h]
0x944CF3: jmp     loc_944E2F
0x944CF8: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 27
0x944CFC: sub     eax, 55h ; 'U'
0x944CFF: lea     edx, [eax+eax*2]
0x944D02: movzx   eax, byte ptr [esi+2]
0x944D06: mov     [esp+2F0h+var_2D8], edx
0x944D0A: sub     eax, 55h ; 'U'
0x944D0D: lea     eax, [eax+eax*2]
0x944D10: fild    [esp+2F0h+var_2D8]
0x944D14: mov     [esp+2F0h+var_2D8], eax
0x944D18: fstp    [esp+2F0h+var_2CC]
0x944D1C: fild    [esp+2F0h+var_2D8]
0x944D20: fstp    [esp+2F0h+var_2D0]
0x944D24: fld     dword ptr [edi]
0x944D26: fsub    dword ptr [edi+4]
0x944D29: fadd    dword ptr [edi+8]
0x944D2C: fld     dword ptr [edi+10h]
0x944D2F: fsub    dword ptr [edi+14h]
0x944D32: fadd    dword ptr [edi+18h]
0x944D35: jmp     loc_944E2F
0x944D3A: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 28
0x944D3E: sub     eax, 0AAh ; 'ª'
0x944D43: lea     ecx, [eax+eax*2]
0x944D46: movzx   eax, byte ptr [esi+2]
0x944D4A: mov     [esp+2F0h+var_2D8], ecx
0x944D4E: sub     eax, 0AAh ; 'ª'
0x944D53: lea     edx, [eax+eax*2]
0x944D56: fild    [esp+2F0h+var_2D8]
0x944D5A: mov     [esp+2F0h+var_2D8], edx
0x944D5E: fstp    [esp+2F0h+var_2CC]
0x944D62: fild    [esp+2F0h+var_2D8]
0x944D66: fstp    [esp+2F0h+var_2D0]
0x944D6A: fld     dword ptr [edi]
0x944D6C: fsub    dword ptr [edi+4]
0x944D6F: fsub    dword ptr [edi+8]
0x944D72: fld     dword ptr [edi+10h]
0x944D75: fsub    dword ptr [edi+14h]
0x944D78: fsub    dword ptr [edi+18h]
0x944D7B: jmp     loc_944E2F
0x944D80: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B cases 32-34
0x944D84: mov     [esp+2F0h+var_2D8], eax
0x944D88: add     ecx, 0FFFFFFE0h
0x944D8B: mov     [esp+2F0h+var_2C8], ecx
0x944D8F: fild    [esp+2F0h+var_2D8]
0x944D93: add     esi, 3
0x944D96: fst     [esp+2F0h+var_2D0]
0x944D9A: fadd    dword ptr ds:0A2F948h
0x944DA0: fstp    [esp+2F0h+var_2CC]
0x944DA4: fld     dword ptr [edi+ecx*4]
0x944DA7: fld     dword ptr [edi+ecx*4+10h]
0x944DAB: jmp     loc_944E32
0x944DB0: movzx   edx, byte ptr [esi+1]; jumptable 00944B1B cases 35-37
0x944DB4: movzx   ebx, byte ptr [esi+3]
0x944DB8: lea     eax, [ecx-23h]
0x944DBB: movzx   ecx, byte ptr [esi+2]
0x944DBF: mov     [esp+2F0h+var_2D8], edx
0x944DC3: movzx   edx, byte ptr [esi+4]
0x944DC7: fild    [esp+2F0h+var_2D8]
0x944DCB: mov     [esp+2F0h+var_2D8], ecx
0x944DCF: movzx   ecx, byte ptr [esi+6]
0x944DD3: fstp    [esp+2F0h+var_2CC]
0x944DD7: fild    [esp+2F0h+var_2D8]
0x944DDB: add     esi, 7
0x944DDE: mov     [esp+2F0h+var_2C8], eax
0x944DE2: fstp    [esp+2F0h+var_2D0]
0x944DE6: shl     ebx, 8
0x944DE9: fld     dword ptr [edi+eax*4]
0x944DEC: add     ebx, edx
0x944DEE: fld     dword ptr [edi+eax*4+10h]
0x944DF2: movzx   eax, byte ptr [esi-2]
0x944DF6: shl     eax, 8
0x944DF9: add     eax, ecx
0x944DFB: mov     [esp+2F0h+var_2D8], eax
0x944DFF: jmp     short loc_944E3C
0x944E01: movzx   edx, byte ptr [esi+1]; jumptable 00944B1B cases 16-18
0x944E05: movzx   eax, byte ptr [esi+2]
0x944E09: mov     [esp+2F0h+var_2D8], edx
0x944E0D: add     ecx, 0FFFFFFF0h
0x944E10: mov     [esp+2F0h+var_2C8], ecx
0x944E14: fild    [esp+2F0h+var_2D8]
0x944E18: mov     [esp+2F0h+var_2D8], eax
0x944E1C: fstp    [esp+2F0h+var_2CC]
0x944E20: fild    [esp+2F0h+var_2D8]
0x944E24: fstp    [esp+2F0h+var_2D0]
0x944E28: fld     dword ptr [edi+ecx*4]
0x944E2B: fld     dword ptr [edi+ecx*4+10h]
0x944E2F: add     esi, 4
0x944E32: movzx   ecx, byte ptr [esi-1]
0x944E36: xor     ebx, ebx
0x944E38: mov     [esp+2F0h+var_2D8], ecx
0x944E3C: fstp    [esp+2F0h+var_2D4]
0x944E40: fld     [esp+2F0h+var_2D4]
0x944E44: fcomp   [esp+2F0h+var_2D0]
0x944E48: fnstsw  ax
0x944E4A: test    ah, 5
0x944E4D: jp      short loc_944E61
0x944E4F: fcom    [esp+2F0h+var_2D0]
0x944E53: fnstsw  ax
0x944E55: test    ah, 5
0x944E58: jp      short loc_944E61
0x944E5A: add     esi, ebx
0x944E5C: jmp     loc_944AFD
0x944E61: fcom    [esp+2F0h+var_2CC]
0x944E65: mov     ecx, [esp+2F0h+var_2D8]
0x944E69: add     esi, ecx
0x944E6B: fnstsw  ax
0x944E6D: test    ah, 41h
0x944E70: jnz     short loc_944E85
0x944E72: fld     [esp+2F0h+var_2D4]
0x944E76: fcomp   [esp+2F0h+var_2CC]
0x944E7A: fnstsw  ax
0x944E7C: test    ah, 41h
0x944E7F: jz      loc_944AFD
0x944E85: fld     [esp+2F0h+var_2CC]
0x944E89: movaps  xmm1, xmmword ptr [edi]
0x944E8C: fsubr   st, st(1)
0x944E8E: movaps  xmm2, xmmword ptr [edi+10h]
0x944E92: movaps  [esp+2F0h+var_240], xmm1
0x944E9A: movaps  [esp+2F0h+var_230], xmm2
0x944EA2: fstp    [esp+2F0h+var_2BC]
0x944EA6: fsub    [esp+2F0h+var_2D0]
0x944EAA: fstp    [esp+2F0h+var_2C4]
0x944EAE: fld     [esp+2F0h+var_2D4]
0x944EB2: fsub    [esp+2F0h+var_2CC]
0x944EB6: fstp    [esp+2F0h+var_2B8]
0x944EBA: fld     [esp+2F0h+var_2D4]
0x944EBE: fsub    [esp+2F0h+var_2D0]
0x944EC2: fstp    [esp+2F0h+var_2D4]
0x944EC6: fld     [esp+2F0h+var_2BC]
0x944ECA: fcomp   [esp+2F0h+var_2B8]
0x944ECE: fnstsw  ax
0x944ED0: test    ah, 5
0x944ED3: jp      loc_94503F
0x944ED9: fld     [esp+2F0h+var_2B8]
0x944EDD: fmul    [esp+2F0h+var_2BC]
0x944EE1: fcomp   dword ptr ds:0A2FAA8h
0x944EE7: fnstsw  ax
0x944EE9: test    ah, 5
0x944EEC: jp      short loc_944F26
0x944EEE: fld     [esp+2F0h+var_2BC]
0x944EF2: fsub    [esp+2F0h+var_2B8]
0x944EF6: fdivr   [esp+2F0h+var_2BC]
0x944EFA: fstp    [esp+2F0h+var_2D8]
0x944EFE: movss   xmm0, [esp+2F0h+var_2D8]
0x944F04: shufps  xmm0, xmm0, 0
0x944F08: movaps  xmm3, xmm0
0x944F0B: mulps   xmm3, xmm2
0x944F0E: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x944F15: subps   xmm2, xmm0
0x944F18: mulps   xmm2, xmm1
0x944F1B: addps   xmm2, xmm3
0x944F1E: movaps  [esp+2F0h+var_230], xmm2
0x944F26: mov     eax, [ebp+arg_0]
0x944F29: sub     ebx, ecx
0x944F2B: lea     edx, [esp+2F0h+var_240]
0x944F32: push    edx
0x944F33: add     ebx, esi
0x944F35: push    ebx
0x944F36: mov     ebx, [esp+2F8h+var_2C0]
0x944F3A: push    eax
0x944F3B: mov     ecx, ebx
0x944F3D: call    sub_944AC0
0x944F42: fld     [esp+2F0h+var_2D4]
0x944F46: fmul    [esp+2F0h+var_2C4]
0x944F4A: fcomp   dword ptr ds:0A2FAA8h
0x944F50: fnstsw  ax
0x944F52: test    ah, 5
0x944F55: jp      short loc_944F91
0x944F57: fld     [esp+2F0h+var_2C4]
0x944F5B: movaps  xmm1, xmmword ptr [edi+10h]
0x944F5F: fsub    [esp+2F0h+var_2D4]
0x944F63: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x944F6A: fdivr   [esp+2F0h+var_2C4]
0x944F6E: fstp    [esp+2F0h+var_2D8]
0x944F72: movss   xmm0, [esp+2F0h+var_2D8]
0x944F78: shufps  xmm0, xmm0, 0
0x944F7C: movaps  xmm2, xmm0
0x944F7F: mulps   xmm2, xmm1
0x944F82: movaps  xmm1, xmmword ptr [edi]
0x944F85: subps   xmm3, xmm0
0x944F88: mulps   xmm3, xmm1
0x944F8B: addps   xmm3, xmm2
0x944F8E: movaps  xmmword ptr [edi], xmm3
0x944F91: fld     dword ptr [ebx+54h]
0x944F94: fcomp   dword ptr ds:0A2F948h
0x944F9A: fnstsw  ax
0x944F9C: test    ah, 5
0x944F9F: jp      loc_944B00
0x944FA5: mov     eax, [esp+2F0h+var_2C0]
0x944FA9: mov     ecx, [eax+54h]
0x944FAC: movaps  xmm2, xmmword ptr [eax+30h]
0x944FB0: mov     edx, [eax+10h]
0x944FB3: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x944FBA: movaps  xmm1, xmmword ptr [edx+10h]
0x944FBE: mov     [esp+2F0h+var_27C], ecx
0x944FC2: movss   xmm0, [esp+2F0h+var_27C]
0x944FC8: shufps  xmm0, xmm0, 0
0x944FCC: movaps  xmm3, xmm0
0x944FCF: mulps   xmm3, xmm2
0x944FD2: movaps  xmm2, xmmword ptr [eax+20h]
0x944FD6: mov     eax, [ebp+arg_0]
0x944FD9: subps   xmm4, xmm0
0x944FDC: mulps   xmm4, xmm2
0x944FDF: addps   xmm4, xmm3
0x944FE2: subps   xmm4, xmm1
0x944FE5: movaps  xmmword ptr [edi+10h], xmm4
0x944FE9: mov     ecx, [eax+14h]
0x944FEC: movaps  xmm1, xmmword ptr [edi+10h]
0x944FF0: mov     [esp+2F0h+var_280], ecx
0x944FF4: movss   xmm0, [esp+2F0h+var_280]
0x944FFA: movaps  xmm2, xmm0
0x944FFD: shufps  xmm2, xmm0, 0
0x945001: mulps   xmm2, xmm1
0x945004: movaps  xmmword ptr [edi+10h], xmm2
0x945008: movaps  xmm0, xmmword ptr [eax]
0x94500B: movaps  xmm1, xmmword ptr [edi+10h]
0x94500F: mov     eax, [esp+2F0h+var_2C8]
0x945013: cmp     eax, 3
0x945016: subps   xmm1, xmm0
0x945019: movaps  xmmword ptr [edi+10h], xmm1
0x94501D: jge     loc_944B00
0x945023: fld     dword ptr [edi+eax*4+10h]
0x945027: fcomp   [esp+2F0h+var_2D0]
0x94502B: fnstsw  ax
0x94502D: test    ah, 5
0x945030: jp      loc_944B00
0x945036: pop     edi
0x945037: pop     esi
0x945038: pop     ebx
0x945039: mov     esp, ebp
0x94503B: pop     ebp
0x94503C: retn    0Ch
0x94503F: fld     [esp+2F0h+var_2D4]
0x945043: fmul    [esp+2F0h+var_2C4]
0x945047: fcomp   dword ptr ds:0A2FAA8h
0x94504D: fnstsw  ax
0x94504F: test    ah, 5
0x945052: jp      short loc_94508C
0x945054: fld     [esp+2F0h+var_2C4]
0x945058: fsub    [esp+2F0h+var_2D4]
0x94505C: fdivr   [esp+2F0h+var_2C4]
0x945060: fstp    [esp+2F0h+var_2C4]
0x945064: movss   xmm0, [esp+2F0h+var_2C4]
0x94506A: shufps  xmm0, xmm0, 0
0x94506E: movaps  xmm3, xmm0
0x945071: mulps   xmm3, xmm2
0x945074: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x94507B: subps   xmm2, xmm0
0x94507E: mulps   xmm2, xmm1
0x945081: addps   xmm2, xmm3
0x945084: movaps  [esp+2F0h+var_230], xmm2
0x94508C: mov     eax, [ebp+arg_0]
0x94508F: mov     ecx, [esp+2F0h+var_2C0]
0x945093: lea     edx, [esp+2F0h+var_240]
0x94509A: push    edx
0x94509B: push    esi
0x94509C: push    eax
0x94509D: call    sub_944AC0
0x9450A2: fld     [esp+2F0h+var_2B8]
0x9450A6: fmul    [esp+2F0h+var_2BC]
0x9450AA: fcomp   dword ptr ds:0A2FAA8h
0x9450B0: fnstsw  ax
0x9450B2: test    ah, 5
0x9450B5: jp      short loc_9450F1
0x9450B7: fld     [esp+2F0h+var_2BC]
0x9450BB: movaps  xmm1, xmmword ptr [edi+10h]
0x9450BF: fsub    [esp+2F0h+var_2B8]
0x9450C3: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x9450CA: fdivr   [esp+2F0h+var_2BC]
0x9450CE: fstp    [esp+2F0h+var_2B8]
0x9450D2: movss   xmm0, [esp+2F0h+var_2B8]
0x9450D8: shufps  xmm0, xmm0, 0
0x9450DC: movaps  xmm2, xmm0
0x9450DF: mulps   xmm2, xmm1
0x9450E2: movaps  xmm1, xmmword ptr [edi]
0x9450E5: subps   xmm3, xmm0
0x9450E8: mulps   xmm3, xmm1
0x9450EB: addps   xmm3, xmm2
0x9450EE: movaps  xmmword ptr [edi], xmm3
0x9450F1: mov     ecx, [esp+2F0h+var_2C0]
0x9450F5: fld     dword ptr [ecx+54h]
0x9450F8: fcomp   dword ptr ds:0A2F948h
0x9450FE: fnstsw  ax
0x945100: test    ah, 5
0x945103: jp      loc_945192
0x945109: mov     edx, [ecx+54h]
0x94510C: movaps  xmm2, xmmword ptr [ecx+30h]
0x945110: mov     eax, [ecx+10h]
0x945113: movaps  xmm1, xmmword ptr [eax+10h]
0x945117: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x94511E: mov     eax, [ebp+arg_0]
0x945121: mov     [esp+2F0h+var_278], edx
0x945125: movss   xmm0, [esp+2F0h+var_278]
0x94512B: shufps  xmm0, xmm0, 0
0x94512F: movaps  xmm3, xmm0
0x945132: mulps   xmm3, xmm2
0x945135: movaps  xmm2, xmmword ptr [ecx+20h]
0x945139: subps   xmm4, xmm0
0x94513C: mulps   xmm4, xmm2
0x94513F: addps   xmm4, xmm3
0x945142: subps   xmm4, xmm1
0x945145: movaps  xmmword ptr [edi+10h], xmm4
0x945149: mov     ecx, [eax+14h]
0x94514C: movaps  xmm1, xmmword ptr [edi+10h]
0x945150: mov     [esp+2F0h+var_274], ecx
0x945154: movss   xmm0, [esp+2F0h+var_274]
0x94515A: movaps  xmm2, xmm0
0x94515D: shufps  xmm2, xmm0, 0
0x945161: mulps   xmm2, xmm1
0x945164: movaps  xmmword ptr [edi+10h], xmm2
0x945168: movaps  xmm0, xmmword ptr [eax]
0x94516B: movaps  xmm1, xmmword ptr [edi+10h]
0x94516F: mov     eax, [esp+2F0h+var_2C8]
0x945173: cmp     eax, 3
0x945176: subps   xmm1, xmm0
0x945179: movaps  xmmword ptr [edi+10h], xmm1
0x94517D: jge     short loc_945192
0x94517F: fld     dword ptr [edi+eax*4+10h]
0x945183: fcomp   [esp+2F0h+var_2CC]
0x945187: fnstsw  ax
0x945189: test    ah, 41h
0x94518C: jz      loc_945788; jumptable 00944B1B case 0
0x945192: sub     ebx, [esp+2F0h+var_2D8]
0x945196: add     esi, ebx
0x945198: jmp     loc_944B00
0x94519D: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B cases 41-43
0x9451A1: movzx   edx, byte ptr [esi+2]
0x9451A5: movzx   ebx, byte ptr [esi+5]
0x9451A9: shl     eax, 8
0x9451AC: add     edx, eax
0x9451AE: movzx   eax, byte ptr [esi+3]
0x9451B2: shl     edx, 8
0x9451B5: add     edx, eax
0x9451B7: mov     eax, [ebp+arg_0]
0x9451BA: mov     [esp+2F0h+var_2D8], edx
0x9451BE: mov     edx, [esp+2F0h+var_2C0]
0x9451C2: add     ecx, 0FFFFFFD7h
0x9451C5: fild    [esp+2F0h+var_2D8]
0x9451C9: fmul    dword ptr [edx+14h]
0x9451CC: movzx   edx, byte ptr [esi+4]
0x9451D0: shl     edx, 8
0x9451D3: add     edx, ebx
0x9451D5: movzx   ebx, byte ptr [esi+6]
0x9451D9: shl     edx, 8
0x9451DC: fmul    dword ptr [eax+14h]
0x9451DF: add     edx, ebx
0x9451E1: mov     [esp+2F0h+var_2D8], edx
0x9451E5: mov     edx, [esp+2F0h+var_2C0]
0x9451E9: fsub    dword ptr [eax+ecx*4]
0x9451EC: add     esi, 7
0x9451EF: fstp    [esp+2F0h+var_2D0]
0x9451F3: fild    [esp+2F0h+var_2D8]
0x9451F7: fmul    dword ptr [edx+14h]
0x9451FA: fmul    dword ptr [eax+14h]
0x9451FD: fsub    dword ptr [eax+ecx*4]
0x945200: jmp     short loc_945224
0x945202: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B cases 38-40
0x945206: movzx   edx, byte ptr [esi+2]
0x94520A: mov     [esp+2F0h+var_2D8], eax
0x94520E: add     ecx, 0FFFFFFDAh
0x945211: add     esi, 3
0x945214: fild    [esp+2F0h+var_2D8]
0x945218: mov     [esp+2F0h+var_2D8], edx
0x94521C: fstp    [esp+2F0h+var_2D0]
0x945220: fild    [esp+2F0h+var_2D8]
0x945224: fld     dword ptr [edi+ecx*4]
0x945227: fstp    [esp+2F0h+var_2C8]
0x94522B: fld     dword ptr [edi+ecx*4+10h]
0x94522F: fstp    [esp+2F0h+var_2D4]
0x945233: fld     [esp+2F0h+var_2C8]
0x945237: fcomp   [esp+2F0h+var_2D4]
0x94523B: fnstsw  ax
0x94523D: test    ah, 5
0x945240: jp      short loc_94526A
0x945242: fld     [esp+2F0h+var_2D4]
0x945246: fcomp   [esp+2F0h+var_2D0]
0x94524A: fnstsw  ax
0x94524C: test    ah, 5
0x94524F: jnp     loc_945786
0x945255: fld     [esp+2F0h+var_2C8]
0x945259: fcomp   st(1)
0x94525B: fnstsw  ax
0x94525D: test    ah, 41h
0x945260: jz      loc_945786
0x945266: xor     ebx, ebx
0x945268: jmp     short loc_945293
0x94526A: fld     [esp+2F0h+var_2C8]
0x94526E: fcomp   [esp+2F0h+var_2D0]
0x945272: fnstsw  ax
0x945274: test    ah, 5
0x945277: jnp     loc_945786
0x94527D: fld     [esp+2F0h+var_2D4]
0x945281: fcomp   st(1)
0x945283: fnstsw  ax
0x945285: test    ah, 41h
0x945288: jz      loc_945786
0x94528E: mov     ebx, 1
0x945293: fld     [esp+2F0h+var_2C8]
0x945297: mov     eax, edi
0x945299: mov     ecx, [eax]
0x94529B: fsub    st, st(1)
0x94529D: mov     edx, [eax+4]
0x9452A0: mov     dword ptr [esp+2F0h+var_270], ecx
0x9452A7: mov     ecx, [eax+8]
0x9452AA: fstp    [esp+2F0h+var_2D8]
0x9452AE: mov     dword ptr [esp+2F0h+var_270+4], edx
0x9452B5: mov     edx, [eax+0Ch]
0x9452B8: fsubr   [esp+2F0h+var_2D4]
0x9452BC: fld     [esp+2F0h+var_2D8]
0x9452C0: lea     eax, [edi+10h]
0x9452C3: mov     dword ptr [esp+2F0h+var_270+8], ecx
0x9452CA: fmul    st, st(1)
0x9452CC: mov     ecx, [eax]
0x9452CE: mov     dword ptr [esp+2F0h+var_270+0Ch], edx
0x9452D5: mov     edx, [eax+4]
0x9452D8: fcomp   dword ptr ds:0A2FAA8h
0x9452DE: mov     dword ptr [esp+2F0h+var_260], ecx
0x9452E5: mov     ecx, [eax+8]
0x9452E8: mov     dword ptr [esp+2F0h+var_260+4], edx
0x9452EF: mov     edx, [eax+0Ch]
0x9452F2: fnstsw  ax
0x9452F4: mov     dword ptr [esp+2F0h+var_260+8], ecx
0x9452FB: test    ah, 5
0x9452FE: mov     dword ptr [esp+2F0h+var_260+0Ch], edx
0x945305: jp      short loc_94535E
0x945307: fld     [esp+2F0h+var_2D8]
0x94530B: push    ecx
0x94530C: fsub    st, st(1)
0x94530E: lea     ecx, [esp+2F4h+var_220]
0x945315: fdivr   [esp+2F4h+var_2D8]
0x945319: fstp    [esp+2F4h+var_2F4]
0x94531C: fstp    st
0x94531E: call    sub_535AA0
0x945323: movaps  xmm0, [esp+2F0h+var_220]
0x94532B: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x945332: mov     eax, ebx
0x945334: shufps  xmm0, xmm0, 0
0x945338: subps   xmm2, xmm0
0x94533B: mulps   xmm2, [esp+2F0h+var_270]
0x945343: shl     eax, 4
0x945346: mov     ecx, edi
0x945348: movaps  xmm1, xmm0
0x94534B: mulps   xmm1, [esp+2F0h+var_260]
0x945353: sub     ecx, eax
0x945355: addps   xmm2, xmm1
0x945358: movaps  xmmword ptr [ecx+10h], xmm2
0x94535C: jmp     short loc_945360
0x94535E: fstp    st
0x945360: fld     [esp+2F0h+var_2C8]
0x945364: fsub    [esp+2F0h+var_2D0]
0x945368: fld     [esp+2F0h+var_2D4]
0x94536C: fsub    [esp+2F0h+var_2D0]
0x945370: fld     st
0x945372: fmul    st, st(2)
0x945374: fcomp   dword ptr ds:0A2FAA8h
0x94537A: fnstsw  ax
0x94537C: test    ah, 5
0x94537F: jp      loc_944AFB
0x945385: fld     st(1)
0x945387: push    ecx
0x945388: fsub    st, st(1)
0x94538A: lea     ecx, [esp+2F4h+var_210]
0x945391: fdivr   st, st(2)
0x945393: fstp    [esp+2F4h+var_2F4]
0x945396: fstp    st
0x945398: fstp    st
0x94539A: call    sub_535AA0
0x94539F: movaps  xmm0, [esp+2F0h+var_210]
0x9453A7: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x9453AE: shufps  xmm0, xmm0, 0
0x9453B2: subps   xmm2, xmm0
0x9453B5: mulps   xmm2, [esp+2F0h+var_270]
0x9453BD: movaps  xmm1, xmm0
0x9453C0: mulps   xmm1, [esp+2F0h+var_260]
0x9453C8: shl     ebx, 4
0x9453CB: addps   xmm2, xmm1
0x9453CE: movaps  xmmword ptr [ebx+edi], xmm2
0x9453D2: jmp     loc_944B00
0x9453D7: movzx   edx, byte ptr [esi+1]; jumptable 00944B1B case 5
0x9453DB: lea     esi, [esi+edx+2]
0x9453DF: jmp     loc_944B00
0x9453E4: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 6
0x9453E8: movzx   ecx, byte ptr [esi+2]
0x9453EC: shl     eax, 8
0x9453EF: add     ecx, esi
0x9453F1: lea     esi, [ecx+eax+3]
0x9453F5: jmp     loc_944B00
0x9453FA: movzx   edx, byte ptr [esi+1]; jumptable 00944B1B case 7
0x9453FE: movzx   eax, byte ptr [esi+2]
0x945402: movzx   ecx, byte ptr [esi+3]
0x945406: shl     edx, 8
0x945409: add     edx, eax
0x94540B: shl     edx, 8
0x94540E: add     ecx, esi
0x945410: lea     esi, [ecx+edx+4]
0x945414: jmp     loc_944B00
0x945419: movzx   edx, byte ptr [esi+1]; jumptable 00944B1B cases 1-4
0x94541D: movzx   eax, byte ptr [esi+2]
0x945421: movaps  xmm0, xmmword ptr [edi]
0x945424: mov     [esp+2F0h+var_2D8], edx
0x945428: movzx   edx, byte ptr [esi+3]
0x94542C: fild    [esp+2F0h+var_2D8]
0x945430: mov     [esp+2F0h+var_2D8], eax
0x945434: mov     eax, 1
0x945439: fstp    dword ptr [esp+2F0h+var_290]
0x94543D: shl     eax, cl
0x94543F: fild    [esp+2F0h+var_2D8]
0x945443: mov     [esp+2F0h+var_2D8], edx
0x945447: mov     dword ptr [esp+2F0h+var_290+0Ch], 0
0x94544F: fstp    dword ptr [esp+2F0h+var_290+4]
0x945453: fild    [esp+2F0h+var_2D8]
0x945457: mov     [esp+2F0h+var_2D8], eax
0x94545B: mov     eax, [ebp+arg_0]
0x94545E: fstp    dword ptr [esp+2F0h+var_290+8]
0x945462: movaps  xmm1, [esp+2F0h+var_290]
0x945467: fild    [esp+2F0h+var_2D8]
0x94546B: subps   xmm0, xmm1
0x94546E: movaps  xmmword ptr [edi], xmm0
0x945471: movaps  xmm0, xmmword ptr [edi+10h]
0x945475: subps   xmm0, xmm1
0x945478: fst     [esp+2F0h+var_2D8]
0x94547C: movaps  xmmword ptr [edi+10h], xmm0
0x945480: movss   xmm0, [esp+2F0h+var_2D8]
0x945486: movaps  xmm2, xmmword ptr [edi]
0x945489: movaps  xmm3, xmm0
0x94548C: shufps  xmm3, xmm0, 0
0x945490: mulps   xmm3, xmm2
0x945493: movaps  xmmword ptr [edi], xmm3
0x945496: movaps  xmm2, xmmword ptr [edi+10h]
0x94549A: movaps  xmm3, xmm0
0x94549D: shufps  xmm3, xmm0, 0
0x9454A1: mulps   xmm3, xmm2
0x9454A4: movaps  xmmword ptr [edi+10h], xmm3
0x9454A8: movaps  xmm2, xmmword ptr [eax]
0x9454AB: addps   xmm2, xmm1
0x9454AE: movaps  xmm1, xmm0
0x9454B1: shufps  xmm1, xmm0, 0
0x9454B5: mulps   xmm1, xmm2
0x9454B8: movaps  [esp+2F0h+var_2B0], xmm1
0x9454BD: mov     edx, [eax+10h]
0x9454C0: add     edx, ecx
0x9454C2: mov     [esp+2F0h+var_2A0], edx
0x9454C6: fmul    dword ptr [eax+14h]
0x9454C9: add     esi, 4
0x9454CC: fstp    [esp+2F0h+var_29C]
0x9454D0: mov     ecx, [eax+1Ch]
0x9454D3: mov     [esp+2F0h+var_294], ecx
0x9454D7: mov     edx, [eax+18h]
0x9454DA: lea     eax, [esp+2F0h+var_2B0]
0x9454DE: mov     [esp+2F0h+var_298], edx
0x9454E2: mov     [ebp+arg_0], eax
0x9454E5: jmp     loc_944B00
0x9454EA: mov     eax, [ebp+arg_0]; jumptable 00944B1B case 9
0x9454ED: movzx   ebx, byte ptr [esi+1]
0x9454F1: lea     ecx, [esp+2F0h+var_2B0]
0x9454F5: cmp     eax, ecx
0x9454F7: jz      short loc_94550A
0x9454F9: push    eax
0x9454FA: lea     ecx, [esp+2F4h+var_2B0]
0x9454FE: call    sub_944A90
0x945503: lea     edx, [esp+2F0h+var_2B0]
0x945507: mov     [ebp+arg_0], edx
0x94550A: add     [esp+2F0h+var_298], ebx
0x94550E: add     esi, 2
0x945511: jmp     loc_944B00
0x945516: movzx   ebx, byte ptr [esi+1]; jumptable 00944B1B case 10
0x94551A: movzx   eax, byte ptr [esi+2]
0x94551E: shl     ebx, 8
0x945521: add     ebx, eax
0x945523: mov     eax, [ebp+arg_0]
0x945526: lea     ecx, [esp+2F0h+var_2B0]
0x94552A: cmp     eax, ecx
0x94552C: jz      short loc_94553F
0x94552E: push    eax
0x94552F: lea     ecx, [esp+2F4h+var_2B0]
0x945533: call    sub_944A90
0x945538: lea     edx, [esp+2F0h+var_2B0]
0x94553C: mov     [ebp+arg_0], edx
0x94553F: add     [esp+2F0h+var_298], ebx
0x945543: add     esi, 3
0x945546: jmp     loc_944B00
0x94554B: movzx   ebx, byte ptr [esi+1]; jumptable 00944B1B case 11
0x94554F: movzx   eax, byte ptr [esi+2]
0x945553: movzx   ecx, byte ptr [esi+3]
0x945557: movzx   edx, byte ptr [esi+4]
0x94555B: shl     ebx, 8
0x94555E: add     ebx, eax
0x945560: mov     eax, [ebp+arg_0]
0x945563: shl     ebx, 8
0x945566: add     ebx, ecx
0x945568: shl     ebx, 8
0x94556B: lea     ecx, [esp+2F0h+var_2B0]
0x94556F: add     ebx, edx
0x945571: cmp     eax, ecx
0x945573: jz      short loc_945586
0x945575: push    eax
0x945576: lea     ecx, [esp+2F4h+var_2B0]
0x94557A: call    sub_944A90
0x94557F: lea     edx, [esp+2F0h+var_2B0]
0x945583: mov     [ebp+arg_0], edx
0x945586: mov     [esp+2F0h+var_298], ebx
0x94558A: add     esi, 5
0x94558D: jmp     loc_944B00
0x945592: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B cases 96-99
0x945596: add     esi, 2
0x945599: mov     [esp+ecx*4+2F0h+var_414], eax
0x9455A0: jmp     short loc_9455E4
0x9455A2: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B cases 100-103
0x9455A6: movzx   edx, byte ptr [esi+2]
0x9455AA: shl     eax, 8
0x9455AD: add     eax, edx
0x9455AF: mov     [esp+ecx*4+2F0h+var_424], eax
0x9455B6: add     esi, 3
0x9455B9: jmp     short loc_9455E4
0x9455BB: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B cases 104-107
0x9455BF: movzx   edx, byte ptr [esi+2]
0x9455C3: shl     eax, 8
0x9455C6: add     eax, edx
0x9455C8: movzx   edx, byte ptr [esi+3]
0x9455CC: shl     eax, 8
0x9455CF: add     eax, edx
0x9455D1: movzx   edx, byte ptr [esi+4]
0x9455D5: shl     eax, 8
0x9455D8: add     eax, edx
0x9455DA: mov     [esp+ecx*4+2F0h+var_434], eax
0x9455E1: add     esi, 5
0x9455E4: mov     eax, [ebp+arg_0]
0x9455E7: mov     ecx, [esp+2F0h+var_294]
0x9455EB: lea     edx, [esp+2F0h+var_2B0]
0x9455EF: cmp     eax, edx
0x9455F1: jz      short loc_945617
0x9455F3: movaps  xmm0, xmmword ptr [eax]
0x9455F6: movaps  [esp+2F0h+var_2B0], xmm0
0x9455FB: mov     edx, [eax+10h]
0x9455FE: mov     [esp+2F0h+var_2A0], edx
0x945602: mov     edx, [eax+14h]
0x945605: mov     [esp+2F0h+var_29C], edx
0x945609: mov     eax, [eax+18h]
0x94560C: lea     edx, [esp+2F0h+var_2B0]
0x945610: mov     [esp+2F0h+var_298], eax
0x945614: mov     [ebp+arg_0], edx
0x945617: mov     [esp+2F0h+var_294], ecx
0x94561B: jmp     loc_944B00
0x945620: push    ecx; jumptable 00944B1B default case, cases 8,12-15,29-31,44-47,84-95
0x945621: mov     eax, esp
0x945623: mov     byte ptr [eax], 1
0x945626: push    200h
0x94562B: lea     eax, [esp+2F8h+var_200]
0x945632: push    eax
0x945633: lea     ecx, [esp+2FCh+var_24C]
0x94563A: call    sub_8BBFB0
0x94563F: push    offset aUnknownCommand; "Unknown command.\n"
0x945644: lea     ecx, [esp+2F4h+var_24C]
0x94564B: call    sub_8BBDB0
0x945650: mov     ecx, ds:0BA7FB0h
0x945656: mov     edx, [ecx]
0x945658: push    1C9h
0x94565D: push    offset a_CollideMopp_2; ".\\collide\\mopp\\machine\\hkMoppLongRa"...
0x945662: lea     eax, [esp+2F8h+var_200]
0x945669: push    eax
0x94566A: push    1298FEDDh
0x94566F: push    3
0x945671: call    dword ptr [edx+8]
0x945674: lea     ecx, [esp+2F0h+var_24C]
0x94567B: call    sub_8BC000
0x945680: jmp     loc_944B00
0x945685: movzx   edi, byte ptr [esi+1]; jumptable 00944B1B case 80
0x945689: jmp     short loc_9456D7
0x94568B: movzx   edi, byte ptr [esi+1]; jumptable 00944B1B case 81
0x94568F: movzx   ecx, byte ptr [esi+2]
0x945693: shl     edi, 8
0x945696: add     edi, ecx
0x945698: jmp     short loc_9456D7
0x94569A: movzx   edi, byte ptr [esi+1]; jumptable 00944B1B case 82
0x94569E: movzx   edx, byte ptr [esi+2]
0x9456A2: movzx   eax, byte ptr [esi+3]
0x9456A6: shl     edi, 8
0x9456A9: add     edi, edx
0x9456AB: shl     edi, 8
0x9456AE: add     edi, eax
0x9456B0: jmp     short loc_9456D7
0x9456B2: movzx   eax, byte ptr [esi+1]; jumptable 00944B1B case 83
0x9456B6: movzx   ecx, byte ptr [esi+2]
0x9456BA: movzx   edx, byte ptr [esi+3]
0x9456BE: shl     eax, 8
0x9456C1: add     eax, ecx
0x9456C3: movzx   ecx, byte ptr [esi+4]
0x9456C7: shl     eax, 10h
0x9456CA: shl     edx, 8
0x9456CD: add     ecx, eax
0x9456CF: lea     edi, [ecx+edx]
0x9456D2: jmp     short loc_9456D7
0x9456D4: lea     edi, [ecx-30h]; jumptable 00944B1B cases 48-79
0x9456D7: mov     edx, [ebp+arg_0]
0x9456DA: mov     ecx, [edx+18h]
0x9456DD: mov     esi, [esp+2F0h+var_2C0]
0x9456E1: add     edi, ecx
0x9456E3: mov     ecx, [esi+44h]
0x9456E6: test    ecx, ecx
0x9456E8: jz      short loc_945705
0x9456EA: mov     edx, [esi+64h]
0x9456ED: mov     eax, [ecx]
0x9456EF: push    edi
0x9456F0: push    edx
0x9456F1: lea     edx, [esi+20h]
0x9456F4: push    edx
0x9456F5: lea     edx, [esp+2FCh+var_2B1]
0x9456F9: push    edx
0x9456FA: call    dword ptr [eax]
0x9456FC: cmp     byte ptr [eax], 0
0x9456FF: jz      loc_945788; jumptable 00944B1B case 0
0x945705: mov     ecx, [esi+64h]
0x945708: mov     eax, [ecx]
0x94570A: lea     edx, [esp+2F0h+var_200]
0x945711: push    edx
0x945712: push    edi
0x945713: call    dword ptr [eax+28h]
0x945716: mov     ecx, [esi+58h]
0x945719: test    ecx, ecx
0x94571B: mov     edx, [eax]
0x94571D: jz      short loc_94574C
0x94571F: push    ecx
0x945720: lea     ecx, [esi+20h]
0x945723: push    ecx
0x945724: lea     ecx, [esp+2F8h+var_2B1]
0x945728: push    ecx
0x945729: mov     ecx, eax
0x94572B: call    dword ptr [edx+14h]
0x94572E: cmp     byte ptr [eax], 0
0x945731: jz      short loc_945788; jumptable 00944B1B case 0
0x945733: mov     byte ptr [esi+50h], 1
0x945737: mov     eax, [esi+58h]
0x94573A: mov     edx, [eax+14h]
0x94573D: mov     [esi+54h], edx
0x945740: mov     [eax+10h], edi
0x945743: pop     edi
0x945744: pop     esi
0x945745: pop     ebx
0x945746: mov     esp, ebp
0x945748: pop     ebp
0x945749: retn    0Ch
0x94574C: mov     ecx, [esi+60h]
0x94574F: mov     dword ptr [esp+2F0h+var_290+0Ch], ecx
0x945753: mov     ecx, [ecx+8]
0x945756: mov     dword ptr [esp+2F0h+var_290+8], ecx
0x94575A: mov     ecx, [esi+5Ch]
0x94575D: push    ecx
0x94575E: lea     ecx, [esp+2F4h+var_290]
0x945762: push    ecx
0x945763: lea     ecx, [esi+20h]
0x945766: push    ecx
0x945767: mov     ecx, eax
0x945769: mov     dword ptr [esp+2FCh+var_290], eax
0x94576D: mov     dword ptr [esp+2FCh+var_290+4], edi
0x945771: call    dword ptr [edx+18h]
0x945774: mov     edx, [esi+5Ch]
0x945777: mov     eax, [edx+4]
0x94577A: mov     [esi+54h], eax
0x94577D: pop     edi
0x94577E: pop     esi
0x94577F: pop     ebx
0x945780: mov     esp, ebp
0x945782: pop     ebp
0x945783: retn    0Ch
0x945786: fstp    st
0x945788: pop     edi; jumptable 00944B1B case 0
0x945789: pop     esi
0x94578A: pop     ebx
0x94578B: mov     esp, ebp
0x94578D: pop     ebp
0x94578E: retn    0Ch
