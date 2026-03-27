0x728280: push    esi
0x728281: mov     esi, ecx
0x728283: test    word ptr [esi+2Ch], 0F000h
0x728289: push    edi
0x72828A: mov     edi, 1
0x72828F: jz      short loc_728296
0x728291: mov     edi, 3
0x728296: cmp     dword ptr [esi+20h], 0
0x72829A: jnz     short loc_7282BF
0x72829C: movzx   eax, word ptr [esi+8]
0x7282A0: imul    eax, edi
0x7282A3: xor     ecx, ecx
0x7282A5: mov     edx, 0Ch
0x7282AA: mul     edx
0x7282AC: seto    cl
0x7282AF: neg     ecx
0x7282B1: or      ecx, eax
0x7282B3: push    ecx; Size
0x7282B4: call    FormHeapAlloc
0x7282B9: add     esp, 4
0x7282BC: mov     [esi+20h], eax
0x7282BF: cmp     [esp+8+arg_0], 0
0x7282C4: jz      short loc_7282E3
0x7282C6: movzx   eax, word ptr [esi+8]
0x7282CA: mov     ecx, [esi+20h]
0x7282CD: imul    eax, edi
0x7282D0: lea     eax, [eax+eax*2]
0x7282D3: add     eax, eax
0x7282D5: add     eax, eax
0x7282D7: push    eax
0x7282D8: push    0
0x7282DA: push    ecx
0x7282DB: call    __memset
0x7282E0: add     esp, 0Ch
0x7282E3: pop     edi
0x7282E4: pop     esi
0x7282E5: retn    4
