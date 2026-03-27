0x515EF0: push    0FFFFFFFFh
0x515EF2: push    offset SEH_515EF0
0x515EF7: mov     eax, large fs:0
0x515EFD: push    eax
0x515EFE: sub     esp, 18h
0x515F01: push    ebx
0x515F02: push    ebp
0x515F03: push    esi
0x515F04: push    edi
0x515F05: mov     eax, ds:0B30AACh
0x515F0A: xor     eax, esp
0x515F0C: push    eax
0x515F0D: lea     eax, [esp+38h+var_C]
0x515F11: mov     large fs:0, eax
0x515F17: mov     esi, [esp+38h+a4]
0x515F1B: xor     ebp, ebp
0x515F1D: cmp     esi, ebp
0x515F1F: jz      loc_5160BA
0x515F25: mov     ecx, [esp+38h+l]
0x515F29: mov     edx, [esp+38h+arg_10]
0x515F2D: lea     eax, [esp+38h+var_20]
0x515F31: push    eax; UInt16
0x515F32: mov     eax, [esp+3Ch+arg_C]
0x515F36: push    ecx; l
0x515F37: mov     ecx, [esp+40h+a3]
0x515F3B: push    edx; a6
0x515F3C: mov     edx, [esp+44h+arg_4]
0x515F40: push    eax; a5
0x515F41: mov     eax, [esp+48h+a1]
0x515F45: push    esi; a4
0x515F46: push    ecx; a3
0x515F47: push    edx; a2
0x515F48: push    eax; a1
0x515F49: mov     dword ptr [esp+58h+var_20], ebp
0x515F4D: call    Script_ExtractArgs
0x515F52: add     esp, 20h
0x515F55: test    al, al
0x515F57: jnz     short loc_515F6F
0x515F59: xor     al, al
0x515F5B: mov     ecx, [esp+38h+var_C]
0x515F5F: mov     large fs:0, ecx
0x515F66: pop     ecx
0x515F67: pop     edi
0x515F68: pop     esi
0x515F69: pop     ebp
0x515F6A: pop     ebx
0x515F6B: add     esp, 24h
0x515F6E: retn
0x515F6F: mov     edx, [esi]
0x515F71: mov     eax, [edx+170h]
0x515F77: push    ebp; int
0x515F78: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x515F7D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x515F82: push    ebp; int
0x515F83: mov     ecx, esi
0x515F85: call    eax
0x515F87: push    eax; void *
0x515F88: call    OblivionDynamicCast
0x515F8D: add     esp, 14h
0x515F90: cmp     eax, ebp
0x515F92: jz      loc_5160BA
0x515F98: mov     ecx, eax
0x515F9A: call    sub_4B6CF0
0x515F9F: test    al, al
0x515FA1: jz      loc_5160BA
0x515FA7: mov     ecx, esi; this
0x515FA9: xor     edi, edi
0x515FAB: call    GetTeleportExtraData
0x515FB0: mov     esi, eax
0x515FB2: cmp     esi, ebp
0x515FB4: jz      short loc_515FE9
0x515FB6: mov     ecx, esi
0x515FB8: call    sub_42B470
0x515FBD: mov     edi, eax
0x515FBF: cmp     edi, ebp
0x515FC1: jnz     short loc_515FE9
0x515FC3: mov     ecx, esi
0x515FC5: call    sub_42B460
0x515FCA: test    eax, eax
0x515FCC: jz      short loc_515FE9
0x515FCE: mov     ecx, esi
0x515FD0: call    sub_42B460
0x515FD5: mov     ecx, eax; this
0x515FD7: call    TESObjectCELL_IsInterior
0x515FDC: test    al, al
0x515FDE: jz      short loc_515FE9
0x515FE0: mov     ecx, esi
0x515FE2: call    sub_42B460
0x515FE7: mov     ebp, eax
0x515FE9: push    25h ; '%'
0x515FEB: lea     ecx, [esp+3Ch+var_1C]
0x515FEF: xor     bl, bl
0x515FF1: call    sub_4B8420
0x515FF6: test    edi, edi
0x515FF8: mov     [esp+38h+var_4], 0
0x516000: jz      short loc_51600B
0x516002: mov     ecx, edi
0x516004: call    sub_4F2770
0x516009: jmp     short loc_51601B
0x51600B: test    ebp, ebp
0x51600D: jz      short loc_51601D
0x51600F: lea     ecx, [esp+38h+var_1C]
0x516013: push    ecx
0x516014: mov     ecx, ebp
0x516016: call    sub_4CC070
0x51601B: mov     bl, al
0x51601D: lea     ecx, [esp+38h+var_1C]
0x516021: call    NiTMap_Clear
0x516026: cmp     dword ptr [esp+38h+var_20], 0
0x51602B: jnz     short loc_516092
0x51602D: test    bl, bl
0x51602F: jz      short loc_516041
0x516031: mov     ecx, ds:0B333C4h
0x516037: mov     edx, [ecx]
0x516039: mov     eax, [edx+118h]
0x51603F: call    eax
0x516041: test    edi, edi
0x516043: mov     ecx, ds:0BA9DE4h
0x516049: mov     edx, large fs:2Ch
0x516050: mov     esi, [edx+ecx*4]
0x516053: mov     al, [esi+185h]
0x516059: mov     [esp+38h+var_21], al
0x51605D: mov     byte ptr [esi+185h], 0
0x516064: jz      short loc_51606F
0x516066: mov     ecx, edi
0x516068: call    sub_4F2630
0x51606D: jmp     short loc_51607F
0x51606F: test    ebp, ebp
0x516071: jz      short loc_51607F
0x516073: lea     ecx, [esp+38h+var_1C]
0x516077: push    ecx
0x516078: mov     ecx, ebp
0x51607A: call    sub_4CBE50
0x51607F: lea     ecx, [esp+38h+var_1C]
0x516083: call    NiTMap_Clear
0x516088: mov     dl, [esp+38h+var_21]
0x51608C: mov     [esi+185h], dl
0x516092: mov     eax, [esp+38h+a4]
0x516096: push    0
0x516098: push    eax
0x516099: call    sub_4B7DB0
0x51609E: add     esp, 8
0x5160A1: lea     ecx, [esp+38h+var_1C]
0x5160A5: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5160AD: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x5160B2: test    bl, bl
0x5160B4: jnz     loc_515F59
0x5160BA: mov     al, 1
0x5160BC: mov     ecx, [esp+38h+var_C]
0x5160C0: mov     large fs:0, ecx
0x5160C7: pop     ecx
0x5160C8: pop     edi
0x5160C9: pop     esi
0x5160CA: pop     ebp
0x5160CB: pop     ebx
0x5160CC: add     esp, 24h
0x5160CF: retn
