0x848950: push    0FFFFFFFFh
0x848952: push    offset SEH_880560
0x848957: mov     eax, large fs:0
0x84895D: push    eax
0x84895E: push    ebx
0x84895F: push    ebp
0x848960: push    esi
0x848961: push    edi
0x848962: mov     eax, ds:0B30AACh
0x848967: xor     eax, esp
0x848969: push    eax
0x84896A: lea     eax, [esp+20h+var_C]
0x84896E: mov     large fs:0, eax
0x848974: mov     edi, ecx
0x848976: mov     eax, [esp+20h+arg_C]
0x84897A: mov     ebx, [eax+0E0h]
0x848980: test    ebx, ebx
0x848982: mov     esi, ds:0B45BD8h
0x848988: jz      loc_848AAD
0x84898E: mov     ecx, [esi+24h]
0x848991: mov     ebp, [ecx]
0x848993: push    0
0x848995: push    eax
0x848996: mov     ecx, edi
0x848998: call    sub_848FD0
0x84899D: push    eax; a2
0x84899E: mov     ecx, ebp; this
0x8489A0: call    sub_76C910
0x8489A5: mov     edx, [esp+20h+arg_C]
0x8489A9: push    edx
0x8489AA: push    ebp
0x8489AB: mov     ecx, edi
0x8489AD: call    sub_848FA0
0x8489B2: mov     eax, [esi+24h]
0x8489B5: mov     ebp, [eax+4]
0x8489B8: mov     eax, [ebx+8]
0x8489BB: test    eax, eax
0x8489BD: jz      short loc_8489C2
0x8489BF: push    eax
0x8489C0: jmp     short loc_8489C9
0x8489C2: mov     ecx, ds:0B43120h
0x8489C8: push    ecx; a2
0x8489C9: mov     ecx, ebp; this
0x8489CB: call    sub_76C910
0x8489D0: push    3
0x8489D2: mov     ecx, ebp
0x8489D4: call    sub_7715E0
0x8489D9: mov     edx, [esp+20h+arg_C]
0x8489DD: push    edx
0x8489DE: push    ebp
0x8489DF: mov     ecx, edi
0x8489E1: call    sub_848FA0
0x8489E6: cmp     dword ptr [esi+30h], 0
0x8489EA: mov     ebp, [ebx+5Ch]
0x8489ED: jnz     short loc_8489F7
0x8489EF: call    sub_772DF0
0x8489F4: mov     [esi+30h], eax
0x8489F7: mov     ecx, [esi+30h]
0x8489FA: push    0
0x8489FC: push    ebp
0x8489FD: push    13h
0x8489FF: call    sub_772CD0
0x848A04: cmp     dword ptr [esi+30h], 0
0x848A08: mov     ebp, [ebx+60h]
0x848A0B: jnz     short loc_848A15
0x848A0D: call    sub_772DF0
0x848A12: mov     [esi+30h], eax
0x848A15: mov     ecx, [esi+30h]
0x848A18: push    0
0x848A1A: push    ebp
0x848A1B: push    14h
0x848A1D: call    sub_772CD0
0x848A22: cmp     dword ptr [esi+30h], 0
0x848A26: mov     ebp, [ebx+64h]
0x848A29: jnz     short loc_848A33
0x848A2B: call    sub_772DF0
0x848A30: mov     [esi+30h], eax
0x848A33: mov     ecx, [esi+30h]
0x848A36: push    1
0x848A38: push    ebp
0x848A39: push    0ABh ; '«'
0x848A3E: call    sub_772CD0
0x848A43: cmp     dword ptr [esi+30h], 0
0x848A47: mov     ebx, [ebx+68h]
0x848A4A: jnz     short loc_848A54
0x848A4C: call    sub_772DF0
0x848A51: mov     [esi+30h], eax
0x848A54: mov     ecx, [esi+30h]
0x848A57: push    0
0x848A59: push    ebx
0x848A5A: push    17h
0x848A5C: call    sub_772CD0
0x848A61: mov     eax, [esp+20h+arg_C]
0x848A65: mov     ecx, [esp+20h+arg_0]
0x848A69: push    eax
0x848A6A: push    ecx
0x848A6B: mov     ecx, edi
0x848A6D: call    sub_7D1C90
0x848A72: mov     ebx, 1
0x848A77: add     [esi+60h], ebx
0x848A7A: mov     [esp+20h+arg_C], esi
0x848A7E: mov     eax, [edi+38h]
0x848A81: lea     edx, [esp+20h+arg_C]
0x848A85: push    edx
0x848A86: push    eax
0x848A87: lea     ecx, [edi+40h]
0x848A8A: mov     [esp+28h+var_4], 0
0x848A92: call    sub_76CE40
0x848A97: or      eax, 0FFFFFFFFh
0x848A9A: add     [esi+60h], eax
0x848A9D: mov     [esp+20h+var_4], eax
0x848AA1: jnz     short loc_848AAA
0x848AA3: mov     ecx, esi
0x848AA5: call    sub_7604D0
0x848AAA: add     [edi+38h], ebx
0x848AAD: mov     ecx, [esp+20h+var_C]
0x848AB1: mov     large fs:0, ecx
0x848AB8: pop     ecx
0x848AB9: pop     edi
0x848ABA: pop     esi
0x848ABB: pop     ebp
0x848ABC: pop     ebx
0x848ABD: add     esp, 0Ch
0x848AC0: retn    10h
