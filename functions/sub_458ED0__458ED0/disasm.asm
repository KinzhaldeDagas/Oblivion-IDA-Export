0x458ED0: sub     esp, 0Ch
0x458ED3: push    ebx
0x458ED4: mov     ebx, [esp+10h+arg_4]
0x458ED8: push    ebp
0x458ED9: push    esi
0x458EDA: mov     esi, [esp+18h+arg_0]
0x458EDE: push    edi
0x458EDF: mov     edi, ecx
0x458EE1: mov     ecx, ds:0B333C4h; this
0x458EE7: cmp     esi, ecx
0x458EE9: jnz     short loc_458F01
0x458EEB: test    ebx, ebx
0x458EED: jz      short loc_458EF8
0x458EEF: push    0; a2
0x458EF1: call    Player_GetAnimData
0x458EF6: jmp     short loc_458F0D
0x458EF8: push    1; a2
0x458EFA: call    Player_GetAnimData
0x458EFF: jmp     short loc_458F0D
0x458F01: mov     eax, [esi]
0x458F03: mov     edx, [eax+164h]
0x458F09: mov     ecx, esi
0x458F0B: call    edx
0x458F0D: push    0; int
0x458F0F: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x458F14: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x458F19: push    0; int
0x458F1B: push    esi; void *
0x458F1C: mov     [esp+30h+arg_4], eax
0x458F20: call    OblivionDynamicCast
0x458F25: xor     esi, esi
0x458F27: add     esp, 14h
0x458F2A: test    eax, eax
0x458F2C: mov     [esp+1Ch+var_8], 0FFFFFFFFh
0x458F34: mov     [esp+1Ch+var_C], esi
0x458F38: jz      short loc_458F7C
0x458F3A: test    ebx, ebx
0x458F3C: jz      short loc_458F7C
0x458F3E: mov     eax, [eax+58h]
0x458F41: push    esi; int
0x458F42: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x458F47: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x458F4C: push    esi; int
0x458F4D: push    eax; void *
0x458F4E: call    OblivionDynamicCast
0x458F53: mov     esi, eax
0x458F55: add     esp, 14h
0x458F58: test    esi, esi
0x458F5A: jz      short loc_458F7C
0x458F5C: mov     eax, [esi]
0x458F5E: mov     edx, [eax+2D0h]
0x458F64: mov     ecx, esi
0x458F66: call    edx
0x458F68: mov     [esp+1Ch+var_8], eax
0x458F6C: mov     eax, [esi]
0x458F6E: mov     edx, [eax+2D4h]
0x458F74: mov     ecx, esi
0x458F76: call    edx
0x458F78: mov     [esp+1Ch+var_C], eax
0x458F7C: mov     eax, [edi+14h]
0x458F7F: mov     ebp, [esp+1Ch+arg_8]
0x458F83: mov     [edi+14h], ebp
0x458F86: mov     ecx, ds:0B33B00h
0x458F8C: mov     [esp+1Ch+var_4], eax
0x458F90: mov     eax, [ecx+14h]
0x458F93: mov     bx, [eax]
0x458F96: add     eax, 2
0x458F99: mov     [ecx+14h], eax
0x458F9C: mov     ecx, [esp+1Ch+arg_4]; AnimSequenceSingle *
0x458FA0: test    ecx, ecx
0x458FA2: jz      short loc_458FAE
0x458FA4: mov     edx, [esp+1Ch+arg_0]
0x458FA8: push    edx; int
0x458FA9: call    sub_475590
0x458FAE: movzx   eax, bx
0x458FB1: lea     ecx, [eax+ebp+2]
0x458FB5: cmp     ecx, [edi+14h]
0x458FB8: jz      short loc_458FCC
0x458FBA: mov     ecx, ds:0B34D90h
0x458FC0: mov     edx, [ecx]
0x458FC2: mov     eax, [edx+18h]
0x458FC5: push    offset aLoadanimations; "LoadAnimations() call did not properly "...
0x458FCA: call    eax
0x458FCC: test    esi, esi
0x458FCE: mov     ecx, [esp+1Ch+var_4]
0x458FD2: mov     [edi+14h], ecx
0x458FD5: jz      short loc_459008
0x458FD7: mov     eax, [esp+1Ch+var_C]
0x458FDB: test    eax, eax
0x458FDD: jz      short loc_458FF2
0x458FDF: mov     ecx, [esp+1Ch+arg_4]
0x458FE3: sub     al, 5
0x458FE5: movsx   edx, al
0x458FE8: push    edx
0x458FE9: call    sub_4706E0
0x458FEE: mov     [esp+1Ch+var_C], eax
0x458FF2: mov     ecx, [esp+1Ch+var_C]
0x458FF6: mov     eax, [esi]
0x458FF8: mov     edx, [esp+1Ch+var_8]
0x458FFC: mov     eax, [eax+2D8h]
0x459002: push    ecx
0x459003: push    edx
0x459004: mov     ecx, esi
0x459006: call    eax
0x459008: pop     edi
0x459009: pop     esi
0x45900A: pop     ebp
0x45900B: pop     ebx
0x45900C: add     esp, 0Ch
0x45900F: retn    0Ch
