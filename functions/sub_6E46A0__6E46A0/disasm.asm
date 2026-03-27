0x6E46A0: push    0FFFFFFFFh
0x6E46A2: push    offset SEH_6E46A0
0x6E46A7: mov     eax, large fs:0
0x6E46AD: push    eax
0x6E46AE: sub     esp, 10h
0x6E46B1: push    ebx
0x6E46B2: push    ebp
0x6E46B3: push    esi
0x6E46B4: push    edi
0x6E46B5: mov     eax, ds:0B30AACh
0x6E46BA: xor     eax, esp
0x6E46BC: push    eax
0x6E46BD: lea     eax, [esp+30h+var_C]
0x6E46C1: mov     large fs:0, eax
0x6E46C7: mov     esi, ecx
0x6E46C9: lea     eax, [esp+30h+var_10]
0x6E46CD: xor     ebx, ebx
0x6E46CF: push    eax
0x6E46D0: mov     [esp+34h+var_4], ebx
0x6E46D4: mov     [esp+34h+var_14], ebx
0x6E46D8: call    sub_700790
0x6E46DD: mov     eax, [eax]
0x6E46DF: cmp     eax, ebx
0x6E46E1: mov     edi, [esp+30h+arg_0]
0x6E46E5: mov     [edi], eax
0x6E46E7: jz      short loc_6E46F3
0x6E46E9: add     eax, 4
0x6E46EC: push    eax; lpAddend
0x6E46ED: call    dword ptr ds:0A28078h
0x6E46F3: mov     ebp, [esp+30h+var_10]
0x6E46F7: cmp     ebp, ebx
0x6E46F9: mov     [esp+30h+var_4], ebx
0x6E46FD: mov     [esp+30h+var_14], 1
0x6E4705: jz      short loc_6E4724
0x6E4707: lea     ecx, [ebp+4]
0x6E470A: push    ecx; lpAddend
0x6E470B: call    dword ptr ds:0A2807Ch
0x6E4711: test    eax, eax
0x6E4713: jnz     short loc_6E4724
0x6E4715: cmp     ebp, ebx
0x6E4717: jz      short loc_6E4724
0x6E4719: mov     edx, [ebp+0]
0x6E471C: mov     eax, [edx]
0x6E471E: push    1
0x6E4720: mov     ecx, ebp
0x6E4722: call    eax
0x6E4724: mov     eax, [esi+8]
0x6E4727: cmp     eax, ebx
0x6E4729: jbe     short loc_6E4777
0x6E472B: fld     [esp+30h+arg_8]
0x6E472F: lea     ecx, [esp+30h+var_1C]
0x6E4733: push    ecx; int
0x6E4734: mov     ecx, [esi+10h]
0x6E4737: lea     edx, [esp+34h+var_18]
0x6E473B: push    edx; int
0x6E473C: sub     esp, 8
0x6E473F: fstp    [esp+40h+var_3C]; float
0x6E4743: mov     [esp+40h+var_18], ebx
0x6E4747: fld     [esp+40h+arg_4]
0x6E474B: mov     [esp+40h+var_1C], ebx
0x6E474F: fstp    [esp+40h+var_40]; float
0x6E4752: push    eax; int
0x6E4753: mov     eax, [esi+0Ch]
0x6E4756: push    eax; int
0x6E4757: push    ecx; int
0x6E4758: push    3; int
0x6E475A: call    sub_6D3210
0x6E475F: mov     edx, [esi+10h]
0x6E4762: mov     eax, [esp+50h+var_1C]
0x6E4766: mov     ecx, [edi]
0x6E4768: add     esp, 20h
0x6E476B: push    edx
0x6E476C: mov     edx, [esp+34h+var_18]
0x6E4770: push    eax
0x6E4771: push    edx
0x6E4772: call    sub_6E4640
0x6E4777: mov     eax, edi
0x6E4779: mov     ecx, dword ptr [esp+30h+var_C]
0x6E477D: mov     large fs:0, ecx
0x6E4784: pop     ecx
0x6E4785: pop     edi
0x6E4786: pop     esi
0x6E4787: pop     ebp
0x6E4788: pop     ebx
0x6E4789: add     esp, 1Ch
0x6E478C: retn    0Ch
