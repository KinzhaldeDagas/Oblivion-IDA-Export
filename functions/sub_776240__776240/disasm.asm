0x776240: push    ebx
0x776241: push    esi
0x776242: mov     esi, ecx
0x776244: mov     ecx, [esi+24h]
0x776247: mov     eax, [ecx]
0x776249: mov     edx, [eax+64h]
0x77624C: xor     ebx, ebx
0x77624E: push    ebx
0x77624F: push    ebx
0x776250: push    8Bh ; '‹'
0x776255: call    edx
0x776257: mov     ecx, [esi+24h]
0x77625A: mov     eax, [ecx]
0x77625C: mov     edx, [eax+64h]
0x77625F: push    ebx
0x776260: push    ebx
0x776261: push    89h ; '‰'
0x776266: call    edx
0x776268: mov     ecx, [esi+24h]
0x77626B: push    ebx
0x77626C: mov     [esi+34h], ebx
0x77626F: mov     [esi+31h], bl
0x776272: mov     [esi+38h], ebx
0x776275: mov     eax, [ecx]
0x776277: mov     edx, [eax+64h]
0x77627A: push    ebx
0x77627B: push    94h ; '”'
0x776280: call    edx
0x776282: mov     ecx, [esi+24h]
0x776285: mov     eax, [ecx]
0x776287: mov     edx, [eax+64h]
0x77628A: push    ebx
0x77628B: push    ebx
0x77628C: push    93h ; '“'
0x776291: call    edx
0x776293: mov     ecx, [esi+24h]
0x776296: mov     eax, [ecx]
0x776298: mov     edx, [eax+64h]
0x77629B: push    ebx
0x77629C: push    ebx
0x77629D: push    91h ; '‘'
0x7762A2: call    edx
0x7762A4: mov     eax, [esi+28h]
0x7762A7: mov     [esi+30h], bl
0x7762AA: mov     [esi+2Ch], eax
0x7762AD: pop     esi
0x7762AE: pop     ebx
0x7762AF: retn
