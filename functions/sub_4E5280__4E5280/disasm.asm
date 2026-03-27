0x4E5280: mov     edx, [ecx+48h]
0x4E5283: sub     esp, 0Ch
0x4E5286: push    ebx
0x4E5287: lea     ebx, [ecx+44h]
0x4E528A: xor     eax, eax
0x4E528C: test    edx, edx
0x4E528E: push    esi
0x4E528F: jbe     short loc_4E52A5
0x4E5291: mov     esi, [ebx+8]
0x4E5294: mov     ecx, esi
0x4E5296: cmp     dword ptr [ecx], 0
0x4E5299: jnz     short loc_4E5319
0x4E529B: add     eax, 1
0x4E529E: add     ecx, 4
0x4E52A1: cmp     eax, edx
0x4E52A3: jb      short loc_4E5296
0x4E52A5: xor     eax, eax
0x4E52A7: test    eax, eax
0x4E52A9: mov     [esp+14h+var_8], eax
0x4E52AD: jz      short loc_4E530D
0x4E52AF: push    edi
0x4E52B0: lea     eax, [esp+18h+var_C]
0x4E52B4: push    eax
0x4E52B5: lea     ecx, [esp+1Ch+var_4]
0x4E52B9: push    ecx
0x4E52BA: lea     edx, [esp+20h+var_8]
0x4E52BE: push    edx
0x4E52BF: mov     ecx, ebx
0x4E52C1: mov     [esp+24h+var_C], 0
0x4E52C9: call    sub_452600
0x4E52CE: mov     esi, [esp+18h+var_C]
0x4E52D2: test    esi, esi
0x4E52D4: jz      short loc_4E5305
0x4E52D6: cmp     dword ptr [esi+4], 0
0x4E52DA: jz      short loc_4E52F6
0x4E52DC: lea     esp, [esp+0]
0x4E52E0: mov     eax, [esi+4]
0x4E52E3: mov     edi, [eax+4]
0x4E52E6: push    eax
0x4E52E7: call    FormHeapFree
0x4E52EC: add     esp, 4
0x4E52EF: test    edi, edi
0x4E52F1: mov     [esi+4], edi
0x4E52F4: jnz     short loc_4E52E0
0x4E52F6: push    esi
0x4E52F7: mov     dword ptr [esi], 0
0x4E52FD: call    FormHeapFree
0x4E5302: add     esp, 4
0x4E5305: cmp     [esp+18h+var_8], 0
0x4E530A: jnz     short loc_4E52B0
0x4E530C: pop     edi
0x4E530D: pop     esi
0x4E530E: mov     ecx, ebx
0x4E5310: pop     ebx
0x4E5311: add     esp, 0Ch
0x4E5314: jmp     NiTMap_Clear
0x4E5319: mov     eax, [esi+eax*4]
0x4E531C: jmp     short loc_4E52A7
