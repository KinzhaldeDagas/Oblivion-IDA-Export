0x8D8BF0: push    ebp
0x8D8BF1: mov     ebp, esp
0x8D8BF3: and     esp, 0FFFFFFF0h
0x8D8BF6: sub     esp, 1B4h
0x8D8BFC: push    ebx
0x8D8BFD: mov     ebx, ecx
0x8D8BFF: push    esi
0x8D8C00: lea     eax, [esp+1BCh+var_144]
0x8D8C04: push    edi
0x8D8C05: mov     [esp+1C0h+var_1AC], ebx
0x8D8C09: mov     [esp+1C0h+var_150], eax
0x8D8C0D: mov     [esp+1C0h+var_14C], 0
0x8D8C15: mov     [esp+1C0h+var_148], 80000010h
0x8D8C1D: mov     ecx, 10h
0x8D8C22: mov     byte ptr [eax], 0
0x8D8C25: add     eax, 14h
0x8D8C28: dec     ecx
0x8D8C29: jnz     short loc_8D8C22
0x8D8C2B: mov     eax, [esp+1C0h+var_150]
0x8D8C2F: mov     ecx, [ebx]
0x8D8C31: mov     edx, [ebx+4]
0x8D8C34: mov     [ebx], eax
0x8D8C36: mov     eax, [esp+1C0h+var_14C]
0x8D8C3A: mov     [ebx+4], eax
0x8D8C3D: mov     eax, [esp+1C0h+var_148]
0x8D8C41: mov     [esp+1C0h+var_150], ecx
0x8D8C45: mov     ecx, [ebx+8]
0x8D8C48: mov     [ebx+8], eax
0x8D8C4B: mov     eax, [ebx+0Ch]
0x8D8C4E: mov     [esp+1C0h+var_14C], edx
0x8D8C52: mov     [esp+1C0h+var_148], ecx
0x8D8C56: inc     dword ptr [eax+98h]
0x8D8C5C: mov     ecx, [esp+1C0h+var_14C]
0x8D8C60: xor     eax, eax
0x8D8C62: test    ecx, ecx
0x8D8C64: mov     [esp+1C0h+var_1A4], eax
0x8D8C68: jle     loc_8D8DA1
0x8D8C6E: mov     edi, edi
0x8D8C70: lea     edx, [eax+eax*4]
0x8D8C73: mov     eax, [esp+1C0h+var_150]
0x8D8C77: lea     esi, [eax+edx*4]
0x8D8C7A: movzx   eax, byte ptr [esi]
0x8D8C7D: dec     eax; switch 34 cases
0x8D8C7E: cmp     eax, 21h
0x8D8C81: ja      def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D8C87: jmp     ds:jpt_8D8C87[eax*4]; switch jump
0x8D8C8E: mov     eax, [esi+4]; jumptable 008D8C87 case 1
0x8D8C91: mov     ecx, [eax+8]
0x8D8C94: test    ecx, ecx
0x8D8C96: jnz     loc_8D938C
0x8D8C9C: mov     ecx, [esi+8]
0x8D8C9F: push    ecx
0x8D8CA0: mov     ecx, [ebx+0Ch]
0x8D8CA3: push    eax
0x8D8CA4: call    sub_8994E0
0x8D8CA9: jmp     loc_8D938C
0x8D8CAE: mov     eax, [esi+4]; jumptable 008D8C87 case 2
0x8D8CB1: mov     ecx, [ebx+0Ch]
0x8D8CB4: cmp     [eax+8], ecx
0x8D8CB7: jnz     loc_8D938C
0x8D8CBD: push    eax
0x8D8CBE: lea     eax, [esp+1C4h+var_1A5]
0x8D8CC2: push    eax
0x8D8CC3: call    sub_8996C0
0x8D8CC8: jmp     loc_8D938C
0x8D8CCD: movzx   eax, byte ptr [esi+0Ah]; jumptable 008D8C87 case 4
0x8D8CD1: movzx   ecx, byte ptr [esi+9]
0x8D8CD5: movzx   edx, byte ptr [esi+8]
0x8D8CD9: push    eax
0x8D8CDA: push    ecx
0x8D8CDB: mov     ecx, [esi+4]
0x8D8CDE: push    edx
0x8D8CDF: call    sub_8A9AB0
0x8D8CE4: jmp     loc_8D942B
0x8D8CE9: mov     ecx, [esi+4]; jumptable 008D8C87 case 5
0x8D8CEC: mov     eax, [esi+8]
0x8D8CEF: mov     edx, [ecx]
0x8D8CF1: push    eax
0x8D8CF2: call    dword ptr [edx+8]
0x8D8CF5: mov     ecx, [esi+4]
0x8D8CF8: cmp     word ptr [ecx+4], 0
0x8D8CFD: jz      short loc_8D8D10
0x8D8CFF: dec     word ptr [ecx+6]
0x8D8D03: cmp     word ptr [ecx+6], 0
0x8D8D08: jnz     short loc_8D8D10
0x8D8D0A: mov     edx, [ecx]
0x8D8D0C: push    1
0x8D8D0E: call    dword ptr [edx]
0x8D8D10: mov     esi, [esi+8]
0x8D8D13: jmp     loc_8D942E
0x8D8D18: movzx   ecx, byte ptr [esi+0Ah]; jumptable 008D8C87 case 6
0x8D8D1C: movzx   edx, word ptr [esi+8]
0x8D8D20: mov     eax, [esi+4]
0x8D8D23: push    ecx
0x8D8D24: mov     ecx, [esp+1C4h+var_1AC]
0x8D8D28: mov     ecx, [ecx+0Ch]
0x8D8D2B: push    edx
0x8D8D2C: push    eax
0x8D8D2D: call    sub_89C310
0x8D8D32: movzx   edx, word ptr [esi+8]
0x8D8D36: mov     edi, [esi+4]
0x8D8D39: lea     ebx, [edi+edx*4]
0x8D8D3C: cmp     edi, ebx
0x8D8D3E: jnb     short loc_8D8D61
0x8D8D40: mov     ecx, [edi]
0x8D8D42: cmp     word ptr [ecx+4], 0
0x8D8D47: jz      short loc_8D8D5A
0x8D8D49: dec     word ptr [ecx+6]
0x8D8D4D: cmp     word ptr [ecx+6], 0
0x8D8D52: jnz     short loc_8D8D5A
0x8D8D54: mov     eax, [ecx]
0x8D8D56: push    1
0x8D8D58: call    dword ptr [eax]
0x8D8D5A: add     edi, 4
0x8D8D5D: cmp     edi, ebx
0x8D8D5F: jb      short loc_8D8D40
0x8D8D61: movzx   eax, word ptr [esi+8]
0x8D8D65: mov     ecx, ds:0BA7D98h
0x8D8D6B: mov     edx, [ecx]
0x8D8D6D: push    4
0x8D8D6F: shl     eax, 2
0x8D8D72: push    eax
0x8D8D73: mov     eax, [esi+4]
0x8D8D76: push    eax
0x8D8D77: call    dword ptr [edx+14h]
0x8D8D7A: mov     ebx, [esp+1C0h+var_1AC]
0x8D8D7E: mov     eax, [ebx+4]; jumptable 008D8C87 default case, cases 29,30
0x8D8D81: test    eax, eax
0x8D8D83: jz      short loc_8D8D8C
0x8D8D85: mov     ecx, ebx
0x8D8D87: call    sub_8D8BF0
0x8D8D8C: mov     eax, [esp+1C0h+var_1A4]
0x8D8D90: mov     ecx, [esp+1C0h+var_14C]
0x8D8D94: inc     eax
0x8D8D95: cmp     eax, ecx
0x8D8D97: mov     [esp+1C0h+var_1A4], eax
0x8D8D9B: jl      loc_8D8C70
0x8D8DA1: mov     eax, [esp+1C0h+var_150]
0x8D8DA5: mov     ecx, [ebx]
0x8D8DA7: mov     edx, [ebx+4]
0x8D8DAA: mov     [ebx], eax
0x8D8DAC: mov     eax, [esp+1C0h+var_148]
0x8D8DB0: mov     [esp+1C0h+var_150], ecx
0x8D8DB4: mov     ecx, [ebx+8]
0x8D8DB7: mov     [ebx+8], eax
0x8D8DBA: mov     eax, [ebx+0Ch]
0x8D8DBD: mov     [esp+1C0h+var_14C], edx
0x8D8DC1: mov     [esp+1C0h+var_148], ecx
0x8D8DC5: mov     dword ptr [ebx+4], 0
0x8D8DCC: dec     dword ptr [eax+98h]
0x8D8DD2: mov     eax, [esp+1C0h+var_148]
0x8D8DD6: test    eax, eax
0x8D8DD8: js      short loc_8D8E12
0x8D8DDA: mov     ecx, large fs:2Ch
0x8D8DE1: mov     edx, ds:0BA9DE4h
0x8D8DE7: mov     edx, [ecx+edx*4]
0x8D8DEA: mov     ecx, [edx+19Ch]
0x8D8DF0: test    ecx, ecx
0x8D8DF2: jnz     short loc_8D8DFA
0x8D8DF4: mov     ecx, ds:0BA7D9Ch
0x8D8DFA: mov     edx, [esp+1C0h+var_150]
0x8D8DFE: and     eax, 3FFFFFFFh
0x8D8E03: lea     eax, [eax+eax*4]
0x8D8E06: push    14h
0x8D8E08: shl     eax, 2
0x8D8E0B: push    eax
0x8D8E0C: push    edx
0x8D8E0D: call    sub_8A75D0
0x8D8E12: pop     edi
0x8D8E13: pop     esi
0x8D8E14: pop     ebx
0x8D8E15: mov     esp, ebp
0x8D8E17: pop     ebp
0x8D8E18: retn
0x8D8E19: movzx   ecx, word ptr [esi+8]; jumptable 008D8C87 case 7
0x8D8E1D: mov     edx, [esi+4]
0x8D8E20: mov     eax, [esp+1C0h+var_1AC]
0x8D8E24: push    ecx
0x8D8E25: mov     ecx, [eax+0Ch]
0x8D8E28: push    edx
0x8D8E29: call    sub_89C8E0
0x8D8E2E: movzx   ecx, word ptr [esi+8]
0x8D8E32: mov     edi, [esi+4]
0x8D8E35: lea     ebx, [edi+ecx*4]
0x8D8E38: cmp     edi, ebx
0x8D8E3A: jnb     loc_8D9401
0x8D8E40: mov     ecx, [edi]
0x8D8E42: cmp     word ptr [ecx+4], 0
0x8D8E47: jz      short loc_8D8E5A
0x8D8E49: dec     word ptr [ecx+6]
0x8D8E4D: cmp     word ptr [ecx+6], 0
0x8D8E52: jnz     short loc_8D8E5A
0x8D8E54: mov     edx, [ecx]
0x8D8E56: push    1
0x8D8E58: call    dword ptr [edx]
0x8D8E5A: add     edi, 4
0x8D8E5D: cmp     edi, ebx
0x8D8E5F: jb      short loc_8D8E40
0x8D8E61: jmp     loc_8D9401
0x8D8E66: mov     eax, [esi+4]; jumptable 008D8C87 case 8
0x8D8E69: mov     ecx, [eax+8]
0x8D8E6C: test    ecx, ecx
0x8D8E6E: jnz     short loc_8D8E89
0x8D8E70: mov     edx, [eax+10h]
0x8D8E73: mov     ecx, [ebx+0Ch]
0x8D8E76: cmp     [edx+8], ecx
0x8D8E79: jnz     short loc_8D8E89
0x8D8E7B: mov     edx, [eax+14h]
0x8D8E7E: cmp     [edx+8], ecx
0x8D8E81: jnz     short loc_8D8E89
0x8D8E83: push    eax
0x8D8E84: call    sub_8988A0
0x8D8E89: mov     esi, [esi+4]
0x8D8E8C: cmp     word ptr [esi+4], 0
0x8D8E91: jz      def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D8E97: dec     word ptr [esi+6]
0x8D8E9B: cmp     word ptr [esi+6], 0
0x8D8EA0: jnz     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D8EA6: mov     eax, [esi]
0x8D8EA8: push    1
0x8D8EAA: mov     ecx, esi
0x8D8EAC: call    dword ptr [eax]
0x8D8EAE: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D8EB3: mov     eax, [esi+4]; jumptable 008D8C87 case 9
0x8D8EB6: mov     ecx, [eax+8]
0x8D8EB9: test    ecx, ecx
0x8D8EBB: jz      loc_8D938C
0x8D8EC1: push    eax
0x8D8EC2: lea     ecx, [esp+1C4h+var_1A6]
0x8D8EC6: push    ecx
0x8D8EC7: mov     ecx, [ebx+0Ch]
0x8D8ECA: call    sub_8988F0
0x8D8ECF: jmp     loc_8D938C
0x8D8ED4: mov     eax, [esi+4]; jumptable 008D8C87 case 10
0x8D8ED7: mov     ecx, [eax+8]
0x8D8EDA: test    ecx, ecx
0x8D8EDC: jnz     loc_8D938C
0x8D8EE2: mov     ecx, eax
0x8D8EE4: xor     edi, edi
0x8D8EE6: lea     eax, [esp+1C0h+var_1A0]
0x8D8EEA: mov     [esp+1C0h+var_1A0], edi
0x8D8EEE: mov     [esp+1C0h+var_19C], edi
0x8D8EF2: mov     [esp+1C0h+var_198], 80000000h
0x8D8EFA: mov     edx, [ecx]
0x8D8EFC: push    eax
0x8D8EFD: call    dword ptr [edx+0Ch]
0x8D8F00: mov     edi, [esp+1C0h+var_19C]
0x8D8F04: xor     eax, eax
0x8D8F06: test    edi, edi
0x8D8F08: jle     short loc_8D8F22
0x8D8F0A: mov     ecx, [ebx+0Ch]
0x8D8F0D: mov     edx, [esp+1C0h+var_1A0]
0x8D8F11: mov     ebx, [edx+eax*4]
0x8D8F14: cmp     [ebx+8], ecx
0x8D8F17: jnz     short loc_8D8F34
0x8D8F19: inc     eax
0x8D8F1A: cmp     eax, edi
0x8D8F1C: jl      short loc_8D8F11
0x8D8F1E: mov     ebx, [esp+1C0h+var_1AC]
0x8D8F22: mov     ecx, [esi+4]
0x8D8F25: push    ecx
0x8D8F26: mov     ecx, [ebx+0Ch]
0x8D8F29: call    sub_89BAE0
0x8D8F2E: mov     edx, [esp+1C0h+var_1A0]
0x8D8F32: jmp     short loc_8D8F38
0x8D8F34: mov     ebx, [esp+1C0h+var_1AC]
0x8D8F38: mov     eax, [esp+1C0h+var_198]
0x8D8F3C: test    eax, eax
0x8D8F3E: js      loc_8D938C
0x8D8F44: mov     ecx, ds:0BA9DE4h
0x8D8F4A: mov     edi, large fs:2Ch
0x8D8F51: mov     ecx, [edi+ecx*4]
0x8D8F54: mov     ecx, [ecx+19Ch]
0x8D8F5A: test    ecx, ecx
0x8D8F5C: jnz     short loc_8D8F64
0x8D8F5E: mov     ecx, ds:0BA7D9Ch
0x8D8F64: and     eax, 3FFFFFFFh
0x8D8F69: push    14h
0x8D8F6B: shl     eax, 2
0x8D8F6E: push    eax
0x8D8F6F: push    edx
0x8D8F70: call    sub_8A75D0
0x8D8F75: jmp     loc_8D938C
0x8D8F7A: mov     eax, [esi+4]; jumptable 008D8C87 case 11
0x8D8F7D: mov     ecx, [eax+0Ch]
0x8D8F80: test    ecx, ecx
0x8D8F82: jz      loc_8D8E89
0x8D8F88: mov     ecx, [ebx+0Ch]
0x8D8F8B: push    eax
0x8D8F8C: call    sub_89CCC0
0x8D8F91: jmp     loc_8D8E89
0x8D8F96: mov     eax, [esi+4]; jumptable 008D8C87 case 12
0x8D8F99: mov     edx, [ebx+0Ch]
0x8D8F9C: cmp     [eax+8], edx
0x8D8F9F: jnz     short loc_8D8FD3
0x8D8FA1: mov     ecx, [esi+8]
0x8D8FA4: cmp     [ecx+8], edx
0x8D8FA7: jnz     short loc_8D8FD3
0x8D8FA9: mov     dl, [eax+91h]
0x8D8FAF: test    dl, dl
0x8D8FB1: jnz     short loc_8D8FD3
0x8D8FB3: mov     dl, [ecx+91h]
0x8D8FB9: test    dl, dl
0x8D8FBB: jnz     short loc_8D8FD3
0x8D8FBD: mov     edx, [eax+54h]
0x8D8FC0: cmp     edx, [ecx+54h]
0x8D8FC3: jz      short loc_8D8FD3
0x8D8FC5: push    ecx
0x8D8FC6: push    eax
0x8D8FC7: mov     eax, [eax+8]
0x8D8FCA: push    eax
0x8D8FCB: call    sub_8CD320
0x8D8FD0: add     esp, 0Ch
0x8D8FD3: mov     ecx, [esi+4]
0x8D8FD6: cmp     word ptr [ecx+4], 0
0x8D8FDB: jz      short loc_8D8FEE
0x8D8FDD: dec     word ptr [ecx+6]
0x8D8FE1: cmp     word ptr [ecx+6], 0
0x8D8FE6: jnz     short loc_8D8FEE
0x8D8FE8: mov     edx, [ecx]
0x8D8FEA: push    1
0x8D8FEC: call    dword ptr [edx]
0x8D8FEE: mov     esi, [esi+8]
0x8D8FF1: jmp     loc_8D8E8C
0x8D8FF6: mov     eax, [esi+4]; jumptable 008D8C87 case 13
0x8D8FF9: mov     ecx, [eax+8]
0x8D8FFC: test    ecx, ecx
0x8D8FFE: jnz     loc_8D938C
0x8D9004: mov     ecx, [ebx+0Ch]
0x8D9007: push    eax
0x8D9008: call    sub_899A50
0x8D900D: jmp     loc_8D938C
0x8D9012: mov     eax, [esi+4]; jumptable 008D8C87 case 14
0x8D9015: mov     ecx, [ebx+0Ch]
0x8D9018: cmp     [eax+8], ecx
0x8D901B: jnz     loc_8D8E89
0x8D9021: push    eax
0x8D9022: call    sub_899B30
0x8D9027: jmp     loc_8D8E89
0x8D902C: movzx   ecx, word ptr [esi+8]; jumptable 008D8C87 case 15
0x8D9030: mov     edx, [esi+4]
0x8D9033: mov     eax, [esp+1C0h+var_1AC]
0x8D9037: push    ecx
0x8D9038: mov     ecx, [eax+0Ch]
0x8D903B: push    edx
0x8D903C: call    sub_89CD00
0x8D9041: movzx   ecx, word ptr [esi+8]
0x8D9045: mov     edi, [esi+4]
0x8D9048: lea     ebx, [edi+ecx*4]
0x8D904B: cmp     edi, ebx
0x8D904D: jnb     loc_8D9401
0x8D9053: mov     ecx, [edi]
0x8D9055: cmp     word ptr [ecx+4], 0
0x8D905A: jz      short loc_8D906D
0x8D905C: dec     word ptr [ecx+6]
0x8D9060: cmp     word ptr [ecx+6], 0
0x8D9065: jnz     short loc_8D906D
0x8D9067: mov     edx, [ecx]
0x8D9069: push    1
0x8D906B: call    dword ptr [edx]
0x8D906D: add     edi, 4
0x8D9070: cmp     edi, ebx
0x8D9072: jb      short loc_8D9053
0x8D9074: jmp     loc_8D9401
0x8D9079: movzx   eax, word ptr [esi+8]; jumptable 008D8C87 case 16
0x8D907D: mov     ecx, [esi+4]
0x8D9080: mov     edx, [esp+1C0h+var_1AC]
0x8D9084: push    eax
0x8D9085: push    ecx
0x8D9086: mov     ecx, [edx+0Ch]
0x8D9089: call    sub_89D080
0x8D908E: movzx   eax, word ptr [esi+8]
0x8D9092: mov     edi, [esi+4]
0x8D9095: lea     ebx, [edi+eax*4]
0x8D9098: cmp     edi, ebx
0x8D909A: jnb     loc_8D9401
0x8D90A0: mov     ecx, [edi]
0x8D90A2: cmp     word ptr [ecx+4], 0
0x8D90A7: jz      short loc_8D90BA
0x8D90A9: dec     word ptr [ecx+6]
0x8D90AD: cmp     word ptr [ecx+6], 0
0x8D90B2: jnz     short loc_8D90BA
0x8D90B4: mov     edx, [ecx]
0x8D90B6: push    1
0x8D90B8: call    dword ptr [edx]
0x8D90BA: add     edi, 4
0x8D90BD: cmp     edi, ebx
0x8D90BF: jb      short loc_8D90A0
0x8D90C1: jmp     loc_8D9401
0x8D90C6: mov     eax, [esi+4]; jumptable 008D8C87 case 3
0x8D90C9: mov     ecx, [ebx+0Ch]
0x8D90CC: cmp     [eax+8], ecx
0x8D90CF: jnz     short loc_8D90DB
0x8D90D1: push    eax
0x8D90D2: push    ecx
0x8D90D3: call    sub_8CC570
0x8D90D8: add     esp, 8
0x8D90DB: mov     ecx, [esi+4]
0x8D90DE: call    sub_8BC730
0x8D90E3: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D90E8: mov     ecx, [esi+4]; jumptable 008D8C87 case 17
0x8D90EB: mov     eax, [ecx+8]
0x8D90EE: cmp     eax, [ebx+0Ch]
0x8D90F1: jnz     short loc_8D90FC
0x8D90F3: mov     edx, [esi+8]
0x8D90F6: push    edx
0x8D90F7: call    sub_8DE950
0x8D90FC: mov     ecx, [esi+4]
0x8D90FF: cmp     word ptr [ecx+4], 0
0x8D9104: jz      short loc_8D9117
0x8D9106: dec     word ptr [ecx+6]
0x8D910A: cmp     word ptr [ecx+6], 0
0x8D910F: jnz     short loc_8D9117
0x8D9111: mov     eax, [ecx]
0x8D9113: push    1
0x8D9115: call    dword ptr [eax]
0x8D9117: mov     ecx, ds:0BA7D98h
0x8D911D: mov     eax, [esi+8]
0x8D9120: mov     edx, [ecx]
0x8D9122: push    24h ; '$'
0x8D9124: push    20h ; ' '
0x8D9126: push    eax
0x8D9127: call    dword ptr [edx+14h]
0x8D912A: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D912F: mov     eax, [esi+4]; jumptable 008D8C87 case 18
0x8D9132: mov     ecx, [ebx+0Ch]
0x8D9135: cmp     [eax+8], ecx
0x8D9138: jnz     loc_8D8E89
0x8D913E: movzx   edx, byte ptr [esi+9]
0x8D9142: push    edx
0x8D9143: movzx   edx, byte ptr [esi+8]
0x8D9147: push    edx
0x8D9148: push    eax
0x8D9149: call    sub_89B630
0x8D914E: jmp     loc_8D8E89
0x8D9153: mov     eax, [esi+4]; jumptable 008D8C87 case 19
0x8D9156: mov     ecx, [ebx+0Ch]
0x8D9159: cmp     [eax+8], ecx
0x8D915C: jnz     loc_8D8E89
0x8D9162: movzx   edx, byte ptr [esi+8]
0x8D9166: push    edx
0x8D9167: push    eax
0x8D9168: call    sub_89B390
0x8D916D: jmp     loc_8D8E89
0x8D9172: movzx   ecx, byte ptr [esi+2]; jumptable 008D8C87 case 20
0x8D9176: movzx   edx, byte ptr [esi+1]
0x8D917A: push    ecx
0x8D917B: mov     ecx, [ebx+0Ch]
0x8D917E: push    edx
0x8D917F: call    sub_89BF50
0x8D9184: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D9189: mov     eax, [esi+4]; jumptable 008D8C87 case 21
0x8D918C: push    eax
0x8D918D: call    sub_8A9D10
0x8D9192: add     esp, 4
0x8D9195: jmp     loc_8D9352
0x8D919A: mov     eax, [esi+8]; jumptable 008D8C87 case 23
0x8D919D: lea     ecx, [eax+10h]
0x8D91A0: push    ecx
0x8D91A1: mov     ecx, [esi+4]
0x8D91A4: push    eax
0x8D91A5: call    sub_8A9E20
0x8D91AA: mov     ecx, ds:0BA7D98h
0x8D91B0: mov     eax, [esi+8]
0x8D91B3: mov     edx, [ecx]
0x8D91B5: push    4
0x8D91B7: push    20h ; ' '
0x8D91B9: push    eax
0x8D91BA: call    dword ptr [edx+14h]
0x8D91BD: mov     ecx, [esi+4]
0x8D91C0: cmp     word ptr [ecx+4], 0
0x8D91C5: jz      loc_8D8D7A
0x8D91CB: dec     word ptr [ecx+6]
0x8D91CF: cmp     word ptr [ecx+6], 0
0x8D91D4: jnz     loc_8D8D7A
0x8D91DA: mov     edx, [ecx]
0x8D91DC: push    1
0x8D91DE: call    dword ptr [edx]
0x8D91E0: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D91E5: mov     ecx, [esi+0Ch]; jumptable 008D8C87 case 24
0x8D91E8: mov     edi, [esi+4]
0x8D91EB: mov     eax, [esi+8]
0x8D91EE: mov     edx, [esi+10h]
0x8D91F1: mov     [esp+1C0h+var_15C], ecx
0x8D91F5: mov     ecx, edi
0x8D91F7: mov     [esp+1C0h+var_160], eax
0x8D91FB: mov     [esp+1C0h+var_158], edx
0x8D91FF: mov     [esp+1C0h+var_154], 0
0x8D9207: call    sub_8A6410
0x8D920C: mov     ecx, [edi+50h]
0x8D920F: mov     eax, [ecx]
0x8D9211: lea     edx, [esp+1C0h+var_160]
0x8D9215: push    edx
0x8D9216: call    dword ptr [eax+54h]
0x8D9219: jmp     loc_8D942B
0x8D921E: mov     ecx, [esi+8]; jumptable 008D8C87 case 25
0x8D9221: mov     edi, [esi+4]
0x8D9224: mov     edx, [esi+0Ch]
0x8D9227: mov     eax, [esi+10h]
0x8D922A: mov     [esp+1C0h+var_190], ecx
0x8D922E: mov     ecx, edi
0x8D9230: mov     [esp+1C0h+var_18C], edx
0x8D9234: mov     [esp+1C0h+var_188], eax
0x8D9238: mov     [esp+1C0h+var_184], 0
0x8D9240: call    sub_8A6410
0x8D9245: mov     ecx, [edi+50h]
0x8D9248: mov     edx, [ecx]
0x8D924A: lea     eax, [esp+1C0h+var_190]
0x8D924E: push    eax
0x8D924F: call    dword ptr [edx+58h]
0x8D9252: jmp     loc_8D9352
0x8D9257: mov     ecx, [esi+0Ch]; jumptable 008D8C87 case 26
0x8D925A: mov     edi, [esi+4]
0x8D925D: mov     eax, [esi+8]
0x8D9260: mov     edx, [esi+10h]
0x8D9263: mov     [esp+1C0h+var_17C], ecx
0x8D9267: mov     ecx, edi
0x8D9269: mov     [esp+1C0h+var_180], eax
0x8D926D: mov     [esp+1C0h+var_178], edx
0x8D9271: mov     [esp+1C0h+var_174], 0
0x8D9279: call    sub_8A6410
0x8D927E: mov     ecx, [edi+50h]
0x8D9281: mov     eax, [ecx]
0x8D9283: lea     edx, [esp+1C0h+var_180]
0x8D9287: push    edx
0x8D9288: call    dword ptr [eax+5Ch]
0x8D928B: jmp     loc_8D942B
0x8D9290: mov     edi, [esi+8]; jumptable 008D8C87 case 27
0x8D9293: mov     ebx, [esi+4]
0x8D9296: lea     ecx, [edi+10h]
0x8D9299: mov     [esp+1C0h+var_194], ecx
0x8D929D: mov     ecx, ebx
0x8D929F: call    sub_8A6410
0x8D92A4: mov     ecx, [ebx+50h]
0x8D92A7: mov     eax, [esp+1C0h+var_194]
0x8D92AB: mov     edx, [ecx]
0x8D92AD: push    edi
0x8D92AE: push    eax
0x8D92AF: call    dword ptr [edx+60h]
0x8D92B2: mov     ecx, ds:0BA7D98h
0x8D92B8: mov     eax, [esi+8]
0x8D92BB: mov     edx, [ecx]
0x8D92BD: push    4
0x8D92BF: push    20h ; ' '
0x8D92C1: push    eax
0x8D92C2: call    dword ptr [edx+14h]
0x8D92C5: mov     ecx, [esi+4]
0x8D92C8: cmp     word ptr [ecx+4], 0
0x8D92CD: jz      loc_8D8D7A
0x8D92D3: dec     word ptr [ecx+6]
0x8D92D7: cmp     word ptr [ecx+6], 0
0x8D92DC: jnz     loc_8D8D7A
0x8D92E2: mov     edx, [ecx]
0x8D92E4: push    1
0x8D92E6: call    dword ptr [edx]
0x8D92E8: jmp     loc_8D8D7A
0x8D92ED: mov     ecx, [esi+0Ch]; jumptable 008D8C87 case 28
0x8D92F0: mov     edi, [esi+4]
0x8D92F3: mov     eax, [esi+8]
0x8D92F6: mov     edx, [esi+10h]
0x8D92F9: mov     [esp+1C0h+var_16C], ecx
0x8D92FD: mov     ecx, edi
0x8D92FF: mov     [esp+1C0h+var_170], eax
0x8D9303: mov     [esp+1C0h+var_168], edx
0x8D9307: mov     [esp+1C0h+var_164], 0
0x8D930F: call    sub_8A6410
0x8D9314: mov     ecx, [edi+50h]
0x8D9317: mov     eax, [ecx]
0x8D9319: lea     edx, [esp+1C0h+var_170]
0x8D931D: push    edx
0x8D931E: call    dword ptr [eax+64h]
0x8D9321: jmp     loc_8D942B
0x8D9326: mov     ecx, [esi+4]; jumptable 008D8C87 case 31
0x8D9329: push    ecx
0x8D932A: mov     ecx, [ebx+0Ch]
0x8D932D: call    sub_8998A0
0x8D9332: mov     ecx, ds:0BA7D98h
0x8D9338: mov     eax, [esi+4]
0x8D933B: mov     edx, [ecx]
0x8D933D: push    4
0x8D933F: push    20h ; ' '
0x8D9341: push    eax
0x8D9342: call    dword ptr [edx+14h]
0x8D9345: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D934A: mov     ecx, [esi+4]; jumptable 008D8C87 case 32
0x8D934D: call    sub_8A6410
0x8D9352: mov     esi, [esi+4]
0x8D9355: cmp     word ptr [esi+4], 0
0x8D935A: jz      loc_8D8D7A
0x8D9360: dec     word ptr [esi+6]
0x8D9364: cmp     word ptr [esi+6], 0
0x8D9369: jnz     loc_8D8D7A
0x8D936F: mov     edx, [esi]
0x8D9371: mov     ecx, esi
0x8D9373: push    1
0x8D9375: call    dword ptr [edx]
0x8D9377: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D937C: mov     ecx, [esi+4]; jumptable 008D8C87 case 33
0x8D937F: mov     eax, [ecx+8]
0x8D9382: cmp     eax, [ebx+0Ch]
0x8D9385: jnz     short loc_8D938C
0x8D9387: call    sub_8A6440
0x8D938C: mov     esi, [esi+4]
0x8D938F: cmp     word ptr [esi+4], 0
0x8D9394: jz      def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D939A: dec     word ptr [esi+6]
0x8D939E: cmp     word ptr [esi+6], 0
0x8D93A3: jnz     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D93A9: mov     edx, [esi]
0x8D93AB: push    1
0x8D93AD: mov     ecx, esi
0x8D93AF: call    dword ptr [edx]
0x8D93B1: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
0x8D93B6: mov     eax, [esp+1C0h+var_1AC]; jumptable 008D8C87 case 22
0x8D93BA: mov     eax, [eax+0Ch]
0x8D93BD: mov     ecx, [eax+8]
0x8D93C0: mov     edx, [ecx]
0x8D93C2: push    eax
0x8D93C3: movzx   eax, word ptr [esi+8]
0x8D93C7: push    eax
0x8D93C8: mov     eax, [esi+4]
0x8D93CB: push    eax
0x8D93CC: call    dword ptr [edx+14h]
0x8D93CF: movzx   ecx, word ptr [esi+8]
0x8D93D3: mov     edi, [esi+4]
0x8D93D6: lea     ebx, [edi+ecx*4]
0x8D93D9: cmp     edi, ebx
0x8D93DB: jnb     short loc_8D9401
0x8D93DD: lea     ecx, [ecx+0]
0x8D93E0: mov     ecx, [edi]
0x8D93E2: cmp     word ptr [ecx+4], 0
0x8D93E7: jz      short loc_8D93FA
0x8D93E9: dec     word ptr [ecx+6]
0x8D93ED: cmp     word ptr [ecx+6], 0
0x8D93F2: jnz     short loc_8D93FA
0x8D93F4: mov     edx, [ecx]
0x8D93F6: push    1
0x8D93F8: call    dword ptr [edx]
0x8D93FA: add     edi, 4
0x8D93FD: cmp     edi, ebx
0x8D93FF: jb      short loc_8D93E0
0x8D9401: movzx   edx, word ptr [esi+8]
0x8D9405: mov     ecx, ds:0BA7D98h
0x8D940B: mov     eax, [ecx]
0x8D940D: push    4
0x8D940F: shl     edx, 2
0x8D9412: push    edx
0x8D9413: mov     edx, [esi+4]
0x8D9416: push    edx
0x8D9417: call    dword ptr [eax+14h]
0x8D941A: jmp     loc_8D8D7A
0x8D941F: mov     ecx, [esi+4]; jumptable 008D8C87 case 34
0x8D9422: mov     edx, [esi+8]
0x8D9425: mov     eax, [ecx]
0x8D9427: push    edx
0x8D9428: call    dword ptr [eax+8]
0x8D942B: mov     esi, [esi+4]
0x8D942E: cmp     word ptr [esi+4], 0
0x8D9433: jz      loc_8D8D7A
0x8D9439: dec     word ptr [esi+6]
0x8D943D: cmp     word ptr [esi+6], 0
0x8D9442: jnz     loc_8D8D7A
0x8D9448: mov     eax, [esi]
0x8D944A: push    1
0x8D944C: mov     ecx, esi
0x8D944E: call    dword ptr [eax]
0x8D9450: jmp     def_8D8C87; jumptable 008D8C87 default case, cases 29,30
