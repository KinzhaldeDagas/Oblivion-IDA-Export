0x473420: push    ecx
0x473421: push    ebp
0x473422: push    esi
0x473423: mov     ebp, ecx
0x473425: mov     ecx, ds:0B33B00h
0x47342B: push    edi
0x47342C: mov     [esp+10h+var_4], 0
0x473434: call    sub_45A170
0x473439: test    al, al
0x47343B: jz      short loc_473445
0x47343D: mov     [esp+10h+var_4], 6
0x473445: add     [esp+10h+var_4], 1Ah
0x47344A: push    ebx
0x47344B: lea     esi, [ebp+0A0h]
0x473451: lea     edi, [ebp+3Ch]
0x473454: mov     ebx, 5
0x473459: lea     esp, [esp+0]
0x473460: movzx   eax, word ptr [edi]
0x473463: cmp     ax, 0FFh
0x473467: jz      short loc_473484
0x473469: cmp     ax, 0FFFFh
0x47346D: jz      short loc_473484
0x47346F: mov     ecx, [esi]
0x473471: add     [esp+14h+var_4], 11h
0x473476: test    ecx, ecx
0x473478: jz      short loc_473484
0x47347A: call    sub_49F550
0x47347F: add     word ptr [esp+14h+var_4], ax
0x473484: add     edi, 2
0x473487: add     esi, 4
0x47348A: sub     ebx, 1
0x47348D: jnz     short loc_473460
0x47348F: mov     edi, [esp+14h+arg_0]
0x473493: xor     esi, esi
0x473495: test    edi, edi
0x473497: pop     ebx
0x473498: jz      short loc_4734AC
0x47349A: mov     eax, [edi]
0x47349C: mov     edx, [eax+190h]
0x4734A2: mov     ecx, edi
0x4734A4: call    edx
0x4734A6: test    al, al
0x4734A8: jz      short loc_4734AC
0x4734AA: mov     esi, edi
0x4734AC: mov     eax, [ebp+0D0h]
0x4734B2: test    eax, eax
0x4734B4: jnz     short loc_4734BC
0x4734B6: mov     eax, [ebp+0CCh]
0x4734BC: push    eax
0x4734BD: push    esi
0x4734BE: call    sub_471130
0x4734C3: add     word ptr [esp+18h+var_4], ax
0x4734C8: mov     ecx, ds:0B33B00h
0x4734CE: mov     eax, 1
0x4734D3: add     [esp+18h+var_4], eax
0x4734D7: add     esp, 8
0x4734DA: cmp     byte ptr [ecx+7Ch], 40h ; '@'
0x4734DE: jb      short loc_4734E4
0x4734E0: add     [esp+10h+var_4], eax
0x4734E4: mov     edx, [esi+5Ch]
0x4734E7: mov     eax, [edx+30h]
0x4734EA: lea     ecx, [esi+5Ch]
0x4734ED: call    eax
0x4734EF: test    eax, eax
0x4734F1: jz      loc_473579
0x4734F7: mov     ecx, [ebp+98h]
0x4734FD: mov     ecx, [ecx+7Ch]
0x473500: mov     edx, [ecx]
0x473502: mov     eax, [edx+4Ch]
0x473505: push    offset aMagicnode; "magicNode"
0x47350A: call    eax
0x47350C: test    eax, eax
0x47350E: jz      short loc_473579
0x473510: mov     edx, [eax]
0x473512: mov     ecx, eax
0x473514: mov     eax, [edx+8]
0x473517: call    eax
0x473519: test    eax, eax
0x47351B: jz      short loc_473579
0x47351D: cmp     word ptr [eax+0B6h], 0
0x473525: jbe     short loc_473579
0x473527: mov     ecx, [eax+0B0h]
0x47352D: mov     eax, [ecx]
0x47352F: test    eax, eax
0x473531: jz      short loc_473579
0x473533: mov     eax, [eax+0Ch]
0x473536: push    eax
0x473537: push    offset stru_B3CAC0
0x47353C: call    NiRTTI_Cast
0x473541: add     esp, 8
0x473544: test    eax, eax
0x473546: jz      short loc_473579
0x473548: lea     edx, [esp+10h+arg_0]
0x47354C: push    edx
0x47354D: push    offset aSpecialidle_ca; "SpecialIdle_Cast"
0x473552: lea     ecx, [eax+58h]
0x473555: call    NiTMap_GetAt
0x47355A: test    al, al
0x47355C: jz      short loc_473579
0x47355E: mov     ecx, [esp+10h+arg_0]
0x473562: test    ecx, ecx
0x473564: jz      short loc_473579
0x473566: call    sub_49F550
0x47356B: mov     di, word ptr [esp+10h+var_4]
0x473570: add     ax, 4
0x473574: add     di, ax
0x473577: jmp     short loc_47357E
0x473579: mov     di, word ptr [esp+10h+var_4]
0x47357E: cmp     byte ptr ds:0B05BACh, 0
0x473585: jz      short loc_4735F5
0x473587: mov     eax, ds:0B33B00h
0x47358C: mov     esi, [eax+84h]
0x473592: test    esi, esi
0x473594: jz      short loc_4735DA
0x473596: mov     ecx, [esi]
0x473598: push    ecx; a1
0x473599: call    TESForm_LookupByFormID
0x47359E: mov     edx, [esi+5]
0x4735A1: add     esp, 4
0x4735A4: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4735A9: push    11E6h
0x4735AE: push    edx
0x4735AF: mov     edx, [eax]
0x4735B1: mov     ecx, eax
0x4735B3: mov     eax, [edx+0D4h]
0x4735B9: call    eax
0x4735BB: mov     ecx, [esi]
0x4735BD: push    eax
0x4735BE: movzx   edx, di
0x4735C1: push    ecx
0x4735C2: push    edx; ArgList
0x4735C3: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x4735C8: call    sub_40FEC0
0x4735CD: add     esp, 1Ch
0x4735D0: mov     ax, di
0x4735D3: pop     edi
0x4735D4: pop     esi
0x4735D5: pop     ebp
0x4735D6: pop     ecx
0x4735D7: retn    4
0x4735DA: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4735DF: movzx   eax, di
0x4735E2: push    11E6h
0x4735E7: push    eax; ArgList
0x4735E8: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x4735ED: call    sub_40FEC0
0x4735F2: add     esp, 10h
0x4735F5: mov     ax, di
0x4735F8: pop     edi
0x4735F9: pop     esi
0x4735FA: pop     ebp
0x4735FB: pop     ecx
0x4735FC: retn    4
