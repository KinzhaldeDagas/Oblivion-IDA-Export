0x46CC70: push    ecx
0x46CC71: mov     eax, [esp+4+arg_4]
0x46CC75: push    ebx
0x46CC76: push    esi
0x46CC77: mov     esi, ecx
0x46CC79: mov     ecx, [esp+0Ch+arg_8]
0x46CC7D: mov     dword ptr [eax], 0
0x46CC83: mov     word ptr [ecx], 0
0x46CC88: mov     bl, [esi+0Ch]
0x46CC8B: test    bl, bl
0x46CC8D: jbe     short TESLeveledList_SimpleCalcLeveledForm___CalcMinLevel
0x46CC8F: push    0; Seed
0x46CC91: call    GetRandomLargeInteger?
0x46CC96: mov     ecx, eax
0x46CC98: mov     eax, 51EB851Fh
0x46CC9D: imul    ecx
0x46CC9F: sar     edx, 5
0x46CCA2: mov     eax, edx
0x46CCA4: shr     eax, 1Fh
0x46CCA7: add     eax, edx
0x46CCA9: imul    eax, 64h ; 'd'
0x46CCAC: movzx   edx, bl
0x46CCAF: sub     ecx, eax
0x46CCB1: add     esp, 4
0x46CCB4: cmp     ecx, edx
0x46CCB6: jl      TESLeveledList_SimpleCalcLeveledForm___Done
