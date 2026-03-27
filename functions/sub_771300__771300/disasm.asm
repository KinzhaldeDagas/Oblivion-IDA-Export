0x771300: mov     eax, ds:0B42700h
0x771305: mov     ecx, [eax+4]
0x771308: mov     edx, [esp+arg_4]
0x77130C: test    edx, edx
0x77130E: mov     eax, [esp+arg_0]
0x771312: push    esi
0x771313: mov     esi, [ecx+eax*4]
0x771316: push    edi
0x771317: jnz     short loc_771333
0x771319: lea     edx, [esp+8+arg_0]
0x77131D: push    edx
0x77131E: push    0
0x771320: lea     ecx, [esi+4]
0x771323: mov     [esp+10h+arg_0], offset nullsub_return0_0arg
0x77132B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x771330: pop     edi
0x771331: pop     esi
0x771332: retn
0x771333: cmp     eax, 3
0x771336: ja      short loc_7713B2
0x771338: lea     ecx, [edx-1]; switch 32 cases
0x77133B: cmp     ecx, 1Fh
0x77133E: ja      def_77134B; jumptable 0077134B default case
0x771344: movzx   edi, ds:byte_7714FC[ecx]
0x77134B: jmp     ds:jpt_77134B[edi*4]; switch jump
0x771352: cmp     ecx, eax; jumptable 0077134B cases 1-4
0x771354: jnz     short loc_771360
0x771356: mov     eax, offset sub_76E610
0x77135B: jmp     loc_7714C1
0x771360: jb      short loc_7713A8; jumptable 0077134B cases 29-32
0x771362: mov     eax, offset sub_76E430
0x771367: jmp     loc_7714C1
0x77136C: mov     eax, offset sub_76E800; jumptable 0077134B cases 5-8
0x771371: jmp     loc_7714C1
0x771376: mov     eax, offset sub_76E910; jumptable 0077134B cases 9-12
0x77137B: jmp     loc_7714C1
0x771380: mov     eax, offset sub_76EA10; jumptable 0077134B cases 13-16
0x771385: jmp     loc_7714C1
0x77138A: mov     eax, offset sub_76EB40; jumptable 0077134B cases 17-20
0x77138F: jmp     loc_7714C1
0x771394: mov     eax, offset sub_76EC60; jumptable 0077134B cases 21-24
0x771399: jmp     loc_7714C1
0x77139E: mov     eax, offset sub_76ED90; jumptable 0077134B cases 25-28
0x7713A3: jmp     loc_7714C1
0x7713A8: mov     eax, offset sub_76E4B0; jumptable 0077134B cases 29-32
0x7713AD: jmp     loc_7714C1
0x7713B2: cmp     eax, 4
0x7713B5: jnz     short loc_771417
0x7713B7: lea     eax, [edx-1]; switch 32 cases
0x7713BA: cmp     eax, 1Fh
0x7713BD: ja      def_77134B; jumptable 0077134B default case
0x7713C3: movzx   ecx, ds:byte_77153C[eax]
0x7713CA: jmp     ds:jpt_7713CA[ecx*4]; switch jump
0x7713D1: mov     eax, offset sub_76F0D0; jumptable 007713CA case 5
0x7713D6: jmp     loc_7714C1
0x7713DB: mov     eax, offset sub_76F0D0; jumptable 007713CA case 9
0x7713E0: jmp     loc_7714C1
0x7713E5: mov     eax, offset sub_76F110; jumptable 007713CA case 16
0x7713EA: jmp     loc_7714C1
0x7713EF: mov     eax, offset sub_76F1C0; jumptable 007713CA case 20
0x7713F4: jmp     loc_7714C1
0x7713F9: mov     eax, offset sub_76F2A0; jumptable 007713CA cases 21-24
0x7713FE: jmp     loc_7714C1
0x771403: mov     eax, offset sub_76F3B0; jumptable 007713CA cases 25-28
0x771408: jmp     loc_7714C1
0x77140D: mov     eax, offset sub_76EEB0; jumptable 007713CA cases 3,4,29-32
0x771412: jmp     loc_7714C1
0x771417: cmp     eax, 6
0x77141A: jz      short loc_771475
0x77141C: cmp     eax, 7
0x77141F: jz      short loc_771475
0x771421: cmp     eax, 5
0x771424: jnz     def_77134B; jumptable 0077134B default case
0x77142A: lea     eax, [edx-1]; switch 32 cases
0x77142D: cmp     eax, 1Fh
0x771430: ja      def_77134B; jumptable 0077134B default case
0x771436: movzx   ecx, ds:byte_77157C[eax]
0x77143D: jmp     ds:jpt_77143D[ecx*4]; switch jump
0x771444: mov     eax, offset sub_770980; jumptable 0077143D cases 1-4
0x771449: jmp     short loc_7714C1
0x77144B: mov     eax, offset sub_770AB0; jumptable 0077143D cases 5-8
0x771450: jmp     short loc_7714C1
0x771452: mov     eax, offset sub_770BB0; jumptable 0077143D cases 9-12
0x771457: jmp     short loc_7714C1
0x771459: mov     eax, offset sub_770CB0; jumptable 0077143D cases 13-16
0x77145E: jmp     short loc_7714C1
0x771460: mov     eax, offset sub_770DB0; jumptable 0077143D cases 17-20
0x771465: jmp     short loc_7714C1
0x771467: mov     eax, offset sub_770EB0; jumptable 0077143D cases 21-24
0x77146C: jmp     short loc_7714C1
0x77146E: mov     eax, offset sub_770FA0; jumptable 0077143D cases 25-28
0x771473: jmp     short loc_7714C1
0x771475: lea     eax, [edx-1]; switch 32 cases
0x771478: cmp     eax, 1Fh
0x77147B: ja      short def_77134B; jumptable 0077134B default case
0x77147D: movzx   ecx, ds:byte_7715BC[eax]
0x771484: jmp     ds:jpt_771484[ecx*4]; switch jump
0x77148B: mov     eax, offset sub_7701E0; jumptable 00771484 cases 1-4
0x771490: jmp     short loc_7714C1
0x771492: mov     eax, offset sub_770300; jumptable 00771484 cases 5-8
0x771497: jmp     short loc_7714C1
0x771499: mov     eax, offset sub_770420; jumptable 00771484 cases 9-12
0x77149E: jmp     short loc_7714C1
0x7714A0: mov     eax, offset sub_770540; jumptable 00771484 cases 13-16
0x7714A5: jmp     short loc_7714C1
0x7714A7: mov     eax, offset sub_770640; jumptable 00771484 cases 17-20
0x7714AC: jmp     short loc_7714C1
0x7714AE: mov     eax, offset sub_770740; jumptable 00771484 cases 21-24
0x7714B3: jmp     short loc_7714C1
0x7714B5: mov     eax, offset sub_770860; jumptable 00771484 cases 25-28
0x7714BA: jmp     short loc_7714C1
0x7714BC: mov     eax, offset nullsub_return0_0arg; jumptable 007713CA cases 1,2,6-8,10-15,17-19
0x7714C1: test    eax, eax
0x7714C3: mov     [esp+8+arg_0], eax
0x7714C7: jz      short def_77134B; jumptable 0077134B default case
0x7714C9: lea     eax, [esp+8+arg_0]
0x7714CD: push    eax
0x7714CE: push    edx
0x7714CF: lea     ecx, [esi+4]
0x7714D2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
