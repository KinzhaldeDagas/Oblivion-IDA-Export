0x7C3980: mov     ecx, ds:0B2CBC8h
0x7C3986: sub     esp, 0Ch
0x7C3989: xor     eax, eax
0x7C398B: test    ecx, ecx
0x7C398D: jbe     short loc_7C39A2
0x7C398F: mov     edx, ds:0B2CBCCh
0x7C3995: cmp     dword ptr [edx+eax*4], 0
0x7C3999: jnz     short loc_7C3A10
0x7C399B: add     eax, 1
0x7C399E: cmp     eax, ecx
0x7C39A0: jb      short loc_7C3995
0x7C39A2: xor     eax, eax
0x7C39A4: cmp     dword ptr ds:0B2CBD0h, 0
0x7C39AB: mov     [esp+0Ch+var_8], eax
0x7C39AF: mov     [esp+0Ch+var_C], 0
0x7C39B6: jbe     loc_7C3AA3
0x7C39BC: test    eax, eax
0x7C39BE: jz      loc_7C3AA3
0x7C39C4: push    ebx
0x7C39C5: push    ebp
0x7C39C6: mov     ebp, [esp+14h+arg_0]
0x7C39CA: push    esi
0x7C39CB: push    edi
0x7C39CC: lea     esp, [esp+0]
0x7C39D0: lea     eax, [esp+1Ch+var_C]
0x7C39D4: push    eax
0x7C39D5: lea     ecx, [esp+20h+var_4]
0x7C39D9: push    ecx
0x7C39DA: lea     edx, [esp+24h+var_8]
0x7C39DE: push    edx
0x7C39DF: mov     ecx, offset off_B2CBC4
0x7C39E4: call    sub_452600
0x7C39E9: mov     ebx, [esp+1Ch+var_C]
0x7C39ED: test    ebx, ebx
0x7C39EF: jz      loc_7C3A94
0x7C39F5: mov     eax, [ebx+38h]
0x7C39F8: test    eax, eax
0x7C39FA: jz      short loc_7C3A64
0x7C39FC: lea     esp, [esp+0]
0x7C3A00: cmp     [eax+8], ebp
0x7C3A03: lea     ecx, [eax+8]
0x7C3A06: mov     eax, [eax]
0x7C3A08: jz      short loc_7C3A15
0x7C3A0A: test    eax, eax
0x7C3A0C: jnz     short loc_7C3A00
0x7C3A0E: jmp     short loc_7C3A64
0x7C3A10: mov     eax, [edx+eax*4]
0x7C3A13: jmp     short loc_7C39A4
0x7C3A15: mov     esi, [ebx+24h]
0x7C3A18: test    esi, esi
0x7C3A1A: jz      short loc_7C3A64
0x7C3A1C: lea     esp, [esp+0]
0x7C3A20: mov     edi, [esi+8]
0x7C3A23: test    edi, edi
0x7C3A25: lea     eax, [esi+8]
0x7C3A28: mov     [esp+1Ch+var_4], esi
0x7C3A2C: mov     esi, [esi]
0x7C3A2E: jz      short loc_7C3A60
0x7C3A30: push    ebp
0x7C3A31: mov     ecx, edi
0x7C3A33: call    sub_812630
0x7C3A38: test    eax, eax
0x7C3A3A: jnz     short loc_7C3A60
0x7C3A3C: lea     eax, [esp+1Ch+var_4]
0x7C3A40: push    eax
0x7C3A41: lea     ecx, [ebx+20h]
0x7C3A44: call    sub_7AA860
0x7C3A49: mov     ecx, edi
0x7C3A4B: call    sub_812D60
0x7C3A50: push    edi
0x7C3A51: call    FormHeapFree
0x7C3A56: add     esp, 4
0x7C3A59: sub     dword ptr ds:0B43348h, 1
0x7C3A60: test    esi, esi
0x7C3A62: jnz     short loc_7C3A20
0x7C3A64: mov     eax, [ebx+38h]
0x7C3A67: test    eax, eax
0x7C3A69: lea     ecx, [ebx+34h]
0x7C3A6C: jz      short loc_7C3A80
0x7C3A6E: mov     edi, edi
0x7C3A70: cmp     ebp, [eax+8]
0x7C3A73: lea     edx, [eax+8]
0x7C3A76: mov     esi, eax
0x7C3A78: mov     eax, [eax]
0x7C3A7A: jz      short loc_7C3A82
0x7C3A7C: test    eax, eax
0x7C3A7E: jnz     short loc_7C3A70
0x7C3A80: xor     esi, esi
0x7C3A82: test    esi, esi
0x7C3A84: mov     [esp+1Ch+var_4], esi
0x7C3A88: jz      short loc_7C3A94
0x7C3A8A: lea     edx, [esp+1Ch+var_4]
0x7C3A8E: push    edx
0x7C3A8F: call    sub_7AA860
0x7C3A94: cmp     [esp+1Ch+var_8], 0
0x7C3A99: jnz     loc_7C39D0
0x7C3A9F: pop     edi
0x7C3AA0: pop     esi
0x7C3AA1: pop     ebp
0x7C3AA2: pop     ebx
0x7C3AA3: add     esp, 0Ch
0x7C3AA6: retn
