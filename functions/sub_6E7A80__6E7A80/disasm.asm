0x6E7A80: push    esi
0x6E7A81: push    edi
0x6E7A82: mov     edi, [esp+8+a2]
0x6E7A86: push    edi; a2
0x6E7A87: mov     esi, ecx
0x6E7A89: call    sub_7008A0
0x6E7A8E: mov     eax, [edi+21Ch]
0x6E7A94: mov     edx, [eax+4]
0x6E7A97: push    1
0x6E7A99: lea     ecx, [esp+0Ch+a2]
0x6E7A9D: push    ecx
0x6E7A9E: push    4
0x6E7AA0: add     esi, 8
0x6E7AA3: push    esi
0x6E7AA4: push    eax
0x6E7AA5: mov     [esp+1Ch+a2], 4
0x6E7AAD: call    edx
0x6E7AAF: add     esp, 14h
0x6E7AB2: pop     edi
0x6E7AB3: pop     esi
0x6E7AB4: retn    4
