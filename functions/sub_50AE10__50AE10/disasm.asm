0x50AE10: sub     esp, 8
0x50AE13: mov     edx, [esp+8+l]
0x50AE17: push    esi
0x50AE18: mov     esi, [esp+0Ch+a4]
0x50AE1C: lea     eax, [esp+0Ch+var_4]
0x50AE20: push    eax
0x50AE21: mov     eax, [esp+10h+arg_10]
0x50AE25: lea     ecx, [esp+10h+var_8]
0x50AE29: push    ecx; UInt16
0x50AE2A: mov     ecx, [esp+14h+arg_C]
0x50AE2E: push    edx; l
0x50AE2F: mov     edx, [esp+18h+a3]
0x50AE33: push    eax; a6
0x50AE34: mov     eax, [esp+1Ch+arg_4]
0x50AE38: push    ecx; a5
0x50AE39: mov     ecx, [esp+20h+a1]
0x50AE3D: push    esi; a4
0x50AE3E: push    edx; a3
0x50AE3F: push    eax; a2
0x50AE40: push    ecx; a1
0x50AE41: mov     dword ptr [esp+30h+var_8], 0
0x50AE49: mov     [esp+30h+var_4], 0
0x50AE51: call    Script_ExtractArgs
0x50AE56: add     esp, 24h
0x50AE59: test    al, al
0x50AE5B: jnz     short loc_50AE62
0x50AE5D: pop     esi
0x50AE5E: add     esp, 8
0x50AE61: retn
0x50AE62: push    edi
0x50AE63: push    0; int
0x50AE65: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x50AE6A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50AE6F: push    0; int
0x50AE71: push    esi; void *
0x50AE72: call    OblivionDynamicCast
0x50AE77: mov     edx, dword ptr [esp+24h+var_8]
0x50AE7B: push    0; int
0x50AE7D: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x50AE82: push    offset ??_R0?AVActor@@@8; struct _s_RTTICompleteObjectLocator *
0x50AE87: push    0; int
0x50AE89: push    edx; void *
0x50AE8A: mov     edi, eax
0x50AE8C: call    OblivionDynamicCast
0x50AE91: add     esp, 28h
0x50AE94: test    edi, edi
0x50AE96: mov     esi, eax
0x50AE98: jz      loc_50AF7E
0x50AE9E: test    esi, esi
0x50AEA0: jz      loc_50AF7E
0x50AEA6: mov     eax, [edi+8]
0x50AEA9: shr     eax, 0Bh
0x50AEAC: test    al, 1
0x50AEAE: jnz     loc_50AF7E
0x50AEB4: mov     ecx, [esi+8]
0x50AEB7: shr     ecx, 0Bh
0x50AEBA: test    cl, 1
0x50AEBD: jnz     loc_50AF7E
0x50AEC3: mov     edx, [edi]
0x50AEC5: mov     eax, [edx+18Ch]
0x50AECB: mov     ecx, edi
0x50AECD: call    eax
0x50AECF: cmp     eax, 9
0x50AED2: jz      loc_50AF7E
0x50AED8: mov     eax, [esp+10h+var_4]
0x50AEDC: mov     ecx, dword ptr [esp+10h+var_8]
0x50AEE0: mov     edx, [edi]
0x50AEE2: mov     edx, [edx+2F4h]
0x50AEE8: push    eax
0x50AEE9: push    0
0x50AEEB: push    ecx
0x50AEEC: mov     ecx, edi
0x50AEEE: call    edx
0x50AEF0: test    al, al
0x50AEF2: jz      loc_50AF7E
0x50AEF8: cmp     esi, ds:0B333C4h
0x50AEFE: jz      short loc_50AF7E
0x50AF00: cmp     edi, esi
0x50AF02: jz      short loc_50AF7E
0x50AF04: mov     eax, [esi+58h]
0x50AF07: cmp     dword ptr [eax+8], 0
0x50AF0B: jz      short loc_50AF55
0x50AF0D: mov     ecx, [eax+8]
0x50AF10: call    sub_5660A0
0x50AF15: test    al, al
0x50AF17: jnz     short loc_50AF55
0x50AF19: push    ebx
0x50AF1A: mov     ebx, [esi+58h]
0x50AF1D: mov     eax, [ebx]
0x50AF1F: mov     edx, [eax+390h]
0x50AF25: mov     ecx, ebx
0x50AF27: call    edx
0x50AF29: mov     ecx, ebx
0x50AF2B: push    eax
0x50AF2C: mov     eax, [ebx]
0x50AF2E: mov     edx, [eax+0C0h]
0x50AF34: call    edx
0x50AF36: mov     ecx, ebx
0x50AF38: push    eax
0x50AF39: mov     eax, [ebx]
0x50AF3B: mov     edx, [eax+0CCh]
0x50AF41: call    edx
0x50AF43: mov     ecx, [ebx+8]
0x50AF46: push    eax
0x50AF47: mov     eax, [ebx+4]
0x50AF4A: push    eax
0x50AF4B: push    ecx
0x50AF4C: lea     ecx, [esi+44h]
0x50AF4F: call    sub_4268B0
0x50AF54: pop     ebx
0x50AF55: push    1; a4
0x50AF57: push    0; a3
0x50AF59: mov     ecx, edi
0x50AF5B: call    sub_5E0380
0x50AF60: push    eax; a2
0x50AF61: mov     ecx, esi; this
0x50AF63: call    Actor_AddPackage?
0x50AF68: mov     esi, [esi+58h]
0x50AF6B: mov     edx, [esi]
0x50AF6D: mov     eax, dword ptr [esp+10h+var_8]
0x50AF71: mov     edx, [edx+188h]
0x50AF77: push    1
0x50AF79: push    eax
0x50AF7A: mov     ecx, esi
0x50AF7C: call    edx
0x50AF7E: pop     edi
0x50AF7F: mov     al, 1
0x50AF81: pop     esi
0x50AF82: add     esp, 8
0x50AF85: retn
