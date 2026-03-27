0x4810A0: push    ecx
0x4810A1: mov     eax, [esp+4+arg_C]
0x4810A5: mov     ecx, [esp+4+arg_8]
0x4810A9: push    eax
0x4810AA: mov     eax, [esp+8+arg_4]
0x4810AE: push    ecx
0x4810AF: mov     ecx, [esp+0Ch+arg_0]
0x4810B3: lea     edx, [esp+0Ch+var_4]
0x4810B7: push    edx
0x4810B8: push    eax
0x4810B9: push    ecx
0x4810BA: mov     [esp+18h+var_4], 0
0x4810C2: call    sub_480FD0
0x4810C7: add     esp, 14h
0x4810CA: test    al, al
0x4810CC: jz      short loc_4810D3
0x4810CE: mov     eax, [esp+4+var_4]
0x4810D1: pop     ecx
0x4810D2: retn
0x4810D3: or      eax, 0FFFFFFFFh
0x4810D6: pop     ecx
0x4810D7: retn
