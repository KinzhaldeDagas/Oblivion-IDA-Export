0x663AA0: sub     esp, 18h
0x663AA3: push    ebx
0x663AA4: xor     ebx, ebx
0x663AA6: push    ebx; a2
0x663AA7: mov     [esp+20h+var_4], ecx
0x663AAB: call    Actor_GetActorBaseForm
0x663AB0: cmp     eax, ebx
0x663AB2: jz      loc_663C47
0x663AB8: push    ebp
0x663AB9: lea     ebp, [eax+58h]
0x663ABC: cmp     ebp, ebx
0x663ABE: mov     [esp+20h+var_8], ebp
0x663AC2: jz      loc_663C46
0x663AC8: mov     ecx, [esp+20h+arg_0]
0x663ACC: cmp     ecx, ebx
0x663ACE: mov     [esp+20h+var_18], ebx
0x663AD2: jz      loc_663C46
0x663AD8: push    esi
0x663AD9: push    edi
0x663ADA: jmp     short loc_663AE8
0x663ADC: align 10h
0x663AE0: mov     ecx, [esp+28h+var_C]
0x663AE4: mov     ebp, [esp+28h+var_8]
0x663AE8: mov     eax, [ecx+4]
0x663AEB: cmp     eax, ebx
0x663AED: jnz     short loc_663AF7
0x663AEF: cmp     [ecx], ebx
0x663AF1: jz      loc_663C04
0x663AF7: mov     edi, [ecx]
0x663AF9: mov     [esp+28h+var_10], edi
0x663AFD: mov     [esp+28h+var_C], eax
0x663B01: mov     [esp+28h+var_14], ebx
0x663B05: mov     eax, [ebp+4]
0x663B08: test    eax, eax
0x663B0A: jnz     short loc_663B11
0x663B0C: cmp     [ebp+0], eax
0x663B0F: jz      short loc_663B8A
0x663B11: mov     esi, [ebp+0]
0x663B14: test    esi, esi
0x663B16: mov     ebp, eax
0x663B18: jz      short loc_663B82
0x663B1A: mov     eax, [edi+98h]
0x663B20: push    48h ; 'H'
0x663B22: lea     edi, [esi+24h]
0x663B25: push    eax
0x663B26: mov     ecx, edi
0x663B28: call    EffectItemList_HasEffect
0x663B2D: test    al, al
0x663B2F: jz      short loc_663B7E
0x663B31: mov     eax, [esi+18h]
0x663B34: mov     edx, [eax+18h]
0x663B37: add     esi, 18h
0x663B3A: mov     ecx, esi
0x663B3C: add     ebx, 1
0x663B3F: call    edx
0x663B41: cmp     eax, 2
0x663B44: jz      short loc_663B7E
0x663B46: mov     eax, [esi]
0x663B48: mov     edx, [eax+18h]
0x663B4B: mov     ecx, esi
0x663B4D: call    edx
0x663B4F: cmp     eax, 3
0x663B52: jz      short loc_663B7E
0x663B54: mov     ecx, edi
0x663B56: call    EffectItemList_GetSchoolAV
0x663B5B: mov     ecx, [esp+28h+var_4]
0x663B5F: push    eax
0x663B60: call    Actor_GetSkillMasteryLevel
0x663B65: mov     esi, eax
0x663B67: mov     eax, [edi]
0x663B69: mov     edx, [eax+8]
0x663B6C: mov     ecx, edi
0x663B6E: call    edx
0x663B70: cmp     esi, eax
0x663B72: setnl   al
0x663B75: test    al, al
0x663B77: jnz     short loc_663B7E
0x663B79: add     [esp+28h+var_14], 1
0x663B7E: mov     edi, [esp+28h+var_10]
0x663B82: test    ebp, ebp
0x663B84: jnz     loc_663B05
0x663B8A: cmp     [esp+28h+var_14], ebx
0x663B8E: jnz     short loc_663BF8
0x663B90: xor     ebx, ebx
0x663B92: cmp     [esp+28h+var_18], ebx
0x663B96: jnz     short loc_663BB3
0x663B98: push    8; Size
0x663B9A: call    FormHeapAlloc
0x663B9F: add     esp, 4
0x663BA2: cmp     eax, ebx
0x663BA4: jz      short loc_663BAD
0x663BA6: mov     [eax], ebx
0x663BA8: mov     [eax+4], ebx
0x663BAB: jmp     short loc_663BAF
0x663BAD: xor     eax, eax
0x663BAF: mov     [esp+28h+var_18], eax
0x663BB3: cmp     edi, ebx
0x663BB5: jz      short loc_663BFA
0x663BB7: mov     eax, [esp+28h+var_18]
0x663BBB: cmp     [eax], ebx
0x663BBD: jz      short loc_663BF4
0x663BBF: push    8; Size
0x663BC1: call    FormHeapAlloc
0x663BC6: mov     ecx, [esp+2Ch+var_18]
0x663BCA: add     esp, 4
0x663BCD: cmp     eax, ebx
0x663BCF: jz      short loc_663BE5
0x663BD1: mov     edx, [ecx]
0x663BD3: mov     [eax], edx
0x663BD5: mov     [eax+4], ebx
0x663BD8: mov     edx, [ecx+4]
0x663BDB: mov     [eax+4], edx
0x663BDE: mov     [ecx+4], eax
0x663BE1: mov     [ecx], edi
0x663BE3: jmp     short loc_663BFA
0x663BE5: mov     edx, [ecx+4]
0x663BE8: xor     eax, eax
0x663BEA: mov     [eax+4], edx
0x663BED: mov     [ecx+4], eax
0x663BF0: mov     [ecx], edi
0x663BF2: jmp     short loc_663BFA
0x663BF4: mov     [eax], edi
0x663BF6: jmp     short loc_663BFA
0x663BF8: xor     ebx, ebx
0x663BFA: cmp     [esp+28h+var_C], ebx
0x663BFE: jnz     loc_663AE0
0x663C04: mov     esi, [esp+28h+var_18]
0x663C08: test    esi, esi
0x663C0A: jz      short loc_663C44
0x663C0C: lea     esp, [esp+0]
0x663C10: cmp     dword ptr [esi+4], 0
0x663C14: jnz     short loc_663C1B
0x663C16: cmp     dword ptr [esi], 0
0x663C19: jz      short loc_663C2E
0x663C1B: mov     eax, [esi]
0x663C1D: mov     ecx, [esp+28h+arg_0]
0x663C21: push    eax
0x663C22: call    BSSimpleList_Remove
0x663C27: mov     esi, [esi+4]
0x663C2A: test    esi, esi
0x663C2C: jnz     short loc_663C10
0x663C2E: mov     ecx, [esp+28h+var_18]
0x663C32: call    BSSimpleList_Clear
0x663C37: mov     ecx, [esp+28h+var_18]
0x663C3B: push    ecx
0x663C3C: call    FormHeapFree
0x663C41: add     esp, 4
0x663C44: pop     edi
0x663C45: pop     esi
0x663C46: pop     ebp
0x663C47: pop     ebx
0x663C48: add     esp, 18h
0x663C4B: retn    4
