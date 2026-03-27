0x5E0270: push    esi
0x5E0271: mov     esi, ecx
0x5E0273: cmp     dword ptr [esi+58h], 0
0x5E0277: jz      short loc_5E02A4
0x5E0279: mov     ecx, [esi+58h]
0x5E027C: mov     eax, [ecx]
0x5E027E: mov     edx, [esp+4+arg_0]
0x5E0282: mov     eax, [eax+0BCh]
0x5E0288: push    edx
0x5E0289: call    eax
0x5E028B: mov     ecx, [esi+58h]
0x5E028E: mov     edx, [ecx]
0x5E0290: mov     eax, [edx+68h]
0x5E0293: push    1
0x5E0295: call    eax
0x5E0297: mov     ecx, [esi+58h]
0x5E029A: mov     edx, [ecx]
0x5E029C: mov     eax, [edx+350h]
0x5E02A2: call    eax
0x5E02A4: pop     esi
0x5E02A5: retn    4
