0x6DAE50: mov     eax, [ecx+18h]
0x6DAE53: push    ebx
0x6DAE54: push    esi
0x6DAE55: xor     edx, edx
0x6DAE57: test    eax, eax
0x6DAE59: push    edi
0x6DAE5A: jz      short loc_6DAE67
0x6DAE5C: mov     ecx, [eax+10h]
0x6DAE5F: mov     bl, [eax+14h]
0x6DAE62: mov     edx, [eax+0Ch]
0x6DAE65: jmp     short loc_6DAE6B
0x6DAE67: xor     ecx, ecx
0x6DAE69: xor     bl, bl
0x6DAE6B: mov     esi, [esp+0Ch+arg_0]
0x6DAE6F: fld     [esp+0Ch+arg_C]
0x6DAE73: movzx   eax, bl
0x6DAE76: mov     edi, eax
0x6DAE78: imul    eax, [esp+0Ch+arg_4]
0x6DAE7D: imul    edi, [esp+0Ch+arg_8]
0x6DAE82: push    esi
0x6DAE83: add     edi, edx
0x6DAE85: add     eax, edx
0x6DAE87: push    edi
0x6DAE88: push    eax
0x6DAE89: mov     eax, ds:0B3D010h[ecx*4]
0x6DAE90: push    ecx
0x6DAE91: fstp    [esp+1Ch+var_1C]
0x6DAE94: call    eax
0x6DAE96: add     esp, 10h
0x6DAE99: pop     edi
0x6DAE9A: mov     eax, esi
0x6DAE9C: pop     esi
0x6DAE9D: pop     ebx
0x6DAE9E: retn    10h
