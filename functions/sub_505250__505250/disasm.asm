0x505250: push    ecx
0x505251: mov     ecx, [esp+4+l]
0x505255: mov     edx, [esp+4+arg_10]
0x505259: push    esi
0x50525A: mov     esi, [esp+8+a4]
0x50525E: lea     eax, [esp+8+var_4]
0x505262: push    eax; UInt16
0x505263: mov     eax, [esp+0Ch+arg_C]
0x505267: push    ecx; l
0x505268: mov     ecx, [esp+10h+a3]
0x50526C: push    edx; a6
0x50526D: mov     edx, [esp+14h+arg_4]
0x505271: push    eax; a5
0x505272: mov     eax, [esp+18h+a1]
0x505276: push    esi; a4
0x505277: push    ecx; a3
0x505278: push    edx; a2
0x505279: push    eax; a1
0x50527A: mov     dword ptr [esp+28h+var_4], 0
0x505282: call    Script_ExtractArgs
0x505287: add     esp, 20h
0x50528A: test    al, al
0x50528C: jnz     short loc_505291
0x50528E: pop     esi
0x50528F: pop     ecx
0x505290: retn
0x505291: test    esi, esi
0x505293: jz      short loc_5052BC
0x505295: push    0; int
0x505297: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50529C: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5052A1: push    0; int
0x5052A3: push    esi; void *
0x5052A4: call    OblivionDynamicCast
0x5052A9: add     esp, 14h
0x5052AC: test    eax, eax
0x5052AE: jz      short loc_5052BC
0x5052B0: mov     ecx, dword ptr [esp+8+var_4]
0x5052B4: push    ecx
0x5052B5: mov     ecx, eax
0x5052B7: call    sub_5E0FB0
0x5052BC: mov     al, 1
0x5052BE: pop     esi
0x5052BF: pop     ecx
0x5052C0: retn
