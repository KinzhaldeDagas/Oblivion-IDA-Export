0x901A80: sub     esp, 18h
0x901A83: push    esi
0x901A84: mov     esi, [esp+1Ch+arg_0]
0x901A88: push    15h
0x901A8A: push    12h
0x901A8C: lea     eax, [esp+24h+var_18]
0x901A90: push    eax
0x901A91: mov     ecx, esi
0x901A93: mov     [esp+28h+var_18], offset sub_901A40
0x901A9B: mov     [esp+28h+var_14], offset sub_901060
0x901AA3: mov     [esp+28h+var_10], offset sub_9010A0
0x901AAB: mov     [esp+28h+var_C], offset sub_9010E0
0x901AB3: mov     [esp+28h+var_8], 1
0x901AB8: mov     [esp+28h+var_7], 1
0x901ABD: call    sub_8DADD0
0x901AC2: push    12h
0x901AC4: push    15h
0x901AC6: lea     ecx, [esp+24h+var_18]
0x901ACA: push    ecx
0x901ACB: mov     ecx, esi
0x901ACD: mov     [esp+28h+var_18], offset sub_901730
0x901AD5: mov     [esp+28h+var_14], offset sub_900420
0x901ADD: mov     [esp+28h+var_10], offset sub_900770
0x901AE5: mov     [esp+28h+var_C], offset sub_900CA0
0x901AED: mov     [esp+28h+var_8], 0
0x901AF2: mov     [esp+28h+var_7], 1
0x901AF7: call    sub_8DADD0
0x901AFC: pop     esi
0x901AFD: add     esp, 18h
0x901B00: retn
