0x6A0800: push    0FFFFFFFFh
0x6A0802: push    offset MagicShaderHitEffect_constr_args_SEH
0x6A0807: mov     eax, large fs:0
0x6A080D: push    eax
0x6A080E: push    ecx
0x6A080F: push    ebx
0x6A0810: push    ebp
0x6A0811: push    esi
0x6A0812: push    edi
0x6A0813: mov     eax, ds:0B30AACh
0x6A0818: xor     eax, esp
0x6A081A: push    eax
0x6A081B: lea     eax, [esp+24h+var_C]
0x6A081F: mov     large fs:0, eax
0x6A0825: mov     esi, ecx
0x6A0827: mov     [esp+24h+var_10], esi
0x6A082B: mov     edi, [esp+24h+arg_4]
0x6A082F: mov     eax, [esp+24h+arg_0]
0x6A0833: push    edi
0x6A0834: push    eax
0x6A0835: call    MagicHitEffect_constr_args
0x6A083A: xor     ebx, ebx
0x6A083C: mov     dword ptr [esi], offset ??_7MagicShaderHitEffect@@6B@; const MagicShaderHitEffect::`vftable'
0x6A0842: mov     [esp+24h+var_4], ebx
0x6A0846: mov     [esi+3Ch], ebx
0x6A0849: mov     [esi+40h], ebx
0x6A084C: mov     [esi+48h], ebx
0x6A084F: mov     [esi+34h], ebx
0x6A0852: mov     ecx, [edi+8]
0x6A0855: push    ebx
0x6A0856: mov     byte ptr [esp+28h+var_4], 3
0x6A085B: call    MagicItem_GetFXEffect
0x6A0860: fldz
0x6A0862: mov     ecx, [eax+78h]
0x6A0865: fstp    dword ptr [esi+38h]
0x6A0868: mov     ebp, ds:0A2807Ch
0x6A086E: mov     [esi+34h], ecx
0x6A0871: mov     edi, [esi+48h]
0x6A0874: cmp     edi, ebx
0x6A0876: jz      short loc_6A0893
0x6A0878: lea     edx, [edi+4]
0x6A087B: push    edx; lpAddend
0x6A087C: call    ebp ; InterlockedDecrement
0x6A087E: test    eax, eax
0x6A0880: jnz     short loc_6A0890
0x6A0882: cmp     edi, ebx
0x6A0884: jz      short loc_6A0890
0x6A0886: mov     eax, [edi]
0x6A0888: mov     edx, [eax]
0x6A088A: push    1
0x6A088C: mov     ecx, edi
0x6A088E: call    edx
0x6A0890: mov     [esi+48h], ebx
0x6A0893: mov     edi, [esi+3Ch]
0x6A0896: cmp     edi, ebx
0x6A0898: jz      short loc_6A08B5
0x6A089A: lea     eax, [edi+4]
0x6A089D: push    eax; lpAddend
0x6A089E: call    ebp ; InterlockedDecrement
0x6A08A0: test    eax, eax
0x6A08A2: jnz     short loc_6A08B2
0x6A08A4: cmp     edi, ebx
0x6A08A6: jz      short loc_6A08B2
0x6A08A8: mov     edx, [edi]
0x6A08AA: mov     eax, [edx]
0x6A08AC: push    1
0x6A08AE: mov     ecx, edi
0x6A08B0: call    eax
0x6A08B2: mov     [esi+3Ch], ebx
0x6A08B5: mov     edi, [esi+40h]
0x6A08B8: cmp     edi, ebx
0x6A08BA: jz      short loc_6A08D7
0x6A08BC: lea     ecx, [edi+4]
0x6A08BF: push    ecx; lpAddend
0x6A08C0: call    ebp ; InterlockedDecrement
0x6A08C2: test    eax, eax
0x6A08C4: jnz     short loc_6A08D4
0x6A08C6: cmp     edi, ebx
0x6A08C8: jz      short loc_6A08D4
0x6A08CA: mov     edx, [edi]
0x6A08CC: mov     eax, [edx]
0x6A08CE: push    1
0x6A08D0: mov     ecx, edi
0x6A08D2: call    eax
0x6A08D4: mov     [esi+40h], ebx
0x6A08D7: mov     ecx, [esi+18h]
0x6A08DA: mov     [esi+28h], bl
0x6A08DD: mov     edx, [ecx+0Ch]
0x6A08E0: mov     eax, [edx+1Ch]
0x6A08E3: mov     ecx, [eax+98h]
0x6A08E9: mov     [esi+2Ch], ecx
0x6A08EC: mov     [esi+30h], ebx
0x6A08EF: mov     ecx, ds:0B333C4h
0x6A08F5: cmp     [esi+1Ch], ecx
0x6A08F8: jnz     short loc_6A0927
0x6A08FA: push    ebx
0x6A08FB: call    PlayerCharacter_GetPlayerNode
0x6A0900: test    eax, eax
0x6A0902: jz      short loc_6A0920
0x6A0904: mov     ecx, ds:0B333C4h
0x6A090A: push    ebx
0x6A090B: call    PlayerCharacter_GetPlayerNode
0x6A0910: test    byte ptr [eax+18h], 1
0x6A0914: jnz     short loc_6A0920
0x6A0916: mov     eax, 1
0x6A091B: mov     [esi+44h], al
0x6A091E: jmp     short loc_6A092A
0x6A0920: xor     eax, eax
0x6A0922: mov     [esi+44h], al
0x6A0925: jmp     short loc_6A092A
0x6A0927: mov     [esi+44h], bl
0x6A092A: cmp     dword ptr [esi+2Ch], 52414944h
0x6A0931: jnz     short loc_6A095C
0x6A0933: mov     eax, [esi+18h]
0x6A0936: push    ebx; int
0x6A0937: push    offset ??_R0?AVDisintegrateArmorEffect@@@8; struct TypeDescriptor *
0x6A093C: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0941: push    ebx; int
0x6A0942: push    eax; void *
0x6A0943: call    OblivionDynamicCast
0x6A0948: add     esp, 14h
0x6A094B: cmp     eax, ebx
0x6A094D: jz      short loc_6A095C
0x6A094F: mov     eax, [eax+38h]
0x6A0952: cmp     eax, ebx
0x6A0954: jz      short loc_6A095C
0x6A0956: mov     edx, [eax+8]
0x6A0959: mov     [esi+30h], edx
0x6A095C: mov     eax, esi
0x6A095E: mov     ecx, dword ptr [esp+24h+var_C]
0x6A0962: mov     large fs:0, ecx
0x6A0969: pop     ecx
0x6A096A: pop     edi
0x6A096B: pop     esi
0x6A096C: pop     ebp
0x6A096D: pop     ebx
0x6A096E: add     esp, 10h
0x6A0971: retn    8
