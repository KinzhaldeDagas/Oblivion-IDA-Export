0x648E40: push    ebx
0x648E41: mov     ebx, [esp+4+arg_0]
0x648E45: push    esi
0x648E46: push    edi
0x648E47: mov     edi, ecx
0x648E49: mov     ecx, ebx
0x648E4B: call    sub_5E0330
0x648E50: mov     esi, eax
0x648E52: mov     eax, [edi+8]
0x648E55: test    eax, eax
0x648E57: jz      short loc_648E82
0x648E59: cmp     esi, eax
0x648E5B: jz      short loc_648E82
0x648E5D: test    esi, esi
0x648E5F: jz      short loc_648E74
0x648E61: mov     eax, [esi+0Ch]
0x648E64: mov     ecx, ds:0B33A98h
0x648E6A: push    eax; _DWORD
0x648E6B: call    TESDataHandler_IsFormIDCreated?
0x648E70: test    al, al
0x648E72: jnz     short loc_648E82
0x648E74: mov     eax, [ebx]
0x648E76: mov     edx, [eax+44h]
0x648E79: push    30000h
0x648E7E: mov     ecx, ebx
0x648E80: call    edx
0x648E82: test    esi, esi
0x648E84: mov     [edi+8], esi
0x648E87: jz      short loc_648EC5
0x648E89: mov     ecx, [esi+24h]
0x648E8C: test    ecx, ecx
0x648E8E: jz      short loc_648E9A
0x648E90: call    sub_569740
0x648E95: cmp     eax, 2
0x648E98: jnz     short loc_648EC5
0x648E9A: mov     eax, [ebx]
0x648E9C: fld     dword ptr [ebx+28h]
0x648E9F: mov     edx, [eax+174h]
0x648EA5: push    ecx
0x648EA6: mov     ecx, ebx
0x648EA8: fstp    [esp+10h+var_10]; float
0x648EAB: call    edx
0x648EAD: push    eax; int
0x648EAE: mov     ecx, ebx; this
0x648EB0: call    TESObjectREFR_GetParentCell
0x648EB5: push    eax; int
0x648EB6: mov     ecx, ebx; this
0x648EB8: call    TESObjectREFR_GetWorldSpace
0x648EBD: push    eax; int
0x648EBE: mov     ecx, ebx
0x648EC0: call    sub_4D7A20
0x648EC5: pop     edi
0x648EC6: pop     esi
0x648EC7: pop     ebx
0x648EC8: retn    4
