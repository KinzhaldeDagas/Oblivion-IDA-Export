0x415D63: mov     bx, [esp+arg_8]
0x415D68: test    bx, bx
0x415D6B: jbe     short EffectSetting_SetCounterEffects___Done
0x415D6D: push    edi
0x415D6E: movzx   edi, bx
0x415D71: push    1
0x415D73: lea     eax, ds:0[edi*4]
0x415D7A: push    eax
0x415D7B: mov     ecx, offset FormHeap
0x415D80: call    j_MemoryHeap_Alloc
0x415D85: test    eax, eax
0x415D87: mov     [esi+9Ch], eax
0x415D8D: jz      short EffectSetting_SetCounterEffects___Done_
0x415D8F: xor     eax, eax
0x415D91: test    edi, edi
0x415D93: mov     [esi+6Ch], bx
0x415D97: jle     short EffectSetting_SetCounterEffects___Done_
0x415D99: mov     ecx, [esp+4+arg_C]
0x415D9D: add     ecx, 0FFFFFFFCh
