0x64CB10: sub     esp, 8
0x64CB13: push    esi
0x64CB14: push    edi
0x64CB15: mov     edi, [esp+10h+arg_0]
0x64CB19: mov     eax, [edi]
0x64CB1B: mov     edx, [eax+334h]
0x64CB21: mov     esi, ecx
0x64CB23: push    1
0x64CB25: mov     ecx, edi
0x64CB27: call    edx
0x64CB29: test    al, al
0x64CB2B: jnz     loc_64CD48
0x64CB31: mov     ecx, edi
0x64CB33: call    sub_5E6B40
0x64CB38: test    al, al
0x64CB3A: jnz     loc_64CD48
0x64CB40: mov     ecx, edi
0x64CB42: call    sub_5E6BA0
0x64CB47: test    al, al
0x64CB49: jnz     loc_64CD48
0x64CB4F: mov     ecx, edi
0x64CB51: call    sub_5E03B0
0x64CB56: test    al, al
0x64CB58: jnz     loc_64CD48
0x64CB5E: mov     eax, [esi]
0x64CB60: mov     edx, [eax+36Ch]
0x64CB66: mov     ecx, esi
0x64CB68: call    edx
0x64CB6A: test    eax, eax
0x64CB6C: jz      short loc_64CB7C
0x64CB6E: cmp     eax, 4
0x64CB71: jz      short loc_64CB7C
0x64CB73: cmp     eax, 9
0x64CB76: jnz     loc_64CD48
0x64CB7C: cmp     dword ptr [esi+0C0h], 0
0x64CB83: jz      short loc_64CB93
0x64CB85: mov     eax, [esi]
0x64CB87: mov     edx, [eax+178h]
0x64CB8D: push    0
0x64CB8F: mov     ecx, esi
0x64CB91: call    edx
0x64CB93: mov     ecx, offset TimeGlobals
0x64CB98: call    TimeGlobals_GetGameHour
0x64CB9D: fstp    dword ptr [esp+10h+var_4]
0x64CBA1: mov     ecx, edi
0x64CBA3: mov     [esp+10h+var_5], 0
0x64CBA8: call    sub_5E0380
0x64CBAD: test    eax, eax
0x64CBAF: mov     byte ptr [esp+10h+arg_0], 0
0x64CBB4: jz      short loc_64CBD5
0x64CBB6: cmp     byte ptr [eax+20h], 4
0x64CBBA: jz      short loc_64CBD0
0x64CBBC: mov     eax, [eax+1Ch]
0x64CBBF: mov     ecx, eax
0x64CBC1: shr     ecx, 14h
0x64CBC4: test    cl, 1
0x64CBC7: jnz     short loc_64CBD0
0x64CBC9: shr     eax, 15h
0x64CBCC: test    al, 1
0x64CBCE: jz      short loc_64CBD5
0x64CBD0: mov     byte ptr [esp+10h+arg_0], 1
0x64CBD5: push    ebx
0x64CBD6: mov     ebx, [esp+14h+arg_4]
0x64CBDA: test    bl, bl
0x64CBDC: jnz     short loc_64CBF9
0x64CBDE: cmp     dword ptr [esi+8], 0
0x64CBE2: jz      short loc_64CBF9
0x64CBE4: fld     dword ptr [esp+14h+var_4]
0x64CBE8: call    Double_To_SInt32
0x64CBED: cmp     [esi+90h], eax
0x64CBF3: jz      loc_64CD3B
0x64CBF9: push    ebx
0x64CBFA: push    edi
0x64CBFB: mov     ecx, esi
0x64CBFD: call    sub_649340
0x64CC02: fld     dword ptr [esp+14h+var_4]
0x64CC06: mov     bl, al
0x64CC08: mov     [esp+14h+var_5], bl
0x64CC0C: call    Double_To_SInt32
0x64CC11: test    bl, bl
0x64CC13: mov     [esi+90h], eax
0x64CC19: jz      loc_64CD3B
0x64CC1F: mov     edx, [esi]
0x64CC21: mov     eax, [edx+38Ch]
0x64CC27: push    ebp
0x64CC28: push    0
0x64CC2A: mov     ecx, esi
0x64CC2C: call    eax
0x64CC2E: mov     edx, [esi]
0x64CC30: mov     eax, [edx+0BCh]
0x64CC36: push    0
0x64CC38: mov     ecx, esi
0x64CC3A: call    eax
0x64CC3C: mov     edx, [esi]
0x64CC3E: mov     eax, [edx+394h]
0x64CC44: push    0
0x64CC46: mov     ecx, esi
0x64CC48: call    eax
0x64CC4A: lea     ebp, [esi+3Ch]
0x64CC4D: lea     ecx, [ecx+0]
0x64CC50: cmp     dword ptr [ebp+4], 0
0x64CC54: jnz     short loc_64CC5C
0x64CC56: cmp     dword ptr [ebp+0], 0
0x64CC5A: jz      short loc_64CC76
0x64CC5C: mov     ebx, [ebp+0]
0x64CC5F: test    ebx, ebx
0x64CC61: jz      short loc_64CC6C
0x64CC63: push    ebx
0x64CC64: call    FormHeapFree
0x64CC69: add     esp, 4
0x64CC6C: push    ebx
0x64CC6D: mov     ecx, ebp
0x64CC6F: call    BSSimpleList_Remove
0x64CC74: jmp     short loc_64CC50
0x64CC76: cmp     byte ptr [esp+18h+arg_0], 0
0x64CC7B: pop     ebp
0x64CC7C: jz      loc_64CD3B
0x64CC82: mov     edx, [edi]
0x64CC84: mov     eax, [edx+170h]
0x64CC8A: push    0; int
0x64CC8C: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64CC91: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64CC96: push    0; int
0x64CC98: mov     ecx, edi
0x64CC9A: call    eax
0x64CC9C: push    eax; void *
0x64CC9D: call    OblivionDynamicCast
0x64CCA2: mov     edx, [edi]
0x64CCA4: add     esp, 14h
0x64CCA7: push    0; int
0x64CCA9: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x64CCAE: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64CCB3: mov     ebx, eax
0x64CCB5: mov     eax, [edx+170h]
0x64CCBB: push    0; int
0x64CCBD: mov     ecx, edi
0x64CCBF: call    eax
0x64CCC1: push    eax; void *
0x64CCC2: call    OblivionDynamicCast
0x64CCC7: mov     esi, [esi+8]
0x64CCCA: add     esp, 14h
0x64CCCD: test    esi, esi
0x64CCCF: mov     byte ptr [esp+14h+arg_4], 1
0x64CCD4: mov     byte ptr [esp+14h+arg_0], 1
0x64CCD9: jz      short loc_64CCFC
0x64CCDB: mov     esi, [esi+1Ch]
0x64CCDE: mov     ecx, esi
0x64CCE0: shr     ecx, 14h
0x64CCE3: test    cl, 1
0x64CCE6: jz      short loc_64CCED
0x64CCE8: mov     byte ptr [esp+14h+arg_4], 0
0x64CCED: mov     edx, esi
0x64CCEF: shr     edx, 15h
0x64CCF2: test    dl, 1
0x64CCF5: jz      short loc_64CCFC
0x64CCF7: mov     byte ptr [esp+14h+arg_0], 0
0x64CCFC: test    ebx, ebx
0x64CCFE: jz      short loc_64CD23
0x64CD00: mov     eax, [esp+14h+arg_0]
0x64CD04: mov     ecx, [esp+14h+arg_4]
0x64CD08: push    1; char
0x64CD0A: push    0; int
0x64CD0C: push    eax; int
0x64CD0D: push    ecx; int
0x64CD0E: push    edi; int
0x64CD0F: mov     ecx, ebx; int
0x64CD11: call    sub_5227A0
0x64CD16: mov     al, [esp+14h+var_5]
0x64CD1A: pop     ebx
0x64CD1B: pop     edi
0x64CD1C: pop     esi
0x64CD1D: add     esp, 8
0x64CD20: retn    8
0x64CD23: test    eax, eax
0x64CD25: jz      short loc_64CD3B
0x64CD27: mov     edx, [esp+14h+arg_0]
0x64CD2B: mov     ecx, [esp+14h+arg_4]
0x64CD2F: push    1
0x64CD31: push    edx
0x64CD32: push    ecx
0x64CD33: push    edi
0x64CD34: mov     ecx, eax
0x64CD36: call    sub_51E240
0x64CD3B: mov     al, [esp+14h+var_5]
0x64CD3F: pop     ebx
0x64CD40: pop     edi
0x64CD41: pop     esi
0x64CD42: add     esp, 8
0x64CD45: retn    8
0x64CD48: pop     edi
0x64CD49: xor     al, al
0x64CD4B: pop     esi
0x64CD4C: add     esp, 8
0x64CD4F: retn    8
