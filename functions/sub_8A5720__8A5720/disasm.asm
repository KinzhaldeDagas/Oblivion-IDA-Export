0x8A5720: push    esi
0x8A5721: mov     esi, [esp+4+arg_0]
0x8A5725: test    esi, esi
0x8A5727: jz      short loc_8A578A
0x8A5729: push    esi
0x8A572A: call    sub_47FAC0
0x8A572F: add     esp, 4
0x8A5732: test    eax, eax
0x8A5734: jz      short loc_8A5744
0x8A5736: mov     eax, [eax+10h]
0x8A5739: test    eax, eax
0x8A573B: jz      short loc_8A5744
0x8A573D: mov     ecx, eax
0x8A573F: call    sub_8A5600
0x8A5744: mov     eax, [esi]
0x8A5746: mov     edx, [eax+8]
0x8A5749: push    edi
0x8A574A: mov     ecx, esi
0x8A574C: call    edx
0x8A574E: mov     edi, eax
0x8A5750: test    edi, edi
0x8A5752: jz      short loc_8A5789
0x8A5754: movzx   eax, word ptr [edi+0B6h]
0x8A575B: xor     esi, esi
0x8A575D: test    eax, eax
0x8A575F: jbe     short loc_8A5789
0x8A5761: cmp     eax, esi
0x8A5763: ja      short loc_8A5769
0x8A5765: xor     eax, eax
0x8A5767: jmp     short loc_8A5772
0x8A5769: mov     eax, [edi+0B0h]
0x8A576F: mov     eax, [eax+esi*4]
0x8A5772: push    eax
0x8A5773: call    sub_8A5720
0x8A5778: movzx   eax, word ptr [edi+0B6h]
0x8A577F: add     esi, 1
0x8A5782: add     esp, 4
0x8A5785: cmp     eax, esi
0x8A5787: ja      short loc_8A5769
0x8A5789: pop     edi
0x8A578A: pop     esi
0x8A578B: retn
