0x942D10: push    esi
0x942D11: mov     esi, ecx
0x942D13: mov     ecx, [esi+0Ch]
0x942D16: test    ecx, ecx
0x942D18: push    edi
0x942D19: mov     edi, [esp+8+arg_8]
0x942D1D: jz      short loc_942D2E
0x942D1F: mov     eax, [esi+8]
0x942D22: add     eax, 0Ch
0x942D25: push    eax
0x942D26: push    edi
0x942D27: call    sub_942CB0
0x942D2C: jmp     short loc_942D30
0x942D2E: mov     eax, edi
0x942D30: mov     ecx, [esi+8]
0x942D33: mov     esi, [esp+8+arg_C]
0x942D37: mov     edx, [ecx]
0x942D39: push    esi
0x942D3A: mov     esi, [esp+0Ch+arg_0]
0x942D3E: push    eax
0x942D3F: mov     eax, [esp+10h+arg_4]
0x942D43: push    esi
0x942D44: push    edi
0x942D45: push    eax
0x942D46: call    dword ptr [edx+8]
0x942D49: mov     edx, [esi]
0x942D4B: lea     eax, [esp+8+arg_8]
0x942D4F: push    eax
0x942D50: mov     ecx, esi
0x942D52: call    dword ptr [edx+8]
0x942D55: mov     dl, [eax]
0x942D57: xor     ecx, ecx
0x942D59: test    dl, dl
0x942D5B: setz    cl
0x942D5E: pop     edi
0x942D5F: pop     esi
0x942D60: mov     eax, ecx
0x942D62: retn    10h
