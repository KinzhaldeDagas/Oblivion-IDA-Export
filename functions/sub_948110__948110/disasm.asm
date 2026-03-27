0x948110: push    esi
0x948111: mov     esi, ecx
0x948113: mov     ecx, [esi+4]
0x948116: test    ecx, ecx
0x948118: jz      short loc_948154
0x94811A: push    29h ; ')'
0x94811C: call    sub_918440
0x948121: mov     ecx, [esi+4]
0x948124: push    2
0x948126: call    sub_9181B0
0x94812B: mov     eax, [esp+4+arg_0]
0x94812F: mov     ecx, [esi+4]
0x948132: push    eax
0x948133: call    sub_948810
0x948138: mov     ecx, [esp+4+arg_4]
0x94813C: push    0
0x94813E: push    ecx
0x94813F: mov     ecx, [esi+4]
0x948142: call    sub_918460
0x948147: mov     edx, [esp+4+arg_8]
0x94814B: mov     ecx, [esi+4]
0x94814E: push    edx
0x94814F: call    sub_918440
0x948154: mov     ecx, [esi+4]
0x948157: test    ecx, ecx
0x948159: pop     esi
0x94815A: jz      short loc_948170
0x94815C: lea     eax, [esp+arg_0]
0x948160: push    eax
0x948161: call    sub_918060
0x948166: cmp     byte ptr [eax], 0
0x948169: jz      short loc_948170
0x94816B: xor     eax, eax
0x94816D: retn    0Ch
0x948170: mov     eax, 1
0x948175: retn    0Ch
