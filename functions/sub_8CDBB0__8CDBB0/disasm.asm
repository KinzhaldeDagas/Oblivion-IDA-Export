0x8CDBB0: push    esi
0x8CDBB1: mov     esi, ecx
0x8CDBB3: mov     eax, [esi+94h]
0x8CDBB9: test    eax, eax
0x8CDBBB: jnz     short loc_8CDC28
0x8CDBBD: mov     eax, [esi+98h]
0x8CDBC3: test    eax, eax
0x8CDBC5: js      short loc_8CDBFE
0x8CDBC7: mov     ecx, ds:0BA9DE4h
0x8CDBCD: mov     edx, large fs:2Ch
0x8CDBD4: mov     ecx, [edx+ecx*4]
0x8CDBD7: mov     ecx, [ecx+19Ch]
0x8CDBDD: test    ecx, ecx
0x8CDBDF: jnz     short loc_8CDBE7
0x8CDBE1: mov     ecx, ds:0BA7D9Ch
0x8CDBE7: mov     edx, [esi+90h]
0x8CDBED: and     eax, 3FFFFFFFh
0x8CDBF2: push    14h
0x8CDBF4: shl     eax, 2
0x8CDBF7: push    eax
0x8CDBF8: push    edx
0x8CDBF9: call    sub_8A75D0
0x8CDBFE: mov     eax, [esi+98h]
0x8CDC04: and     eax, 0C0000000h
0x8CDC09: or      eax, 80000000h
0x8CDC0E: mov     dword ptr [esi+90h], 0
0x8CDC18: mov     dword ptr [esi+94h], 0
0x8CDC22: mov     [esi+98h], eax
0x8CDC28: mov     ecx, esi
0x8CDC2A: pop     esi
0x8CDC2B: jmp     sub_8DE800
