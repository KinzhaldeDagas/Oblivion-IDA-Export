0x767990: sub     esp, 18h
0x767993: push    ebx
0x767994: push    ebp
0x767995: mov     ebp, [esp+20h+arg_0]
0x767999: test    ebp, ebp
0x76799B: mov     ebx, ecx
0x76799D: mov     [esp+20h+var_18], ebx
0x7679A1: jz      loc_767B2D
0x7679A7: mov     eax, [ebp+0Ch]
0x7679AA: test    eax, eax
0x7679AC: jz      loc_767B2D
0x7679B2: cmp     dword ptr [eax+28h], 0
0x7679B6: jz      loc_767B2D
0x7679BC: mov     ecx, [ebp+8]
0x7679BF: test    ecx, ecx
0x7679C1: jbe     loc_767B21
0x7679C7: push    esi
0x7679C8: mov     [esp+24h+var_14], eax
0x7679CC: mov     [esp+24h+var_4], ecx
0x7679D0: push    edi
0x7679D1: mov     esi, [eax+28h]
0x7679D4: cmp     dword ptr [esi+1Ch], 0
0x7679D8: mov     [esp+28h+var_C], esi
0x7679DC: jbe     loc_767B09
0x7679E2: mov     eax, [esi+24h]
0x7679E5: cmp     dword ptr [eax], 0
0x7679E8: jz      loc_767B09
0x7679EE: mov     ecx, ebx; this
0x7679F0: call    sub_763FE0
0x7679F5: mov     eax, [esi+1Ch]
0x7679F8: xor     edi, edi
0x7679FA: test    eax, eax
0x7679FC: mov     [esp+28h+var_8], edi
0x767A00: jbe     loc_767ABE
0x767A06: cmp     edi, eax
0x767A08: jnb     short loc_767A12
0x767A0A: mov     ecx, [esi+24h]
0x767A0D: mov     eax, [ecx+edi*4]
0x767A10: jmp     short loc_767A14
0x767A12: xor     eax, eax
0x767A14: mov     ebp, [eax+4]
0x767A17: lea     edx, [esp+28h+var_10]
0x767A1B: push    edx
0x767A1C: push    ebp
0x767A1D: lea     ecx, [ebx+604h]
0x767A23: mov     [esp+30h+var_10], 0
0x767A2B: call    NiTMap_GetAt
0x767A30: test    al, al
0x767A32: jz      short loc_767AA8
0x767A34: mov     esi, [esp+28h+var_10]
0x767A38: xor     ebx, ebx
0x767A3A: test    esi, esi
0x767A3C: jz      short loc_767AA0
0x767A3E: mov     edi, edi
0x767A40: mov     eax, [esp+28h+var_14]
0x767A44: cmp     [esi+8], eax
0x767A47: jnz     short loc_767A97
0x767A49: xor     edi, edi
0x767A4B: test    ebx, ebx
0x767A4D: jz      short loc_767A5A
0x767A4F: mov     ecx, [esi+20h]
0x767A52: mov     [ebx+20h], ecx
0x767A55: mov     edi, [esi+20h]
0x767A58: jmp     short loc_767A7F
0x767A5A: mov     ecx, [esp+28h+var_18]
0x767A5E: add     ecx, 604h; this
0x767A64: cmp     dword ptr [esi+20h], 0
0x767A68: jz      short loc_767A79
0x767A6A: mov     edx, [esi+20h]
0x767A6D: push    edx; a3
0x767A6E: push    ebp; a2
0x767A6F: call    NiTMap_SetAt
0x767A74: mov     edi, [esi+20h]
0x767A77: jmp     short loc_767A7F
0x767A79: push    ebp
0x767A7A: call    NiTMap_RemoveAt
0x767A7F: push    esi
0x767A80: mov     dword ptr [esi+20h], 0
0x767A87: call    FormHeapFree
0x767A8C: mov     esi, edi
0x767A8E: mov     edi, [esp+2Ch+var_8]
0x767A92: add     esp, 4
0x767A95: jmp     short loc_767A9C
0x767A97: mov     ebx, esi
0x767A99: mov     esi, [esi+20h]
0x767A9C: test    esi, esi
0x767A9E: jnz     short loc_767A40
0x767AA0: mov     esi, [esp+28h+var_C]
0x767AA4: mov     ebx, [esp+28h+var_18]
0x767AA8: mov     eax, [esi+1Ch]
0x767AAB: add     edi, 1
0x767AAE: cmp     edi, eax
0x767AB0: mov     [esp+28h+var_8], edi
0x767AB4: jb      loc_767A0A
0x767ABA: mov     ebp, [esp+28h+arg_0]
0x767ABE: lea     eax, [ebx+100h]
0x767AC4: or      edi, 0FFFFFFFFh
0x767AC7: add     [eax+7Ch], edi
0x767ACA: jnz     short loc_767AD3
0x767ACC: mov     dword ptr [eax+78h], 0
0x767AD3: mov     esi, ds:0A28074h
0x767AD9: push    eax; lpCriticalSection
0x767ADA: call    esi ; LeaveCriticalSection
0x767ADC: cmp     dword ptr [ebx+0FCh], 1
0x767AE3: jnz     short loc_767AF1
0x767AE5: mov     eax, [ebx]
0x767AE7: mov     edx, [eax+12Ch]
0x767AED: mov     ecx, ebx
0x767AEF: call    edx
0x767AF1: add     [ebx+0FCh], edi
0x767AF7: lea     eax, [ebx+80h]
0x767AFD: jnz     short loc_767B06
0x767AFF: mov     dword ptr [eax+78h], 0
0x767B06: push    eax; lpCriticalSection
0x767B07: call    esi ; LeaveCriticalSection
0x767B09: mov     eax, [esp+28h+var_14]
0x767B0D: add     eax, 2Ch ; ','
0x767B10: sub     [esp+28h+var_4], 1
0x767B15: mov     [esp+28h+var_14], eax
0x767B19: jnz     loc_7679D1
0x767B1F: pop     edi
0x767B20: pop     esi
0x767B21: mov     ecx, [ebx+8A0h]
0x767B27: push    ebp
0x767B28: call    sub_778C20
0x767B2D: pop     ebp
0x767B2E: pop     ebx
0x767B2F: add     esp, 18h
0x767B32: retn    4
