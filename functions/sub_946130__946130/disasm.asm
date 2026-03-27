0x946130: push    ebx
0x946131: push    ebp
0x946132: push    esi
0x946133: push    edi
0x946134: mov     esi, ecx
0x946136: mov     ecx, [esi+14h]
0x946139: push    11h
0x94613B: call    sub_918440
0x946140: mov     eax, [esi+2Ch]
0x946143: mov     ecx, [eax+48h]
0x946146: test    ecx, ecx
0x946148: mov     ebx, [esp+10h+arg_4]
0x94614C: mov     ebp, [esp+10h+arg_0]
0x946150: mov     edi, ebx
0x946152: jz      short loc_946179
0x946154: lea     ecx, [esp+10h+arg_4]
0x946158: push    ecx
0x946159: mov     ecx, ebx
0x94615B: call    sub_90D380
0x946160: cmp     byte ptr [eax], 0
0x946163: jz      short loc_946179
0x946165: mov     edx, [esi+2Ch]
0x946168: mov     ecx, [edx+48h]
0x94616B: mov     eax, [ecx]
0x94616D: push    ebp
0x94616E: call    dword ptr [eax+0Ch]
0x946171: mov     edi, eax
0x946173: test    edi, edi
0x946175: jnz     short loc_946179
0x946177: mov     edi, ebx
0x946179: mov     ecx, [esi+14h]
0x94617C: push    21h ; '!'
0x94617E: call    sub_9181B0
0x946183: mov     ecx, [esi+14h]
0x946186: push    0
0x946188: push    ebp
0x946189: call    sub_918460
0x94618E: mov     ecx, [esi+14h]
0x946191: push    0
0x946193: push    edi
0x946194: call    sub_918460
0x946199: pop     edi
0x94619A: pop     esi
0x94619B: pop     ebp
0x94619C: mov     eax, 11h
0x9461A1: pop     ebx
0x9461A2: retn    8
