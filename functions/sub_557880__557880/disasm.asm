0x557880: push    ebp
0x557881: mov     ebp, esp
0x557883: push    0FFFFFFFFh
0x557885: push    offset SEH_557880
0x55788A: mov     eax, large fs:0
0x557890: push    eax
0x557891: sub     esp, 8
0x557894: push    ebx
0x557895: push    esi
0x557896: push    edi
0x557897: mov     eax, ds:0B30AACh
0x55789C: xor     eax, ebp
0x55789E: push    eax
0x55789F: lea     eax, [ebp+var_C]
0x5578A2: mov     large fs:0, eax
0x5578A8: mov     [ebp+var_10], esp
0x5578AB: mov     esi, [ebp+arg_8]
0x5578AE: mov     edi, [ebp+arg_0]
0x5578B1: xor     ebx, ebx
0x5578B3: mov     [ebp+var_14], esi
0x5578B6: mov     [ebp+var_4], ebx
0x5578B9: lea     esp, [esp+0]
0x5578C0: cmp     edi, [ebp+arg_4]
0x5578C3: jz      short loc_557918
0x5578C5: mov     [ebp+arg_0], esi
0x5578C8: cmp     esi, ebx
0x5578CA: mov     byte ptr [ebp+var_4], 1
0x5578CE: jz      short loc_5578E0
0x5578D0: fld     dword ptr [edi]
0x5578D2: lea     eax, [edi+4]
0x5578D5: push    eax
0x5578D6: fstp    dword ptr [esi]
0x5578D8: lea     ecx, [esi+4]
0x5578DB: call    sub_557250
0x5578E0: add     esi, 14h
0x5578E3: mov     byte ptr [ebp+var_4], bl
0x5578E6: mov     [ebp+arg_8], esi
0x5578E9: add     edi, 14h
0x5578EC: jmp     short loc_5578C0
0x5578EE: mov     esi, [ebp+var_14]
0x5578F1: mov     edi, [ebp+arg_8]
0x5578F4: cmp     esi, edi
0x5578F6: jz      short loc_55790F
0x5578F8: mov     ebx, [ebp+arg_C]
0x5578FB: jmp     short loc_557900
0x5578FD: align 10h
0x557900: push    esi
0x557901: mov     ecx, ebx
0x557903: call    sub_557180
0x557908: add     esi, 14h
0x55790B: cmp     esi, edi
0x55790D: jnz     short loc_557900
0x55790F: xor     ebx, ebx
0x557911: push    ebx
0x557912: push    ebx
0x557913: call    ThrowException??
0x557918: mov     eax, esi
0x55791A: mov     ecx, [ebp+var_C]
0x55791D: mov     large fs:0, ecx
0x557924: pop     ecx
0x557925: pop     edi
0x557926: pop     esi
0x557927: pop     ebx
0x557928: mov     esp, ebp
0x55792A: pop     ebp
0x55792B: retn
