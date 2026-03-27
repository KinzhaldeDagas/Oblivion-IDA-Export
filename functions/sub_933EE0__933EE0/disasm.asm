0x933EE0: sub     esp, 8
0x933EE3: mov     eax, [esp+8+arg_0]
0x933EE7: mov     ecx, [eax]
0x933EE9: mov     eax, [ecx]
0x933EEB: push    ebx
0x933EEC: mov     ebx, [esp+0Ch+arg_8]
0x933EF0: push    ebp
0x933EF1: push    esi
0x933EF2: push    edi
0x933EF3: mov     edi, [esp+18h+arg_C]
0x933EF7: mov     [esp+18h+var_4], 4
0x933EFF: mov     edx, [eax]
0x933F01: lea     esi, [eax+10h]
0x933F04: lea     eax, [edx+eax+10h]
0x933F08: mov     [esp+18h+var_8], eax
0x933F0C: lea     esp, [esp+0]
0x933F10: movzx   eax, byte ptr [esi]
0x933F13: cmp     eax, 6; switch 7 cases
0x933F16: mov     ecx, esi
0x933F18: ja      short def_933F1A
0x933F1A: jmp     ds:jpt_933F1A[eax*4]; switch jump
0x933F21: lea     edx, [esi+10h]; jumptable 00933F1A cases 2,3,6
0x933F24: movzx   eax, byte ptr [esi+3]
0x933F28: mov     ebp, [edi]
0x933F2A: add     esi, eax
0x933F2C: movzx   eax, byte ptr [ecx+1]
0x933F30: imul    eax, 34h ; '4'
0x933F33: mov     eax, [eax+ebp+16B4h]
0x933F3A: test    eax, eax
0x933F3C: jz      short def_933F1A
0x933F3E: mov     ebp, [esp+18h+arg_4]
0x933F42: push    edi
0x933F43: push    ebx
0x933F44: push    ebp
0x933F45: push    edx
0x933F46: push    ecx
0x933F47: call    eax
0x933F49: add     esp, 14h
0x933F4C: jmp     short def_933F1A
0x933F4E: fld     [esp+18h+arg_4]; jumptable 00933F1A cases 4,5
0x933F52: lea     edx, [esi+20h]
0x933F55: fld     dword ptr [esi+0Ch]
0x933F58: fucompp
0x933F5A: fnstsw  ax
0x933F5C: test    ah, 44h
0x933F5F: jp      short loc_933F6A
0x933F61: mov     eax, [esp+18h+arg_8]
0x933F65: mov     [esi+0Ch], eax
0x933F68: jmp     short loc_933F24
0x933F6A: mov     dword ptr [esi+0Ch], 0BF800000h
0x933F71: jmp     short loc_933F24
0x933F73: movzx   ecx, byte ptr [esi+3]; jumptable 00933F1A case 0
0x933F77: add     esi, ecx
