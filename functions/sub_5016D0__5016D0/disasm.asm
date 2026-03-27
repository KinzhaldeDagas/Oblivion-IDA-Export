0x5016D0: sub     esp, 8
0x5016D3: mov     edx, [esp+8+l]
0x5016D7: push    esi
0x5016D8: mov     esi, [esp+0Ch+a4]
0x5016DC: lea     eax, [esp+0Ch+var_8]
0x5016E0: push    eax
0x5016E1: mov     eax, [esp+10h+arg_10]
0x5016E5: lea     ecx, [esp+10h+var_4]
0x5016E9: push    ecx; UInt16
0x5016EA: mov     ecx, [esp+14h+arg_C]
0x5016EE: push    edx; l
0x5016EF: mov     edx, [esp+18h+a3]
0x5016F3: push    eax; a6
0x5016F4: mov     eax, [esp+1Ch+arg_4]
0x5016F8: push    ecx; a5
0x5016F9: mov     ecx, [esp+20h+a1]
0x5016FD: push    esi; a4
0x5016FE: push    edx; a3
0x5016FF: push    eax; a2
0x501700: push    ecx; a1
0x501701: mov     dword ptr [esp+30h+var_4], 0
0x501709: mov     [esp+30h+var_8], 0
0x501711: call    Script_ExtractArgs
0x501716: add     esp, 24h
0x501719: test    al, al
0x50171B: jnz     short loc_501722
0x50171D: pop     esi
0x50171E: add     esp, 8
0x501721: retn
0x501722: push    0; int
0x501724: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x501729: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50172E: push    0; int
0x501730: push    esi; void *
0x501731: call    OblivionDynamicCast
0x501736: add     esp, 14h
0x501739: test    eax, eax
0x50173B: jz      short loc_501753
0x50173D: mov     ecx, [esp+0Ch+var_8]
0x501741: mov     edx, [eax]
0x501743: mov     edx, [edx+290h]
0x501749: push    ecx
0x50174A: mov     ecx, dword ptr [esp+10h+var_4]
0x50174E: push    ecx
0x50174F: mov     ecx, eax
0x501751: call    edx
0x501753: mov     al, 1
0x501755: pop     esi
0x501756: add     esp, 8
0x501759: retn
