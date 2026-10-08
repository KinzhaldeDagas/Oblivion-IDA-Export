0x5F3E00: push    0FFFFFFFFh
0x5F3E02: push    offset SEH_5BF7D0
0x5F3E07: mov     eax, large fs:0
0x5F3E0D: push    eax
0x5F3E0E: sub     esp, 10h
0x5F3E11: push    ebx
0x5F3E12: push    ebp
0x5F3E13: push    esi
0x5F3E14: push    edi
0x5F3E15: mov     eax, ds:0B30AACh
0x5F3E1A: xor     eax, esp
0x5F3E1C: push    eax
0x5F3E1D: lea     eax, [esp+30h+var_C]
0x5F3E21: mov     large fs:0, eax
0x5F3E27: mov     edi, ecx
0x5F3E29: mov     ecx, ds:0B333C4h; this
0x5F3E2F: lea     ebx, [edi-5Ch]
0x5F3E32: cmp     ebx, ecx
0x5F3E34: mov     [esp+30h+var_14], ebx
0x5F3E38: jnz     short loc_5F3E43
0x5F3E3A: push    0; firstPerson
0x5F3E3C: call    PlayerCharacter_GetAnimDataByPerspective; PlayerCharacter ActorAnimData selector. false returns ordinary process/default ActorAnimData; true returns firstPersonAnimData at PlayerCharacter+0x5CC. Distinct from 0x6600D0, which selects ActorSkinInfo at +0x104/+0x5C8.
0x5F3E41: jmp     short loc_5F3E51
0x5F3E43: mov     eax, [edi-5Ch]
0x5F3E46: mov     edx, [eax+164h]
0x5F3E4C: lea     ecx, [edi-5Ch]
0x5F3E4F: call    edx
0x5F3E51: mov     esi, [edi]
0x5F3E53: mov     edx, [esi+30h]
0x5F3E56: mov     [esp+30h+var_1C], eax
0x5F3E5A: push    0
0x5F3E5C: lea     eax, [esp+34h+var_18]
0x5F3E60: push    eax
0x5F3E61: push    0
0x5F3E63: mov     ecx, edi
0x5F3E65: call    edx
0x5F3E67: push    eax
0x5F3E68: mov     eax, [esi+1Ch]
0x5F3E6B: mov     ecx, edi
0x5F3E6D: call    eax
0x5F3E6F: test    al, al
0x5F3E71: jnz     Actor_MagicCaster_PlayCastingAnimation___GetCasterAnimData
0x9C08A0: lea     ecx, [ebp-14h]; void *
0x9C08A3: jmp     BSStringT_Clear
0x9C08A8: mov     edx, [esp+arg_4]
0x9C08AC: lea     eax, [edx-20h]
0x9C08AF: mov     ecx, [edx-24h]
0x9C08B2: xor     ecx, eax
0x9C08B4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C08B9: mov     eax, offset stru_AE9AEC
0x9C08BE: jmp     ___CxxFrameHandler3
