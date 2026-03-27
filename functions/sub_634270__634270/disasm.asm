0x634270: sub     esp, 0Ch
0x634273: push    ebx
0x634274: push    esi
0x634275: mov     esi, [esp+14h+arg_0]
0x634279: push    edi
0x63427A: xor     ebx, ebx
0x63427C: cmp     esi, ebx
0x63427E: mov     edi, ecx
0x634280: mov     [esp+18h+var_4], edi
0x634284: jz      loc_6343A3
0x63428A: push    ebx; a2
0x63428B: mov     ecx, esi; this
0x63428D: call    Actor_GetActorBaseForm
0x634292: test    eax, eax
0x634294: jz      loc_6343A3
0x63429A: mov     eax, [edi+2A4h]
0x6342A0: cmp     eax, ebx
0x6342A2: jnz     loc_6343A5
0x6342A8: push    ebx; a2
0x6342A9: mov     ecx, esi; this
0x6342AB: call    Actor_GetActorBaseForm
0x6342B0: add     eax, 60h ; '`'
0x6342B3: mov     [esp+18h+var_C], eax
0x6342B7: jz      loc_634390
0x6342BD: push    ebp
0x6342BE: jmp     short loc_6342C4
0x6342C0: mov     esi, [esp+1Ch+arg_0]
0x6342C4: mov     ebp, [esp+1Ch+var_C]
0x6342C8: cmp     [ebp+4], ebx
0x6342CB: jnz     short loc_6342D6
0x6342CD: cmp     [ebp+0], ebx
0x6342D0: jz      loc_63438F
0x6342D6: mov     ecx, [ebp+0]
0x6342D9: cmp     ecx, ebx
0x6342DB: jz      loc_634380
0x6342E1: push    esi
0x6342E2: call    sub_4B0920
0x6342E7: mov     esi, eax
0x6342E9: cmp     esi, ebx
0x6342EB: mov     [esp+1Ch+var_8], esi
0x6342EF: mov     edi, esi
0x6342F1: jz      loc_634380
0x6342F7: cmp     [edi+4], ebx
0x6342FA: jnz     short loc_634300
0x6342FC: cmp     [edi], ebx
0x6342FE: jz      short loc_63436C
0x634300: mov     ebp, [edi]
0x634302: cmp     ebp, ebx
0x634304: jz      short loc_634361
0x634306: mov     eax, [ebp+18h]
0x634309: mov     edx, [eax+18h]
0x63430C: lea     esi, [ebp+18h]
0x63430F: mov     ecx, esi
0x634311: call    edx
0x634313: cmp     eax, 4
0x634316: jz      short loc_634361
0x634318: mov     eax, [esi]
0x63431A: mov     edx, [eax+18h]
0x63431D: mov     ecx, esi
0x63431F: call    edx
0x634321: cmp     eax, 1
0x634324: jnz     short loc_63432C
0x634326: cmp     [esp+1Ch+arg_4], bl
0x63432A: jz      short loc_634361
0x63432C: mov     esi, [esp+1Ch+var_4]
0x634330: cmp     [esi+2A4h], ebx
0x634336: jnz     short loc_634355
0x634338: push    8; Size
0x63433A: call    FormHeapAlloc
0x63433F: add     esp, 4
0x634342: cmp     eax, ebx
0x634344: jz      short loc_63434D
0x634346: mov     [eax], ebx
0x634348: mov     [eax+4], ebx
0x63434B: jmp     short loc_63434F
0x63434D: xor     eax, eax
0x63434F: mov     [esi+2A4h], eax
0x634355: mov     ecx, [esi+2A4h]
0x63435B: push    ebp
0x63435C: call    BSSimpleList_PushFront
0x634361: mov     edi, [edi+4]
0x634364: cmp     edi, ebx
0x634366: mov     esi, [esp+1Ch+var_8]
0x63436A: jnz     short loc_6342F7
0x63436C: mov     ecx, esi
0x63436E: call    BSSimpleList_Clear
0x634373: push    esi
0x634374: call    FormHeapFree
0x634379: mov     ebp, [esp+20h+var_C]
0x63437D: add     esp, 4
0x634380: mov     eax, [ebp+4]
0x634383: cmp     eax, ebx
0x634385: mov     [esp+1Ch+var_C], eax
0x634389: jnz     loc_6342C0
0x63438F: pop     ebp
0x634390: mov     eax, [esp+18h+var_4]
0x634394: mov     eax, [eax+2A4h]
0x63439A: pop     edi
0x63439B: pop     esi
0x63439C: pop     ebx
0x63439D: add     esp, 0Ch
0x6343A0: retn    8
0x6343A3: xor     eax, eax
0x6343A5: pop     edi
0x6343A6: pop     esi
0x6343A7: pop     ebx
0x6343A8: add     esp, 0Ch
0x6343AB: retn    8
