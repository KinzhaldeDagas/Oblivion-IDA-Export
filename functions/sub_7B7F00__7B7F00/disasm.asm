0x7B7F00: push    edi
0x7B7F01: mov     edi, [esp+4+arg_0]
0x7B7F05: test    edi, edi
0x7B7F07: jz      loc_7B7FB0
0x7B7F0D: mov     eax, [edi]
0x7B7F0F: mov     edx, [eax+0Ch]
0x7B7F12: push    ebx
0x7B7F13: push    esi
0x7B7F14: mov     ecx, edi
0x7B7F16: call    edx
0x7B7F18: test    eax, eax
0x7B7F1A: mov     ecx, edi
0x7B7F1C: jz      short loc_7B7F69
0x7B7F1E: push    4
0x7B7F20: call    NiNode_GetNiPropertyByID
0x7B7F25: mov     edi, [edi+0BCh]
0x7B7F2B: mov     ebx, eax
0x7B7F2D: test    ebx, ebx
0x7B7F2F: jnz     short loc_7B7F35
0x7B7F31: xor     esi, esi
0x7B7F33: jmp     short loc_7B7F49
0x7B7F35: mov     eax, [ebx]
0x7B7F37: mov     edx, [eax+54h]
0x7B7F3A: mov     ecx, ebx
0x7B7F3C: call    edx
0x7B7F3E: mov     esi, eax
0x7B7F40: sub     esi, 0FFFFFFFFh
0x7B7F43: neg     esi
0x7B7F45: sbb     esi, esi
0x7B7F47: and     esi, ebx
0x7B7F49: test    edi, edi
0x7B7F4B: jz      short loc_7B7F56
0x7B7F4D: mov     eax, [edi]
0x7B7F4F: mov     edx, [eax+1Ch]
0x7B7F52: mov     ecx, edi
0x7B7F54: call    edx
0x7B7F56: test    esi, esi
0x7B7F58: jz      short loc_7B7FAE
0x7B7F5A: test    edi, edi
0x7B7F5C: jz      short loc_7B7FAE
0x7B7F5E: mov     eax, [esp+0Ch+arg_4]
0x7B7F62: mov     [esi+68h], eax
0x7B7F65: pop     esi
0x7B7F66: pop     ebx
0x7B7F67: pop     edi
0x7B7F68: retn
0x7B7F69: mov     edx, [edi]
0x7B7F6B: mov     eax, [edx+8]
0x7B7F6E: call    eax
0x7B7F70: test    eax, eax
0x7B7F72: jz      short loc_7B7FAE
0x7B7F74: movzx   eax, word ptr [edi+0B6h]
0x7B7F7B: xor     esi, esi
0x7B7F7D: test    eax, eax
0x7B7F7F: jbe     short loc_7B7FAE
0x7B7F81: cmp     eax, esi
0x7B7F83: mov     ebx, [esp+0Ch+arg_4]
0x7B7F87: jbe     short loc_7B7FA0
0x7B7F89: mov     ecx, [edi+0B0h]
0x7B7F8F: mov     eax, [ecx+esi*4]
0x7B7F92: test    eax, eax
0x7B7F94: jz      short loc_7B7FA0
0x7B7F96: push    ebx
0x7B7F97: push    eax
0x7B7F98: call    sub_7B7F00
0x7B7F9D: add     esp, 8
0x7B7FA0: movzx   eax, word ptr [edi+0B6h]
0x7B7FA7: add     esi, 1
0x7B7FAA: cmp     eax, esi
0x7B7FAC: ja      short loc_7B7F89
0x7B7FAE: pop     esi
0x7B7FAF: pop     ebx
0x7B7FB0: pop     edi
0x7B7FB1: retn
