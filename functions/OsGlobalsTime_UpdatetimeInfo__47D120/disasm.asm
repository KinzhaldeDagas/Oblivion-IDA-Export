0x47D120: push    esi
0x47D121: mov     esi, ecx
0x47D123: mov     al, [esi]
0x47D125: mov     cl, al
0x47D127: add     cl, 1
0x47D12A: test    al, al
0x47D12C: mov     [esi], cl
0x47D12E: jnz     short loc_47D144
0x47D130: call    dword ptr ds:0A280D0h
0x47D136: mov     edx, eax
0x47D138: sub     edx, [esi+10h]
0x47D13B: sub     eax, [esi+14h]
0x47D13E: mov     [esi+10h], edx
0x47D141: mov     [esi+14h], eax
0x47D144: pop     esi
0x47D145: retn
