0x748AB0: push    esi
0x748AB1: mov     esi, ecx
0x748AB3: mov     edx, [esi+100h]
0x748AB9: test    edx, edx
0x748ABB: jz      short loc_748AFA
0x748ABD: push    ebx; File
0x748ABE: push    edi
0x748ABF: mov     edi, [esp+0Ch+Str]
0x748AC3: mov     eax, edi
0x748AC5: lea     ebx, [eax+1]
0x748AC8: mov     cl, [eax]
0x748ACA: add     eax, 1
0x748ACD: test    cl, cl
0x748ACF: jnz     short loc_748AC8
0x748AD1: push    edx; Count
0x748AD2: sub     eax, ebx
0x748AD4: push    eax; Count
0x748AD5: push    1; Size
0x748AD7: push    edi; Str
0x748AD8: call    _fwrite
0x748ADD: add     esp, 10h
0x748AE0: cmp     byte ptr [esi+104h], 0
0x748AE7: pop     edi
0x748AE8: pop     ebx
0x748AE9: jz      short loc_748AFA
0x748AEB: mov     eax, [esi+100h]
0x748AF1: push    eax; File
0x748AF2: call    _fflush
0x748AF7: add     esp, 4
0x748AFA: pop     esi
0x748AFB: retn    4
