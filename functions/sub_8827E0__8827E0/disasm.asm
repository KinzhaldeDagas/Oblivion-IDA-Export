0x8827E0: mov     eax, [esp+arg_4]
0x8827E4: push    ebx
0x8827E5: mov     ebx, [esp+4+arg_0]
0x8827E9: push    ebp
0x8827EA: push    esi
0x8827EB: push    edi
0x8827EC: push    eax
0x8827ED: push    ebx
0x8827EE: mov     esi, ecx
0x8827F0: call    sub_7D7AD0
0x8827F5: mov     edi, [ebx+168h]
0x8827FB: cmp     edi, [esi+168h]
0x882801: mov     ebp, ds:0A2807Ch
0x882807: jz      short loc_88283F
0x882809: test    edi, edi
0x88280B: jz      short loc_882825
0x88280D: lea     ecx, [edi+4]
0x882810: push    ecx; lpAddend
0x882811: call    ebp ; InterlockedDecrement
0x882813: test    eax, eax
0x882815: jnz     short loc_882825
0x882817: test    edi, edi
0x882819: jz      short loc_882825
0x88281B: mov     edx, [edi]
0x88281D: mov     eax, [edx]
0x88281F: push    1
0x882821: mov     ecx, edi
0x882823: call    eax
0x882825: mov     eax, [esi+168h]
0x88282B: test    eax, eax
0x88282D: mov     [ebx+168h], eax
0x882833: jz      short loc_88283F
0x882835: add     eax, 4
0x882838: push    eax; lpAddend
0x882839: call    dword ptr ds:0A28078h
0x88283F: mov     ecx, [esi+158h]
0x882845: mov     [ebx+158h], ecx
0x88284B: mov     edx, [esi+15Ch]
0x882851: mov     [ebx+15Ch], edx
0x882857: mov     eax, [esi+160h]
0x88285D: mov     [ebx+160h], eax
0x882863: mov     ecx, [esi+164h]
0x882869: mov     [ebx+164h], ecx
0x88286F: mov     edi, [ebx+16Ch]
0x882875: cmp     edi, [esi+16Ch]
0x88287B: jz      short loc_8828B3
0x88287D: test    edi, edi
0x88287F: jz      short loc_882899
0x882881: lea     edx, [edi+4]
0x882884: push    edx; lpAddend
0x882885: call    ebp ; InterlockedDecrement
0x882887: test    eax, eax
0x882889: jnz     short loc_882899
0x88288B: test    edi, edi
0x88288D: jz      short loc_882899
0x88288F: mov     eax, [edi]
0x882891: mov     edx, [eax]
0x882893: push    1
0x882895: mov     ecx, edi
0x882897: call    edx
0x882899: mov     esi, [esi+16Ch]
0x88289F: test    esi, esi
0x8828A1: mov     [ebx+16Ch], esi
0x8828A7: jz      short loc_8828B3
0x8828A9: add     esi, 4
0x8828AC: push    esi; lpAddend
0x8828AD: call    dword ptr ds:0A28078h
0x8828B3: pop     edi
0x8828B4: pop     esi
0x8828B5: pop     ebp
0x8828B6: pop     ebx
0x8828B7: retn    8
