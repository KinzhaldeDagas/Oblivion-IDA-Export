0x785880: push    ecx; Oblivion 1.2.0.416: vector<float>::insert(position,value) wrapper returning a checked iterator; the called 0x526FA0 helper is the folded 4-byte insert-fill core.
0x785881: push    ebx
0x785882: push    ebp
0x785883: mov     ebp, [esp+0Ch+position.owner]
0x785887: push    esi
0x785888: mov     esi, ecx
0x78588A: push    edi
0x78588B: mov     edi, [esi+4]
0x78588E: test    edi, edi
0x785890: jz      short loc_78589E
0x785892: mov     eax, [esi+8]
0x785895: mov     ecx, eax
0x785897: sub     ecx, edi
0x785899: sar     ecx, 2
0x78589C: jnz     short loc_7858A2
0x78589E: xor     ebx, ebx
0x7858A0: jmp     short loc_7858C1
0x7858A2: cmp     edi, eax
0x7858A4: jbe     short loc_7858AB
0x7858A6: call    __invalid_parameter_noinfo
0x7858AB: test    ebp, ebp
0x7858AD: jz      short loc_7858B3
0x7858AF: cmp     ebp, esi
0x7858B1: jz      short loc_7858B8
0x7858B3: call    __invalid_parameter_noinfo
0x7858B8: mov     ebx, [esp+14h+position.current]
0x7858BC: sub     ebx, edi
0x7858BE: sar     ebx, 2
0x7858C1: mov     edx, [esp+14h+value]
0x7858C5: mov     eax, [esp+14h+position.current]
0x7858C9: push    edx; value
0x7858CA: push    1; count
0x7858CC: push    eax; Src
0x7858CD: push    ebp; position
0x7858CE: mov     ecx, esi; this
0x7858D0: call    OB_stVectorFloat_InsertFill_CompilerCopy_010201A0; Oblivion 1.2.0.416: compiler-emitted vector<float>::insert(position,count,value) body used by the checked float insert-one wrapper; 4-byte stride, 1.5x growth, alias-safe local fill value, in-place shift or FormHeap reallocation. Named CompilerCopy because equivalent specializations also exist at other addresses.
0x7858D5: mov     edi, [esi+4]
0x7858D8: cmp     edi, [esi+8]
0x7858DB: jbe     short loc_7858E2
0x7858DD: call    __invalid_parameter_noinfo
0x7858E2: mov     [esp+14h+position.current], edi
0x7858E6: lea     edi, [edi+ebx*4]
0x7858E9: cmp     edi, [esi+8]
0x7858EC: ja      short loc_7858F3
0x7858EE: cmp     edi, [esi+4]
0x7858F1: jnb     short loc_7858F8
0x7858F3: call    __invalid_parameter_noinfo
0x7858F8: mov     eax, [esp+14h+result]
0x7858FC: mov     [eax+4], edi
0x7858FF: pop     edi
0x785900: mov     [eax], esi
0x785902: pop     esi
0x785903: pop     ebp
0x785904: pop     ebx
0x785905: pop     ecx
0x785906: retn    10h
