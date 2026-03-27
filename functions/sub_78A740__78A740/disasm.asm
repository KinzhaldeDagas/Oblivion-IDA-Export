0x78A740: push    ebp
0x78A741: mov     ebp, esp
0x78A743: push    0FFFFFFFFh
0x78A745: push    offset SEH_78A740
0x78A74A: mov     eax, large fs:0
0x78A750: push    eax
0x78A751: sub     esp, 44h
0x78A754: push    ebx
0x78A755: push    esi
0x78A756: push    edi
0x78A757: mov     eax, ds:0B30AACh
0x78A75C: xor     eax, ebp
0x78A75E: push    eax
0x78A75F: lea     eax, [ebp+var_C]
0x78A762: mov     large fs:0, eax
0x78A768: mov     [ebp+var_10], esp
0x78A76B: mov     esi, ecx
0x78A76D: mov     [ebp+var_14], esi
0x78A770: cmp     dword ptr [esi+2Ch], 0
0x78A774: mov     [ebp+var_4], 0
0x78A77B: jnz     loc_78A877
0x78A781: mov     eax, [esi]
0x78A783: movzx   edi, word ptr [eax+0C0h]
0x78A78A: xor     ecx, ecx
0x78A78C: mov     eax, edi
0x78A78E: mov     edx, 4
0x78A793: mul     edx
0x78A795: seto    cl
0x78A798: neg     ecx
0x78A79A: or      ecx, eax
0x78A79C: push    ecx; Size
0x78A79D: call    FormHeapAlloc
0x78A7A2: fld1
0x78A7A4: add     esp, 4
0x78A7A7: mov     [esi+2Ch], eax
0x78A7AA: xor     eax, eax
0x78A7AC: cmp     eax, edi
0x78A7AE: mov     [ebp+var_14], eax
0x78A7B1: jge     loc_78A875
0x78A7B7: test    edi, edi
0x78A7B9: jle     short loc_78A7D5
0x78A7BB: fld     dword ptr [esi+24h]
0x78A7BE: mov     ecx, [esi+2Ch]
0x78A7C1: fimul   [ebp+var_14]
0x78A7C4: add     eax, 1
0x78A7C7: fadd    st, st(1)
0x78A7C9: fstp    [ebp+var_14]
0x78A7CC: fld     [ebp+var_14]
0x78A7CF: fstp    dword ptr [ecx+eax*4-4]
0x78A7D3: jmp     short loc_78A7AC
0x78A7D5: mov     ecx, [esi+2Ch]
0x78A7D8: fld     st
0x78A7DA: fstp    [ebp+var_14]
0x78A7DD: add     eax, 1
0x78A7E0: fld     [ebp+var_14]
0x78A7E3: fstp    dword ptr [ecx+eax*4-4]
0x78A7E7: jmp     short loc_78A7AC
0x78A7E9: mov     ecx, [ebp+var_18]
0x78A7EC: mov     edx, [ecx]
0x78A7EE: mov     eax, [edx+4]
0x78A7F1: call    eax
0x78A7F3: push    eax
0x78A7F4: push    offset aCspeedtreertGe; "CSpeedTreeRT::GetLeafLodSizeAdjustments"
0x78A7F9: push    offset aSFailedS; "%s - failed [%s]"
0x78A7FE: lea     esi, [ebp+var_34]
0x78A801: call    sub_7A54A0
0x78A806: add     esp, 0Ch
0x78A809: cmp     dword ptr [eax+18h], 10h
0x78A80D: mov     byte ptr [ebp+var_4], 2
0x78A811: jb      short loc_78A818
0x78A813: mov     eax, [eax+4]
0x78A816: jmp     short loc_78A81B
0x78A818: add     eax, 4
0x78A81B: push    eax; Src
0x78A81C: call    sub_7895E0
0x78A821: add     esp, 4
0x78A824: lea     ecx, [ebp+var_34]
0x78A827: call    sub_79AB00
0x78A82C: mov     eax, offset loc_78A832
0x78A831: retn
0x78A832: mov     esi, [ebp+var_14]
0x78A835: jmp     short loc_78A877
0x78A837: push    offset aCspeedtreertGe; "CSpeedTreeRT::GetLeafLodSizeAdjustments"
0x78A83C: push    offset aSThrewAnUnknow; "%s - threw an unknown system exception"
0x78A841: lea     esi, [ebp+var_50]
0x78A844: call    sub_7A54A0
0x78A849: add     esp, 8
0x78A84C: cmp     dword ptr [eax+18h], 10h
0x78A850: mov     byte ptr [ebp+var_4], 3
0x78A854: jb      short loc_78A85B
0x78A856: mov     eax, [eax+4]
0x78A859: jmp     short loc_78A85E
0x78A85B: add     eax, 4
0x78A85E: push    eax; Src
0x78A85F: call    sub_7895E0
0x78A864: add     esp, 4
0x78A867: lea     ecx, [ebp+var_50]
0x78A86A: call    sub_79AB00
0x78A86F: mov     eax, offset loc_78A832
0x78A874: retn
0x78A875: fstp    st
0x78A877: mov     eax, [esi+2Ch]
0x78A87A: mov     ecx, [ebp+var_C]
0x78A87D: mov     large fs:0, ecx
0x78A884: pop     ecx
0x78A885: pop     edi
0x78A886: pop     esi
0x78A887: pop     ebx
0x78A888: mov     esp, ebp
0x78A88A: pop     ebp
0x78A88B: retn
