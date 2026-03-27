0x90A720: sub     esp, 18h
0x90A723: push    esi
0x90A724: mov     esi, [esp+1Ch+arg_0]
0x90A728: push    0Bh
0x90A72A: push    0FFFFFFFFh
0x90A72C: lea     eax, [esp+24h+var_18]
0x90A730: push    eax
0x90A731: mov     ecx, esi
0x90A733: mov     [esp+28h+var_18], offset sub_90A6E0
0x90A73B: mov     [esp+28h+var_14], offset sub_90A0F0
0x90A743: mov     [esp+28h+var_10], offset sub_90A130
0x90A74B: mov     [esp+28h+var_C], offset sub_90A170
0x90A753: mov     [esp+28h+var_8], 1
0x90A758: mov     [esp+28h+var_7], 1
0x90A75D: call    sub_8DADD0
0x90A762: push    0FFFFFFFFh
0x90A764: push    0Bh
0x90A766: lea     ecx, [esp+24h+var_18]
0x90A76A: push    ecx
0x90A76B: mov     ecx, esi
0x90A76D: mov     [esp+28h+var_18], offset sub_90A5A0
0x90A775: mov     [esp+28h+var_14], offset sub_909F50
0x90A77D: mov     [esp+28h+var_10], offset sub_909940
0x90A785: mov     [esp+28h+var_C], offset sub_909C40
0x90A78D: mov     [esp+28h+var_8], 0
0x90A792: mov     [esp+28h+var_7], 1
0x90A797: call    sub_8DADD0
0x90A79C: pop     esi
0x90A79D: add     esp, 18h
0x90A7A0: retn
