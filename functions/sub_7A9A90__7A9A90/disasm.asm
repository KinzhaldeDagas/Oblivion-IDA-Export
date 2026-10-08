0x7A9A90: mov     eax, [esp+left]; MEF PERF 2026-10-07 PASS5: PERF-15 allowed pure comparator: reads uint16 selector+4 through RenderPass** arguments, returns signed -1/0/+1. No callbacks or writes in body. Adjacent sortedness guard may use this routine only while payload/selector lifetime and mutation are controlled.
0x7A9A94: mov     ecx, [esp+right]
0x7A9A98: mov     eax, [eax]
0x7A9A9A: mov     ecx, [ecx]
0x7A9A9C: movzx   eax, word ptr [eax+4]
0x7A9AA0: movzx   ecx, word ptr [ecx+4]
0x7A9AA4: cmp     ax, cx
0x7A9AA7: jnz     short loc_7A9AAC
0x7A9AA9: xor     eax, eax
0x7A9AAB: retn
0x7A9AAC: sbb     eax, eax
0x7A9AAE: and     eax, 0FFFFFFFEh
0x7A9AB1: add     eax, 1
0x7A9AB4: retn
