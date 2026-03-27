0x6176C0: push    ecx
0x6176C1: push    ebx
0x6176C2: push    esi
0x6176C3: push    edi
0x6176C4: mov     edi, ecx
0x6176C6: call    sub_567D20
0x6176CB: mov     ecx, ds:0B33B00h
0x6176D1: movzx   esi, ax
0x6176D4: mov     [esp+10h+var_4], esi
0x6176D8: movzx   ebx, si
0x6176DB: call    sub_45A170
0x6176E0: test    al, al
0x6176E2: jz      short loc_6176E7
0x6176E4: add     esi, 6
0x6176E7: mov     eax, ds:0B33B00h
0x6176EC: mov     dl, [eax+7Ch]
0x6176EF: cmp     dl, 29h ; ')'
0x6176F2: jb      short loc_61771F
0x6176F4: mov     eax, [edi+40h]
0x6176F7: xor     ecx, ecx
0x6176F9: test    eax, eax
0x6176FB: jz      short loc_61770F
0x6176FD: lea     ecx, [ecx+0]
0x617700: cmp     dword ptr [eax], 0
0x617703: jz      short loc_617708
0x617705: add     ecx, 1
0x617708: mov     eax, [eax+4]
0x61770B: test    eax, eax
0x61770D: jnz     short loc_617700
0x61770F: mov     eax, ecx
0x617711: shl     eax, 4
0x617714: add     eax, esi
0x617716: cmp     dl, 29h ; ')'
0x617719: lea     esi, [eax+ecx+2]
0x61771D: jnb     short loc_61773E
0x61771F: mov     eax, [edi+40h]
0x617722: xor     ecx, ecx
0x617724: test    eax, eax
0x617726: jz      short loc_617737
0x617728: cmp     dword ptr [eax], 0
0x61772B: jz      short loc_617730
0x61772D: add     ecx, 1
0x617730: mov     eax, [eax+4]
0x617733: test    eax, eax
0x617735: jnz     short loc_617728
0x617737: lea     eax, [ecx+esi]
0x61773A: lea     esi, [eax+ecx*8+2]
0x61773E: add     esi, 7Fh
0x617741: cmp     dl, 3Ah ; ':'
0x617744: mov     [esp+10h+var_4], esi
0x617748: jb      short loc_617751
0x61774A: add     esi, 4
0x61774D: mov     [esp+10h+var_4], esi
0x617751: cmp     dl, 3Dh ; '='
0x617754: jb      short loc_61775D
0x617756: add     esi, 1
0x617759: mov     [esp+10h+var_4], esi
0x61775D: cmp     dl, 5Fh ; '_'
0x617760: jb      loc_617882
0x617766: mov     ecx, [edi+5Ch]
0x617769: push    ecx
0x61776A: mov     ecx, edi
0x61776C: call    sub_614BE0
0x617771: mov     edx, [edi+60h]
0x617774: mov     si, word ptr [esp+10h+var_4]
0x617779: push    edx
0x61777A: mov     ecx, edi
0x61777C: add     si, ax
0x61777F: call    sub_614BE0
0x617784: add     si, ax
0x617787: mov     eax, [edi+64h]
0x61778A: push    eax
0x61778B: mov     ecx, edi
0x61778D: call    sub_614BE0
0x617792: add     ax, 15h
0x617796: add     si, ax
0x617799: mov     eax, [edi+90h]
0x61779F: test    eax, eax
0x6177A1: mov     word ptr [esp+10h+var_4], si
0x6177A6: jz      short loc_6177CA
0x6177A8: mov     ecx, [eax+4]
0x6177AB: test    ecx, ecx
0x6177AD: mov     edx, 1
0x6177B2: jz      short loc_6177C0
0x6177B4: call    sub_485660
0x6177B9: add     ax, 1
0x6177BD: movzx   edx, ax
0x6177C0: mov     ecx, [esp+10h+var_4]
0x6177C4: lea     esi, [ecx+edx+4]
0x6177C8: jmp     short loc_6177CE
0x6177CA: mov     esi, [esp+10h+var_4]
0x6177CE: mov     eax, [edi+94h]
0x6177D4: add     esi, 1
0x6177D7: test    eax, eax
0x6177D9: jz      short loc_6177F9
0x6177DB: mov     eax, [eax+4]
0x6177DE: test    eax, eax
0x6177E0: mov     ecx, 1
0x6177E5: jz      short loc_6177F5
0x6177E7: mov     ecx, eax
0x6177E9: call    sub_485660
0x6177EE: add     ax, 1
0x6177F2: movzx   ecx, ax
0x6177F5: lea     esi, [esi+ecx+4]
0x6177F9: mov     eax, [edi+98h]
0x6177FF: add     esi, 1
0x617802: test    eax, eax
0x617804: jz      short loc_617824
0x617806: mov     eax, [eax+4]
0x617809: test    eax, eax
0x61780B: mov     ecx, 1
0x617810: jz      short loc_617820
0x617812: mov     ecx, eax
0x617814: call    sub_485660
0x617819: add     ax, 1
0x61781D: movzx   ecx, ax
0x617820: lea     esi, [esi+ecx+4]
0x617824: mov     eax, [edi+9Ch]
0x61782A: add     esi, 1
0x61782D: test    eax, eax
0x61782F: jz      short loc_61784F
0x617831: mov     eax, [eax+4]
0x617834: test    eax, eax
0x617836: mov     ecx, 1
0x61783B: jz      short loc_61784B
0x61783D: mov     ecx, eax
0x61783F: call    sub_485660
0x617844: add     ax, 1
0x617848: movzx   ecx, ax
0x61784B: lea     esi, [esi+ecx+4]
0x61784F: mov     eax, [edi+0A0h]
0x617855: add     esi, 1
0x617858: test    eax, eax
0x61785A: mov     [esp+10h+var_4], esi
0x61785E: jz      short loc_617882
0x617860: mov     eax, [eax+4]
0x617863: test    eax, eax
0x617865: mov     ecx, 1
0x61786A: jz      short loc_61787A
0x61786C: mov     ecx, eax
0x61786E: call    sub_485660
0x617873: add     ax, 1
0x617877: movzx   ecx, ax
0x61787A: lea     edx, [esi+ecx+4]
0x61787E: mov     [esp+10h+var_4], edx
0x617882: mov     eax, ds:0B33B00h
0x617887: cmp     byte ptr [eax+7Ch], 66h ; 'f'
0x61788B: jb      short loc_6178A2
0x61788D: mov     ecx, [edi+68h]
0x617890: push    ecx
0x617891: mov     ecx, edi
0x617893: call    sub_614BE0
0x617898: mov     di, word ptr [esp+10h+var_4]
0x61789D: add     di, ax
0x6178A0: jmp     short loc_6178A7
0x6178A2: mov     di, word ptr [esp+10h+var_4]
0x6178A7: cmp     byte ptr ds:0B05BACh, 0
0x6178AE: jz      short loc_617927
0x6178B0: mov     edx, ds:0B33B00h
0x6178B6: mov     esi, [edx+84h]
0x6178BC: test    esi, esi
0x6178BE: jz      short loc_617907
0x6178C0: mov     eax, [esi]
0x6178C2: push    eax; a1
0x6178C3: call    TESForm_LookupByFormID
0x6178C8: mov     ecx, [esi+5]
0x6178CB: mov     edx, [eax]
0x6178CD: add     esp, 4
0x6178D0: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x6178D5: push    2844h
0x6178DA: push    ecx
0x6178DB: mov     ecx, eax
0x6178DD: mov     eax, [edx+0D4h]
0x6178E3: call    eax
0x6178E5: mov     ecx, [esi]
0x6178E7: push    eax
0x6178E8: movzx   edx, bx
0x6178EB: movzx   eax, di
0x6178EE: push    ecx
0x6178EF: sub     eax, edx
0x6178F1: push    eax; ArgList
0x6178F2: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x6178F7: call    sub_40FEC0
0x6178FC: add     esp, 1Ch
0x6178FF: mov     ax, di
0x617902: pop     edi
0x617903: pop     esi
0x617904: pop     ebx
0x617905: pop     ecx
0x617906: retn
0x617907: movzx   ecx, bx
0x61790A: push    offset a_AiCombatcontr; ".\\AI\\CombatController.cpp"
0x61790F: movzx   edx, di
0x617912: push    2844h
0x617917: sub     edx, ecx
0x617919: push    edx; ArgList
0x61791A: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x61791F: call    sub_40FEC0
0x617924: add     esp, 10h
0x617927: mov     ax, di
0x61792A: pop     edi
0x61792B: pop     esi
0x61792C: pop     ebx
0x61792D: pop     ecx
0x61792E: retn
