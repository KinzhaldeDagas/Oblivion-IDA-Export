0x981A65: mov     ecx, [esp+Count]
0x981A69: push    esi
0x981A6A: xor     esi, esi
0x981A6C: cmp     ecx, esi
0x981A6E: jbe     short loc_981A99
0x981A70: push    0FFFFFFE0h
0x981A72: xor     edx, edx
0x981A74: pop     eax
0x981A75: div     ecx
0x981A77: cmp     eax, [esp+4+Size]
0x981A7B: jnb     short loc_981A99
0x981A7D: call    __errno
0x981A82: push    esi
0x981A83: push    esi
0x981A84: push    esi
0x981A85: push    esi
0x981A86: push    esi
0x981A87: mov     dword ptr [eax], 0Ch
0x981A8D: call    __invalid_parameter
0x981A92: add     esp, 14h
0x981A95: xor     eax, eax
0x981A97: pop     esi
0x981A98: retn
0x981A99: imul    ecx, [esp+4+Size]
0x981A9E: push    ecx; NewSize
0x981A9F: push    [esp+8+Memory]; Memory
0x981AA3: call    _realloc
0x981AA8: pop     ecx
0x981AA9: pop     ecx
0x981AAA: pop     esi
0x981AAB: retn
