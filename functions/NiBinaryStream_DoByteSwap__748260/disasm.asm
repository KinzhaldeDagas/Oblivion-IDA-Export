0x748260: cmp     [esp+arg_4], 0
0x748265: push    esi
0x748266: mov     esi, [esp+4+arg_0]
0x74826A: mov     [esp+4+arg_0], 0
0x748272: jbe     short loc_7482EC
0x748274: push    ebp
0x748275: mov     ebp, [esp+8+arg_C]
0x748279: push    ebx
0x74827A: push    edi
0x74827B: jmp     short loc_748280
0x74827D: align 10h
0x748280: xor     ebx, ebx
0x748282: test    ebp, ebp
0x748284: jbe     short loc_7482DF
0x748286: mov     eax, [esp+10h+arg_8]
0x74828A: mov     edi, [eax+ebx*4]
0x74828D: lea     eax, [edi-1]; switch 8 cases
0x748290: cmp     eax, 7
0x748293: ja      short NiBinaryStream_DoByteSwap___def_748295; jumptable 00748295 default case, cases 3,5-7
0x748295: jmp     ds:jpt_748295[eax*4]; switch jump
0x74829C: mov     cl, [esi+1]; jumptable 00748295 case 2
0x74829F: mov     al, [esi]
0x7482A1: mov     [esi], cl
0x7482A3: mov     [esi+1], al
0x7482A6: jmp     short NiBinaryStream_DoByteSwap___def_748295; jumptable 00748295 default case, cases 3,5-7
0x7482A8: mov     al, [esi]; jumptable 00748295 case 4
0x7482AA: mov     dl, [esi+3]
0x7482AD: mov     [esi], dl
0x7482AF: mov     [esi+3], al
0x7482B2: mov     cl, [esi+2]
0x7482B5: mov     al, [esi+1]
0x7482B8: mov     [esi+1], cl
0x7482BB: mov     [esi+2], al
0x7482BE: jmp     short NiBinaryStream_DoByteSwap___def_748295; jumptable 00748295 default case, cases 3,5-7
0x7482C0: push    1; jumptable 00748295 case 8
0x7482C2: push    esi
0x7482C3: call    NiBinaryStream_SwapByteHelper
0x7482C8: add     esp, 8
0x7482CB: jmp     short NiBinaryStream_DoByteSwap___def_748295; jumptable 00748295 default case, cases 3,5-7
0x7482CD: cmp     ebp, 1; jumptable 00748295 case 1
0x7482D0: jz      short loc_7482E9
0x7482D2: add     [esp+10h+arg_0], edi; jumptable 00748295 default case, cases 3,5-7
0x7482D6: add     ebx, 1
0x7482D9: add     esi, edi
0x7482DB: cmp     ebx, ebp
0x7482DD: jb      short loc_748286
0x7482DF: mov     edx, [esp+10h+arg_4]
0x7482E3: cmp     [esp+10h+arg_0], edx
0x7482E7: jb      short loc_748280
0x7482E9: pop     edi
0x7482EA: pop     ebx
0x7482EB: pop     ebp
0x7482EC: pop     esi
0x7482ED: retn
