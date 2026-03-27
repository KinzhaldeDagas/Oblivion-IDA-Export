0x769030: sub     esp, 20h
0x769033: push    ebx
0x769034: push    ebp
0x769035: push    esi
0x769036: mov     ebp, ecx
0x769038: push    edi; int
0x769039: mov     [esp+30h+var_1C], ebp
0x76903D: call    sub_763FE0
0x769042: mov     ecx, [ebp+608h]
0x769048: xor     eax, eax
0x76904A: test    ecx, ecx
0x76904C: jbe     short loc_769065
0x76904E: mov     esi, [ebp+60Ch]
0x769054: mov     edx, esi
0x769056: cmp     dword ptr [edx], 0
0x769059: jnz     short loc_7690D6
0x76905B: add     eax, 1
0x76905E: add     edx, 4
0x769061: cmp     eax, ecx
0x769063: jb      short loc_769056
0x769065: xor     eax, eax
0x769067: xor     ebx, ebx
0x769069: test    eax, eax
0x76906B: mov     [esp+30h+var_14], eax
0x76906F: mov     [esp+30h+var_20], ebx
0x769073: jz      loc_76927A
0x769079: lea     esp, [esp+0]
0x769080: lea     eax, [esp+30h+var_10]
0x769084: push    eax
0x769085: lea     ecx, [esp+34h+var_C]
0x769089: push    ecx
0x76908A: lea     edx, [esp+38h+var_14]
0x76908E: push    edx
0x76908F: lea     ecx, [ebp+604h]
0x769095: call    sub_452600
0x76909A: mov     edi, [esp+30h+var_10]
0x76909E: test    edi, edi
0x7690A0: jz      loc_76926F
0x7690A6: cmp     [esp+30h+var_C], 0
0x7690AB: jz      loc_769294
0x7690B1: or      ebx, 0FFFFFFFFh
0x7690B4: xor     edx, edx
0x7690B6: mov     eax, edi
0x7690B8: jmp     short loc_7690C0
0x7690BA: align 10h
0x7690C0: mov     ecx, [eax+1Ch]
0x7690C3: mov     esi, [eax+20h]
0x7690C6: mov     eax, [eax+18h]
0x7690C9: cmp     ecx, [eax+1Ch]
0x7690CC: jnb     short loc_7690DB
0x7690CE: mov     eax, [eax+24h]
0x7690D1: mov     ecx, [eax+ecx*4]
0x7690D4: jmp     short loc_7690DD
0x7690D6: mov     eax, [esi+eax*4]
0x7690D9: jmp     short loc_769067
0x7690DB: xor     ecx, ecx
0x7690DD: mov     eax, [ecx+0Ch]
0x7690E0: cmp     eax, ebx
0x7690E2: jnb     short loc_7690E6
0x7690E4: mov     ebx, eax
0x7690E6: mov     ebp, [ecx+14h]
0x7690E9: add     eax, ebp
0x7690EB: cmp     eax, edx
0x7690ED: jbe     short loc_7690F1
0x7690EF: mov     edx, eax
0x7690F1: test    esi, esi
0x7690F3: mov     eax, esi
0x7690F5: jnz     short loc_7690C0
0x7690F7: cmp     edx, ebx
0x7690F9: jbe     loc_769267
0x7690FF: mov     eax, [ecx+10h]
0x769102: mov     ecx, [ecx+8]
0x769105: push    eax; int
0x769106: sub     edx, ebx
0x769108: push    edx; Size
0x769109: push    ebx; int
0x76910A: push    ecx; int
0x76910B: mov     ecx, [esp+40h+var_1C]
0x76910F: mov     ecx, [ecx+8B0h]
0x769115: call    sub_776C90
0x76911A: mov     [esp+30h+var_8], eax
0x76911E: mov     edi, edi
0x769120: mov     esi, [edi+18h]
0x769123: mov     eax, [edi+1Ch]
0x769126: cmp     eax, [esi+1Ch]
0x769129: mov     edx, [edi+20h]
0x76912C: mov     [esp+30h+var_4], edx
0x769130: jnb     short loc_76913A
0x769132: mov     ecx, [esi+24h]
0x769135: mov     ebp, [ecx+eax*4]
0x769138: jmp     short loc_76913C
0x76913A: xor     ebp, ebp
0x76913C: mov     ebx, [ebp+0Ch]
0x76913F: mov     ecx, [edi+0Ch]
0x769142: add     ebx, [esp+30h+var_8]
0x769146: test    ecx, ecx
0x769148: jz      short loc_769168
0x76914A: mov     edx, [ecx]
0x76914C: mov     edx, [edx+6Ch]
0x76914F: push    ebx
0x769150: push    eax
0x769151: mov     eax, [edi+8]
0x769154: push    ebp
0x769155: push    0FFFh
0x76915A: push    eax
0x76915B: mov     eax, [edi+4]
0x76915E: push    eax
0x76915F: mov     eax, [edi]
0x769161: push    eax
0x769162: call    edx
0x769164: test    eax, eax
0x769166: jnz     short loc_76919F
0x769168: mov     eax, [edi+8]
0x76916B: test    eax, eax
0x76916D: mov     ecx, [edi]
0x76916F: mov     edx, [esp+30h+var_1C]
0x769173: push    ebx
0x769174: push    ebp
0x769175: push    0FFFh
0x76917A: jz      short loc_76918F
0x76917C: push    eax
0x76917D: mov     eax, [edi+4]
0x769180: push    eax
0x769181: push    ecx
0x769182: mov     ecx, [edx+8B0h]
0x769188: call    sub_7774C0
0x76918D: jmp     short loc_76919F
0x76918F: mov     eax, [edi+4]
0x769192: push    eax
0x769193: push    ecx
0x769194: mov     ecx, [edx+8B0h]
0x76919A: call    sub_776E90
0x76919F: cmp     dword ptr [edi+1Ch], 0
0x7691A3: jnz     loc_76923D
0x7691A9: cmp     dword ptr [esi+4Ch], 0
0x7691AD: jz      loc_76923D
0x7691B3: mov     edx, [esi+48h]
0x7691B6: xor     ebx, ebx
0x7691B8: xor     ecx, ecx
0x7691BA: test    edx, edx
0x7691BC: jz      short loc_7691D7
0x7691BE: mov     eax, [esi+44h]
0x7691C1: test    eax, eax
0x7691C3: jz      short loc_7691D3
0x7691C5: movzx   ecx, word ptr [edx+eax*2-2]
0x7691CA: sub     eax, 1
0x7691CD: add     ebx, ecx
0x7691CF: test    eax, eax
0x7691D1: jnz     short loc_7691C5
0x7691D3: mov     ecx, ebx
0x7691D5: jmp     short loc_7691FE
0x7691D7: mov     eax, [esi+38h]
0x7691DA: cmp     eax, 4
0x7691DD: jnz     short loc_7691ED
0x7691DF: mov     eax, [esi+3Ch]
0x7691E2: lea     ebx, [eax+eax*2]
0x7691E5: mov     eax, [esi+40h]
0x7691E8: lea     ecx, [eax+eax*2]
0x7691EB: jmp     short loc_7691FE
0x7691ED: cmp     eax, 5
0x7691F0: jnz     short loc_7691FE
0x7691F2: mov     ebx, [esi+3Ch]
0x7691F5: mov     ecx, [esi+40h]
0x7691F8: add     ebx, 2
0x7691FB: add     ecx, 2
0x7691FE: mov     al, [esi+10h]
0x769201: mov     edx, [esi+2Ch]
0x769204: neg     al
0x769206: mov     [esp+30h+var_18], edx
0x76920A: mov     edx, [esi+30h]
0x76920D: sbb     eax, eax
0x76920F: and     eax, 10h
0x769212: push    eax; Dst
0x769213: push    1; int
0x769215: lea     eax, [esp+38h+var_18]
0x769219: push    eax; int
0x76921A: mov     eax, [esi+4Ch]
0x76921D: push    edx; int
0x76921E: push    ecx; int
0x76921F: mov     ecx, [esp+44h+var_1C]
0x769223: mov     ecx, [ecx+8B4h]
0x769229: push    ebx; Src
0x76922A: push    eax; int
0x76922B: call    sub_7781F0
0x769230: mov     edx, [esp+30h+var_18]
0x769234: mov     [esi+30h], eax
0x769237: mov     [esi+28h], ebx
0x76923A: mov     [esi+2Ch], edx
0x76923D: mov     eax, [esp+30h+var_20]
0x769241: mov     [edi+20h], eax
0x769244: mov     [esp+30h+var_20], edi
0x769248: mov     edi, [esp+30h+var_4]
0x76924C: test    edi, edi
0x76924E: jnz     loc_769120
0x769254: mov     ecx, [ebp+8]
0x769257: mov     edx, [esp+30h+var_1C]
0x76925B: push    ecx
0x76925C: mov     ecx, [edx+8B0h]
0x769262: call    sub_776D80
0x769267: mov     ebp, [esp+30h+var_1C]
0x76926B: mov     ebx, [esp+30h+var_20]
0x76926F: cmp     [esp+30h+var_14], 0
0x769274: jnz     loc_769080
0x76927A: lea     ecx, [ebp+604h]
0x769280: call    NiTMap_Clear
0x769285: test    ebx, ebx
0x769287: jz      loc_769332
0x76928D: mov     edi, 0F000h
0x769292: jmp     short loc_7692F4
0x769294: mov     esi, edi
0x769296: cmp     dword ptr [esi+1Ch], 0
0x76929A: mov     edi, [esi+20h]
0x76929D: jnz     short loc_7692D7
0x76929F: mov     eax, [esi+8]
0x7692A2: test    eax, eax
0x7692A4: push    1; a7
0x7692A6: jz      short loc_7692C1
0x7692A8: mov     ecx, [esi+0Ch]
0x7692AB: mov     edx, [esi+4]
0x7692AE: push    ecx; a6
0x7692AF: mov     ecx, [esi+18h]
0x7692B2: push    eax; a5
0x7692B3: mov     eax, [esi]
0x7692B5: push    edx; a4
0x7692B6: push    eax; a3
0x7692B7: push    ecx; a2
0x7692B8: mov     ecx, ebp; this
0x7692BA: call    NiDX9Renderer__PackSkinnedGeometryBuffer
0x7692BF: jmp     short loc_7692D7
0x7692C1: mov     edx, [esi+0Ch]
0x7692C4: mov     eax, [esi+4]
0x7692C7: mov     ecx, [esi]
0x7692C9: push    edx
0x7692CA: mov     edx, [esi+18h]
0x7692CD: push    eax
0x7692CE: push    ecx
0x7692CF: push    edx
0x7692D0: mov     ecx, ebp
0x7692D2: call    NiDX9Renderer__PackGeometryBuffers
0x7692D7: test    edi, edi
0x7692D9: mov     [esp+30h+var_20], esi
0x7692DD: mov     [esi+20h], ebx
0x7692E0: mov     ebx, [esp+30h+var_20]
0x7692E4: mov     esi, edi
0x7692E6: jnz     short loc_769296
0x7692E8: jmp     short loc_76926F
0x7692EA: align 10h
0x7692F0: mov     ebx, [esp+30h+var_20]
0x7692F4: mov     eax, [ebx]
0x7692F6: mov     cx, [eax+2Eh]
0x7692FA: mov     esi, [ebx+20h]
0x7692FD: and     cx, di
0x769300: cmp     cx, 4000h
0x769305: jnz     short loc_769321
0x769307: cmp     dword ptr [ebx+1Ch], 0
0x76930B: jnz     short loc_769321
0x76930D: and     [eax+2Eh], di
0x769311: mov     edx, [ebx+8]
0x769314: mov     ecx, [ebx+4]
0x769317: push    edx
0x769318: push    ecx
0x769319: push    eax
0x76931A: mov     ecx, ebp
0x76931C: call    sub_765370
0x769321: push    ebx
0x769322: call    FormHeapFree
0x769327: add     esp, 4
0x76932A: test    esi, esi
0x76932C: mov     [esp+30h+var_20], esi
0x769330: jnz     short loc_7692F0
0x769332: pop     edi
0x769333: pop     esi
0x769334: mov     ecx, ebp
0x769336: pop     ebp
0x769337: pop     ebx
0x769338: add     esp, 20h
0x76933B: jmp     sub_764040
