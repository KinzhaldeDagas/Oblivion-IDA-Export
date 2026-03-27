0x8BD910: cmp     [esp+arg_0], 0
0x8BD915: push    esi
0x8BD916: mov     esi, ecx
0x8BD918: jz      short loc_8BD939
0x8BD91A: mov     eax, [esi+0Ch]
0x8BD91D: test    eax, eax
0x8BD91F: jz      short loc_8BD932
0x8BD921: movzx   ecx, byte ptr [eax-1]
0x8BD925: sub     eax, ecx
0x8BD927: push    eax; void *
0x8BD928: mov     ecx, offset FormHeap
0x8BD92D: call    MemoryHeap_Free_checked
0x8BD932: mov     dword ptr [esi+0Ch], 0
0x8BD939: pop     esi
0x8BD93A: retn    4
