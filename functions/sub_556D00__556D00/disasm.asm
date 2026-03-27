0x556D00: push    ebx
0x556D01: mov     ebx, [esp+4+arg_4]
0x556D05: test    ebx, ebx
0x556D07: push    esi
0x556D08: push    edi
0x556D09: mov     esi, ecx
0x556D0B: jz      short loc_556D13
0x556D0D: cmp     ebx, [esp+0Ch+arg_C]
0x556D11: jz      short loc_556D18
0x556D13: call    __invalid_parameter_noinfo
0x556D18: mov     edi, [esp+0Ch+arg_8]
0x556D1C: mov     ecx, [esp+0Ch+arg_10]
0x556D20: cmp     edi, ecx
0x556D22: jz      short loc_556D49
0x556D24: mov     eax, [esi+8]
0x556D27: mov     byte ptr [esp+0Ch+arg_4], 0
0x556D2C: mov     edx, [esp+0Ch+arg_4]
0x556D30: push    edx
0x556D31: mov     edx, [esp+10h+arg_0]
0x556D35: push    edx
0x556D36: mov     edx, [esp+14h+arg_0]
0x556D3A: push    edx
0x556D3B: push    edi
0x556D3C: push    eax
0x556D3D: push    ecx
0x556D3E: call    sub_556780
0x556D43: add     esp, 18h
0x556D46: mov     [esi+8], eax
0x556D49: mov     eax, [esp+0Ch+arg_0]
0x556D4D: mov     [eax+4], edi
0x556D50: pop     edi
0x556D51: pop     esi
0x556D52: mov     [eax], ebx
0x556D54: pop     ebx
0x556D55: retn    14h
