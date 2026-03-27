0x796850: sub     esp, 8
0x796853: push    ebx
0x796854: push    esi
0x796855: mov     esi, ecx
0x796857: mov     ebx, [esi+8]
0x79685A: cmp     [esi+4], ebx
0x79685D: push    edi
0x79685E: jbe     short loc_796865
0x796860: call    __invalid_parameter_noinfo
0x796865: mov     edi, [esi+4]
0x796868: cmp     edi, [esi+8]
0x79686B: jbe     short loc_796872
0x79686D: call    __invalid_parameter_noinfo
0x796872: push    ebx
0x796873: push    esi
0x796874: push    edi
0x796875: push    esi
0x796876: lea     eax, [esp+24h+var_8]
0x79687A: push    eax
0x79687B: mov     ecx, esi
0x79687D: call    sub_796730
0x796882: pop     edi
0x796883: pop     esi
0x796884: pop     ebx
0x796885: add     esp, 8
0x796888: retn
