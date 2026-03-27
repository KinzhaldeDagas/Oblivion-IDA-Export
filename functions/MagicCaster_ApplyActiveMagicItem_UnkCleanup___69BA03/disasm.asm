0x69BA03: cmp     [esp+arg_13], 0
0x69BA08: jz      short MagicCaster_ApplyActiveMagicItem___ClearCasterState
0x69BA0A: mov     edx, [esp+arg_74]
0x69BA0E: test    edx, edx
0x69BA10: jz      short MagicCaster_ApplyActiveMagicItem___ClearCasterState
0x69BA12: movzx   eax, word ptr [edx+20h]
0x69BA16: cmp     ax, 0FFFFh
0x69BA1A: jnz     short loc_69BA2F
0x69BA1C: mov     eax, [edx+1Ch]
0x69BA1F: lea     edi, [eax+1]
0x69BA22: mov     cl, [eax]
0x69BA24: add     eax, 1
0x69BA27: test    cl, cl
0x69BA29: jnz     short loc_69BA22
0x69BA2B: sub     eax, edi
0x69BA2D: jmp     short loc_69BA32
0x69BA2F: movzx   eax, ax
0x69BA32: test    eax, eax
0x69BA34: jbe     short MagicCaster_ApplyActiveMagicItem___ClearCasterState
0x69BA36: mov     eax, [edx+18h]
0x69BA39: lea     ecx, [edx+18h]
0x69BA3C: mov     edx, [eax+14h]
0x69BA3F: push    1
0x69BA41: push    0
0x69BA43: call    edx
0x69BA45: mov     ecx, ds:0B33A1Ch
0x69BA4B: push    eax
0x69BA4C: call    QueuedModelLoader_RemoveModel
