0x56BCA0: push    ecx
0x56BCA1: push    ebx
0x56BCA2: push    esi
0x56BCA3: mov     esi, ecx
0x56BCA5: mov     ecx, ds:0B33B00h
0x56BCAB: push    4; Size
0x56BCAD: lea     eax, [esi+8]
0x56BCB0: push    eax; Dst
0x56BCB1: mov     bl, 1
0x56BCB3: call    SaveLoad_LoadData
0x56BCB8: push    4; Size
0x56BCBA: lea     ecx, [esi+10h]
0x56BCBD: push    ecx; Dst
0x56BCBE: mov     ecx, ds:0B33B00h
0x56BCC4: call    SaveLoad_LoadData
0x56BCC9: mov     ecx, ds:0B33B00h
0x56BCCF: push    4; Size
0x56BCD1: lea     edx, [esp+10h+Dst]
0x56BCD5: push    edx; Dst
0x56BCD6: call    SaveLoad_LoadFormID
0x56BCDB: mov     eax, [esp+14h+a1]
0x56BCDF: push    0; int
0x56BCE1: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x56BCE6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56BCEB: push    0; int
0x56BCED: push    eax; a1
0x56BCEE: call    TESForm_LookupByFormID
0x56BCF3: add     esp, 4
0x56BCF6: push    eax; void *
0x56BCF7: call    OblivionDynamicCast
0x56BCFC: add     esp, 14h
0x56BCFF: test    eax, eax
0x56BD01: mov     [esi+0Ch], eax
0x56BD04: jz      short loc_56BD11
0x56BD06: mov     ecx, eax; this
0x56BD08: call    TESObjectCELL_GetNiNode?
0x56BD0D: test    eax, eax
0x56BD0F: jnz     short loc_56BD17
0x56BD11: pop     esi
0x56BD12: xor     al, al
0x56BD14: pop     ebx
0x56BD15: pop     ecx
0x56BD16: retn
0x56BD17: pop     esi
0x56BD18: mov     al, bl
0x56BD1A: pop     ebx
0x56BD1B: pop     ecx
0x56BD1C: retn
