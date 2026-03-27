0x515D20: push    0FFFFFFFFh
0x515D22: push    offset SEH_515EF0
0x515D27: mov     eax, large fs:0
0x515D2D: push    eax
0x515D2E: sub     esp, 18h
0x515D31: push    ebx
0x515D32: push    ebp
0x515D33: push    esi
0x515D34: push    edi
0x515D35: mov     eax, ds:0B30AACh
0x515D3A: xor     eax, esp
0x515D3C: push    eax
0x515D3D: lea     eax, [esp+38h+var_C]
0x515D41: mov     large fs:0, eax
0x515D47: mov     ecx, [esp+38h+l]
0x515D4B: mov     edx, [esp+38h+arg_10]
0x515D4F: lea     eax, [esp+38h+var_24]
0x515D53: push    eax; UInt16
0x515D54: mov     eax, [esp+3Ch+arg_C]
0x515D58: push    ecx; l
0x515D59: mov     ecx, [esp+40h+a4]
0x515D5D: push    edx; a6
0x515D5E: mov     edx, [esp+44h+a3]
0x515D62: push    eax; a5
0x515D63: mov     eax, [esp+48h+arg_4]
0x515D67: push    ecx; a4
0x515D68: mov     ecx, [esp+4Ch+a1]
0x515D6C: push    edx; a3
0x515D6D: push    eax; a2
0x515D6E: xor     ebp, ebp
0x515D70: push    ecx; a1
0x515D71: mov     dword ptr [esp+58h+var_24], ebp
0x515D75: call    Script_ExtractArgs
0x515D7A: add     esp, 20h
0x515D7D: test    al, al
0x515D7F: jz      loc_515EBE
0x515D85: mov     ecx, ds:0B333C4h
0x515D8B: mov     edx, [ecx]
0x515D8D: mov     eax, [edx+198h]
0x515D93: push    ebp
0x515D94: call    eax
0x515D96: test    al, al
0x515D98: jnz     loc_515ED4
0x515D9E: mov     ecx, ds:0B333C4h
0x515DA4: call    sub_4D8E40
0x515DA9: mov     ebx, eax
0x515DAB: cmp     ebx, ebp
0x515DAD: mov     [esp+38h+var_20], ebx
0x515DB1: jz      loc_515ED4
0x515DB7: mov     ecx, ebx; this
0x515DB9: xor     edi, edi
0x515DBB: call    GetTeleportExtraData
0x515DC0: mov     esi, eax
0x515DC2: test    esi, esi
0x515DC4: jz      short loc_515DF9
0x515DC6: mov     ecx, esi
0x515DC8: call    sub_42B470
0x515DCD: mov     edi, eax
0x515DCF: test    edi, edi
0x515DD1: jnz     short loc_515DF9
0x515DD3: mov     ecx, esi
0x515DD5: call    sub_42B460
0x515DDA: test    eax, eax
0x515DDC: jz      short loc_515DF9
0x515DDE: mov     ecx, esi
0x515DE0: call    sub_42B460
0x515DE5: mov     ecx, eax; this
0x515DE7: call    TESObjectCELL_IsInterior
0x515DEC: test    al, al
0x515DEE: jz      short loc_515DF9
0x515DF0: mov     ecx, esi
0x515DF2: call    sub_42B460
0x515DF7: mov     ebp, eax
0x515DF9: push    25h ; '%'
0x515DFB: lea     ecx, [esp+3Ch+var_1C]
0x515DFF: call    sub_4B8420
0x515E04: test    edi, edi
0x515E06: mov     [esp+38h+var_4], 0
0x515E0E: jz      short loc_515E19
0x515E10: mov     ecx, edi
0x515E12: call    sub_4F2770
0x515E17: jmp     short loc_515E29
0x515E19: test    ebp, ebp
0x515E1B: jz      short loc_515E29
0x515E1D: lea     ecx, [esp+38h+var_1C]
0x515E21: push    ecx
0x515E22: mov     ecx, ebp
0x515E24: call    sub_4CC070
0x515E29: lea     ecx, [esp+38h+var_1C]
0x515E2D: call    NiTMap_Clear
0x515E32: mov     ecx, ds:0B333C4h
0x515E38: mov     edx, [ecx]
0x515E3A: mov     eax, [edx+118h]
0x515E40: call    eax
0x515E42: cmp     dword ptr [esp+38h+var_24], 0
0x515E47: jnz     short loc_515E96
0x515E49: test    edi, edi
0x515E4B: mov     ecx, ds:0BA9DE4h
0x515E51: mov     edx, large fs:2Ch
0x515E58: mov     esi, [edx+ecx*4]
0x515E5B: mov     bl, [esi+185h]
0x515E61: mov     byte ptr [esi+185h], 0
0x515E68: jz      short loc_515E73
0x515E6A: mov     ecx, edi
0x515E6C: call    sub_4F2630
0x515E71: jmp     short loc_515E83
0x515E73: test    ebp, ebp
0x515E75: jz      short loc_515E83
0x515E77: lea     eax, [esp+38h+var_1C]
0x515E7B: push    eax
0x515E7C: mov     ecx, ebp
0x515E7E: call    sub_4CBE50
0x515E83: lea     ecx, [esp+38h+var_1C]
0x515E87: call    NiTMap_Clear
0x515E8C: mov     [esi+185h], bl
0x515E92: mov     ebx, [esp+38h+var_20]
0x515E96: push    0
0x515E98: push    ebx
0x515E99: call    sub_4B7DB0
0x515E9E: mov     eax, ds:0B333C4h
0x515EA3: add     dword ptr [eax+68Ch], 1
0x515EAA: add     esp, 8
0x515EAD: lea     ecx, [esp+38h+var_1C]
0x515EB1: mov     [esp+38h+var_4], 0FFFFFFFFh
0x515EB9: call    ??1?$NiTPointerMap@PAVTESObjectCELL@@_N@@UAE@XZ; NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(void)
0x515EBE: xor     al, al
0x515EC0: mov     ecx, dword ptr [esp+38h+var_C]
0x515EC4: mov     large fs:0, ecx
0x515ECB: pop     ecx
0x515ECC: pop     edi
0x515ECD: pop     esi
0x515ECE: pop     ebp
0x515ECF: pop     ebx
0x515ED0: add     esp, 24h
0x515ED3: retn
0x515ED4: mov     al, 1
0x515ED6: mov     ecx, dword ptr [esp+38h+var_C]
0x515EDA: mov     large fs:0, ecx
0x515EE1: pop     ecx
0x515EE2: pop     edi
0x515EE3: pop     esi
0x515EE4: pop     ebp
0x515EE5: pop     ebx
0x515EE6: add     esp, 24h
0x515EE9: retn
