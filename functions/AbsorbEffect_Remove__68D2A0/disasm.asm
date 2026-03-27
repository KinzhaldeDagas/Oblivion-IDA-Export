0x68D2A0: push    ecx
0x68D2A1: push    esi
0x68D2A2: push    edi
0x68D2A3: mov     esi, ecx
0x68D2A5: call    ValueModifierEffect_Remove
0x68D2AA: mov     eax, [esi+0Ch]
0x68D2AD: mov     ecx, [eax+1Ch]
0x68D2B0: mov     edx, [ecx+58h]
0x68D2B3: shr     edx, 1
0x68D2B5: test    dl, 1
0x68D2B8: jz      short loc_68D2F6
0x68D2BA: mov     ecx, [esi+24h]; this
0x68D2BD: test    ecx, ecx
0x68D2BF: jz      short loc_68D2CA
0x68D2C1: call    MagicCaster_GetParentActor
0x68D2C6: mov     edi, eax
0x68D2C8: jmp     short loc_68D2CC
0x68D2CA: xor     edi, edi
0x68D2CC: fld     dword ptr [esi+18h]
0x68D2CF: push    ecx
0x68D2D0: fstp    [esp+10h+var_4]
0x68D2D4: mov     ecx, esi
0x68D2D6: fld     [esp+10h+var_4]
0x68D2DA: fstp    [esp+10h+var_10]; float
0x68D2DD: call    ValueModifierEffect_GetEffectiveMagnitude
0x68D2E2: push    ecx
0x68D2E3: fstp    [esp+14h+var_8]
0x68D2E7: fld     [esp+14h+var_8]
0x68D2EB: mov     ecx, esi
0x68D2ED: fstp    [esp+14h+var_14]
0x68D2F0: push    edi
0x68D2F1: call    ValueModifierEffect_ModifyAV
0x68D2F6: mov     eax, [esi+48h]
0x68D2F9: mov     ecx, [esi+3Ch]
0x68D2FC: push    eax
0x68D2FD: push    ecx
0x68D2FE: call    sub_7F4420
0x68D303: mov     eax, [esi+3Ch]
0x68D306: add     esp, 8
0x68D309: test    eax, eax
0x68D30B: jz      short loc_68D374
0x68D30D: mov     ecx, [eax+1Ch]
0x68D310: test    ecx, ecx
0x68D312: push    ebx
0x68D313: mov     ebx, ds:0A2807Ch
0x68D319: jz      short loc_68D34D
0x68D31B: mov     edx, [ecx]
0x68D31D: mov     edx, [edx+88h]
0x68D323: push    eax
0x68D324: lea     eax, [esp+18h+var_8]
0x68D328: push    eax
0x68D329: call    edx
0x68D32B: mov     eax, [esp+1Ch+var_10]
0x68D32F: test    eax, eax
0x68D331: jz      short loc_68D34D
0x68D333: mov     edi, eax
0x68D335: add     eax, 4
0x68D338: push    eax; lpAddend
0x68D339: call    ebx ; InterlockedDecrement
0x68D33B: test    eax, eax
0x68D33D: jnz     short loc_68D34D
0x68D33F: test    edi, edi
0x68D341: jz      short loc_68D34D
0x68D343: mov     eax, [edi]
0x68D345: mov     edx, [eax]
0x68D347: push    1
0x68D349: mov     ecx, edi
0x68D34B: call    edx
0x68D34D: mov     edi, [esi+3Ch]
0x68D350: test    edi, edi
0x68D352: jz      short loc_68D373
0x68D354: lea     eax, [edi+4]
0x68D357: push    eax; lpAddend
0x68D358: call    ebx ; InterlockedDecrement
0x68D35A: test    eax, eax
0x68D35C: jnz     short loc_68D36C
0x68D35E: test    edi, edi
0x68D360: jz      short loc_68D36C
0x68D362: mov     edx, [edi]
0x68D364: mov     eax, [edx]
0x68D366: push    1
0x68D368: mov     ecx, edi
0x68D36A: call    eax
0x68D36C: mov     dword ptr [esi+3Ch], 0
0x68D373: pop     ebx
0x68D374: pop     edi
0x68D375: pop     esi
0x68D376: pop     ecx
0x68D377: retn
