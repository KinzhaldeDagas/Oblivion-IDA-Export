0x8AF380: push    0FFFFFFFFh
0x8AF382: push    offset SEH_8C8900
0x8AF387: mov     eax, large fs:0
0x8AF38D: push    eax
0x8AF38E: push    ecx
0x8AF38F: mov     eax, ds:0B30AACh
0x8AF394: xor     eax, esp
0x8AF396: push    eax
0x8AF397: lea     eax, [esp+14h+var_C]
0x8AF39B: mov     large fs:0, eax
0x8AF3A1: push    14h; Size
0x8AF3A3: call    FormHeapAlloc
0x8AF3A8: add     esp, 4
0x8AF3AB: mov     [esp+14h+var_10], eax
0x8AF3AF: test    eax, eax
0x8AF3B1: mov     [esp+14h+var_4], 0
0x8AF3B9: jz      short loc_8AF3D2
0x8AF3BB: mov     ecx, eax
0x8AF3BD: call    sub_8AF2C0
0x8AF3C2: mov     ecx, [esp+14h+var_C]
0x8AF3C6: mov     large fs:0, ecx
0x8AF3CD: pop     ecx
0x8AF3CE: add     esp, 10h
0x8AF3D1: retn
0x8AF3D2: xor     eax, eax
0x8AF3D4: mov     ecx, [esp+14h+var_C]
0x8AF3D8: mov     large fs:0, ecx
0x8AF3DF: pop     ecx
0x8AF3E0: add     esp, 10h
0x8AF3E3: retn
