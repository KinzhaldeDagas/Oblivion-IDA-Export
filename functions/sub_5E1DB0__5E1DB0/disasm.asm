0x5E1DB0: push    ebx
0x5E1DB1: push    esi
0x5E1DB2: mov     esi, ecx
0x5E1DB4: mov     eax, [esi]
0x5E1DB6: mov     edx, [eax+170h]
0x5E1DBC: push    edi
0x5E1DBD: xor     ebx, ebx
0x5E1DBF: call    edx
0x5E1DC1: mov     edi, eax
0x5E1DC3: test    edi, edi
0x5E1DC5: jz      short loc_5E1DD9
0x5E1DC7: mov     eax, [esi]
0x5E1DC9: mov     edx, [eax+190h]
0x5E1DCF: mov     ecx, esi
0x5E1DD1: call    edx
0x5E1DD3: test    al, al
0x5E1DD5: jz      short loc_5E1DD9
0x5E1DD7: mov     ebx, edi
0x5E1DD9: mov     eax, [ebx+28h]
0x5E1DDC: shr     eax, 9
0x5E1DDF: not     al
0x5E1DE1: pop     edi
0x5E1DE2: pop     esi
0x5E1DE3: pop     ebx
0x5E1DE4: and     eax, 1
0x5E1DE7: retn
