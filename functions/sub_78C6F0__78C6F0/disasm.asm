0x78C6F0: push    ebp
0x78C6F1: mov     ebp, esp
0x78C6F3: push    0FFFFFFFFh
0x78C6F5: push    offset SEH_78C6F0
0x78C6FA: mov     eax, large fs:0
0x78C700: push    eax
0x78C701: sub     esp, 40h
0x78C704: push    ebx
0x78C705: push    esi
0x78C706: push    edi
0x78C707: mov     eax, ds:0B30AACh
0x78C70C: xor     eax, ebp
0x78C70E: push    eax
0x78C70F: lea     eax, [ebp+var_C]
0x78C712: mov     large fs:0, eax
0x78C718: mov     [ebp+var_10], esp
0x78C71B: mov     esi, ecx
0x78C71D: mov     ebx, [ebp+arg_4]
0x78C720: test    bl, 1
0x78C723: mov     edi, [ebp+Src]
0x78C726: mov     [ebp+var_4], 0
0x78C72D: jz      short loc_78C739
0x78C72F: mov     eax, [ebp+MaxCount]
0x78C732: push    eax; MaxCount
0x78C733: push    edi; Src
0x78C734: call    sub_789FE0
0x78C739: test    bl, 2
0x78C73C: jz      short loc_78C74A
0x78C73E: mov     ecx, [ebp+arg_C]
0x78C741: push    ecx; MaxCount
0x78C742: push    edi; Src
0x78C743: mov     ecx, esi
0x78C745: call    sub_78A390
0x78C74A: test    bl, 4
0x78C74D: jz      short loc_78C75B
0x78C74F: mov     edx, [ebp+arg_10]
0x78C752: push    edx
0x78C753: push    edi
0x78C754: mov     ecx, esi
0x78C756: call    sub_788120
0x78C75B: test    bl, 8
0x78C75E: jz      loc_78C84B
0x78C764: cmp     byte ptr [esi+6Ch], 0
0x78C768: jz      loc_78C843
0x78C76E: test    bl, 10h
0x78C771: jnz     loc_78C843
0x78C777: push    ebx
0x78C778: push    edi
0x78C779: mov     ecx, esi
0x78C77B: call    sub_7887A0
0x78C780: mov     ecx, [ebp+var_C]
0x78C783: mov     large fs:0, ecx
0x78C78A: pop     ecx
0x78C78B: pop     edi
0x78C78C: pop     esi
0x78C78D: pop     ebx
0x78C78E: mov     esp, ebp
0x78C790: pop     ebp
0x78C791: retn    14h
0x78C794: mov     ecx, [ebp+var_14]
0x78C797: mov     eax, [ecx]
0x78C799: mov     edx, [eax+4]
0x78C79C: call    edx
0x78C79E: push    eax
0x78C79F: push    offset aCspeedtreer_14; "CSpeedTreeRT::GetGeometry"
0x78C7A4: push    offset aSFailedS; "%s - failed [%s]"
0x78C7A9: lea     esi, [ebp+var_30]
0x78C7AC: call    sub_7A54A0
0x78C7B1: add     esp, 0Ch
0x78C7B4: cmp     dword ptr [eax+18h], 10h
0x78C7B8: mov     byte ptr [ebp+var_4], 2
0x78C7BC: jb      short loc_78C7C3
0x78C7BE: mov     eax, [eax+4]
0x78C7C1: jmp     short loc_78C7C6
0x78C7C3: add     eax, 4
0x78C7C6: push    eax; Src
0x78C7C7: call    sub_7895E0
0x78C7CC: add     esp, 4
0x78C7CF: lea     ecx, [ebp+var_30]
0x78C7D2: call    sub_79AB00
0x78C7D7: mov     eax, offset loc_78C7DD
0x78C7DC: retn
0x78C7DD: mov     ecx, [ebp+var_C]
0x78C7E0: mov     large fs:0, ecx
0x78C7E7: pop     ecx
0x78C7E8: pop     edi
0x78C7E9: pop     esi
0x78C7EA: pop     ebx
0x78C7EB: mov     esp, ebp
0x78C7ED: pop     ebp
0x78C7EE: retn    14h
0x78C7F1: push    offset aCspeedtreer_14; "CSpeedTreeRT::GetGeometry"
0x78C7F6: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78C7FB: lea     esi, [ebp+var_4C]
0x78C7FE: call    sub_7A54A0
0x78C803: add     esp, 8
0x78C806: cmp     dword ptr [eax+18h], 10h
0x78C80A: mov     byte ptr [ebp+var_4], 3
0x78C80E: jb      short loc_78C815
0x78C810: mov     eax, [eax+4]
0x78C813: jmp     short loc_78C818
0x78C815: add     eax, 4
0x78C818: push    eax; Src
0x78C819: call    sub_7895E0
0x78C81E: add     esp, 4
0x78C821: lea     ecx, [ebp+var_4C]
0x78C824: call    sub_79AB00
0x78C829: mov     eax, offset loc_78C82F
0x78C82E: retn
0x78C82F: mov     ecx, [ebp+var_C]
0x78C832: mov     large fs:0, ecx
0x78C839: pop     ecx
0x78C83A: pop     edi
0x78C83B: pop     esi
0x78C83C: pop     ebx
0x78C83D: mov     esp, ebp
0x78C83F: pop     ebp
0x78C840: retn    14h
0x78C843: push    edi
0x78C844: mov     ecx, esi
0x78C846: call    sub_788430
0x78C84B: mov     ecx, [ebp+var_C]
0x78C84E: mov     large fs:0, ecx
0x78C855: pop     ecx
0x78C856: pop     edi
0x78C857: pop     esi
0x78C858: pop     ebx
0x78C859: mov     esp, ebp
0x78C85B: pop     ebp
0x78C85C: retn    14h
