0x899210: push    ecx
0x899211: push    ebx
0x899212: mov     ebx, ds:0BA9DE4h
0x899218: push    esi
0x899219: push    edi
0x89921A: mov     edi, large fs:2Ch
0x899221: mov     eax, [edi+ebx*4]
0x899224: mov     edx, [eax+1A4h]
0x89922A: cmp     edx, [eax+1A8h]
0x899230: jnb     short loc_899258
0x899232: push    ebp
0x899233: mov     ebp, eax
0x899235: mov     esi, [ebp+1A4h]
0x89923B: mov     dword ptr [esi], offset aTtpendingops; "TtPendingOps"
0x899241: rdtsc
0x899243: mov     [esp+14h+var_4], eax
0x899247: mov     eax, [esp+14h+var_4]
0x89924B: mov     [esi+4], eax
0x89924E: add     esi, 0Ch
0x899251: mov     [ebp+1A4h], esi
0x899257: pop     ebp
0x899258: mov     dword ptr [ecx+84h], 0
0x899262: mov     ecx, [ecx+80h]
0x899268: call    sub_8D8BF0
0x89926D: mov     eax, [edi+ebx*4]
0x899270: mov     ecx, [eax+1A4h]
0x899276: cmp     ecx, [eax+1A8h]
0x89927C: jnb     short loc_8992A2
0x89927E: mov     edi, eax
0x899280: mov     ecx, [edi+1A4h]
0x899286: mov     dword ptr [ecx], offset aEt; "Et"
0x89928C: rdtsc
0x89928E: mov     [esp+10h+var_4], eax
0x899292: mov     edx, [esp+10h+var_4]
0x899296: mov     [ecx+4], edx
0x899299: add     ecx, 0Ch
0x89929C: mov     [edi+1A4h], ecx
0x8992A2: pop     edi
0x8992A3: pop     esi
0x8992A4: pop     ebx
0x8992A5: pop     ecx
0x8992A6: retn
