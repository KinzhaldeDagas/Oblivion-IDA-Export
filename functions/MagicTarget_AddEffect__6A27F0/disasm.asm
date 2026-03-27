0x6A27F0: push    0FFFFFFFFh
0x6A27F2: push    offset MagicTarget_AddEffect_SEH
0x6A27F7: mov     eax, large fs:0
0x6A27FD: push    eax
0x6A27FE: sub     esp, 11Ch
0x6A2804: mov     eax, ds:0B30AACh
0x6A2809: xor     eax, esp
0x6A280B: mov     [esp+128h+var_10], eax
0x6A2812: push    ebx
0x6A2813: push    ebp
0x6A2814: push    esi
0x6A2815: push    edi
0x6A2816: mov     eax, ds:0B30AACh
0x6A281B: xor     eax, esp
0x6A281D: push    eax
0x6A281E: lea     eax, [esp+13Ch+var_C]
0x6A2825: mov     large fs:0, eax
0x6A282B: mov     eax, [esp+13Ch+arg_0]
0x6A2832: mov     esi, [esp+13Ch+arg_4]
0x6A2839: mov     ebp, [esp+13Ch+arg_8]
0x6A2840: mov     edi, ecx
0x6A2842: mov     edx, [edi]
0x6A2844: mov     [esp+13Ch+var_110], eax
0x6A2848: mov     eax, [edx+4]
0x6A284B: mov     [esp+13Ch+var_11C], esi
0x6A284F: call    eax
0x6A2851: mov     ebx, eax
0x6A2853: test    ebx, ebx
0x6A2855: mov     [esp+13Ch+var_124], ebx
0x6A2859: jz      short MagicTarget_AddEffect___GetSEFFAlwaysApplies
