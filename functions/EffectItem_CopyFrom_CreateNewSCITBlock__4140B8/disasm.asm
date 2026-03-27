0x4140B8: mov     ecx, [edi+1Ch]
0x4140BB: cmp     dword ptr [ecx+98h], 46464553h
0x4140C5: jnz     EffectItem_CopyFrom___Done
0x4140CB: cmp     [edi+18h], ebp
0x4140CE: jz      EffectItem_CopyFrom___Done
0x4140D4: push    18h; Size
0x4140D6: fstp    st
0x4140D8: call    FormHeapAlloc
0x4140DD: add     esp, 4
0x4140E0: cmp     eax, ebp
0x4140E2: jz      short loc_4140F1
0x4140E4: mov     [eax+8], ebp
0x4140E7: mov     [eax+0Ch], bp
0x4140EB: mov     [eax+0Eh], bp
0x4140EF: jmp     short loc_4140F3
0x4140F1: xor     eax, eax
0x4140F3: mov     [esi+18h], eax
