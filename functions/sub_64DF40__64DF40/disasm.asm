0x64DF40: sub     esp, 10h
0x64DF43: push    ebx
0x64DF44: push    esi
0x64DF45: mov     esi, ecx
0x64DF47: mov     eax, [esi]
0x64DF49: mov     edx, [eax+184h]
0x64DF4F: mov     dword ptr [esi+2Ch], 0
0x64DF56: call    edx
0x64DF58: mov     ebx, eax
0x64DF5A: test    ebx, ebx
0x64DF5C: jz      loc_64E22A
0x64DF62: movsx   eax, byte ptr [ebx+20h]
0x64DF66: test    eax, eax
0x64DF68: push    edi
0x64DF69: jle     short loc_64DF91
0x64DF6B: cmp     eax, 2
0x64DF6E: jle     short loc_64DF75
0x64DF70: cmp     eax, 7
0x64DF73: jnz     short loc_64DF91
0x64DF75: mov     ecx, ebx
0x64DF77: call    sub_567CA0
0x64DF7C: test    al, al
0x64DF7E: jz      short loc_64DF91
0x64DF80: mov     eax, [esp+1Ch+arg_0]
0x64DF84: push    eax
0x64DF85: mov     ecx, ebx
0x64DF87: call    sub_568BB0
0x64DF8C: jmp     loc_64E1F4
0x64DF91: mov     edi, [ebx+28h]
0x64DF94: test    edi, edi
0x64DF96: mov     [esp+1Ch+var_10], edi
0x64DF9A: jz      loc_64E1F4
0x64DFA0: mov     ecx, edi
0x64DFA2: call    TargetData__GetTargetType
0x64DFA7: test    eax, eax
0x64DFA9: jnz     loc_64E055
0x64DFAF: mov     ecx, edi
0x64DFB1: call    sub_569E60
0x64DFB6: mov     edx, [eax]
0x64DFB8: mov     ecx, eax
0x64DFBA: mov     eax, [edx+198h]
0x64DFC0: push    1
0x64DFC2: call    eax
0x64DFC4: test    al, al
0x64DFC6: jz      short loc_64DFF0
0x64DFC8: mov     ecx, [esi+2Ch]
0x64DFCB: push    1
0x64DFCD: push    ecx
0x64DFCE: mov     ecx, ebx
0x64DFD0: call    sub_566870
0x64DFD5: mov     eax, [esi+2Ch]
0x64DFD8: mov     ecx, [esp+1Ch+arg_0]
0x64DFDC: mov     edx, [ecx]
0x64DFDE: pop     edi
0x64DFDF: pop     esi
0x64DFE0: pop     ebx
0x64DFE1: add     esp, 10h
0x64DFE4: mov     [esp+arg_0], eax
0x64DFE8: mov     edx, [edx+2F8h]
0x64DFEE: jmp     edx
0x64DFF0: mov     ebx, [esi]
0x64DFF2: mov     ecx, edi
0x64DFF4: call    sub_569E60
0x64DFF9: push    eax
0x64DFFA: mov     eax, [ebx+0D0h]
0x64E000: mov     ecx, esi
0x64E002: call    eax
0x64E004: mov     ecx, [esi+2Ch]
0x64E007: test    ecx, ecx
0x64E009: jz      loc_64E1F4
0x64E00F: mov     edx, [ecx+8]
0x64E012: shr     edx, 5
0x64E015: test    dl, 1
0x64E018: jz      loc_64E1F4
0x64E01E: mov     eax, [ecx]
0x64E020: mov     edx, [eax+190h]
0x64E026: call    edx
0x64E028: test    al, al
0x64E02A: jnz     loc_64E1F4
0x64E030: mov     eax, [esi+2Ch]
0x64E033: lea     ecx, [eax+44h]
0x64E036: test    ecx, ecx
0x64E038: jz      loc_64E1F4
0x64E03E: mov     edi, [esi]
0x64E040: call    ExtraDataList_GetReferencePointer
0x64E045: push    eax
0x64E046: mov     eax, [edi+0D0h]
0x64E04C: mov     ecx, esi
0x64E04E: call    eax
0x64E050: jmp     loc_64E1F4
0x64E055: cmp     dword ptr [esi+40h], 0
0x64E059: jnz     loc_64E173
0x64E05F: cmp     dword ptr [esi+3Ch], 0
0x64E063: jnz     loc_64E173
0x64E069: cmp     dword ptr [esi+0C0h], 0
0x64E070: jnz     loc_64E160
0x64E076: mov     ecx, [ebx+1Ch]
0x64E079: shr     ecx, 2
0x64E07C: test    cl, 1
0x64E07F: jz      loc_64E160
0x64E085: mov     edi, [esp+1Ch+arg_0]
0x64E089: push    ebp
0x64E08A: mov     ecx, edi; this
0x64E08C: call    TESObjectREFR_GetParentCell
0x64E091: mov     edx, [edi]
0x64E093: mov     [esp+20h+arg_0], eax
0x64E097: mov     eax, [edx+174h]
0x64E09D: mov     ecx, edi
0x64E09F: call    eax
0x64E0A1: mov     ecx, [eax]
0x64E0A3: mov     ebx, [ebx+28h]
0x64E0A6: mov     [esp+1Ch+a2], ecx
0x64E0AA: mov     edx, [eax+4]
0x64E0AD: mov     [esp+1Ch+var_4], edx
0x64E0B1: mov     eax, [eax+8]
0x64E0B4: mov     ecx, ebx
0x64E0B6: mov     [esp+1Ch], eax
0x64E0BA: call    TargetData__GetTargetType
0x64E0BF: mov     ecx, [esp+1Ch+var_C]
0x64E0C3: mov     ebp, eax
0x64E0C5: call    sub_452A60
0x64E0CA: cmp     ebp, 1
0x64E0CD: mov     [esi+38h], eax
0x64E0D0: jnz     short loc_64E0E5
0x64E0D2: mov     ecx, ebx
0x64E0D4: call    sub_569E70
0x64E0D9: mov     [esi+64h], eax
0x64E0DC: mov     dword ptr [esi+6Ch], 0
0x64E0E3: jmp     short loc_64E0FB
0x64E0E5: cmp     ebp, 2
0x64E0E8: jnz     short loc_64E0FB
0x64E0EA: mov     ecx, ebx
0x64E0EC: mov     dword ptr [esi+64h], 0
0x64E0F3: call    sub_569E80
0x64E0F8: mov     [esi+6Ch], eax
0x64E0FB: mov     ecx, offset fAIAcquireObjectDistance
0x64E100: call    GameSetting_GetSafeFloatPointer
0x64E105: mov     ecx, offset fAIAcquireObjectDistance
0x64E10A: mov     ebx, eax
0x64E10C: call    GameSetting_GetSafeFloatPointer
0x64E111: fld     dword ptr [ebx]
0x64E113: mov     edx, [edi]
0x64E115: push    edi; a7
0x64E116: push    offset sub_646600; a6
0x64E11B: push    ecx
0x64E11C: mov     ebp, eax
0x64E11E: fstp    [esp+28h+a5]; a5
0x64E121: mov     eax, [edx+174h]
0x64E127: mov     ecx, edi
0x64E129: call    eax
0x64E12B: fld     dword ptr [ebp+0]
0x64E12E: mov     edx, [esp+28h+a1]
0x64E132: push    eax; a4
0x64E133: push    ecx
0x64E134: fstp    [esp+30h+a3]; a3
0x64E137: lea     ecx, [esp+30h+a2]
0x64E13B: push    ecx; a2
0x64E13C: mov     ecx, ds:0B33A98h
0x64E142: push    edx; a1
0x64E143: call    sub_446B90
0x64E148: xor     eax, eax
0x64E14A: mov     [esi+6Ch], eax
0x64E14D: mov     [esi+64h], eax
0x64E150: mov     eax, [esi]
0x64E152: mov     edx, [eax+568h]
0x64E158: push    edi
0x64E159: mov     ecx, esi
0x64E15B: call    edx
0x64E15D: pop     ebp
0x64E15E: jmp     short loc_64E173
0x64E160: mov     ecx, [esp+1Ch+arg_0]
0x64E164: mov     eax, [esi]
0x64E166: mov     edx, [eax+188h]
0x64E16C: push    1
0x64E16E: push    ecx
0x64E16F: mov     ecx, esi
0x64E171: call    edx
0x64E173: cmp     dword ptr [esi+40h], 0
0x64E177: lea     edi, [esi+3Ch]
0x64E17A: jnz     short loc_64E181
0x64E17C: cmp     dword ptr [edi], 0
0x64E17F: jz      short loc_64E1F4
0x64E181: mov     eax, [edi]
0x64E183: mov     [esi+44h], eax
0x64E186: cmp     dword ptr [eax+1Ch], 2
0x64E18A: mov     eax, [eax]
0x64E18C: jnz     short loc_64E1DC
0x64E18E: mov     edx, [eax]
0x64E190: mov     ecx, eax
0x64E192: mov     eax, [edx+190h]
0x64E198: call    eax
0x64E19A: test    al, al
0x64E19C: mov     eax, [esi+44h]
0x64E19F: mov     ecx, [eax]; this
0x64E1A1: jz      short loc_64E1A6
0x64E1A3: push    ecx
0x64E1A4: jmp     short loc_64E1DD
0x64E1A6: push    0; int
0x64E1A8: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64E1AD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x64E1B2: push    0; int
0x64E1B4: call    TESObjectREFR_GetOwner
0x64E1B9: push    eax; void *
0x64E1BA: call    OblivionDynamicCast
0x64E1BF: add     esp, 14h
0x64E1C2: test    eax, eax
0x64E1C4: jz      short loc_64E1E9
0x64E1C6: mov     ebx, [esi]
0x64E1C8: push    eax
0x64E1C9: mov     ecx, offset ActorProcessManager_ptr
0x64E1CE: call    sub_675220
0x64E1D3: mov     edx, [ebx+0D0h]
0x64E1D9: push    eax
0x64E1DA: jmp     short loc_64E1E5
0x64E1DC: push    eax
0x64E1DD: mov     edx, [esi]
0x64E1DF: mov     edx, [edx+0D0h]
0x64E1E5: mov     ecx, esi
0x64E1E7: call    edx
0x64E1E9: mov     eax, [esi+44h]
0x64E1EC: push    eax
0x64E1ED: mov     ecx, edi
0x64E1EF: call    BSSimpleList_Remove
0x64E1F4: mov     ecx, [esi+2Ch]
0x64E1F7: test    ecx, ecx
0x64E1F9: jz      short loc_64E229
0x64E1FB: mov     edx, [ecx]
0x64E1FD: mov     eax, [edx+174h]
0x64E203: call    eax
0x64E205: mov     ecx, [eax]
0x64E207: mov     [esi+0D4h], ecx
0x64E20D: mov     edx, [eax+4]
0x64E210: mov     ecx, [esi+2Ch]
0x64E213: mov     [esi+0D8h], edx
0x64E219: mov     eax, [eax+8]
0x64E21C: push    1
0x64E21E: mov     [esi+0DCh], eax
0x64E224: call    Actor__SetCompressedFlag
0x64E229: pop     edi
0x64E22A: pop     esi
0x64E22B: pop     ebx
0x64E22C: add     esp, 10h
0x64E22F: retn    4
