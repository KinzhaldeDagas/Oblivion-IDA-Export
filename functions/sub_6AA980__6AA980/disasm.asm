0x6AA980: mov     eax, [esp+arg_4]
0x6AA984: test    eax, eax
0x6AA986: push    esi
0x6AA987: mov     esi, ecx
0x6AA989: jz      short loc_6AA9AE
0x6AA98B: push    ecx
0x6AA98C: mov     ecx, esp
0x6AA98E: mov     [ecx], eax
0x6AA990: add     eax, 4
0x6AA993: mov     [esp+8+arg_4], esp
0x6AA997: push    eax; lpAddend
0x6AA998: call    dword ptr ds:0A28078h
0x6AA99E: mov     eax, [esp+8+arg_0]
0x6AA9A2: mov     ecx, [esi+304h]
0x6AA9A8: push    eax
0x6AA9A9: call    sub_6AA3B0
0x6AA9AE: pop     esi
0x6AA9AF: retn    8
