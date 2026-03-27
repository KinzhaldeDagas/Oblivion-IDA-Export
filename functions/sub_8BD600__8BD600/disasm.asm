0x8BD600: push    esi
0x8BD601: mov     esi, ecx
0x8BD603: mov     eax, [esi+14h]
0x8BD606: test    eax, eax
0x8BD608: js      short loc_8BD641
0x8BD60A: mov     ecx, ds:0BA9DE4h
0x8BD610: mov     edx, large fs:2Ch
0x8BD617: mov     ecx, [edx+ecx*4]
0x8BD61A: mov     ecx, [ecx+19Ch]
0x8BD620: test    ecx, ecx
0x8BD622: jnz     short loc_8BD62A
0x8BD624: mov     ecx, ds:0BA7D9Ch
0x8BD62A: mov     edx, [esi+0Ch]
0x8BD62D: and     eax, 3FFFFFFFh
0x8BD632: add     eax, eax
0x8BD634: add     eax, eax
0x8BD636: push    14h
0x8BD638: add     eax, eax
0x8BD63A: push    eax
0x8BD63B: push    edx
0x8BD63C: call    sub_8A75D0
0x8BD641: test    [esp+4+arg_0], 1
0x8BD646: jz      short loc_8BD65F
0x8BD648: test    esi, esi
0x8BD64A: jz      short loc_8BD65F
0x8BD64C: movzx   eax, byte ptr [esi-1]
0x8BD650: mov     ecx, esi
0x8BD652: sub     ecx, eax
0x8BD654: push    ecx; void *
0x8BD655: mov     ecx, offset FormHeap
0x8BD65A: call    MemoryHeap_Free_checked
0x8BD65F: mov     eax, esi
0x8BD661: pop     esi
0x8BD662: retn    4
