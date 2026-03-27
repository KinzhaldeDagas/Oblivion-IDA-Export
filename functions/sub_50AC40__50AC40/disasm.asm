0x50AC40: sub     esp, 8
0x50AC43: mov     edx, [esp+8+l]
0x50AC47: push    esi
0x50AC48: mov     esi, [esp+0Ch+a4]
0x50AC4C: lea     eax, [esp+0Ch+var_4]
0x50AC50: push    eax
0x50AC51: mov     eax, [esp+10h+arg_10]
0x50AC55: lea     ecx, [esp+10h+var_8]
0x50AC59: push    ecx; UInt16
0x50AC5A: mov     ecx, [esp+14h+arg_C]
0x50AC5E: push    edx; l
0x50AC5F: mov     edx, [esp+18h+a3]
0x50AC63: push    eax; a6
0x50AC64: mov     eax, [esp+1Ch+arg_4]
0x50AC68: push    ecx; a5
0x50AC69: mov     ecx, [esp+20h+a1]
0x50AC6D: push    esi; a4
0x50AC6E: push    edx; a3
0x50AC6F: push    eax; a2
0x50AC70: push    ecx; a1
0x50AC71: mov     dword ptr [esp+30h+var_8], 0
0x50AC79: mov     [esp+30h+var_4], 0
0x50AC81: call    Script_ExtractArgs
0x50AC86: add     esp, 24h
0x50AC89: test    al, al
0x50AC8B: jnz     short loc_50AC92
0x50AC8D: pop     esi
0x50AC8E: add     esp, 8
0x50AC91: retn
0x50AC92: fldz
0x50AC94: mov     edx, [esp+0Ch+arg_18]
0x50AC98: push    0; int
0x50AC9A: fstp    qword ptr [edx]
0x50AC9C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50ACA1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50ACA6: push    0; int
0x50ACA8: push    esi; void *
0x50ACA9: call    OblivionDynamicCast
0x50ACAE: mov     esi, eax
0x50ACB0: add     esp, 14h
0x50ACB3: test    esi, esi
0x50ACB5: jz      short loc_50ACF9
0x50ACB7: push    1; a2
0x50ACB9: mov     ecx, esi; this
0x50ACBB: call    Actor_GetActorBaseForm
0x50ACC0: cmp     dword ptr [eax+40h], 0
0x50ACC4: jnz     short loc_50ACD5
0x50ACC6: cmp     dword ptr [eax+3Ch], 0
0x50ACCA: jnz     short loc_50ACD5
0x50ACCC: push    0; a2
0x50ACCE: mov     ecx, esi; this
0x50ACD0: call    Actor_GetActorBaseForm
0x50ACD5: test    eax, eax
0x50ACD7: jz      short loc_50ACF9
0x50ACD9: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50ACDD: test    ecx, ecx
0x50ACDF: jz      short loc_50ACF9
0x50ACE1: cmp     esi, ds:0B333C4h
0x50ACE7: setz    dl
0x50ACEA: push    edx
0x50ACEB: mov     edx, [esp+10h+var_4]
0x50ACEF: push    edx
0x50ACF0: push    ecx
0x50ACF1: lea     ecx, [eax+24h]
0x50ACF4: call    TESActorBaseData_ModFactionRank
0x50ACF9: mov     al, 1
0x50ACFB: pop     esi
0x50ACFC: add     esp, 8
0x50ACFF: retn
