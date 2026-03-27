0x8F8D70: mov     eax, [esp+arg_0]
0x8F8D74: mov     ecx, [eax+4]
0x8F8D77: mov     eax, [ecx]
0x8F8D79: mov     edx, [esp+arg_4]
0x8F8D7D: push    esi
0x8F8D7E: mov     esi, [esp+4+arg_8]
0x8F8D82: mov     ecx, 0FFFFh
0x8F8D87: mov     byte ptr [edx+2], 0
0x8F8D8B: mov     [esi], cx
0x8F8D8E: mov     [esi+2], cx
0x8F8D92: mov     [esi+4], cx
0x8F8D96: lea     ecx, [esi+8]
0x8F8D99: push    ecx
0x8F8D9A: add     eax, 10h
0x8F8D9D: push    eax
0x8F8D9E: call    sub_8D1EF0
0x8F8DA3: add     esp, 8
0x8F8DA6: lea     eax, [esi+20h]
0x8F8DA9: pop     esi
0x8F8DAA: retn
