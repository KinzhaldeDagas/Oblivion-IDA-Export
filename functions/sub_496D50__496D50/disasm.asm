0x496D50: push    ebx
0x496D51: mov     ebx, [esp+4+arg_0]
0x496D55: push    ebp
0x496D56: push    esi
0x496D57: mov     esi, ecx
0x496D59: mov     eax, [esi]
0x496D5B: mov     edx, [eax+4]
0x496D5E: push    edi
0x496D5F: push    ebx
0x496D60: call    edx
0x496D62: mov     ebp, eax
0x496D64: mov     eax, [esi+8]
0x496D67: mov     edi, [eax+ebp*4]
0x496D6A: test    edi, edi
0x496D6C: jz      short loc_496D88
0x496D6E: mov     edi, edi
0x496D70: mov     eax, [edi+4]
0x496D73: mov     edx, [esi]
0x496D75: mov     edx, [edx+8]
0x496D78: push    eax
0x496D79: push    ebx
0x496D7A: mov     ecx, esi
0x496D7C: call    edx
0x496D7E: test    al, al
0x496D80: jnz     short loc_496DC1
0x496D82: mov     edi, [edi]
0x496D84: test    edi, edi
0x496D86: jnz     short loc_496D70
0x496D88: mov     edx, [esi]
0x496D8A: mov     eax, [edx+14h]
0x496D8D: mov     ecx, esi
0x496D8F: call    eax
0x496D91: mov     ecx, [esp+10h+arg_4]
0x496D95: mov     edx, [esi]
0x496D97: mov     edx, [edx+0Ch]
0x496D9A: mov     edi, eax
0x496D9C: mov     eax, [esp+10h+arg_8]
0x496DA0: push    eax
0x496DA1: push    ecx
0x496DA2: push    ebx
0x496DA3: push    edi
0x496DA4: mov     ecx, esi
0x496DA6: call    edx
0x496DA8: mov     eax, [esi+8]
0x496DAB: mov     ecx, [eax+ebp*4]
0x496DAE: mov     [edi], ecx
0x496DB0: mov     edx, [esi+8]
0x496DB3: mov     [edx+ebp*4], edi
0x496DB6: add     dword ptr [esi+0Ch], 1
0x496DBA: pop     edi
0x496DBB: pop     esi
0x496DBC: pop     ebp
0x496DBD: pop     ebx
0x496DBE: retn    0Ch
0x496DC1: mov     eax, [esi]
0x496DC3: mov     edx, [eax+10h]
0x496DC6: push    edi
0x496DC7: mov     ecx, esi
0x496DC9: call    edx
0x496DCB: mov     ecx, [esp+10h+arg_8]
0x496DCF: mov     edx, [esp+10h+arg_4]
0x496DD3: mov     eax, [esi]
0x496DD5: mov     eax, [eax+0Ch]
0x496DD8: push    ecx
0x496DD9: push    edx
0x496DDA: push    ebx
0x496DDB: push    edi
0x496DDC: mov     ecx, esi
0x496DDE: call    eax
0x496DE0: pop     edi
0x496DE1: pop     esi
0x496DE2: pop     ebp
0x496DE3: pop     ebx
0x496DE4: retn    0Ch
