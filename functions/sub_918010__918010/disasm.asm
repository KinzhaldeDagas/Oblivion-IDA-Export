0x918010: push    ebx
0x918011: push    ebp
0x918012: push    esi
0x918013: push    edi
0x918014: mov     edi, [esp+10h+arg_4]
0x918018: xor     esi, esi
0x91801A: test    edi, edi
0x91801C: mov     ebx, ecx
0x91801E: jle     short loc_91803F
0x918020: mov     ebp, [esp+10h+arg_0]
0x918024: mov     ecx, [ebx+8]
0x918027: mov     eax, [ecx]
0x918029: mov     edx, edi
0x91802B: sub     edx, esi
0x91802D: push    edx
0x91802E: lea     edx, [esi+ebp]
0x918031: push    edx
0x918032: call    dword ptr [eax+10h]
0x918035: add     esi, eax
0x918037: test    eax, eax
0x918039: jz      short loc_918048
0x91803B: cmp     esi, edi
0x91803D: jl      short loc_918024
0x91803F: mov     eax, edi
0x918041: pop     edi
0x918042: pop     esi
0x918043: pop     ebp
0x918044: pop     ebx
0x918045: retn    8
0x918048: pop     edi
0x918049: mov     eax, esi
0x91804B: pop     esi
0x91804C: pop     ebp
0x91804D: pop     ebx
0x91804E: retn    8
