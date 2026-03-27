0x451000: sub     esp, 0Ch
0x451003: push    edi
0x451004: mov     edi, ecx
0x451006: mov     ecx, [edi+8]
0x451009: test    ecx, ecx
0x45100B: jz      loc_45109D
0x451011: mov     edx, [ecx+4]
0x451014: xor     eax, eax
0x451016: test    edx, edx
0x451018: push    esi
0x451019: jbe     short loc_451033
0x45101B: mov     esi, [ecx+8]
0x45101E: mov     ecx, esi
0x451020: cmp     dword ptr [ecx], 0
0x451023: jnz     loc_4510A2
0x451029: add     eax, 1
0x45102C: add     ecx, 4
0x45102F: cmp     eax, edx
0x451031: jb      short loc_451020
0x451033: xor     eax, eax
0x451035: test    eax, eax
0x451037: mov     [esp+14h+var_8], eax
0x45103B: jz      short loc_45107E
0x45103D: lea     ecx, [ecx+0]
0x451040: lea     eax, [esp+14h+var_C]
0x451044: push    eax
0x451045: lea     ecx, [esp+18h+var_4]
0x451049: push    ecx
0x45104A: mov     ecx, [edi+8]
0x45104D: lea     edx, [esp+1Ch+var_8]
0x451051: push    edx
0x451052: mov     [esp+20h+var_C], 0
0x45105A: call    sub_452600
0x45105F: mov     esi, [esp+14h+var_C]
0x451063: test    esi, esi
0x451065: jz      short loc_451077
0x451067: mov     ecx, esi
0x451069: call    TESFile_destr
0x45106E: push    esi
0x45106F: call    FormHeapFree
0x451074: add     esp, 4
0x451077: cmp     [esp+14h+var_8], 0
0x45107C: jnz     short loc_451040
0x45107E: mov     ecx, [edi+8]
0x451081: call    NiTMap_Clear
0x451086: mov     ecx, [edi+8]
0x451089: test    ecx, ecx
0x45108B: pop     esi
0x45108C: jz      short loc_451096
0x45108E: mov     eax, [ecx]
0x451090: mov     edx, [eax]
0x451092: push    1
0x451094: call    edx
0x451096: mov     dword ptr [edi+8], 0
0x45109D: pop     edi
0x45109E: add     esp, 0Ch
0x4510A1: retn
0x4510A2: mov     eax, [esi+eax*4]
0x4510A5: jmp     short loc_451035
