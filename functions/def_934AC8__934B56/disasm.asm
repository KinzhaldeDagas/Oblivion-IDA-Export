0x934B56: mov     ecx, [esp+arg_14]; jumptable 00934AC8 default case
0x934B5A: cmp     ecx, [esp+arg_30]
0x934B5E: jnz     short loc_934BD5
0x934B60: mov     edx, [esp+arg_20]
0x934B64: test    edx, edx
0x934B66: jz      short loc_934B9E
0x934B68: mov     eax, [esp+arg_2C]
0x934B6C: mov     eax, [eax+19Ch]
0x934B72: mov     ecx, [eax+0A8h]
0x934B78: cmp     ecx, [eax+30h]
0x934B7B: jge     short loc_934B8E
0x934B7D: inc     ecx
0x934B7E: mov     [eax+0A8h], ecx
0x934B84: mov     ecx, [eax+64h]
0x934B87: mov     [edx], ecx
0x934B89: mov     [eax+64h], edx
0x934B8C: jmp     short loc_934B9E
0x934B8E: mov     ecx, ds:0BA7D98h
0x934B94: mov     eax, [ecx]
0x934B96: push    1Ch
0x934B98: push    0Ch
0x934B9A: push    edx
0x934B9B: call    dword ptr [eax+1Ch]
0x934B9E: mov     edi, [ebp+8]
0x934BA1: mov     ecx, [esp+arg_1C]
0x934BA5: cmp     ecx, [edi+4]
0x934BA8: mov     edx, [esp+arg_24]
0x934BAC: mov     [esp+arg_20], edx
0x934BB0: jge     loc_934CF2
0x934BB6: mov     edx, [edi]
0x934BB8: mov     eax, [edx+ecx*4]
0x934BBB: lea     edx, [eax+10h]
0x934BBE: mov     [esp+arg_14], edx
0x934BC2: mov     edx, [eax]
0x934BC4: mov     [esp+arg_24], eax
0x934BC8: lea     eax, [edx+eax+10h]
0x934BCC: inc     ecx
0x934BCD: mov     [esp+arg_30], eax
0x934BD1: mov     [esp+arg_1C], ecx
0x934BD5: mov     ecx, [esp+arg_10]
0x934BD9: mov     eax, esi
0x934BDB: sub     eax, ecx
0x934BDD: mov     ecx, [esp+arg_14]
0x934BE1: movzx   edx, byte ptr [ecx+3]
0x934BE5: sub     eax, 10h
0x934BE8: add     edx, eax
0x934BEA: cmp     edx, 1A0h
0x934BF0: jle     loc_934A32
0x934BF6: mov     ecx, [esp+arg_10]
0x934BFA: mov     esi, [esp+arg_1C]
0x934BFE: mov     edi, [ebp+8]
0x934C01: mov     [ecx], eax
0x934C03: cmp     [esp+arg_18], esi
0x934C07: jl      short loc_934C67
0x934C09: mov     eax, [edi+4]
0x934C0C: lea     ebx, [eax+1]
0x934C0F: sub     eax, esi
0x934C11: mov     [esp+arg_28], eax
0x934C15: mov     eax, [edi+8]
0x934C18: and     eax, 3FFFFFFFh
0x934C1D: cmp     eax, ebx
0x934C1F: jge     short loc_934C35
0x934C21: add     eax, eax
0x934C23: cmp     ebx, eax
0x934C25: jl      short loc_934C29
0x934C27: mov     eax, ebx
0x934C29: push    4
0x934C2B: push    eax
0x934C2C: push    edi
0x934C2D: call    sub_8A6E40
0x934C32: add     esp, 0Ch
0x934C35: mov     edx, [edi]
0x934C37: mov     ecx, [esp+arg_28]
0x934C3B: dec     ecx
0x934C3C: lea     edx, [edx+esi*4]
0x934C3F: lea     esi, [edx+4]
0x934C42: js      short loc_934C5B
0x934C44: lea     eax, [esi+ecx*4]
0x934C47: sub     edx, esi
0x934C49: inc     ecx
0x934C4A: lea     ebx, [ebx+0]
0x934C50: mov     esi, [edx+eax]
0x934C53: mov     [eax], esi
0x934C55: sub     eax, 4
0x934C58: dec     ecx
0x934C59: jnz     short loc_934C50
0x934C5B: mov     eax, [esp+arg_1C]
0x934C5F: inc     eax
0x934C60: mov     [edi+4], ebx
0x934C63: mov     [esp+arg_1C], eax
0x934C67: mov     eax, [esp+arg_18]
0x934C6B: mov     ecx, [edi]
0x934C6D: mov     edx, [esp+arg_10]
0x934C71: mov     [ecx+eax*4], edx
0x934C74: inc     eax
0x934C75: mov     [esp+arg_18], eax
0x934C79: mov     eax, [esp+arg_20]
0x934C7D: test    eax, eax
0x934C7F: jz      short loc_934C97
0x934C81: mov     esi, eax
0x934C83: mov     [esp+arg_10], eax
0x934C87: mov     [esp+arg_20], 0
0x934C8F: add     esi, 10h
0x934C92: jmp     loc_934A32
0x934C97: mov     eax, [esp+arg_2C]
0x934C9B: mov     eax, [eax+19Ch]
0x934CA1: mov     ecx, [eax+64h]
0x934CA4: test    ecx, ecx
0x934CA6: jz      short loc_934CB7
0x934CA8: dec     dword ptr [eax+0A8h]
0x934CAE: mov     edx, [ecx]
0x934CB0: mov     [eax+64h], edx
0x934CB3: mov     eax, ecx
0x934CB5: jmp     short loc_934CC6
0x934CB7: mov     ecx, ds:0BA7D98h
0x934CBD: mov     eax, [ecx]
0x934CBF: push    1Ch
0x934CC1: push    0Ch
0x934CC3: call    dword ptr [eax+18h]
0x934CC6: test    eax, eax
0x934CC8: jz      short loc_934CDE
0x934CCA: mov     esi, eax
0x934CCC: mov     dword ptr [eax], 0
0x934CD2: mov     [esp+arg_10], eax
0x934CD6: add     esi, 10h
0x934CD9: jmp     loc_934A32
0x934CDE: mov     [esp+arg_10], 0
0x934CE6: mov     esi, [esp+arg_10]
0x934CEA: add     esi, 10h
0x934CED: jmp     loc_934A32
0x934CF2: mov     ebx, [esp+arg_10]
0x934CF6: sub     esi, ebx
0x934CF8: sub     esi, 10h
0x934CFB: mov     [ebx], esi
0x934CFD: mov     esi, [esp+arg_18]
0x934D01: mov     eax, [edi+8]
0x934D04: inc     esi
0x934D05: and     eax, 3FFFFFFFh
0x934D0A: cmp     eax, esi
0x934D0C: jge     short loc_934D26
0x934D0E: add     eax, eax
0x934D10: cmp     esi, eax
0x934D12: jl      short loc_934D16
0x934D14: mov     eax, esi
0x934D16: push    4
0x934D18: push    eax
0x934D19: push    edi
0x934D1A: call    sub_8A6E40
0x934D1F: mov     edx, [esp+0Ch+arg_24]
0x934D23: add     esp, 0Ch
0x934D26: test    edx, edx
0x934D28: mov     ecx, [edi]
0x934D2A: mov     eax, [esp+arg_18]
0x934D2E: mov     [edi+4], esi
0x934D31: mov     [ecx+eax*4], ebx
0x934D34: jz      short loc_934D71
0x934D36: mov     ecx, [esp+arg_2C]
0x934D3A: mov     eax, [ecx+19Ch]
0x934D40: mov     ecx, [eax+0A8h]
0x934D46: cmp     ecx, [eax+30h]
0x934D49: jge     short loc_934D61
0x934D4B: inc     ecx
0x934D4C: mov     [eax+0A8h], ecx
0x934D52: mov     ecx, [eax+64h]
0x934D55: mov     [edx], ecx
0x934D57: mov     [eax+64h], edx
0x934D5A: pop     edi
0x934D5B: pop     esi
0x934D5C: pop     ebx
0x934D5D: mov     esp, ebp
0x934D5F: pop     ebp
0x934D60: retn
0x934D61: mov     ecx, ds:0BA7D98h
0x934D67: mov     eax, [ecx]
0x934D69: push    1Ch
0x934D6B: push    0Ch
0x934D6D: push    edx
0x934D6E: call    dword ptr [eax+1Ch]
0x934D71: pop     edi
0x934D72: pop     esi
0x934D73: pop     ebx
0x934D74: mov     esp, ebp
0x934D76: pop     ebp
0x934D77: retn
