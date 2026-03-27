0x77CA50: mov     eax, ecx
0x77CA52: mov     ecx, [eax+20h]
0x77CA55: sub     esp, 8
0x77CA58: test    ecx, ecx
0x77CA5A: jz      short loc_77CAA4
0x77CA5C: add     eax, 1Ch
0x77CA5F: cmp     dword ptr [eax], 0
0x77CA62: jz      short loc_77CAA4
0x77CA64: push    esi
0x77CA65: lea     edx, [esp+0Ch+var_8]
0x77CA69: push    edx
0x77CA6A: lea     edx, [esp+10h+var_4]
0x77CA6E: push    edx
0x77CA6F: push    eax
0x77CA70: mov     [esp+18h+var_8], 0
0x77CA78: call    sub_7B2600
0x77CA7D: mov     esi, [esp+0Ch+var_8]
0x77CA81: test    esi, esi
0x77CA83: jz      short loc_77CA9D
0x77CA85: lea     eax, [esi+4]
0x77CA88: push    eax; lpAddend
0x77CA89: call    dword ptr ds:0A2807Ch
0x77CA8F: test    eax, eax
0x77CA91: jnz     short loc_77CA9D
0x77CA93: mov     edx, [esi]
0x77CA95: mov     eax, [edx]
0x77CA97: push    1
0x77CA99: mov     ecx, esi
0x77CA9B: call    eax
0x77CA9D: mov     eax, esi
0x77CA9F: pop     esi
0x77CAA0: add     esp, 8
0x77CAA3: retn
0x77CAA4: xor     eax, eax
0x77CAA6: add     esp, 8
0x77CAA9: retn
