0x6FA890: push    0FFFFFFFFh
0x6FA892: push    offset BSXFlags_constr_SEH
0x6FA897: mov     eax, large fs:0
0x6FA89D: push    eax
0x6FA89E: push    ecx
0x6FA89F: push    esi
0x6FA8A0: mov     eax, ds:0B30AACh
0x6FA8A5: xor     eax, esp
0x6FA8A7: push    eax
0x6FA8A8: lea     eax, [esp+18h+var_C]
0x6FA8AC: mov     large fs:0, eax
0x6FA8B2: mov     esi, ecx
0x6FA8B4: mov     [esp+18h+var_10], esi
0x6FA8B8: call    sub_721350
0x6FA8BD: mov     eax, [esp+18h+arg_0]
0x6FA8C1: mov     [esi+0Ch], eax
0x6FA8C4: push    offset dword_A7D0EC; Src
0x6FA8C9: mov     ecx, esi
0x6FA8CB: mov     [esp+1Ch+var_4], 0
0x6FA8D3: mov     dword ptr [esi], offset ??_7BSXFlags@@6B@; const BSXFlags::`vftable'
0x6FA8D9: call    sub_721440
0x6FA8DE: mov     eax, esi
0x6FA8E0: mov     ecx, [esp+18h+var_C]
0x6FA8E4: mov     large fs:0, ecx
0x6FA8EB: pop     ecx
0x6FA8EC: pop     esi
0x6FA8ED: add     esp, 10h
0x6FA8F0: retn    4
