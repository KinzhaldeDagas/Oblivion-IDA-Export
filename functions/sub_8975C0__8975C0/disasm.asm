0x8975C0: push    esi
0x8975C1: mov     esi, [esp+4+arg_0]
0x8975C5: xor     al, al
0x8975C7: test    esi, esi
0x8975C9: jz      short loc_8975F8
0x8975CB: mov     eax, [esp+4+arg_4]
0x8975CF: test    eax, eax
0x8975D1: jz      short loc_8975E1
0x8975D3: mov     edx, [esi]
0x8975D5: push    eax
0x8975D6: mov     eax, [edx+58h]
0x8975D9: mov     ecx, esi
0x8975DB: call    eax
0x8975DD: test    eax, eax
0x8975DF: jnz     short loc_8975E3
0x8975E1: mov     eax, esi
0x8975E3: fldz
0x8975E5: fcomp   dword ptr [eax+84h]
0x8975EB: fnstsw  ax
0x8975ED: test    ah, 5
0x8975F0: jp      short loc_8975F6
0x8975F2: mov     al, 1
0x8975F4: pop     esi
0x8975F5: retn
0x8975F6: xor     al, al
0x8975F8: pop     esi
0x8975F9: retn
