0x4728C0: mov     eax, ecx
0x4728C2: mov     ecx, [eax+8]
0x4728C5: test    ecx, ecx
0x4728C7: jz      locret_472998
0x4728CD: mov     edx, ds:0B3F9A8h
0x4728D3: mov     [eax+18h], edx
0x4728D6: mov     edx, ds:0B3F9ACh
0x4728DC: mov     [eax+1Ch], edx
0x4728DF: mov     edx, ds:0B3F9B0h
0x4728E5: mov     [eax+20h], edx
0x4728E8: push    esi
0x4728E9: push    edi
0x4728EA: lea     edi, [ecx+30h]
0x4728ED: mov     ecx, 9
0x4728F2: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x4728F7: rep movsd
0x4728F9: mov     ecx, [eax+8]
0x4728FC: mov     edx, ds:0B3F9A8h
0x472902: add     ecx, 54h ; 'T'
0x472905: mov     [ecx], edx
0x472907: mov     edx, ds:0B3F9ACh
0x47290D: mov     [ecx+4], edx
0x472910: mov     edx, ds:0B3F9B0h
0x472916: mov     [ecx+8], edx
0x472919: mov     eax, [eax+8]
0x47291C: mov     edi, [eax+0Ch]
0x47291F: test    edi, edi
0x472921: jz      short loc_472996
0x472923: mov     edx, [edi]
0x472925: mov     eax, [edx+4]
0x472928: mov     ecx, edi
0x47292A: call    eax
0x47292C: test    eax, eax
0x47292E: jz      short loc_47293E
0x472930: cmp     eax, offset dword_B3CCB0
0x472935: jz      short loc_472999
0x472937: mov     eax, [eax+4]
0x47293A: test    eax, eax
0x47293C: jnz     short loc_472930
0x47293E: xor     al, al
0x472940: neg     al
0x472942: sbb     eax, eax
0x472944: and     eax, edi
0x472946: jz      short loc_47298F
0x472948: mov     edx, [eax]
0x47294A: mov     ecx, eax
0x47294C: mov     eax, [edx+80h]
0x472952: push    0
0x472954: call    eax
0x472956: mov     esi, eax
0x472958: test    esi, esi
0x47295A: jz      short loc_47298F
0x47295C: mov     edx, [esi]
0x47295E: mov     eax, [edx+4]
0x472961: mov     ecx, esi
0x472963: call    eax
0x472965: test    eax, eax
0x472967: jz      short loc_47297E
0x472969: lea     esp, [esp+0]
0x472970: cmp     eax, offset dword_B3CD1C
0x472975: jz      short loc_47299D
0x472977: mov     eax, [eax+4]
0x47297A: test    eax, eax
0x47297C: jnz     short loc_472970
0x47297E: xor     al, al
0x472980: neg     al
0x472982: sbb     eax, eax
0x472984: and     eax, esi
0x472986: jz      short loc_47298F
0x472988: mov     ecx, eax
0x47298A: call    sub_471640
0x47298F: mov     edi, [edi+34h]
0x472992: test    edi, edi
0x472994: jnz     short loc_472923
0x472996: pop     edi
0x472997: pop     esi
0x472998: retn
0x472999: mov     al, 1
0x47299B: jmp     short loc_472940
0x47299D: mov     al, 1
0x47299F: jmp     short loc_472980
