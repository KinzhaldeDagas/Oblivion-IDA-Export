0x901C90: mov     eax, ecx
0x901C92: mov     ecx, [esp+arg_0]
0x901C96: mov     edx, [ecx]
0x901C98: mov     [eax], edx
0x901C9A: mov     edx, [ecx+3034h]
0x901CA0: mov     [eax+1030h], edx
0x901CA6: movaps  xmm0, xmmword ptr [ecx+10h]
0x901CAA: movaps  xmmword ptr [eax+1010h], xmm0
0x901CB1: movaps  xmm0, xmmword ptr [ecx+20h]
0x901CB5: movaps  xmmword ptr [eax+1020h], xmm0
0x901CBC: mov     edx, [ecx+3030h]
0x901CC2: push    esi
0x901CC3: mov     [eax+1034h], edx
0x901CC9: mov     esi, [ecx+3040h]
0x901CCF: test    esi, esi
0x901CD1: jz      short loc_901CDF
0x901CD3: push    edi
0x901CD4: mov     ecx, 402h
0x901CD9: lea     edi, [eax+4]
0x901CDC: rep movsd
0x901CDE: pop     edi
0x901CDF: pop     esi
0x901CE0: retn    4
