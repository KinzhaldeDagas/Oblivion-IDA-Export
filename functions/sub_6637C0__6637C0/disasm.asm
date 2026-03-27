0x6637C0: push    ebx
0x6637C1: push    esi
0x6637C2: push    edi
0x6637C3: mov     edi, ecx
0x6637C5: call    TESObjectREFR__GetNiNode
0x6637CA: mov     bl, [eax+18h]
0x6637CD: and     bl, 1
0x6637D0: jz      short loc_6637DA
0x6637D2: mov     esi, [edi+5C8h]
0x6637D8: jmp     short loc_6637E0
0x6637DA: mov     esi, [edi+104h]
0x6637E0: test    esi, esi
0x6637E2: jz      short loc_66380E
0x6637E4: push    8
0x6637E6: mov     ecx, esi
0x6637E8: call    sub_477EC0
0x6637ED: test    eax, eax
0x6637EF: jz      short loc_66380E
0x6637F1: push    0
0x6637F3: push    8
0x6637F5: mov     ecx, esi
0x6637F7: call    sub_477EC0
0x6637FC: push    eax
0x6637FD: push    0
0x6637FF: call    GetShadowSceneNode
0x663804: add     esp, 4
0x663807: mov     ecx, eax
0x663809: call    sub_7C7F90
0x66380E: test    bl, bl
0x663810: jnz     short loc_66381A
0x663812: mov     esi, [edi+5C8h]
0x663818: jmp     short loc_663820
0x66381A: mov     esi, [edi+104h]
0x663820: test    esi, esi
0x663822: jz      short loc_66384E
0x663824: push    8
0x663826: mov     ecx, esi
0x663828: call    sub_477EC0
0x66382D: test    eax, eax
0x66382F: jz      short loc_66384E
0x663831: push    1
0x663833: push    8
0x663835: mov     ecx, esi
0x663837: call    sub_477EC0
0x66383C: push    eax
0x66383D: push    0
0x66383F: call    GetShadowSceneNode
0x663844: add     esp, 4
0x663847: mov     ecx, eax
0x663849: call    sub_7C7F90
0x66384E: test    bl, bl
0x663850: lea     eax, [edi+798h]
0x663856: jnz     short loc_66385E
0x663858: lea     eax, [edi+79Ch]
0x66385E: mov     eax, [eax]
0x663860: push    eax; a2
0x663861: mov     ecx, edi; this
0x663863: call    sub_4DD130
0x663868: pop     edi
0x663869: pop     esi
0x66386A: pop     ebx
0x66386B: retn
