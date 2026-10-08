0x810DB0: push    0FFFFFFFFh
0x810DB2: push    offset ??0DistantLODShader@@QAE@XZ_SEH
0x810DB7: mov     eax, large fs:0
0x810DBD: push    eax
0x810DBE: sub     esp, 8
0x810DC1: push    ebx
0x810DC2: push    ebp
0x810DC3: push    esi
0x810DC4: push    edi
0x810DC5: mov     eax, ds:0B30AACh
0x810DCA: xor     eax, esp
0x810DCC: push    eax
0x810DCD: lea     eax, [esp+28h+var_C]
0x810DD1: mov     large fs:0, eax
0x810DD7: mov     edi, ecx
0x810DD9: mov     [esp+28h+var_10], edi
0x810DDD: mov     dword ptr [edi], offset ??_7DistantLODShader@@6B@; const DistantLODShader::`vftable'
0x810DE3: mov     [esp+28h+var_4], 3
0x810DEB: lea     ebp, [edi+8Ch]
0x810DF1: mov     ebx, 4
0x810DF6: mov     esi, [ebp+0]
0x810DF9: test    esi, esi
0x810DFB: jz      short loc_810E20
0x810DFD: lea     eax, [esi+4]
0x810E00: push    eax; lpAddend
0x810E01: call    dword ptr ds:0A2807Ch
0x810E07: test    eax, eax
0x810E09: jnz     short loc_810E19
0x810E0B: test    esi, esi
0x810E0D: jz      short loc_810E19
0x810E0F: mov     edx, [esi]
0x810E11: mov     eax, [edx]
0x810E13: push    1
0x810E15: mov     ecx, esi
0x810E17: call    eax
0x810E19: mov     dword ptr [ebp+0], 0
0x810E20: add     ebp, 4
0x810E23: sub     ebx, 1
0x810E26: jnz     short loc_810DF6
0x810E28: lea     ebx, [edi+9Ch]
0x810E2E: mov     ebp, ebx
0x810E30: mov     [esp+28h+var_14], 2
0x810E38: mov     esi, [ebp+0]
0x810E3B: test    esi, esi
0x810E3D: jz      short loc_810E62
0x810E3F: lea     ecx, [esi+4]
0x810E42: push    ecx; lpAddend
0x810E43: call    dword ptr ds:0A2807Ch
0x810E49: test    eax, eax
0x810E4B: jnz     short loc_810E5B
0x810E4D: test    esi, esi
0x810E4F: jz      short loc_810E5B
0x810E51: mov     edx, [esi]
0x810E53: mov     eax, [edx]
0x810E55: push    1
0x810E57: mov     ecx, esi
0x810E59: call    eax
0x810E5B: mov     dword ptr [ebp+0], 0
0x810E62: add     ebp, 4
0x810E65: sub     [esp+28h+var_14], 1
0x810E6A: jnz     short loc_810E38
0x810E6C: mov     eax, [edi+0A4h]
0x810E72: push    eax
0x810E73: mov     dword ptr [edi+0A8h], 0
0x810E7D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x810E82: add     esp, 4
0x810E85: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x810E8A: push    2; int
0x810E8C: push    4; unsigned int
0x810E8E: push    ebx; void *
0x810E8F: mov     byte ptr [esp+38h+var_4], 2
0x810E94: call    $LN21
0x810E99: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x810E9E: push    4; int
0x810EA0: push    4; unsigned int
0x810EA2: lea     eax, [edi+8Ch]
0x810EA8: push    eax; void *
0x810EA9: mov     byte ptr [esp+38h+var_4], 1
0x810EAE: call    $LN21
0x810EB3: push    offset sub_4027D0; void (__thiscall *)(void *)
0x810EB8: push    1; int
0x810EBA: push    4; unsigned int
0x810EBC: lea     ecx, [edi+7Ch]
0x810EBF: push    ecx; void *
0x810EC0: mov     byte ptr [esp+38h+var_4], 0
0x810EC5: call    $LN21
0x810ECA: mov     ecx, edi; this
0x810ECC: mov     [esp+28h+var_4], 0FFFFFFFFh
0x810ED4: call    ??1BSShader@@UAE@XZ;
0x810ED9: mov     ecx, [esp+28h+var_C]
0x810EDD: mov     large fs:0, ecx
0x810EE4: pop     ecx
0x810EE5: pop     edi
0x810EE6: pop     esi
0x810EE7: pop     ebp
0x810EE8: pop     ebx
0x810EE9: add     esp, 14h
0x810EEC: retn
0x9D1060: mov     ecx, [ebp-10h]; this
0x9D1063: jmp     ??1BSShader@@UAE@XZ;
0x9D1068: push    offset sub_4027D0; void (__thiscall *)(void *)
0x9D106D: push    1; int
0x9D106F: push    4; unsigned int
0x9D1071: mov     eax, [ebp-10h]
0x9D1074: add     eax, 7Ch ; '|'
0x9D1077: push    eax; void *
0x9D1078: call    $LN21
0x9D107D: retn
0x9D107E: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D1083: push    4; int
0x9D1085: push    4; unsigned int
0x9D1087: mov     eax, [ebp-10h]
0x9D108A: add     eax, 8Ch ; 'Œ'
0x9D108F: push    eax; void *
0x9D1090: call    $LN21
0x9D1095: retn
0x9D1096: push    offset NiPointerSlot_Release; void (__thiscall *)(void *)
0x9D109B: push    2; int
0x9D109D: push    4; unsigned int
0x9D109F: mov     eax, [ebp-10h]
0x9D10A2: add     eax, 9Ch ; 'œ'
0x9D10A7: push    eax; void *
0x9D10A8: call    $LN21
0x9D10AD: retn
0x9D10AE: mov     edx, [esp+arg_4]
0x9D10B2: lea     eax, [edx-18h]
0x9D10B5: mov     ecx, [edx-1Ch]
0x9D10B8: xor     ecx, eax
0x9D10BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D10BF: mov     eax, offset stru_AF97C8
0x9D10C4: jmp     ___CxxFrameHandler3
