0x78B950: push    ebp
0x78B951: mov     ebp, esp
0x78B953: push    0FFFFFFFFh
0x78B955: push    offset SEH_78B950
0x78B95A: mov     eax, large fs:0
0x78B960: push    eax
0x78B961: sub     esp, 40h
0x78B964: push    ebx
0x78B965: push    esi
0x78B966: push    edi
0x78B967: mov     eax, ds:0B30AACh
0x78B96C: xor     eax, ebp
0x78B96E: push    eax
0x78B96F: lea     eax, [ebp+var_C]
0x78B972: mov     large fs:0, eax
0x78B978: mov     [ebp+var_10], esp
0x78B97B: mov     esi, ecx
0x78B97D: xor     ecx, ecx
0x78B97F: cmp     [esi+45h], cl
0x78B982: mov     [ebp+var_4], ecx
0x78B985: jnz     short loc_78B9D3
0x78B987: mov     edi, [ebp+arg_0]
0x78B98A: cmp     edi, 2
0x78B98D: jnz     short loc_78B9A7
0x78B98F: mov     eax, [esi+10h]
0x78B992: cmp     dword ptr [eax+8], 1
0x78B996: jnz     short loc_78B9A7
0x78B998: mov     eax, [esi+4]
0x78B99B: mov     [eax+12h], cl
0x78B99E: push    ecx
0x78B99F: mov     ecx, [esi+4]
0x78B9A2: call    sub_794AE0
0x78B9A7: mov     ecx, [esi+10h]
0x78B9AA: mov     [ecx+8], edi
0x78B9AD: mov     eax, [esi+4]
0x78B9B0: cmp     edi, 2
0x78B9B3: setnz   dl
0x78B9B6: mov     [eax+8], dl
0x78B9B9: mov     ecx, [esi+4]
0x78B9BC: mov     [ecx+14h], edi
0x78B9BF: mov     ecx, [ebp+var_C]
0x78B9C2: mov     large fs:0, ecx
0x78B9C9: pop     ecx
0x78B9CA: pop     edi
0x78B9CB: pop     esi
0x78B9CC: pop     ebx
0x78B9CD: mov     esp, ebp
0x78B9CF: pop     ebp
0x78B9D0: retn    4
0x78B9D3: push    43h ; 'C'; MaxCount
0x78B9D5: push    offset aSetbranchwindm; "SetBranchWindMethod() has no effect aft"...
0x78B9DA: mov     ecx, offset dword_B2B614
0x78B9DF: call    sub_414500
0x78B9E4: mov     ecx, [ebp+var_C]
0x78B9E7: mov     large fs:0, ecx
0x78B9EE: pop     ecx
0x78B9EF: pop     edi
0x78B9F0: pop     esi
0x78B9F1: pop     ebx
0x78B9F2: mov     esp, ebp
0x78B9F4: pop     ebp
0x78B9F5: retn    4
0x78B9F8: mov     ecx, [ebp+var_14]
0x78B9FB: mov     edx, [ecx]
0x78B9FD: mov     eax, [edx+4]
0x78BA00: call    eax
0x78BA02: push    eax
0x78BA03: push    offset aCspeedtreert_6; "CSpeedTreeRT::SetBranchWindMethod"
0x78BA08: push    offset aSFailedS; "%s - failed [%s]"
0x78BA0D: lea     esi, [ebp+var_30]
0x78BA10: call    sub_7A54A0
0x78BA15: add     esp, 0Ch
0x78BA18: cmp     dword ptr [eax+18h], 10h
0x78BA1C: mov     byte ptr [ebp+var_4], 2
0x78BA20: jb      short loc_78BA27
0x78BA22: mov     eax, [eax+4]
0x78BA25: jmp     short loc_78BA2A
0x78BA27: add     eax, 4
0x78BA2A: push    eax; Src
0x78BA2B: call    sub_7895E0
0x78BA30: add     esp, 4
0x78BA33: lea     ecx, [ebp+var_30]
0x78BA36: call    sub_79AB00
0x78BA3B: mov     eax, offset loc_78BA41
0x78BA40: retn
0x78BA41: mov     ecx, [ebp+var_C]
0x78BA44: mov     large fs:0, ecx
0x78BA4B: pop     ecx
0x78BA4C: pop     edi
0x78BA4D: pop     esi
0x78BA4E: pop     ebx
0x78BA4F: mov     esp, ebp
0x78BA51: pop     ebp
0x78BA52: retn    4
0x78BA55: push    offset aCspeedtreert_6; "CSpeedTreeRT::SetBranchWindMethod"
0x78BA5A: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78BA5F: lea     esi, [ebp+var_4C]
0x78BA62: call    sub_7A54A0
0x78BA67: add     esp, 8
0x78BA6A: cmp     dword ptr [eax+18h], 10h
0x78BA6E: mov     byte ptr [ebp+var_4], 3
0x78BA72: jb      short loc_78BA79
0x78BA74: mov     eax, [eax+4]
0x78BA77: jmp     short loc_78BA7C
0x78BA79: add     eax, 4
0x78BA7C: push    eax; Src
0x78BA7D: call    sub_7895E0
0x78BA82: add     esp, 4
0x78BA85: lea     ecx, [ebp+var_4C]
0x78BA88: call    sub_79AB00
0x78BA8D: mov     eax, offset loc_78B9BF
0x78BA92: retn
