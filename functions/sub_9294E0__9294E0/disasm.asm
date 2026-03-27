0x9294E0: push    ebx
0x9294E1: mov     ebx, large fs:2Ch
0x9294E8: push    esi
0x9294E9: mov     esi, ecx
0x9294EB: mov     eax, [esi+34h]
0x9294EE: test    eax, eax
0x9294F0: push    edi
0x9294F1: mov     edi, ds:0BA9DE4h
0x9294F7: js      short loc_929520
0x9294F9: mov     ecx, [ebx+edi*4]
0x9294FC: mov     ecx, [ecx+19Ch]
0x929502: test    ecx, ecx
0x929504: jnz     short loc_92950C
0x929506: mov     ecx, ds:0BA7D9Ch
0x92950C: mov     edx, [esi+2Ch]
0x92950F: and     eax, 3FFFFFFFh
0x929514: push    14h
0x929516: shl     eax, 2
0x929519: push    eax
0x92951A: push    edx
0x92951B: call    sub_8A75D0
0x929520: mov     eax, [esi+28h]
0x929523: test    eax, eax
0x929525: js      short loc_92954E
0x929527: mov     ecx, [ebx+edi*4]
0x92952A: mov     ecx, [ecx+19Ch]
0x929530: test    ecx, ecx
0x929532: jnz     short loc_92953A
0x929534: mov     ecx, ds:0BA7D9Ch
0x92953A: mov     edx, [esi+20h]
0x92953D: and     eax, 3FFFFFFFh
0x929542: push    14h
0x929544: shl     eax, 4
0x929547: push    eax
0x929548: push    edx
0x929549: call    sub_8A75D0
0x92954E: pop     edi
0x92954F: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x929555: pop     esi
0x929556: pop     ebx
0x929557: retn
