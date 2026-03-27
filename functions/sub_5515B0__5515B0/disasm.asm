0x5515B0: push    0FFFFFFFFh
0x5515B2: push    offset SEH_88E880
0x5515B7: mov     eax, large fs:0
0x5515BD: push    eax
0x5515BE: push    ecx
0x5515BF: push    ebx
0x5515C0: push    ebp
0x5515C1: push    esi
0x5515C2: push    edi
0x5515C3: mov     eax, ds:0B30AACh
0x5515C8: xor     eax, esp
0x5515CA: push    eax
0x5515CB: lea     eax, [esp+24h+var_C]
0x5515CF: mov     large fs:0, eax
0x5515D5: mov     ebp, ecx
0x5515D7: push    offset stru_B39C00; lpCriticalSection
0x5515DC: call    dword ptr ds:0A2806Ch
0x5515E2: call    dword ptr ds:0A2808Ch
0x5515E8: add     dword ptr ds:0B39C7Ch, 1
0x5515EF: xor     edi, edi
0x5515F1: mov     ds:0B39C78h, eax
0x5515F6: mov     [esp+24h+var_10], edi
0x5515FA: mov     ecx, [esp+24h+arg_0]
0x5515FE: lea     eax, [esp+24h+var_10]
0x551602: push    eax
0x551603: push    ecx
0x551604: lea     ecx, [ebp+4]
0x551607: mov     [esp+2Ch+var_4], edi
0x55160B: xor     bl, bl
0x55160D: call    sub_4A1AB0
0x551612: test    al, al
0x551614: mov     esi, [esp+24h+var_10]
0x551618: jz      short loc_55164C
0x55161A: call    dword ptr ds:0A280D0h
0x551620: mov     edi, [esp+24h+arg_4]
0x551624: lea     edx, [esi+8]
0x551627: push    edx
0x551628: mov     ecx, edi
0x55162A: mov     [esi+0Ch], eax
0x55162D: call    sub_55E2A0
0x551632: push    esi
0x551633: mov     ecx, ebp
0x551635: call    sub_5506B0
0x55163A: mov     ecx, [edi]
0x55163C: call    sub_559190
0x551641: mov     ecx, [edi]
0x551643: call    sub_558520
0x551648: mov     bl, 1
0x55164A: xor     edi, edi
0x55164C: sub     dword ptr ds:0B39C7Ch, 1
0x551653: jnz     short loc_55165B
0x551655: mov     ds:0B39C78h, edi
0x55165B: push    offset stru_B39C00; lpCriticalSection
0x551660: call    dword ptr ds:0A28074h
0x551666: cmp     esi, edi
0x551668: mov     [esp+24h+var_4], 0FFFFFFFFh
0x551670: jz      short loc_55168A
0x551672: lea     eax, [esi+4]
0x551675: push    eax; lpAddend
0x551676: call    dword ptr ds:0A2807Ch
0x55167C: test    eax, eax
0x55167E: jnz     short loc_55168A
0x551680: mov     edx, [esi]
0x551682: mov     eax, [edx]
0x551684: push    1
0x551686: mov     ecx, esi
0x551688: call    eax
0x55168A: mov     al, bl
0x55168C: mov     ecx, dword ptr [esp+24h+var_C]
0x551690: mov     large fs:0, ecx
0x551697: pop     ecx
0x551698: pop     edi
0x551699: pop     esi
0x55169A: pop     ebp
0x55169B: pop     ebx
0x55169C: add     esp, 10h
0x55169F: retn    8
