0x50AFD0: push    ecx
0x50AFD1: mov     ecx, [esp+4+l]
0x50AFD5: mov     edx, [esp+4+arg_10]
0x50AFD9: push    esi
0x50AFDA: mov     esi, [esp+8+a4]
0x50AFDE: lea     eax, [esp+8+var_4]
0x50AFE2: push    eax; UInt16
0x50AFE3: mov     eax, [esp+0Ch+arg_C]
0x50AFE7: push    ecx; l
0x50AFE8: mov     ecx, [esp+10h+a3]
0x50AFEC: push    edx; a6
0x50AFED: mov     edx, [esp+14h+arg_4]
0x50AFF1: push    eax; a5
0x50AFF2: mov     eax, [esp+18h+a1]
0x50AFF6: push    esi; a4
0x50AFF7: push    ecx; a3
0x50AFF8: push    edx; a2
0x50AFF9: push    eax; a1
0x50AFFA: mov     dword ptr [esp+28h+var_4], 0
0x50B002: call    Script_ExtractArgs
0x50B007: add     esp, 20h
0x50B00A: test    al, al
0x50B00C: jnz     short loc_50B011
0x50B00E: pop     esi
0x50B00F: pop     ecx
0x50B010: retn
0x50B011: test    esi, esi
0x50B013: jz      short loc_50B05C
0x50B015: cmp     dword ptr [esp+8+var_4], 0
0x50B01A: jz      short loc_50B05C
0x50B01C: push    0; int
0x50B01E: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50B023: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50B028: push    0; int
0x50B02A: push    esi; void *
0x50B02B: call    OblivionDynamicCast
0x50B030: mov     esi, eax
0x50B032: add     esp, 14h
0x50B035: test    esi, esi
0x50B037: jz      short loc_50B05C
0x50B039: mov     ecx, [esi+58h]
0x50B03C: test    ecx, ecx
0x50B03E: jz      short loc_50B05C
0x50B040: mov     edx, [ecx]
0x50B042: mov     eax, dword ptr [esp+8+var_4]
0x50B046: mov     edx, [edx+488h]
0x50B04C: push    eax
0x50B04D: call    edx
0x50B04F: mov     eax, dword ptr [esp+8+var_4]
0x50B053: push    eax
0x50B054: lea     ecx, [esi+44h]
0x50B057: call    sub_423970
0x50B05C: mov     al, 1
0x50B05E: pop     esi
0x50B05F: pop     ecx
0x50B060: retn
