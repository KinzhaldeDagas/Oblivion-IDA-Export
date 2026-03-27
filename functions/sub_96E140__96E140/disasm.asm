0x96E140: mov     eax, [esp+arg_4]
0x96E144: push    esi
0x96E145: push    edi
0x96E146: mov     edi, [esp+8+arg_0]
0x96E14A: push    eax
0x96E14B: push    edi
0x96E14C: mov     esi, ecx
0x96E14E: call    sub_733850
0x96E153: mov     ecx, [esi+24h]
0x96E156: mov     [edi+24h], ecx
0x96E159: mov     edx, [esi+28h]
0x96E15C: mov     [edi+28h], edx
0x96E15F: cmp     dword ptr [esi+2Ch], 0
0x96E163: jz      short loc_96E177
0x96E165: mov     ecx, [esi+2Ch]
0x96E168: mov     eax, [ecx]
0x96E16A: mov     edx, [eax+1Ch]
0x96E16D: call    edx
0x96E16F: push    eax
0x96E170: mov     ecx, edi
0x96E172: call    sub_96D890
0x96E177: cmp     dword ptr [esi+34h], 0
0x96E17B: jz      short loc_96E19A
0x96E17D: cmp     dword ptr [edi+40h], 0
0x96E181: jnz     short loc_96E191
0x96E183: mov     ecx, edi
0x96E185: call    sub_96DCD0
0x96E18A: mov     ecx, edi
0x96E18C: call    sub_96DD40
0x96E191: push    1
0x96E193: mov     ecx, edi
0x96E195: call    sub_96DEF0
0x96E19A: pop     edi
0x96E19B: pop     esi
0x96E19C: retn    8
