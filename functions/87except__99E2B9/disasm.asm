0x99E2B9: push    ebp
0x99E2BA: mov     ebp, esp
0x99E2BC: and     esp, 0FFFFFFF0h
0x99E2BF: sub     esp, 84h
0x99E2C5: mov     eax, ___security_cookie
0x99E2CA: xor     eax, esp
0x99E2CC: mov     [esp+84h+var_4], eax
0x99E2D3: mov     eax, [ebp+arg_8]
0x99E2D6: movzx   ecx, word ptr [eax]
0x99E2D9: push    ebx
0x99E2DA: push    esi
0x99E2DB: mov     esi, [ebp+arg_4]
0x99E2DE: mov     eax, [esi]
0x99E2E0: dec     eax
0x99E2E1: push    edi; int
0x99E2E2: mov     [esp+90h+var_84], ecx
0x99E2E6: jz      short loc_99E313
0x99E2E8: dec     eax
0x99E2E9: jz      short loc_99E30F
0x99E2EB: dec     eax
0x99E2EC: jz      short loc_99E30B
0x99E2EE: dec     eax
0x99E2EF: jz      short loc_99E307
0x99E2F1: dec     eax
0x99E2F2: jz      short loc_99E313
0x99E2F4: dec     eax
0x99E2F5: dec     eax
0x99E2F6: jz      short loc_99E2FF
0x99E2F8: dec     eax
0x99E2F9: jnz     short loc_99E36F
0x99E2FB: push    10h
0x99E2FD: jmp     short loc_99E315
0x99E2FF: mov     dword ptr [esi], 1
0x99E305: jmp     short loc_99E36F
0x99E307: push    12h
0x99E309: jmp     short loc_99E315
0x99E30B: push    11h
0x99E30D: jmp     short loc_99E315
0x99E30F: push    4
0x99E311: jmp     short loc_99E315
0x99E313: push    8
0x99E315: pop     ebx
0x99E316: push    ecx
0x99E317: lea     edi, [esi+18h]
0x99E31A: push    edi
0x99E31B: push    ebx
0x99E31C: call    __handle_exc
0x99E321: add     esp, 0Ch
0x99E324: test    eax, eax
0x99E326: jnz     short loc_99E36F
0x99E328: mov     eax, [ebp+dwExceptionCode]
0x99E32B: cmp     eax, 10h
0x99E32E: jz      short loc_99E341
0x99E330: cmp     eax, 16h
0x99E333: jz      short loc_99E341
0x99E335: cmp     eax, 1Dh
0x99E338: jz      short loc_99E341
0x99E33A: and     [esp+90h+var_40], 0FFFFFFFEh
0x99E33F: jmp     short loc_99E356
0x99E341: mov     ecx, [esp+90h+var_40]
0x99E345: fld     qword ptr [esi+10h]
0x99E348: and     ecx, 0FFFFFFE3h
0x99E34B: fstp    [esp+90h+var_50]
0x99E34F: or      ecx, 3
0x99E352: mov     [esp+90h+var_40], ecx
0x99E356: push    edi; int
0x99E357: lea     ecx, [esi+8]
0x99E35A: push    ecx; int
0x99E35B: push    eax; dwExceptionCode
0x99E35C: push    ebx; int
0x99E35D: lea     eax, [esp+0A0h+var_84]
0x99E361: push    eax; int
0x99E362: lea     eax, [esp+0A4h+Arguments]
0x99E366: push    eax; Arguments
0x99E367: call    __raise_exc
0x99E36C: add     esp, 18h
0x99E36F: push    0FFFFh
0x99E374: push    [esp+94h+var_84]
0x99E378: call    __ctrlfp
0x99E37D: cmp     dword ptr [esi], 8
0x99E380: pop     ecx
0x99E381: pop     ecx
0x99E382: jz      short loc_99E398
0x99E384: cmp     dword_B320E8, 0
0x99E38B: jnz     short loc_99E398
0x99E38D: push    esi
0x99E38E: call    sub_98A318
0x99E393: test    eax, eax
0x99E395: pop     ecx
0x99E396: jnz     short loc_99E3A0
0x99E398: push    dword ptr [esi]
0x99E39A: call    unknown_libname_166
0x99E39F: pop     ecx
0x99E3A0: mov     ecx, [esp+90h+var_4]
0x99E3A7: pop     edi
0x99E3A8: pop     esi
0x99E3A9: pop     ebx
0x99E3AA: xor     ecx, esp
0x99E3AC: call    @__security_check_cookie@4
0x99E3B1: mov     esp, ebp
0x99E3B3: pop     ebp
0x99E3B4: retn
