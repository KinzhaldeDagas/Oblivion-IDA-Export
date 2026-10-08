0x7857D0: push    ecx; Oblivion 1.2.0.416: vector<stVec>::insert(position,value) wrapper returning a checked iterator. IDA boundary repaired from 0x7857D0..0x785843 plus false 0x785850 tail to the real 0x7857D0..0x785880 function; false FUNC_NORET cleared.
0x7857D1: push    ebx
0x7857D2: push    ebp
0x7857D3: mov     ebp, [esp+0Ch+position.current]
0x7857D7: push    esi
0x7857D8: mov     esi, ecx
0x7857DA: push    edi
0x7857DB: mov     edi, [esi+4]
0x7857DE: test    edi, edi
0x7857E0: jz      short loc_7857FC
0x7857E2: mov     ebx, [esi+8]
0x7857E5: mov     ecx, ebx
0x7857E7: sub     ecx, edi
0x7857E9: mov     eax, 2AAAAAABh
0x7857EE: imul    ecx
0x7857F0: sar     edx, 2
0x7857F3: mov     eax, edx
0x7857F5: shr     eax, 1Fh
0x7857F8: add     eax, edx
0x7857FA: jnz     short loc_785804
0x7857FC: mov     ebx, [esp+14h+position.owner]
0x785800: xor     edi, edi
0x785802: jmp     short loc_785833
0x785804: cmp     edi, ebx
0x785806: jbe     short loc_78580D
0x785808: call    __invalid_parameter_noinfo
0x78580D: mov     ebx, [esp+14h+position.owner]
0x785811: test    ebx, ebx
0x785813: jz      short loc_785819
0x785815: cmp     ebx, esi
0x785817: jz      short loc_78581E
0x785819: call    __invalid_parameter_noinfo
0x78581E: mov     ecx, ebp
0x785820: sub     ecx, edi
0x785822: mov     eax, 2AAAAAABh
0x785827: imul    ecx
0x785829: sar     edx, 2
0x78582C: mov     edi, edx
0x78582E: shr     edi, 1Fh
0x785831: add     edi, edx
0x785833: mov     ecx, [esp+14h+value]
0x785837: push    ecx; value
0x785838: push    1; count
0x78583A: push    ebp
0x78583B: push    ebx; position
0x78583C: mov     ecx, esi; this
0x78583E: call    OB_stVector_stVec_InsertFill_010201A0; Oblivion 1.2.0.416: vector<stVec>::insert(position,count,value); preserves aliasing with a local 24-byte copy, uses 1.5x growth, and handles in-place or reallocated insertion. False FUNC_NORET cleared.
0x785843: mov     ebx, [esi+4]
0x785846: cmp     ebx, [esi+8]
0x785849: jbe     short loc_785850
0x78584B: call    __invalid_parameter_noinfo
0x785850: lea     edx, [edi+edi*2]
0x785853: lea     edi, [ebx+edx*8]
0x785856: cmp     edi, [esi+8]
0x785859: mov     [esp+14h+position.current], ebx
0x78585D: ja      short loc_785864
0x78585F: cmp     edi, [esi+4]
0x785862: jnb     short loc_785869
0x785864: call    __invalid_parameter_noinfo
0x785869: mov     eax, [esp+14h+result]
0x78586D: mov     [eax+4], edi
0x785870: pop     edi
0x785871: mov     [eax], esi
0x785873: pop     esi
0x785874: pop     ebp
0x785875: pop     ebx
0x785876: pop     ecx
0x785877: retn    10h
