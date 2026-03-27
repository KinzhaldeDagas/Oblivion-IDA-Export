0x4CABC0: push    ecx
0x4CABC1: push    ebx
0x4CABC2: push    esi
0x4CABC3: mov     esi, [esp+0Ch+arg_0]
0x4CABC7: mov     ebx, ecx
0x4CABC9: mov     ecx, esi; this
0x4CABCB: mov     [esp+0Ch+var_1], 0
0x4CABD0: call    sub_5E6C60
0x4CABD5: test    al, al
0x4CABD7: jz      short loc_4CABE1
0x4CABD9: pop     esi
0x4CABDA: xor     al, al
0x4CABDC: pop     ebx
0x4CABDD: pop     ecx
0x4CABDE: retn    4
0x4CABE1: push    ebp
0x4CABE2: lea     ebp, [ebx+28h]
0x4CABE5: push    edi
0x4CABE6: mov     ecx, ebp
0x4CABE8: call    ExtraDataList_GetOwner
0x4CABED: mov     edi, eax
0x4CABEF: test    edi, edi
0x4CABF1: jz      short loc_4CAC68
0x4CABF3: movzx   eax, byte ptr [ebx+24h]
0x4CABF7: test    al, 20h
0x4CABF9: jnz     short loc_4CAC68
0x4CABFB: shr     eax, 6
0x4CABFE: test    al, 1
0x4CAC00: jnz     short loc_4CAC68
0x4CAC02: mov     ecx, ebp
0x4CAC04: call    sub_41E7D0
0x4CAC09: test    eax, eax
0x4CAC0B: jnz     loc_4CACCC
0x4CAC11: mov     ecx, esi; this
0x4CAC13: call    Actor_IsNPC
0x4CAC18: test    al, al
0x4CAC1A: jz      loc_4CACCC
0x4CAC20: push    0; int
0x4CAC22: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4CAC27: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CAC2C: push    0; int
0x4CAC2E: push    edi; void *
0x4CAC2F: call    OblivionDynamicCast
0x4CAC34: push    0; int
0x4CAC36: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x4CAC3B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4CAC40: push    0; int
0x4CAC42: push    edi; void *
0x4CAC43: mov     ebp, eax
0x4CAC45: call    OblivionDynamicCast
0x4CAC4A: add     esp, 28h
0x4CAC4D: test    ebp, ebp
0x4CAC4F: mov     edi, eax
0x4CAC51: jz      short loc_4CAC74
0x4CAC53: mov     eax, [esi]
0x4CAC55: mov     edx, [eax+170h]
0x4CAC5B: mov     ecx, esi
0x4CAC5D: call    edx
0x4CAC5F: cmp     ebp, eax
0x4CAC61: jz      short loc_4CAC68
0x4CAC63: mov     [esp+14h+var_1], 1
0x4CAC68: mov     al, [esp+14h+var_1]
0x4CAC6C: pop     edi
0x4CAC6D: pop     ebp
0x4CAC6E: pop     esi
0x4CAC6F: pop     ebx
0x4CAC70: pop     ecx
0x4CAC71: retn    4
0x4CAC74: test    edi, edi
0x4CAC76: jz      short loc_4CAC68
0x4CAC78: mov     ecx, ebx
0x4CAC7A: call    sub_4CA990
0x4CAC7F: push    0; int
0x4CAC81: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4CAC86: mov     ebp, eax
0x4CAC88: mov     eax, [esi]
0x4CAC8A: mov     edx, [eax+170h]
0x4CAC90: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4CAC95: push    0; int
0x4CAC97: mov     ecx, esi
0x4CAC99: call    edx
0x4CAC9B: push    eax; void *
0x4CAC9C: call    OblivionDynamicCast
0x4CACA1: add     esp, 14h
0x4CACA4: cmp     esi, ds:0B333C4h
0x4CACAA: setz    cl
0x4CACAD: push    ecx
0x4CACAE: push    edi
0x4CACAF: lea     ecx, [eax+24h]
0x4CACB2: call    TESActorBaseData_GetFactionRank
0x4CACB7: cmp     eax, ebp
0x4CACB9: jge     short loc_4CAC68
0x4CACBB: pop     edi
0x4CACBC: pop     ebp
0x4CACBD: mov     [esp+0Ch+var_1], 1
0x4CACC2: mov     al, [esp+0Ch+var_1]
0x4CACC6: pop     esi
0x4CACC7: pop     ebx
0x4CACC8: pop     ecx
0x4CACC9: retn    4
0x4CACCC: pop     edi
0x4CACCD: pop     ebp
0x4CACCE: pop     esi
0x4CACCF: xor     al, al
0x4CACD1: pop     ebx
0x4CACD2: pop     ecx
0x4CACD3: retn    4
