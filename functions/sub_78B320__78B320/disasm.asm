0x78B320: push    ebp
0x78B321: mov     ebp, esp
0x78B323: push    0FFFFFFFFh
0x78B325: push    offset SEH_78B320
0x78B32A: mov     eax, large fs:0
0x78B330: push    eax
0x78B331: sub     esp, 40h
0x78B334: push    ebx
0x78B335: push    esi
0x78B336: push    edi
0x78B337: mov     eax, ds:0B30AACh
0x78B33C: xor     eax, ebp
0x78B33E: push    eax
0x78B33F: lea     eax, [ebp+var_C]
0x78B342: mov     large fs:0, eax
0x78B348: mov     [ebp+var_10], esp
0x78B34B: cmp     byte ptr [ecx+45h], 0
0x78B34F: mov     [ebp+var_4], 0
0x78B356: jnz     short loc_78B380
0x78B358: mov     eax, [ebp+arg_0]
0x78B35B: mov     esi, [ecx+4]
0x78B35E: cmp     eax, 1
0x78B361: setz    dl
0x78B364: mov     [esi+9], dl
0x78B367: mov     ecx, [ecx+0Ch]
0x78B36A: mov     [ecx], eax
0x78B36C: mov     ecx, [ebp+var_C]
0x78B36F: mov     large fs:0, ecx
0x78B376: pop     ecx
0x78B377: pop     edi
0x78B378: pop     esi
0x78B379: pop     ebx
0x78B37A: mov     esp, ebp
0x78B37C: pop     ebp
0x78B37D: retn    4
0x78B380: push    47h ; 'G'; MaxCount
0x78B382: push    offset aSetbranchlight; "SetBranchLightingMethod() has no effect"...
0x78B387: mov     ecx, offset dword_B2B614
0x78B38C: call    sub_414500
0x78B391: mov     ecx, [ebp+var_C]
0x78B394: mov     large fs:0, ecx
0x78B39B: pop     ecx
0x78B39C: pop     edi
0x78B39D: pop     esi
0x78B39E: pop     ebx
0x78B39F: mov     esp, ebp
0x78B3A1: pop     ebp
0x78B3A2: retn    4
0x78B3A5: mov     ecx, [ebp+var_14]
0x78B3A8: mov     edx, [ecx]
0x78B3AA: mov     eax, [edx+4]
0x78B3AD: call    eax
0x78B3AF: push    eax
0x78B3B0: push    offset aCspeedtreert_1; "CSpeedTreeRT::SetBranchLightingMethod"
0x78B3B5: push    offset aSFailedS; "%s - failed [%s]"
0x78B3BA: lea     esi, [ebp+var_30]
0x78B3BD: call    sub_7A54A0
0x78B3C2: add     esp, 0Ch
0x78B3C5: cmp     dword ptr [eax+18h], 10h
0x78B3C9: mov     byte ptr [ebp+var_4], 2
0x78B3CD: jb      short loc_78B3D4
0x78B3CF: mov     eax, [eax+4]
0x78B3D2: jmp     short loc_78B3D7
0x78B3D4: add     eax, 4
0x78B3D7: push    eax; Src
0x78B3D8: call    sub_7895E0
0x78B3DD: add     esp, 4
0x78B3E0: lea     ecx, [ebp+var_30]
0x78B3E3: call    sub_79AB00
0x78B3E8: mov     eax, offset loc_78B3EE
0x78B3ED: retn
0x78B3EE: mov     ecx, [ebp+var_C]
0x78B3F1: mov     large fs:0, ecx
0x78B3F8: pop     ecx
0x78B3F9: pop     edi
0x78B3FA: pop     esi
0x78B3FB: pop     ebx
0x78B3FC: mov     esp, ebp
0x78B3FE: pop     ebp
0x78B3FF: retn    4
0x78B402: push    offset aCspeedtreert_1; "CSpeedTreeRT::SetBranchLightingMethod"
0x78B407: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78B40C: lea     esi, [ebp+var_4C]
0x78B40F: call    sub_7A54A0
0x78B414: add     esp, 8
0x78B417: cmp     dword ptr [eax+18h], 10h
0x78B41B: mov     byte ptr [ebp+var_4], 3
0x78B41F: jb      short loc_78B426
0x78B421: mov     eax, [eax+4]
0x78B424: jmp     short loc_78B429
0x78B426: add     eax, 4
0x78B429: push    eax; Src
0x78B42A: call    sub_7895E0
0x78B42F: add     esp, 4
0x78B432: lea     ecx, [ebp+var_4C]
0x78B435: call    sub_79AB00
0x78B43A: mov     eax, offset loc_78B36C
0x78B43F: retn
