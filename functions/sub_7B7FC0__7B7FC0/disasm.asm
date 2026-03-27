0x7B7FC0: push    ebx
0x7B7FC1: xor     bl, bl
0x7B7FC3: cmp     dword ptr ds:0B42F48h, 0
0x7B7FCA: jnz     short loc_7B7FD0
0x7B7FCC: xor     al, al
0x7B7FCE: pop     ebx
0x7B7FCF: retn
0x7B7FD0: push    ebp
0x7B7FD1: push    esi
0x7B7FD2: mov     esi, [esp+0Ch+arg_0]
0x7B7FD6: test    esi, esi
0x7B7FD8: push    edi
0x7B7FD9: jz      loc_7B813C
0x7B7FDF: mov     eax, [esi]
0x7B7FE1: mov     edx, [eax+0Ch]
0x7B7FE4: mov     ecx, esi
0x7B7FE6: call    edx
0x7B7FE8: test    eax, eax
0x7B7FEA: mov     ecx, esi
0x7B7FEC: jz      loc_7B80E6
0x7B7FF2: push    4
0x7B7FF4: call    NiNode_GetNiPropertyByID
0x7B7FF9: mov     ebp, [esi+0BCh]
0x7B7FFF: mov     ebx, eax
0x7B8001: test    ebx, ebx
0x7B8003: jnz     short loc_7B8009
0x7B8005: xor     edi, edi
0x7B8007: jmp     short loc_7B801D
0x7B8009: mov     eax, [ebx]
0x7B800B: mov     edx, [eax+54h]
0x7B800E: mov     ecx, ebx
0x7B8010: call    edx
0x7B8012: mov     edi, eax
0x7B8014: sub     edi, 0FFFFFFFFh
0x7B8017: neg     edi
0x7B8019: sbb     edi, edi
0x7B801B: and     edi, ebx
0x7B801D: test    ebp, ebp
0x7B801F: jnz     short loc_7B8025
0x7B8021: xor     eax, eax
0x7B8023: jmp     short loc_7B8038
0x7B8025: mov     eax, [ebp+0]
0x7B8028: mov     edx, [eax+1Ch]
0x7B802B: mov     ecx, ebp
0x7B802D: call    edx
0x7B802F: sub     eax, 0FFFFFFFFh
0x7B8032: neg     eax
0x7B8034: sbb     eax, eax
0x7B8036: and     eax, ebp
0x7B8038: test    edi, edi
0x7B803A: jz      short loc_7B8056
0x7B803C: test    ebp, ebp
0x7B803E: jz      short loc_7B8056
0x7B8040: mov     edx, [eax]
0x7B8042: mov     ecx, eax
0x7B8044: mov     eax, [edx+18h]
0x7B8047: push    esi
0x7B8048: call    eax
0x7B804A: mov     ecx, [esp+10h+arg_10]
0x7B804E: mov     [edi+68h], ecx
0x7B8051: pop     edi
0x7B8052: pop     esi
0x7B8053: pop     ebp
0x7B8054: pop     ebx
0x7B8055: retn
0x7B8056: mov     edi, [esp+10h+a1]
0x7B805A: test    edi, edi
0x7B805C: mov     eax, edi
0x7B805E: jl      short loc_7B8065
0x7B8060: cmp     edi, 1Ch
0x7B8063: jle     short loc_7B807F
0x7B8065: mov     eax, ds:0B42E8Ch
0x7B806A: test    eax, eax
0x7B806C: jz      short loc_7B807A
0x7B806E: push    0
0x7B8070: push    offset aObjectPrepared; "Object prepared with invalid shader ind"...
0x7B8075: call    eax ; dword_B42E8C
0x7B8077: add     esp, 8
0x7B807A: mov     eax, 1
0x7B807F: mov     ecx, edi
0x7B8081: sub     ecx, 1
0x7B8084: jnz     short loc_7B8099
0x7B8086: mov     edx, [esp+10h+arg_C]
0x7B808A: mov     eax, [esp+10h+arg_8]
0x7B808E: push    edx
0x7B808F: push    eax
0x7B8090: push    esi
0x7B8091: call    sub_7D1920
0x7B8096: add     esp, 0Ch
0x7B8099: test    eax, eax
0x7B809B: jz      short loc_7B80AC
0x7B809D: push    eax; a1
0x7B809E: call    GetShaderDefinition
0x7B80A3: mov     edi, eax
0x7B80A5: add     esp, 4
0x7B80A8: test    edi, edi
0x7B80AA: jnz     short loc_7B80B3
0x7B80AC: pop     edi
0x7B80AD: pop     esi
0x7B80AE: pop     ebp
0x7B80AF: xor     al, al
0x7B80B1: pop     ebx
0x7B80B2: retn
0x7B80B3: mov     ecx, [edi+4]
0x7B80B6: push    ecx; a2
0x7B80B7: mov     ecx, esi; this
0x7B80B9: call    sub_4EC910
0x7B80BE: mov     ecx, [edi+4]
0x7B80C1: mov     edx, [ecx]
0x7B80C3: mov     eax, [edx+18h]
0x7B80C6: push    esi
0x7B80C7: call    eax
0x7B80C9: push    4
0x7B80CB: mov     ecx, esi
0x7B80CD: mov     bl, al
0x7B80CF: call    NiNode_GetNiPropertyByID
0x7B80D4: test    eax, eax
0x7B80D6: jz      short loc_7B813C
0x7B80D8: mov     ecx, [esp+10h+arg_10]
0x7B80DC: pop     edi
0x7B80DD: pop     esi
0x7B80DE: mov     [eax+68h], ecx
0x7B80E1: pop     ebp
0x7B80E2: mov     al, bl
0x7B80E4: pop     ebx
0x7B80E5: retn
0x7B80E6: mov     edx, [esi]
0x7B80E8: mov     eax, [edx+8]
0x7B80EB: call    eax
0x7B80ED: test    eax, eax
0x7B80EF: jz      short loc_7B813C
0x7B80F1: movzx   eax, word ptr [esi+0B6h]
0x7B80F8: xor     edi, edi
0x7B80FA: test    eax, eax
0x7B80FC: jbe     short loc_7B813C
0x7B80FE: cmp     eax, edi
0x7B8100: mov     ebp, [esp+10h+arg_10]
0x7B8104: jbe     short loc_7B812E
0x7B8106: mov     ecx, [esi+0B0h]
0x7B810C: mov     eax, [ecx+edi*4]
0x7B810F: test    eax, eax
0x7B8111: jz      short loc_7B812E
0x7B8113: mov     edx, [esp+10h+arg_C]
0x7B8117: mov     ecx, [esp+10h+arg_8]
0x7B811B: push    ebp
0x7B811C: push    edx
0x7B811D: mov     edx, [esp+18h+a1]
0x7B8121: push    ecx
0x7B8122: push    edx
0x7B8123: push    eax
0x7B8124: call    sub_7B7FC0
0x7B8129: add     esp, 14h
0x7B812C: or      bl, al
0x7B812E: movzx   eax, word ptr [esi+0B6h]
0x7B8135: add     edi, 1
0x7B8138: cmp     eax, edi
0x7B813A: ja      short loc_7B8106
0x7B813C: pop     edi
0x7B813D: pop     esi
0x7B813E: pop     ebp
0x7B813F: mov     al, bl
0x7B8141: pop     ebx
0x7B8142: retn
