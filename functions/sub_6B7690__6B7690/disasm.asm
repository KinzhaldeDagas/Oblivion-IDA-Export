0x6B7690: sub     esp, 18h
0x6B7693: cmp     byte ptr ds:0B05BACh, 0
0x6B769A: push    ebp
0x6B769B: push    esi
0x6B769C: push    edi
0x6B769D: mov     edi, ecx
0x6B769F: mov     ecx, ds:0B33B00h
0x6B76A5: mov     [esp+24h+var_4], 0
0x6B76AD: mov     eax, [ecx+14h]
0x6B76B0: mov     [esp+24h+var_C], 0
0x6B76B8: mov     [esp+24h+var_14], eax
0x6B76BC: jz      short loc_6B76C2
0x6B76BE: mov     [esp+24h+var_14], eax
0x6B76C2: call    sub_45A170
0x6B76C7: test    al, al
0x6B76C9: jz      short loc_6B76FE
0x6B76CB: mov     ecx, ds:0B33B00h
0x6B76D1: push    4; Size
0x6B76D3: lea     eax, [esp+28h+Src]
0x6B76D7: push    eax; Src
0x6B76D8: mov     [esp+2Ch+Src], 4B4F4C42h
0x6B76E0: call    SaveLoad_SaveData
0x6B76E5: mov     ecx, ds:0B33B00h
0x6B76EB: mov     edx, [ecx+14h]
0x6B76EE: push    2; Size
0x6B76F0: lea     eax, [esp+28h+var_4]
0x6B76F4: push    eax; Src
0x6B76F5: mov     [esp+2Ch+var_C], edx
0x6B76F9: call    SaveLoad_SaveData
0x6B76FE: mov     ecx, ds:0B33B00h
0x6B7704: push    2; Size
0x6B7706: lea     edx, [esp+28h+var_18]
0x6B770A: mov     [esp+28h+var_18], 0
0x6B7712: mov     ebp, [ecx+14h]
0x6B7715: push    edx; Src
0x6B7716: call    SaveLoad_SaveData
0x6B771B: test    edi, edi
0x6B771D: mov     esi, edi
0x6B771F: jz      short loc_6B773F
0x6B7721: cmp     dword ptr [esi+4], 0
0x6B7725: jnz     short loc_6B772C
0x6B7727: cmp     dword ptr [esi], 0
0x6B772A: jz      short loc_6B773F
0x6B772C: mov     ecx, [esi]
0x6B772E: call    sub_6B7D30
0x6B7733: add     [esp+24h+var_18], 1
0x6B7738: mov     esi, [esi+4]
0x6B773B: test    esi, esi
0x6B773D: jnz     short loc_6B7721
0x6B773F: mov     ax, word ptr [esp+24h+var_18]
0x6B7744: mov     [ebp+0], ax
0x6B7748: mov     eax, [edi+8]
0x6B774B: test    eax, eax
0x6B774D: mov     [esp+24h+var_10], 0FFFFFFFFh
0x6B7755: jz      short loc_6B7768
0x6B7757: mov     eax, [eax]
0x6B7759: push    eax
0x6B775A: mov     ecx, edi
0x6B775C: call    sub_6B7520
0x6B7761: movzx   ecx, ax
0x6B7764: mov     [esp+24h+var_10], ecx
0x6B7768: mov     ecx, ds:0B33B00h
0x6B776E: push    2; Size
0x6B7770: lea     edx, [esp+28h+var_10]
0x6B7774: push    edx; Src
0x6B7775: call    SaveLoad_SaveData
0x6B777A: cmp     byte ptr ds:0B05BACh, 0
0x6B7781: jz      short loc_6B77EE
0x6B7783: mov     eax, ds:0B33B00h
0x6B7788: mov     edi, [eax+84h]
0x6B778E: test    edi, edi
0x6B7790: mov     esi, [eax+14h]
0x6B7793: jz      short loc_6B77D2
0x6B7795: mov     eax, [edi]
0x6B7797: push    eax; a1
0x6B7798: call    TESForm_LookupByFormID
0x6B779D: mov     ecx, [edi+5]
0x6B77A0: mov     edx, [eax]
0x6B77A2: add     esp, 4
0x6B77A5: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B77AA: push    0DFh ; 'ß'
0x6B77AF: push    ecx
0x6B77B0: mov     ecx, eax
0x6B77B2: mov     eax, [edx+0D4h]
0x6B77B8: call    eax
0x6B77BA: mov     ecx, [edi]
0x6B77BC: sub     esi, [esp+30h+var_14]
0x6B77C0: push    eax
0x6B77C1: push    ecx
0x6B77C2: push    esi; ArgList
0x6B77C3: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x6B77C8: call    sub_40FEC0
0x6B77CD: add     esp, 1Ch
0x6B77D0: jmp     short loc_6B77EE
0x6B77D2: sub     esi, [esp+24h+var_14]
0x6B77D6: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B77DB: push    0DFh ; 'ß'
0x6B77E0: push    esi; ArgList
0x6B77E1: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x6B77E6: call    sub_40FEC0
0x6B77EB: add     esp, 10h
0x6B77EE: mov     ecx, ds:0B33B00h
0x6B77F4: call    sub_45A170
0x6B77F9: test    al, al
0x6B77FB: jz      short loc_6B7830
0x6B77FD: mov     edx, ds:0B33B00h
0x6B7803: mov     edi, [esp+24h+var_C]
0x6B7807: mov     esi, [edx+14h]
0x6B780A: lea     eax, [edi+0FFFFh]
0x6B7810: cmp     esi, eax
0x6B7812: jbe     short loc_6B782B
0x6B7814: push    0DFh ; 'ß'
0x6B7819: push    offset a_DialogueConve; ".\\Dialogue\\Conversation.cpp"
0x6B781E: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x6B7823: call    PrintError
0x6B7828: add     esp, 0Ch
0x6B782B: sub     esi, edi
0x6B782D: mov     [edi], si
0x6B7830: pop     edi
0x6B7831: pop     esi
0x6B7832: pop     ebp
0x6B7833: add     esp, 18h
0x6B7836: retn
