0x60D780: push    esi
0x60D781: mov     esi, ecx
0x60D783: mov     eax, [esi+8]
0x60D786: test    eax, eax
0x60D788: jz      short loc_60D801
0x60D78A: mov     ecx, [esp+4+arg_0]
0x60D78E: test    ecx, 20000h
0x60D794: jz      short loc_60D7E3
0x60D796: test    ecx, 10000h
0x60D79C: jz      short loc_60D7C3
0x60D79E: push    0; int
0x60D7A0: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x60D7A5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x60D7AA: push    0; int
0x60D7AC: push    eax; a1
0x60D7AD: call    TESForm_LookupByFormID
0x60D7B2: add     esp, 4
0x60D7B5: push    eax; void *
0x60D7B6: call    OblivionDynamicCast
0x60D7BB: add     esp, 14h
0x60D7BE: mov     [esi+8], eax
0x60D7C1: jmp     short loc_60D7E3
0x60D7C3: mov     eax, [eax+0Ch]
0x60D7C6: mov     ecx, ds:0B33A98h
0x60D7CC: push    eax; _DWORD
0x60D7CD: call    TESDataHandler_IsFormIDCreated?
0x60D7D2: test    al, al
0x60D7D4: jz      short loc_60D7E3
0x60D7D6: mov     ecx, [esi+8]
0x60D7D9: mov     eax, [ecx]
0x60D7DB: mov     edx, [eax+0E8h]
0x60D7E1: call    edx
0x60D7E3: mov     eax, [esi+8]
0x60D7E6: test    eax, eax
0x60D7E8: jz      short loc_60D801
0x60D7EA: mov     eax, [eax+18h]
0x60D7ED: push    eax
0x60D7EE: call    sub_673980
0x60D7F3: add     esp, 4
0x60D7F6: cmp     [esi+4], eax
0x60D7F9: jl      short loc_60D801
0x60D7FB: add     eax, 0FFFFFFFFh
0x60D7FE: mov     [esi+4], eax
0x60D801: pop     esi
0x60D802: retn    0Ch
