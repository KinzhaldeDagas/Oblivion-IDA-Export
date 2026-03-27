0x694A30: push    0FFFFFFFFh
0x694A32: push    offset SEH_8C8900
0x694A37: mov     eax, large fs:0
0x694A3D: push    eax
0x694A3E: push    ecx
0x694A3F: mov     eax, ds:0B30AACh
0x694A44: xor     eax, esp
0x694A46: push    eax
0x694A47: lea     eax, [esp+14h+var_C]
0x694A4B: mov     large fs:0, eax
0x694A51: push    3Ch ; '<'; Size
0x694A53: call    FormHeapAlloc
0x694A58: add     esp, 4
0x694A5B: mov     [esp+14h+var_10], eax
0x694A5F: test    eax, eax
0x694A61: mov     [esp+14h+var_4], 0
0x694A69: jz      short loc_694A91
0x694A6B: mov     ecx, [esp+14h+arg_8]
0x694A6F: mov     edx, [esp+14h+arg_4]
0x694A73: push    ecx; int
0x694A74: mov     ecx, [esp+18h+arg_0]
0x694A78: push    edx; int
0x694A79: push    ecx; int
0x694A7A: mov     ecx, eax; this
0x694A7C: call    LightEffect_constr
0x694A81: mov     ecx, [esp+14h+var_C]
0x694A85: mov     large fs:0, ecx
0x694A8C: pop     ecx
0x694A8D: add     esp, 10h
0x694A90: retn
0x694A91: xor     eax, eax
0x694A93: mov     ecx, [esp+14h+var_C]
0x694A97: mov     large fs:0, ecx
0x694A9E: pop     ecx
0x694A9F: add     esp, 10h
0x694AA2: retn
