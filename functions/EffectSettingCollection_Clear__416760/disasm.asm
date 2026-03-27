0x416760: sub     esp, 0Ch
0x416763: push    esi
0x416764: mov     esi, ecx
0x416766: mov     edx, [esi+4]
0x416769: xor     eax, eax
0x41676B: test    edx, edx
0x41676D: push    edi
0x41676E: jbe     short loc_416784
0x416770: mov     edi, [esi+8]
0x416773: mov     ecx, edi
0x416775: cmp     dword ptr [ecx], 0
0x416778: jnz     short loc_4167D2
0x41677A: add     eax, 1
0x41677D: add     ecx, 4
0x416780: cmp     eax, edx
0x416782: jb      short loc_416775
0x416784: xor     eax, eax
0x416786: test    eax, eax
0x416788: mov     [esp+14h+var_8], eax
0x41678C: jz      short loc_4167C6
0x41678E: mov     edi, edi
0x416790: lea     eax, [esp+14h+var_C]
0x416794: push    eax
0x416795: lea     ecx, [esp+18h+var_4]
0x416799: push    ecx
0x41679A: lea     edx, [esp+1Ch+var_8]
0x41679E: push    edx
0x41679F: mov     ecx, esi
0x4167A1: mov     [esp+20h+var_C], 0
0x4167A9: call    sub_452600
0x4167AE: mov     ecx, [esp+14h+var_C]
0x4167B2: test    ecx, ecx
0x4167B4: jz      short loc_4167BF
0x4167B6: mov     eax, [ecx]
0x4167B8: mov     edx, [eax+10h]
0x4167BB: push    1
0x4167BD: call    edx
0x4167BF: cmp     [esp+14h+var_8], 0
0x4167C4: jnz     short loc_416790
0x4167C6: pop     edi
0x4167C7: mov     ecx, esi
0x4167C9: pop     esi
0x4167CA: add     esp, 0Ch
0x4167CD: jmp     NiTMap_Clear
0x4167D2: mov     eax, [edi+eax*4]
0x4167D5: jmp     short loc_416786
