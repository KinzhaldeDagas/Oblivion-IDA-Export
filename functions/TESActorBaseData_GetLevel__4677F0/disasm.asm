0x4677F0: push    ecx
0x4677F1: push    esi
0x4677F2: mov     esi, ecx
0x4677F4: mov     ecx, [esi+4]
0x4677F7: movzx   eax, word ptr [esi+0Eh]
0x4677FB: shr     ecx, 7
0x4677FE: test    cl, 1
0x467801: mov     [esp+8+var_4], eax
0x467805: jz      short TESActorBaseData_GetLevel___Return
0x467807: mov     ecx, ds:0B333C4h
0x46780D: mov     edx, [ecx]
0x46780F: mov     eax, [edx+170h]
0x467815: call    eax
0x467817: test    eax, eax
0x467819: jz      short loc_46782D
0x46781B: lea     ecx, [eax+24h]
0x46781E: test    ecx, ecx
0x467820: jz      short loc_46782D
0x467822: mov     ax, word ptr [esp+8+var_4]
0x467827: add     ax, [ecx+0Eh]
0x46782B: jmp     short TESActorBaseData_GetLevel___ApplyCalcLevelMin
0x46782D: mov     ax, word ptr [esp+8+var_4]
0x467832: movzx   ecx, word ptr [esi+10h]
0x467836: test    cx, cx
0x467839: jbe     short TESActorBaseData_GetLevel___ApplyCalcLevelMax
0x46783B: push    edi
0x46783C: movsx   edi, ax
0x46783F: movzx   edx, cx
0x467842: cmp     edi, edx
0x467844: pop     edi
0x467845: jge     short TESActorBaseData_GetLevel___ApplyCalcLevelMax
0x467847: movzx   eax, cx
0x46784A: mov     [esp+8+var_4], eax
0x46784E: pop     esi
0x46784F: pop     ecx
0x467850: retn
0x467851: movzx   ecx, word ptr [esi+12h]
0x467855: test    cx, cx
0x467858: jbe     short TESActorBaseData_GetLevel___Return_AX
0x46785A: movzx   edx, cx
0x46785D: movsx   esi, ax
0x467860: cmp     esi, edx
0x467862: jg      short TESActorBaseData_GetLevel___Return_CX
0x467864: cmp     ax, 1
0x467868: jge     short TESActorBaseData_GetLevel___Done
0x46786A: mov     [esp+8+var_4], 1
0x467872: mov     ax, word ptr [esp+8+var_4]
0x467877: pop     esi
0x467878: pop     ecx
0x467879: retn
