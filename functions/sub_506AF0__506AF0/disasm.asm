0x506AF0: push    ecx
0x506AF1: mov     ecx, [esp+4+l]
0x506AF5: mov     edx, [esp+4+arg_10]
0x506AF9: push    esi
0x506AFA: mov     esi, [esp+8+a4]
0x506AFE: lea     eax, [esp+8+var_4]
0x506B02: push    eax; UInt16
0x506B03: mov     eax, [esp+0Ch+arg_C]
0x506B07: push    ecx; l
0x506B08: mov     ecx, [esp+10h+a3]
0x506B0C: push    edx; a6
0x506B0D: mov     edx, [esp+14h+arg_4]
0x506B11: push    eax; a5
0x506B12: mov     eax, [esp+18h+a1]
0x506B16: push    esi; a4
0x506B17: push    ecx; a3
0x506B18: push    edx; a2
0x506B19: push    eax; a1
0x506B1A: mov     dword ptr [esp+28h+var_4], 0
0x506B22: call    Script_ExtractArgs
0x506B27: add     esp, 20h
0x506B2A: test    al, al
0x506B2C: jnz     short loc_506B31
0x506B2E: pop     esi
0x506B2F: pop     ecx
0x506B30: retn
0x506B31: push    0; int
0x506B33: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x506B38: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x506B3D: push    0; int
0x506B3F: push    esi; void *
0x506B40: call    OblivionDynamicCast
0x506B45: mov     esi, eax
0x506B47: mov     eax, dword ptr [esp+1Ch+var_4]
0x506B4B: add     esp, 14h
0x506B4E: test    eax, eax
0x506B50: jz      short loc_506B76
0x506B52: test    esi, esi
0x506B54: jz      short loc_506B76
0x506B56: mov     edx, [esi]
0x506B58: push    edi
0x506B59: mov     edi, [eax]
0x506B5B: mov     eax, [edx+170h]
0x506B61: push    0FFFFFFFFh
0x506B63: mov     ecx, esi
0x506B65: call    eax
0x506B67: mov     ecx, [esp+0Ch]
0x506B6B: mov     edx, [edi+248h]
0x506B71: push    eax
0x506B72: push    esi
0x506B73: call    edx
0x506B75: pop     edi
0x506B76: mov     al, 1
0x506B78: pop     esi
0x506B79: pop     ecx
0x506B7A: retn
