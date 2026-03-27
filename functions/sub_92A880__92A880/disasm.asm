0x92A880: push    ebp
0x92A881: mov     ebp, esp
0x92A883: and     esp, 0FFFFFFF0h
0x92A886: sub     esp, 8
0x92A889: mov     edx, [ebp+arg_0]
0x92A88C: push    esi
0x92A88D: push    edi
0x92A88E: mov     edi, [ebp+arg_4]
0x92A891: mov     esi, ecx
0x92A893: mov     ecx, [esi+10h]
0x92A896: mov     eax, [ecx]
0x92A898: push    edi
0x92A899: push    edx
0x92A89A: call    dword ptr [eax+24h]
0x92A89D: movaps  xmm0, xmmword ptr [esi+20h]
0x92A8A1: movaps  xmm1, xmmword ptr [edi]
0x92A8A4: addps   xmm1, xmm0
0x92A8A7: movaps  xmmword ptr [edi], xmm1
0x92A8AA: pop     edi
0x92A8AB: pop     esi
0x92A8AC: mov     esp, ebp
0x92A8AE: pop     ebp
0x92A8AF: retn    8
