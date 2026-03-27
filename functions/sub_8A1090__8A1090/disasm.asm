0x8A1090: push    esi
0x8A1091: push    edi
0x8A1092: mov     edi, [esp+8+arg_0]
0x8A1096: mov     esi, ecx
0x8A1098: mov     ecx, edi
0x8A109A: call    sub_712AE0
0x8A109F: push    edi
0x8A10A0: mov     ecx, esi
0x8A10A2: call    sub_8A25C0
0x8A10A7: mov     eax, [esi]
0x8A10A9: mov     edx, [eax+74h]
0x8A10AC: lea     ecx, [esp+8+arg_0]
0x8A10B0: push    ecx
0x8A10B1: mov     ecx, esi
0x8A10B3: call    edx
0x8A10B5: test    eax, eax
0x8A10B7: jz      short loc_8A10C6
0x8A10B9: add     eax, 10h
0x8A10BC: push    eax
0x8A10BD: push    edi
0x8A10BE: call    sub_8E85E0
0x8A10C3: add     esp, 8
0x8A10C6: pop     edi
0x8A10C7: pop     esi
0x8A10C8: retn    4
