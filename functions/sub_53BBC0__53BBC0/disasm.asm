0x53BBC0: push    ebp
0x53BBC1: push    esi
0x53BBC2: push    edi
0x53BBC3: push    3
0x53BBC5: mov     ebp, ecx
0x53BBC7: call    nullsub_returnTrue_0arg
0x53BBCC: add     esp, 4
0x53BBCF: xor     edi, edi
0x53BBD1: mov     esi, [ebp+edi*4+10h]
0x53BBD5: test    esi, esi
0x53BBD7: jz      short loc_53BBFD
0x53BBD9: lea     eax, [esi+4]
0x53BBDC: push    eax; lpAddend
0x53BBDD: call    dword ptr ds:0A2807Ch
0x53BBE3: test    eax, eax
0x53BBE5: jnz     short loc_53BBF5
0x53BBE7: test    esi, esi
0x53BBE9: jz      short loc_53BBF5
0x53BBEB: mov     edx, [esi]
0x53BBED: mov     eax, [edx]
0x53BBEF: push    1
0x53BBF1: mov     ecx, esi
0x53BBF3: call    eax
0x53BBF5: mov     dword ptr [ebp+edi*4+10h], 0
0x53BBFD: mov     ecx, [ebp+edi*4+8]
0x53BC01: test    ecx, ecx
0x53BC03: jz      short loc_53BC4B
0x53BC05: push    4
0x53BC07: call    NiNode_GetNiPropertyByID
0x53BC0C: mov     esi, eax
0x53BC0E: test    esi, esi
0x53BC10: jz      short loc_53BC4B
0x53BC12: mov     edx, [esi]
0x53BC14: mov     eax, [edx+4]
0x53BC17: mov     ecx, esi
0x53BC19: call    eax
0x53BC1B: test    eax, eax
0x53BC1D: jz      short loc_53BC2E
0x53BC1F: nop
0x53BC20: cmp     eax, offset dword_B4335C
0x53BC25: jz      short loc_53BC70
0x53BC27: mov     eax, [eax+4]
0x53BC2A: test    eax, eax
0x53BC2C: jnz     short loc_53BC20
0x53BC2E: xor     al, al
0x53BC30: neg     al
0x53BC32: sbb     eax, eax
0x53BC34: and     eax, esi
0x53BC36: mov     esi, eax
0x53BC38: jz      short loc_53BC4B
0x53BC3A: push    0; a2
0x53BC3C: mov     ecx, esi; this
0x53BC3E: call    sub_802890
0x53BC43: fldz
0x53BC45: fstp    dword ptr [esi+80h]
0x53BC4B: lea     eax, [edi+1]
0x53BC4E: xor     edx, edx
0x53BC50: mov     ecx, 3
0x53BC55: div     ecx
0x53BC57: mov     edi, edx
0x53BC59: cmp     edi, 2
0x53BC5C: jl      loc_53BBD1
0x53BC62: push    2
0x53BC64: call    nullsub_returnTrue_0arg
0x53BC69: add     esp, 4
0x53BC6C: pop     edi
0x53BC6D: pop     esi
0x53BC6E: pop     ebp
0x53BC6F: retn
0x53BC70: mov     al, 1
0x53BC72: jmp     short loc_53BC30
