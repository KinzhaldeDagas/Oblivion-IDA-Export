0x77C750: push    ebx
0x77C751: mov     ebx, [esp+4+arg_8]
0x77C755: push    ebp
0x77C756: mov     ebp, dword ptr [esp+8+ArgList]
0x77C75A: push    esi
0x77C75B: push    edi
0x77C75C: push    1
0x77C75E: mov     esi, ecx
0x77C760: mov     eax, [esi]
0x77C762: mov     edx, [eax+4]
0x77C765: push    ebx
0x77C766: push    ebp
0x77C767: call    edx
0x77C769: mov     edi, eax
0x77C76B: test    edi, edi
0x77C76D: jnz     short loc_77C78D
0x77C76F: push    ebx
0x77C770: push    ebp; ArgList
0x77C771: push    offset aCannotFindShad; "Cannot find shader %s, Implementation %"...
0x77C776: push    eax; int
0x77C777: push    100h; int
0x77C77C: call    sub_738460
0x77C781: add     esp, 14h
0x77C784: pop     edi
0x77C785: pop     esi
0x77C786: pop     ebp
0x77C787: xor     al, al
0x77C789: pop     ebx
0x77C78A: retn    0Ch
0x77C78D: cmp     ebx, 0FFFFFFFFh
0x77C790: jnz     short loc_77C79D
0x77C792: mov     eax, [edi]
0x77C794: mov     edx, [eax+7Ch]
0x77C797: push    1
0x77C799: mov     ecx, edi
0x77C79B: call    edx
0x77C79D: mov     eax, [esp+10h+arg_0]
0x77C7A1: push    edi
0x77C7A2: push    eax
0x77C7A3: mov     ecx, esi
0x77C7A5: call    sub_77C2A0
0x77C7AA: pop     edi
0x77C7AB: pop     esi
0x77C7AC: pop     ebp
0x77C7AD: pop     ebx
0x77C7AE: retn    0Ch
