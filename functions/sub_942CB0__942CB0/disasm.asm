0x942CB0: push    ecx
0x942CB1: push    esi
0x942CB2: mov     esi, [esp+8+arg_0]
0x942CB6: push    edi
0x942CB7: lea     eax, [esp+0Ch+var_4]
0x942CBB: push    eax
0x942CBC: push    esi
0x942CBD: mov     edi, ecx
0x942CBF: mov     [esp+14h+var_4], 0
0x942CC7: call    sub_8B0F40
0x942CCC: cmp     eax, 1
0x942CCF: jnz     short loc_942CFA
0x942CD1: push    offset dword_BA8788
0x942CD6: push    esi
0x942CD7: call    sub_9531A0
0x942CDC: mov     ecx, [esp+14h+arg_4]
0x942CE0: add     esp, 8
0x942CE3: push    eax
0x942CE4: mov     [esp+10h+var_4], eax
0x942CE8: call    sub_90C290
0x942CED: mov     ecx, [esp+0Ch+var_4]
0x942CF1: push    ecx
0x942CF2: push    esi
0x942CF3: mov     ecx, edi
0x942CF5: call    sub_8B0E80
0x942CFA: mov     eax, [esp+0Ch+var_4]
0x942CFE: pop     edi
0x942CFF: pop     esi
0x942D00: pop     ecx
0x942D01: retn    8
