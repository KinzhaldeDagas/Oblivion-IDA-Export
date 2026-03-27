0x439B90: push    esi
0x439B91: mov     esi, ecx
0x439B93: mov     eax, [esi+30h]
0x439B96: test    eax, eax
0x439B98: jz      short loc_439BA1
0x439B9A: mov     dword ptr [eax+0Ch], 6
0x439BA1: mov     eax, [esp+4+arg_0]
0x439BA5: push    eax
0x439BA6: call    sub_4392E0
0x439BAB: mov     ecx, ModelLoaderPtr
0x439BB1: mov     ecx, [ecx+8]
0x439BB4: mov     eax, [esi+20h]
0x439BB7: mov     edx, [ecx]
0x439BB9: pop     esi
0x439BBA: mov     [esp+arg_0], eax
0x439BBE: mov     edx, [edx+10h]
0x439BC1: jmp     edx
