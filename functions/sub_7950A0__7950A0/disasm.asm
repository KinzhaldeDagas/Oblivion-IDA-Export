0x7950A0: mov     eax, [esp+arg_C]
0x7950A4: push    ebx
0x7950A5: push    esi
0x7950A6: mov     esi, ecx
0x7950A8: mov     edx, [esi+4]
0x7950AB: test    edx, edx
0x7950AD: mov     ecx, [eax]
0x7950AF: mov     [esp+8+arg_C], ecx
0x7950B3: jnz     short loc_7950B9
0x7950B5: xor     eax, eax
0x7950B7: jmp     short loc_7950C1
0x7950B9: mov     eax, [esi+0Ch]
0x7950BC: sub     eax, edx
0x7950BE: sar     eax, 2
0x7950C1: mov     ebx, [esp+8+arg_8]
0x7950C5: test    ebx, ebx
0x7950C7: jz      loc_79524F
0x7950CD: test    edx, edx
0x7950CF: jnz     short loc_7950D5
0x7950D1: xor     ecx, ecx
0x7950D3: jmp     short loc_7950DD
0x7950D5: mov     ecx, [esi+8]
0x7950D8: sub     ecx, edx
0x7950DA: sar     ecx, 2
0x7950DD: push    edi
0x7950DE: or      edi, 0FFFFFFFFh
0x7950E1: sub     edi, ecx
0x7950E3: cmp     edi, ebx
0x7950E5: jnb     short loc_7950EC
0x7950E7: call    sub_790B90
0x7950EC: test    edx, edx
0x7950EE: jnz     short loc_7950F4
0x7950F0: xor     ecx, ecx
0x7950F2: jmp     short loc_7950FC
0x7950F4: mov     ecx, [esi+8]
0x7950F7: sub     ecx, edx
0x7950F9: sar     ecx, 2
0x7950FC: add     ecx, ebx
0x7950FE: cmp     eax, ecx
0x795100: push    ebp
0x795101: jnb     loc_7951BC
0x795107: mov     ecx, eax
0x795109: shr     ecx, 1
0x79510B: or      edi, 0FFFFFFFFh
0x79510E: sub     edi, ecx
0x795110: cmp     edi, eax
0x795112: jnb     short loc_795118
0x795114: xor     eax, eax
0x795116: jmp     short loc_79511A
0x795118: add     eax, ecx
0x79511A: test    edx, edx
0x79511C: jnz     short loc_795122
0x79511E: xor     ecx, ecx
0x795120: jmp     short loc_79512A
0x795122: mov     ecx, [esi+8]
0x795125: sub     ecx, edx
0x795127: sar     ecx, 2
0x79512A: add     ecx, ebx
0x79512C: cmp     eax, ecx
0x79512E: jnb     short loc_795142
0x795130: test    edx, edx
0x795132: jnz     short loc_795138
0x795134: xor     eax, eax
0x795136: jmp     short loc_795140
0x795138: mov     eax, [esi+8]
0x79513B: sub     eax, edx
0x79513D: sar     eax, 2
0x795140: add     eax, ebx
0x795142: add     eax, eax
0x795144: add     eax, eax
0x795146: push    eax; Size
0x795147: mov     [esp+14h+arg_8], eax
0x79514B: call    FormHeapAlloc
0x795150: mov     ebp, [esp+14h+Src]
0x795154: mov     edx, [esi+4]
0x795157: add     esp, 4
0x79515A: mov     edi, eax
0x79515C: push    edi; Dst
0x79515D: push    ebp; int
0x79515E: push    edx; Src
0x79515F: mov     ecx, esi
0x795161: call    sub_7A25C0
0x795166: lea     ecx, [esp+10h+arg_C]
0x79516A: push    ecx
0x79516B: push    ebx
0x79516C: push    eax
0x79516D: mov     ecx, esi
0x79516F: call    sub_790B60
0x795174: mov     edx, [esi+8]
0x795177: push    eax; Dst
0x795178: push    edx; int
0x795179: push    ebp; Src
0x79517A: mov     ecx, esi
0x79517C: call    sub_7A25C0
0x795181: mov     eax, [esi+4]
0x795184: test    eax, eax
0x795186: jnz     short loc_79518C
0x795188: xor     ecx, ecx
0x79518A: jmp     short loc_795194
0x79518C: mov     ecx, [esi+8]
0x79518F: sub     ecx, eax
0x795191: sar     ecx, 2
0x795194: add     ebx, ecx
0x795196: test    eax, eax
0x795198: jz      short loc_7951A3
0x79519A: push    eax
0x79519B: call    FormHeapFree
0x7951A0: add     esp, 4
0x7951A3: mov     eax, [esp+10h+arg_8]
0x7951A7: pop     ebp
0x7951A8: lea     ecx, [edi+ebx*4]
0x7951AB: add     eax, edi
0x7951AD: mov     [esi+4], edi
0x7951B0: pop     edi
0x7951B1: mov     [esi+0Ch], eax
0x7951B4: mov     [esi+8], ecx
0x7951B7: pop     esi
0x7951B8: pop     ebx
0x7951B9: retn    10h
0x7951BC: mov     ebp, [esi+8]
0x7951BF: mov     edi, [esp+10h+Src]
0x7951C3: mov     edx, ebp
0x7951C5: sub     edx, edi
0x7951C7: sar     edx, 2
0x7951CA: cmp     edx, ebx
0x7951CC: lea     eax, ds:0[ebx*4]
0x7951D3: mov     ecx, esi
0x7951D5: mov     [esp+10h+arg_8], eax
0x7951D9: jnb     short loc_795221
0x7951DB: add     eax, edi
0x7951DD: push    eax; Dst
0x7951DE: push    ebp; int
0x7951DF: push    edi; Src
0x7951E0: call    sub_7A25C0
0x7951E5: mov     eax, [esi+8]
0x7951E8: mov     edx, eax
0x7951EA: sub     edx, edi
0x7951EC: lea     ecx, [esp+10h+arg_C]
0x7951F0: push    ecx
0x7951F1: sar     edx, 2
0x7951F4: sub     ebx, edx
0x7951F6: push    ebx
0x7951F7: push    eax
0x7951F8: mov     ecx, esi
0x7951FA: call    sub_790B60
0x7951FF: mov     eax, [esp+10h+arg_8]
0x795203: add     [esi+8], eax
0x795206: mov     esi, [esi+8]
0x795209: lea     ecx, [esp+10h+arg_C]
0x79520D: push    ecx
0x79520E: sub     esi, eax
0x795210: push    esi
0x795211: push    edi
0x795212: call    sub_790490
0x795217: add     esp, 0Ch
0x79521A: pop     ebp
0x79521B: pop     edi
0x79521C: pop     esi
0x79521D: pop     ebx
0x79521E: retn    10h
0x795221: push    ebp; Dst
0x795222: mov     ebx, ebp
0x795224: sub     ebx, eax
0x795226: push    ebp; int
0x795227: push    ebx; Src
0x795228: call    sub_7A25C0
0x79522D: push    ebp; int
0x79522E: push    ebx; int
0x79522F: push    edi; Src
0x795230: mov     [esi+8], eax
0x795233: call    sub_5254A0
0x795238: mov     eax, [esp+1Ch+arg_8]
0x79523C: lea     edx, [esp+1Ch+arg_C]
0x795240: push    edx
0x795241: add     eax, edi
0x795243: push    eax
0x795244: push    edi
0x795245: call    sub_790490
0x79524A: add     esp, 18h
0x79524D: pop     ebp
0x79524E: pop     edi
0x79524F: pop     esi
0x795250: pop     ebx
0x795251: retn    10h
