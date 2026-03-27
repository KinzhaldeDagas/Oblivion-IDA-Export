0x8FF060: push    esi
0x8FF061: mov     esi, [esp+4+arg_4]
0x8FF065: movzx   ecx, byte ptr [esi+0Eh]
0x8FF069: add     esi, 0Ch
0x8FF06C: xor     eax, eax
0x8FF06E: test    ecx, ecx
0x8FF070: jle     short loc_8FF09B
0x8FF072: push    edi
0x8FF073: mov     di, [esp+8+arg_8]
0x8FF078: lea     edx, [esi+6]
0x8FF07B: jmp     short loc_8FF080
0x8FF07D: align 10h
0x8FF080: cmp     [edx], di
0x8FF083: jz      short loc_8FF090
0x8FF085: inc     eax
0x8FF086: add     edx, 8
0x8FF089: cmp     eax, ecx
0x8FF08B: jl      short loc_8FF080
0x8FF08D: pop     edi
0x8FF08E: pop     esi
0x8FF08F: retn
0x8FF090: push    eax
0x8FF091: push    esi
0x8FF092: call    sub_939B00
0x8FF097: add     esp, 8
0x8FF09A: pop     edi
0x8FF09B: pop     esi
0x8FF09C: retn
