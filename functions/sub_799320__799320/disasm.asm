0x799320: push    0FFFFFFFFh
0x799322: push    offset SEH_4CCEE0
0x799327: mov     eax, large fs:0
0x79932D: push    eax
0x79932E: push    ebx
0x79932F: push    ebp
0x799330: push    esi
0x799331: push    edi
0x799332: mov     eax, ds:0B30AACh
0x799337: xor     eax, esp
0x799339: push    eax
0x79933A: lea     eax, [esp+20h+var_C]
0x79933E: mov     large fs:0, eax
0x799344: mov     edi, ecx
0x799346: mov     esi, [esp+20h+arg_8]
0x79934A: mov     ax, [esi+38h]
0x79934E: mov     [edi+8], ax
0x799352: mov     ecx, [esi+4Ch]
0x799355: mov     [edi+0Ch], ecx
0x799358: mov     edx, [esi+44h]
0x79935B: mov     [edi+10h], edx
0x79935E: mov     eax, [esi+48h]
0x799361: mov     [edi+14h], eax
0x799364: mov     eax, [esi+14h]
0x799367: test    eax, eax
0x799369: jz      short loc_799381
0x79936B: mov     ecx, [esi+18h]
0x79936E: sub     ecx, eax
0x799370: mov     eax, 30C30C31h
0x799375: imul    ecx
0x799377: sar     edx, 4
0x79937A: mov     eax, edx
0x79937C: shr     eax, 1Fh
0x79937F: add     eax, edx
0x799381: movzx   ebp, ax
0x799384: mov     [edi+1Ch], ax
0x799388: xor     ecx, ecx
0x79938A: mov     eax, ebp
0x79938C: mov     edx, 0Ch
0x799391: mul     edx
0x799393: seto    cl
0x799396: neg     ecx
0x799398: or      ecx, eax
0x79939A: push    ecx; Size
0x79939B: call    FormHeapAlloc
0x7993A0: mov     ebx, eax
0x7993A2: add     esp, 4
0x7993A5: mov     [esp+20h+arg_8], ebx
0x7993A9: test    ebx, ebx
0x7993AB: mov     [esp+20h+var_4], 0
0x7993B3: jz      short loc_7993C5
0x7993B5: push    offset sub_786E40
0x7993BA: push    ebp
0x7993BB: push    0Ch
0x7993BD: push    ebx
0x7993BE: call    sub_401080
0x7993C3: jmp     short loc_7993C7
0x7993C5: xor     ebx, ebx
0x7993C7: movzx   ebp, word ptr [edi+1Ch]
0x7993CB: xor     ecx, ecx
0x7993CD: mov     eax, ebp
0x7993CF: mov     edx, 0Ch
0x7993D4: mul     edx
0x7993D6: seto    cl
0x7993D9: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7993E1: mov     [edi+20h], ebx
0x7993E4: neg     ecx
0x7993E6: or      ecx, eax
0x7993E8: push    ecx; Size
0x7993E9: call    FormHeapAlloc
0x7993EE: mov     ebx, eax
0x7993F0: add     esp, 4
0x7993F3: mov     [esp+20h+arg_8], ebx
0x7993F7: test    ebx, ebx
0x7993F9: mov     [esp+20h+var_4], 1
0x799401: jz      short loc_799413
0x799403: push    offset sub_786E40
0x799408: push    ebp
0x799409: push    0Ch
0x79940B: push    ebx
0x79940C: call    sub_401080
0x799411: jmp     short loc_799415
0x799413: xor     ebx, ebx
0x799415: mov     [edi+24h], ebx
0x799418: xor     ebp, ebp
0x79941A: xor     ebx, ebx
0x79941C: cmp     [edi+1Ch], bp
0x799420: mov     [esp+20h+var_4], 0FFFFFFFFh
0x799428: jbe     loc_7994D3
0x79942E: mov     [esp+20h+arg_8], ebp
0x799432: mov     eax, [esi+14h]
0x799435: test    eax, eax
0x799437: jz      short loc_799453
0x799439: mov     ecx, [esi+18h]
0x79943C: sub     ecx, eax
0x79943E: mov     eax, 30C30C31h
0x799443: imul    ecx
0x799445: sar     edx, 4
0x799448: mov     eax, edx
0x79944A: shr     eax, 1Fh
0x79944D: add     eax, edx
0x79944F: cmp     ebx, eax
0x799451: jb      short loc_799458
0x799453: call    __invalid_parameter_noinfo
0x799458: mov     eax, [esi+14h]
0x79945B: mov     edx, [eax+ebp+48h]
0x79945F: lea     ecx, [eax+ebp+48h]
0x799463: mov     eax, [edi+20h]
0x799466: add     eax, [esp+20h+arg_8]
0x79946A: mov     [eax], edx
0x79946C: mov     edx, [ecx+4]
0x79946F: mov     [eax+4], edx
0x799472: mov     ecx, [ecx+8]
0x799475: mov     [eax+8], ecx
0x799478: mov     eax, [esi+14h]
0x79947B: test    eax, eax
0x79947D: jz      short loc_799499
0x79947F: mov     ecx, [esi+18h]
0x799482: sub     ecx, eax
0x799484: mov     eax, 30C30C31h
0x799489: imul    ecx
0x79948B: sar     edx, 4
0x79948E: mov     eax, edx
0x799490: shr     eax, 1Fh
0x799493: add     eax, edx
0x799495: cmp     ebx, eax
0x799497: jb      short loc_79949E
0x799499: call    __invalid_parameter_noinfo
0x79949E: mov     edx, [esi+14h]
0x7994A1: mov     eax, [edi+24h]
0x7994A4: add     eax, [esp+20h+arg_8]
0x7994A8: add     [esp+20h+arg_8], 0Ch
0x7994AD: lea     ecx, [edx+ebp+30h]
0x7994B1: mov     edx, [ecx]
0x7994B3: mov     [eax], edx
0x7994B5: mov     edx, [ecx+4]
0x7994B8: mov     [eax+4], edx
0x7994BB: mov     ecx, [ecx+8]
0x7994BE: mov     [eax+8], ecx
0x7994C1: movzx   edx, word ptr [edi+1Ch]
0x7994C5: add     ebx, 1
0x7994C8: add     ebp, 54h ; 'T'
0x7994CB: cmp     ebx, edx
0x7994CD: jl      loc_799432
0x7994D3: movzx   ecx, word ptr [edi+8]
0x7994D7: movzx   eax, word ptr [edi+1Ch]
0x7994DB: imul    eax, ecx
0x7994DE: xor     ecx, ecx
0x7994E0: shl     eax, 5
0x7994E3: mov     edx, 4
0x7994E8: mul     edx
0x7994EA: seto    cl
0x7994ED: neg     ecx
0x7994EF: or      ecx, eax
0x7994F1: push    ecx; Size
0x7994F2: call    FormHeapAlloc
0x7994F7: mov     ecx, [esp+24h+arg_0]
0x7994FB: add     esp, 4
0x7994FE: mov     [edi+18h], eax
0x799501: mov     eax, [esp+20h+arg_4]
0x799505: push    eax
0x799506: push    ecx
0x799507: mov     ecx, edi
0x799509: call    sub_798CC0
0x79950E: mov     ecx, [esp+20h+var_C]
0x799512: mov     large fs:0, ecx
0x799519: pop     ecx
0x79951A: pop     edi
0x79951B: pop     esi
0x79951C: pop     ebp
0x79951D: pop     ebx
0x79951E: add     esp, 0Ch
0x799521: retn    0Ch
