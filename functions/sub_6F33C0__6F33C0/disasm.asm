0x6F33C0: push    ebp
0x6F33C1: mov     ebp, esp
0x6F33C3: push    0FFFFFFFFh
0x6F33C5: push    offset SEH_6F33C0
0x6F33CA: mov     eax, large fs:0
0x6F33D0: push    eax
0x6F33D1: sub     esp, 0Ch
0x6F33D4: push    ebx
0x6F33D5: push    esi
0x6F33D6: push    edi
0x6F33D7: mov     eax, ds:0B30AACh
0x6F33DC: xor     eax, ebp
0x6F33DE: push    eax
0x6F33DF: lea     eax, [ebp+var_C]
0x6F33E2: mov     large fs:0, eax
0x6F33E8: mov     [ebp+var_10], esp
0x6F33EB: mov     esi, [ebp+arg_8]
0x6F33EE: mov     edi, [ebp+arg_0]
0x6F33F1: xor     ebx, ebx
0x6F33F3: mov     [ebp+var_14], esi
0x6F33F6: mov     [ebp+var_4], ebx
0x6F33F9: lea     esp, [esp+0]
0x6F3400: cmp     edi, [ebp+arg_4]
0x6F3403: jz      short loc_6F344E
0x6F3405: mov     [ebp+arg_0], esi
0x6F3408: mov     [ebp+var_18], esi
0x6F340B: cmp     esi, ebx
0x6F340D: mov     byte ptr [ebp+var_4], 1
0x6F3411: jz      short loc_6F341B
0x6F3413: push    edi
0x6F3414: mov     ecx, esi
0x6F3416: call    sub_6F2DB0
0x6F341B: add     esi, 30h ; '0'
0x6F341E: mov     byte ptr [ebp+var_4], bl
0x6F3421: mov     [ebp+arg_8], esi
0x6F3424: add     edi, 30h ; '0'
0x6F3427: jmp     short loc_6F3400
0x6F3429: mov     esi, [ebp+var_14]
0x6F342C: mov     edi, [ebp+arg_8]
0x6F342F: cmp     esi, edi
0x6F3431: jz      short loc_6F3445
0x6F3433: mov     ebx, [ebp+arg_C]
0x6F3436: push    esi
0x6F3437: mov     ecx, ebx
0x6F3439: call    sub_556F70
0x6F343E: add     esi, 30h ; '0'
0x6F3441: cmp     esi, edi
0x6F3443: jnz     short loc_6F3436
0x6F3445: xor     ebx, ebx
0x6F3447: push    ebx
0x6F3448: push    ebx
0x6F3449: call    ThrowException??
0x6F344E: mov     eax, esi
0x6F3450: mov     ecx, [ebp+var_C]
0x6F3453: mov     large fs:0, ecx
0x6F345A: pop     ecx
0x6F345B: pop     edi
0x6F345C: pop     esi
0x6F345D: pop     ebx
0x6F345E: mov     esp, ebp
0x6F3460: pop     ebp
0x6F3461: retn
