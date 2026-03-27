0x677360: push    edi
0x677361: add     ecx, 68h ; 'h'; this
0x677364: call    sub_7616D0
0x677369: mov     edi, eax
0x67736B: test    edi, edi
0x67736D: jz      short loc_6773A7
0x67736F: push    esi
0x677370: mov     esi, [edi]
0x677372: test    esi, esi
0x677374: jz      short loc_67739F
0x677376: mov     eax, [esi]
0x677378: mov     edx, [eax+190h]
0x67737E: mov     ecx, esi
0x677380: call    edx
0x677382: test    al, al
0x677384: jz      short loc_67739F
0x677386: mov     eax, [esi]
0x677388: mov     edx, [eax+198h]
0x67738E: push    0
0x677390: mov     ecx, esi
0x677392: call    edx
0x677394: test    al, al
0x677396: jnz     short loc_67739F
0x677398: mov     ecx, esi
0x67739A: call    sub_5EB370
0x67739F: mov     edi, [edi+4]
0x6773A2: test    edi, edi
0x6773A4: jnz     short loc_677370
0x6773A6: pop     esi
0x6773A7: pop     edi
0x6773A8: retn
