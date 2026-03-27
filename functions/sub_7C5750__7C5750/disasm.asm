0x7C5750: push    ecx
0x7C5751: push    ebx
0x7C5752: mov     ebx, [esp+8+arg_0]
0x7C5756: push    ebp
0x7C5757: push    edi
0x7C5758: mov     ebp, ecx
0x7C575A: push    4
0x7C575C: mov     ecx, ebx
0x7C575E: mov     [esp+14h+var_1], 1
0x7C5763: call    NiNode_GetNiPropertyByID
0x7C5768: mov     edi, eax
0x7C576A: test    edi, edi
0x7C576C: jz      loc_7C583D
0x7C5772: mov     eax, [edi]
0x7C5774: mov     edx, [eax+54h]
0x7C5777: push    esi
0x7C5778: mov     ecx, edi
0x7C577A: call    edx
0x7C577C: cmp     eax, 1
0x7C577F: jl      short loc_7C5796
0x7C5781: mov     eax, [edi]
0x7C5783: mov     edx, [eax+54h]
0x7C5786: mov     ecx, edi
0x7C5788: call    edx
0x7C578A: cmp     eax, 0Ah
0x7C578D: jg      short loc_7C5796
0x7C578F: mov     esi, 1
0x7C5794: jmp     short loc_7C5798
0x7C5796: xor     esi, esi
0x7C5798: neg     esi
0x7C579A: sbb     esi, esi
0x7C579C: and     esi, edi
0x7C579E: jz      loc_7C5831
0x7C57A4: mov     ecx, [esi+1Ch]
0x7C57A7: mov     al, [ebp+11Ch]
0x7C57AD: shr     ecx, 1Ch
0x7C57B0: cmp     cl, al
0x7C57B2: jz      short loc_7C57C8
0x7C57B4: movzx   edx, al
0x7C57B7: shl     edx, 1Ch
0x7C57BA: mov     byte ptr [esi+1Fh], 0
0x7C57BE: or      [esi+1Ch], edx
0x7C57C1: mov     dword ptr [esi+24h], 0FFFFFFFFh
0x7C57C8: mov     edi, [ebx+4]
0x7C57CB: mov     ecx, esi
0x7C57CD: call    sub_7ED5C0
0x7C57D2: movzx   eax, ax
0x7C57D5: cmp     edi, eax
0x7C57D7: ja      short loc_7C57DE
0x7C57D9: mov     [esp+14h+var_1], 0
0x7C57DE: mov     ecx, esi
0x7C57E0: call    sub_7ED5C0
0x7C57E5: movzx   edi, ax
0x7C57E8: test    edi, edi
0x7C57EA: jle     short loc_7C5831
0x7C57EC: mov     ecx, esi
0x7C57EE: call    sub_7ED160
0x7C57F3: cmp     byte ptr [eax+0F4h], 0
0x7C57FA: jnz     short loc_7C5804
0x7C57FC: push    ebx
0x7C57FD: mov     ecx, eax
0x7C57FF: call    sub_7D6940
0x7C5804: cmp     edi, 1
0x7C5807: jle     short loc_7C5831
0x7C5809: add     edi, 0FFFFFFFFh
0x7C580C: lea     esp, [esp+0]
0x7C5810: mov     ecx, esi
0x7C5812: call    sub_7ED180
0x7C5817: test    eax, eax
0x7C5819: jz      short loc_7C582C
0x7C581B: cmp     byte ptr [eax+0F4h], 0
0x7C5822: jnz     short loc_7C582C
0x7C5824: push    ebx
0x7C5825: mov     ecx, eax
0x7C5827: call    sub_7D6940
0x7C582C: sub     edi, 1
0x7C582F: jnz     short loc_7C5810
0x7C5831: mov     al, [esp+14h+var_1]
0x7C5835: pop     esi
0x7C5836: pop     edi
0x7C5837: pop     ebp
0x7C5838: pop     ebx
0x7C5839: pop     ecx
0x7C583A: retn    4
0x7C583D: mov     al, [esp+10h+var_1]
0x7C5841: pop     edi
0x7C5842: pop     ebp
0x7C5843: pop     ebx
0x7C5844: pop     ecx
0x7C5845: retn    4
