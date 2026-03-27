0x78B700: push    ebp
0x78B701: mov     ebp, esp
0x78B703: push    0FFFFFFFFh
0x78B705: push    offset SEH_78B700
0x78B70A: mov     eax, large fs:0
0x78B710: push    eax
0x78B711: sub     esp, 40h
0x78B714: push    ebx
0x78B715: push    esi
0x78B716: push    edi
0x78B717: mov     eax, ds:0B30AACh
0x78B71C: xor     eax, ebp
0x78B71E: push    eax
0x78B71F: lea     eax, [ebp+var_C]
0x78B722: mov     large fs:0, eax
0x78B728: mov     [ebp+var_10], esp
0x78B72B: cmp     byte ptr [ecx+45h], 0
0x78B72F: mov     [ebp+var_4], 0
0x78B736: jnz     short loc_78B760
0x78B738: mov     eax, [ebp+arg_0]
0x78B73B: test    eax, eax
0x78B73D: jnz     short loc_78B744
0x78B73F: mov     eax, 1
0x78B744: mov     ecx, [ecx]
0x78B746: mov     [ecx+0BCh], eax
0x78B74C: mov     ecx, [ebp+var_C]
0x78B74F: mov     large fs:0, ecx
0x78B756: pop     ecx
0x78B757: pop     edi
0x78B758: pop     esi
0x78B759: pop     ebx
0x78B75A: mov     esp, ebp
0x78B75C: pop     ebp
0x78B75D: retn    4
0x78B760: push    47h ; 'G'; MaxCount
0x78B762: push    offset aSetnumleafrock; "SetNumLeafRockingGroups() has no effect"...
0x78B767: mov     ecx, offset dword_B2B614
0x78B76C: call    sub_414500
0x78B771: mov     ecx, [ebp+var_C]
0x78B774: mov     large fs:0, ecx
0x78B77B: pop     ecx
0x78B77C: pop     edi
0x78B77D: pop     esi
0x78B77E: pop     ebx
0x78B77F: mov     esp, ebp
0x78B781: pop     ebp
0x78B782: retn    4
0x78B785: mov     ecx, [ebp+var_14]
0x78B788: mov     edx, [ecx]
0x78B78A: mov     eax, [edx+4]
0x78B78D: call    eax
0x78B78F: push    eax
0x78B790: push    offset aCspeedtreert_4; "CSpeedTreeRT::SetLeafRockingState"
0x78B795: push    offset aSFailedS; "%s - failed [%s]"
0x78B79A: lea     esi, [ebp+var_30]
0x78B79D: call    sub_7A54A0
0x78B7A2: add     esp, 0Ch
0x78B7A5: cmp     dword ptr [eax+18h], 10h
0x78B7A9: mov     byte ptr [ebp+var_4], 2
0x78B7AD: jb      short loc_78B7B4
0x78B7AF: mov     eax, [eax+4]
0x78B7B2: jmp     short loc_78B7B7
0x78B7B4: add     eax, 4
0x78B7B7: push    eax; Src
0x78B7B8: call    sub_7895E0
0x78B7BD: add     esp, 4
0x78B7C0: lea     ecx, [ebp+var_30]
0x78B7C3: call    sub_79AB00
0x78B7C8: mov     eax, offset loc_78B7CE
0x78B7CD: retn
0x78B7CE: mov     ecx, [ebp+var_C]
0x78B7D1: mov     large fs:0, ecx
0x78B7D8: pop     ecx
0x78B7D9: pop     edi
0x78B7DA: pop     esi
0x78B7DB: pop     ebx
0x78B7DC: mov     esp, ebp
0x78B7DE: pop     ebp
0x78B7DF: retn    4
0x78B7E2: push    offset aCspeedtreert_4; "CSpeedTreeRT::SetLeafRockingState"
0x78B7E7: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B7EC: lea     esi, [ebp+var_4C]
0x78B7EF: call    sub_7A54A0
0x78B7F4: add     esp, 8
0x78B7F7: cmp     dword ptr [eax+18h], 10h
0x78B7FB: mov     byte ptr [ebp+var_4], 3
0x78B7FF: jb      short loc_78B806
0x78B801: mov     eax, [eax+4]
0x78B804: jmp     short loc_78B809
0x78B806: add     eax, 4
0x78B809: push    eax; Src
0x78B80A: call    sub_7895E0
0x78B80F: add     esp, 4
0x78B812: lea     ecx, [ebp+var_4C]
0x78B815: call    sub_79AB00
0x78B81A: mov     eax, offset loc_78B74C
0x78B81F: retn
