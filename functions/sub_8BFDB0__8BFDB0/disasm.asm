0x8BFDB0: push    0FFFFFFFFh
0x8BFDB2: push    offset SEH_9266B0
0x8BFDB7: mov     eax, large fs:0
0x8BFDBD: push    eax
0x8BFDBE: push    ecx
0x8BFDBF: push    esi
0x8BFDC0: mov     eax, ds:0B30AACh
0x8BFDC5: xor     eax, esp
0x8BFDC7: push    eax
0x8BFDC8: lea     eax, [esp+18h+var_C]
0x8BFDCC: mov     large fs:0, eax
0x8BFDD2: mov     esi, ecx
0x8BFDD4: cmp     dword ptr [esi+4], 0
0x8BFDD8: jnz     short loc_8BFE0A
0x8BFDDA: mov     ecx, ds:0BA7D98h
0x8BFDE0: mov     eax, [ecx]
0x8BFDE2: mov     edx, [eax+10h]
0x8BFDE5: push    29h ; ')'
0x8BFDE7: push    0A0h ; ' '
0x8BFDEC: call    edx
0x8BFDEE: mov     word ptr [eax+4], 0A0h ; ' '
0x8BFDF4: mov     [esp+18h+var_10], eax
0x8BFDF8: mov     ecx, eax
0x8BFDFA: mov     [esp+18h+var_4], 0
0x8BFE02: call    sub_9107C0
0x8BFE07: mov     [esi+4], eax
0x8BFE0A: mov     eax, 0A0h ; ' '
0x8BFE0F: mov     ecx, [esp+18h+var_C]
0x8BFE13: mov     large fs:0, ecx
0x8BFE1A: pop     ecx
0x8BFE1B: pop     esi
0x8BFE1C: add     esp, 10h
0x8BFE1F: retn
