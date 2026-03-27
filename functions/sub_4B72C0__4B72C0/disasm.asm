0x4B72C0: sub     esp, 8
0x4B72C3: push    ebx
0x4B72C4: push    ebp
0x4B72C5: push    esi
0x4B72C6: mov     esi, [esp+14h+arg_4]
0x4B72CA: test    esi, esi
0x4B72CC: push    edi
0x4B72CD: mov     [esp+18h+var_5], 0
0x4B72D2: jz      loc_4B747F
0x4B72D8: mov     edi, [esp+18h+arg_0]
0x4B72DC: test    edi, edi
0x4B72DE: jz      loc_4B747F
0x4B72E4: mov     ecx, edi; this
0x4B72E6: call    GetTeleportExtraData
0x4B72EB: mov     ecx, edi
0x4B72ED: mov     ebx, eax
0x4B72EF: xor     ebp, ebp
0x4B72F1: call    sub_4D7740
0x4B72F6: test    eax, eax
0x4B72F8: mov     [esp+18h+arg_4], eax
0x4B72FC: jnz     short loc_4B730E
0x4B72FE: cmp     [esp+18h+arg_C], al
0x4B7302: jz      short loc_4B730E
0x4B7304: pop     edi
0x4B7305: pop     esi
0x4B7306: pop     ebp
0x4B7307: mov     al, 1
0x4B7309: pop     ebx
0x4B730A: add     esp, 8
0x4B730D: retn
0x4B730E: test    ebx, ebx
0x4B7310: jz      short loc_4B738B
0x4B7312: mov     ecx, ebx
0x4B7314: call    sub_42B460
0x4B7319: cmp     esi, ds:0B333C4h
0x4B731F: mov     ebp, eax
0x4B7321: jz      short loc_4B738B
0x4B7323: mov     ecx, esi; this
0x4B7325: call    TESObjectREFR_GetParentCell
0x4B732A: test    eax, eax
0x4B732C: jz      short loc_4B738B
0x4B732E: mov     ecx, esi; this
0x4B7330: call    TESObjectREFR_GetParentCell
0x4B7335: mov     ecx, eax
0x4B7337: call    TESObjectCELL_GetOwner
0x4B733C: test    eax, eax
0x4B733E: jz      short loc_4B738B
0x4B7340: push    esi
0x4B7341: mov     ecx, esi; this
0x4B7343: call    TESObjectREFR_GetParentCell
0x4B7348: mov     ecx, eax
0x4B734A: call    sub_4CAAC0
0x4B734F: test    al, al
0x4B7351: jz      short loc_4B738B
0x4B7353: test    ebp, ebp
0x4B7355: jz      loc_4B743C
0x4B735B: mov     ecx, ebp
0x4B735D: call    TESObjectCELL_GetOwner
0x4B7362: test    eax, eax
0x4B7364: jz      loc_4B743C
0x4B736A: push    esi
0x4B736B: mov     ecx, ebp
0x4B736D: call    sub_4CAAC0
0x4B7372: test    al, al
0x4B7374: jz      loc_4B747F
0x4B737A: pop     edi
0x4B737B: pop     esi
0x4B737C: mov     [esp+10h+var_5], 1
0x4B7381: mov     al, [esp+10h+var_5]
0x4B7385: pop     ebp
0x4B7386: pop     ebx
0x4B7387: add     esp, 8
0x4B738A: retn
0x4B738B: push    1
0x4B738D: push    esi
0x4B738E: mov     ecx, edi
0x4B7390: call    TESOBjectREFR_IsOwnedBy
0x4B7395: test    al, al
0x4B7397: jz      short loc_4B73E3
0x4B7399: mov     ecx, ds:0B333C4h
0x4B739F: cmp     esi, ecx
0x4B73A1: jnz     loc_4B743C
0x4B73A7: cmp     [esp+18h+arg_8], 0
0x4B73AC: jz      loc_4B743C
0x4B73B2: mov     eax, [esp+18h+arg_4]
0x4B73B6: mov     eax, [eax+4]
0x4B73B9: test    eax, eax
0x4B73BB: jz      short loc_4B743C
0x4B73BD: lea     edx, [esp+18h+var_4]
0x4B73C1: push    edx
0x4B73C2: push    0
0x4B73C4: push    1
0x4B73C6: push    0
0x4B73C8: push    eax
0x4B73C9: call    sub_5E4A00
0x4B73CE: test    al, al
0x4B73D0: jz      short loc_4B743C
0x4B73D2: pop     edi
0x4B73D3: pop     esi
0x4B73D4: mov     [esp+10h+var_5], 0
0x4B73D9: mov     al, [esp+10h+var_5]
0x4B73DD: pop     ebp
0x4B73DE: pop     ebx
0x4B73DF: add     esp, 8
0x4B73E2: retn
0x4B73E3: mov     ecx, esi; this
0x4B73E5: call    sub_5E6C60
0x4B73EA: test    al, al
0x4B73EC: jz      short loc_4B73F9
0x4B73EE: mov     ecx, esi
0x4B73F0: call    sub_5E6BA0
0x4B73F5: test    al, al
0x4B73F7: jnz     short loc_4B743C
0x4B73F9: mov     ecx, ds:0B333C4h
0x4B73FF: cmp     esi, ecx
0x4B7401: jnz     short loc_4B744D
0x4B7403: mov     eax, [ecx]
0x4B7405: mov     edx, [eax+354h]
0x4B740B: call    edx
0x4B740D: test    al, al
0x4B740F: jz      short loc_4B744D
0x4B7411: test    ebx, ebx
0x4B7413: jz      short loc_4B747F
0x4B7415: mov     eax, [esp+18h+arg_4]
0x4B7419: test    eax, eax
0x4B741B: jz      short loc_4B747F
0x4B741D: cmp     byte ptr [eax], 64h ; 'd'
0x4B7420: jz      short loc_4B747F
0x4B7422: test    ebp, ebp
0x4B7424: jz      short loc_4B743C
0x4B7426: mov     ecx, ebp; this
0x4B7428: call    TESObjectCELL_IsInterior
0x4B742D: test    al, al
0x4B742F: jz      short loc_4B743C
0x4B7431: mov     ecx, ebp
0x4B7433: call    sub_4C9830
0x4B7438: test    al, al
0x4B743A: jz      short loc_4B747F
0x4B743C: pop     edi
0x4B743D: pop     esi
0x4B743E: mov     [esp+10h+var_5], 1
0x4B7443: mov     al, [esp+10h+var_5]
0x4B7447: pop     ebp
0x4B7448: pop     ebx
0x4B7449: add     esp, 8
0x4B744C: retn
0x4B744D: mov     ecx, esi
0x4B744F: call    sub_5E3220
0x4B7454: test    al, al
0x4B7456: jz      short loc_4B747F
0x4B7458: mov     ecx, [esi+58h]
0x4B745B: mov     eax, [ecx]
0x4B745D: mov     edx, [eax+0CCh]
0x4B7463: call    edx
0x4B7465: cmp     eax, ds:0B333C4h
0x4B746B: jnz     short loc_4B747F
0x4B746D: mov     eax, [esi]
0x4B746F: mov     edx, [eax+354h]
0x4B7475: mov     ecx, esi
0x4B7477: call    edx
0x4B7479: test    al, al
0x4B747B: mov     al, 1
0x4B747D: jnz     short loc_4B7483
0x4B747F: mov     al, [esp+18h+var_5]
0x4B7483: pop     edi
0x4B7484: pop     esi
0x4B7485: pop     ebp
0x4B7486: pop     ebx
0x4B7487: add     esp, 8
0x4B748A: retn
