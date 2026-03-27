0x430820: mov     edx, [esp+arg_0]
0x430824: movzx   eax, word ptr [edx+4]
0x430828: cmp     ax, 0FFFFh
0x43082C: push    esi
0x43082D: mov     esi, ecx
0x43082F: jnz     short loc_430849
0x430831: mov     eax, [edx]
0x430833: push    edi
0x430834: lea     edi, [eax+2]
0x430837: mov     cx, [eax]
0x43083A: add     eax, 2
0x43083D: test    cx, cx
0x430840: jnz     short loc_430837
0x430842: sub     eax, edi
0x430844: sar     eax, 1
0x430846: pop     edi
0x430847: jmp     short loc_43084C
0x430849: movzx   eax, ax
0x43084C: mov     ecx, [edx]
0x43084E: push    1
0x430850: lea     edx, [esp+8+arg_0]
0x430854: push    edx
0x430855: lea     eax, [eax+eax+2]
0x430859: push    eax
0x43085A: push    ecx
0x43085B: mov     ecx, [esi+8]
0x43085E: push    esi
0x43085F: mov     [esp+18h+arg_0], 1
0x430867: call    ecx
0x430869: add     [esi+148h], eax
0x43086F: add     esp, 14h
0x430872: shr     eax, 1
0x430874: pop     esi
0x430875: retn    4
