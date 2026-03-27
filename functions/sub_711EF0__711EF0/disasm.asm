0x711EF0: push    0FFFFFFFFh
0x711EF2: push    offset SEH_8C8900
0x711EF7: mov     eax, large fs:0
0x711EFD: push    eax
0x711EFE: push    ecx
0x711EFF: mov     eax, ds:0B30AACh
0x711F04: xor     eax, esp
0x711F06: push    eax
0x711F07: lea     eax, [esp+14h+var_C]
0x711F0B: mov     large fs:0, eax
0x711F11: mov     eax, ds:0B40334h
0x711F16: test    eax, eax
0x711F18: jz      short loc_711F2C
0x711F1A: call    eax ; dword_B40334
0x711F1C: mov     ecx, [esp+14h+var_C]
0x711F20: mov     large fs:0, ecx
0x711F27: pop     ecx
0x711F28: add     esp, 10h
0x711F2B: retn
0x711F2C: push    210h; Size
0x711F31: call    FormHeapAlloc
0x711F36: add     esp, 4
0x711F39: mov     [esp+14h+var_10], eax
0x711F3D: test    eax, eax
0x711F3F: mov     [esp+14h+var_4], 0
0x711F47: jz      short loc_711F60
0x711F49: mov     ecx, eax
0x711F4B: call    sub_7478C0
0x711F50: mov     ecx, [esp+14h+var_C]
0x711F54: mov     large fs:0, ecx
0x711F5B: pop     ecx
0x711F5C: add     esp, 10h
0x711F5F: retn
0x711F60: xor     eax, eax
0x711F62: mov     ecx, [esp+14h+var_C]
0x711F66: mov     large fs:0, ecx
0x711F6D: pop     ecx
0x711F6E: add     esp, 10h
0x711F71: retn
