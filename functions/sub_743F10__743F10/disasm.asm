0x743F10: mov     eax, [esi+24h]
0x743F13: mov     ecx, [esi+44h]
0x743F16: mov     edx, [esi+3Ch]
0x743F19: push    edi
0x743F1A: add     eax, eax
0x743F1C: mov     [esi+34h], eax
0x743F1F: xor     edi, edi
0x743F21: mov     [edx+ecx*2-2], di
0x743F26: mov     eax, [esi+44h]
0x743F29: mov     edx, [esi+3Ch]
0x743F2C: lea     ecx, [eax+eax-2]
0x743F30: push    ecx
0x743F31: push    edi
0x743F32: push    edx
0x743F33: call    __memset
0x743F38: mov     eax, [esi+7Ch]
0x743F3B: lea     eax, [eax+eax*2]
0x743F3E: add     eax, eax
0x743F40: movzx   ecx, ds:word_A82732[eax+eax]
0x743F48: add     eax, eax
0x743F4A: mov     [esi+78h], ecx
0x743F4D: movzx   edx, ds:word_A82730[eax]
0x743F54: mov     [esi+84h], edx
0x743F5A: movzx   ecx, ds:word_A82734[eax]
0x743F61: mov     [esi+88h], ecx
0x743F67: movzx   edx, ds:word_A82736[eax]
0x743F6E: mov     eax, 2
0x743F73: add     esp, 0Ch
0x743F76: mov     [esi+64h], edi
0x743F79: mov     [esi+54h], edi
0x743F7C: mov     [esi+6Ch], edi
0x743F7F: mov     [esi+60h], edi
0x743F82: mov     [esi+40h], edi
0x743F85: mov     [esi+74h], edx
0x743F88: mov     [esi+70h], eax
0x743F8B: mov     [esi+58h], eax
0x743F8E: pop     edi
0x743F8F: retn
