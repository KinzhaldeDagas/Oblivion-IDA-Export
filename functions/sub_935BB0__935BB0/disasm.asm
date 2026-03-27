0x935BB0: push    ebp
0x935BB1: mov     ebp, esp
0x935BB3: and     esp, 0FFFFFFF0h
0x935BB6: sub     esp, 3Ch
0x935BB9: mov     eax, [ebp+arg_0]
0x935BBC: movaps  xmm0, xmmword ptr [eax+10h]
0x935BC0: movaps  xmm1, xmmword ptr [eax+10h]
0x935BC4: mov     edx, [eax+20h]
0x935BC7: shufps  xmm0, xmm0, 0FFh
0x935BCB: movaps  xmm2, xmm0
0x935BCE: shufps  xmm2, xmm0, 0
0x935BD2: movaps  xmm0, xmmword ptr [eax]
0x935BD5: push    esi
0x935BD6: mov     esi, ecx
0x935BD8: mov     ecx, [eax+24h]
0x935BDB: mulps   xmm2, xmm1
0x935BDE: addps   xmm0, xmm2
0x935BE1: movaps  [esp+40h+var_30], xmm0
0x935BE6: movaps  xmm0, xmmword ptr ds:0A9B570h
0x935BED: mov     [esp+40h+var_10], ecx
0x935BF1: mov     ecx, [esi+8]
0x935BF4: mov     [esp+40h+var_C], edx
0x935BF8: xorps   xmm1, xmm0
0x935BFB: lea     edx, [esp+40h+var_30]
0x935BFF: movaps  [esp+40h+var_20], xmm1
0x935C04: mov     eax, [ecx]
0x935C06: push    edx
0x935C07: call    dword ptr [eax+4]
0x935C0A: mov     eax, [esi+8]
0x935C0D: mov     ecx, [eax+4]
0x935C10: mov     [esi+4], ecx
0x935C13: pop     esi
0x935C14: mov     esp, ebp
0x935C16: pop     ebp
0x935C17: retn    4
