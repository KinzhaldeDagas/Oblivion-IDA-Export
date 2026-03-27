0x4AD990: push    ebx
0x4AD991: mov     ebx, [esp+4+arg_8]
0x4AD995: test    ebx, ebx
0x4AD997: push    edi
0x4AD998: mov     edi, ecx
0x4AD99A: jz      short loc_4AD9D1
0x4AD99C: mov     eax, [esp+8+arg_4]
0x4AD9A0: mov     ecx, [esp+8+arg_0]
0x4AD9A4: push    esi
0x4AD9A5: push    eax
0x4AD9A6: push    ecx
0x4AD9A7: call    sub_7E45F0
0x4AD9AC: add     esp, 8
0x4AD9AF: mov     esi, eax
0x4AD9B1: push    ebx
0x4AD9B2: push    esi
0x4AD9B3: mov     ecx, edi
0x4AD9B5: call    sub_4AD630
0x4AD9BA: fld     [esp+0Ch+arg_C]
0x4AD9BE: push    ecx
0x4AD9BF: mov     ecx, esi
0x4AD9C1: fstp    [esp+10h+var_10]; float
0x4AD9C4: call    sub_7E4800
0x4AD9C9: mov     eax, esi
0x4AD9CB: pop     esi
0x4AD9CC: pop     edi
0x4AD9CD: pop     ebx
0x4AD9CE: retn    10h
0x4AD9D1: pop     edi
0x4AD9D2: xor     eax, eax
0x4AD9D4: pop     ebx
0x4AD9D5: retn    10h
