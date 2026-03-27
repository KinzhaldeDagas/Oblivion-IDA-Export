0x60D1F0: sub     esp, 10h
0x60D1F3: push    ebp
0x60D1F4: push    esi
0x60D1F5: mov     esi, ecx
0x60D1F7: mov     ecx, ds:0B33B00h
0x60D1FD: mov     [esp+18h+var_4], 0
0x60D205: mov     ebp, [ecx+14h]
0x60D208: push    edi
0x60D209: mov     [esp+1Ch+var_C], 0
0x60D211: call    sub_45A170
0x60D216: test    al, al
0x60D218: jz      short loc_60D24D
0x60D21A: mov     ecx, ds:0B33B00h
0x60D220: push    4; Size
0x60D222: lea     eax, [esp+20h+Src]
0x60D226: push    eax; Src
0x60D227: mov     [esp+24h+Src], 4B4F4C42h
0x60D22F: call    SaveLoad_SaveData
0x60D234: mov     ecx, ds:0B33B00h
0x60D23A: mov     edx, [ecx+14h]
0x60D23D: push    2; Size
0x60D23F: lea     eax, [esp+20h+var_4]
0x60D243: push    eax; Src
0x60D244: mov     [esp+24h+var_C], edx
0x60D248: call    SaveLoad_SaveData
0x60D24D: mov     eax, [esi+8]
0x60D250: test    eax, eax
0x60D252: mov     [esp+1Ch+var_10], 0
0x60D25A: jz      short loc_60D263
0x60D25C: mov     ecx, [eax+0Ch]
0x60D25F: mov     [esp+1Ch+var_10], ecx
0x60D263: mov     ecx, ds:0B33B00h
0x60D269: push    4
0x60D26B: lea     edx, [esp+20h+var_10]
0x60D26F: push    edx
0x60D270: call    SaveLoad_SaveFormID
0x60D275: mov     eax, [esp+1Ch+var_10]
0x60D279: test    eax, eax
0x60D27B: jz      short loc_60D2DB
0x60D27D: mov     edi, [esp+1Ch+arg_0]
0x60D281: test    edi, 20000h
0x60D287: jz      short loc_60D2CA
0x60D289: mov     ecx, ds:0B33A98h
0x60D28F: push    eax; _DWORD
0x60D290: call    TESDataHandler_IsFormIDCreated?
0x60D295: test    al, al
0x60D297: jz      short loc_60D2CA
0x60D299: mov     eax, [esi+8]
0x60D29C: mov     cl, [eax+20h]
0x60D29F: push    1; Size
0x60D2A1: lea     edx, [esp+20h+arg_0]
0x60D2A5: mov     byte ptr [esp+20h+arg_0], cl
0x60D2A9: mov     ecx, ds:0B33B00h
0x60D2AF: push    edx; Src
0x60D2B0: call    SaveLoad_SaveData
0x60D2B5: test    edi, 10000h
0x60D2BB: jnz     short loc_60D2CA
0x60D2BD: mov     ecx, [esi+8]
0x60D2C0: mov     eax, [ecx]
0x60D2C2: mov     edx, [eax+0E0h]
0x60D2C8: call    edx
0x60D2CA: mov     ecx, ds:0B33B00h
0x60D2D0: push    4; Size
0x60D2D2: lea     eax, [esi+4]
0x60D2D5: push    eax; Src
0x60D2D6: call    SaveLoad_SaveData
0x60D2DB: push    4; Size
0x60D2DD: lea     ecx, [esi+0Ch]
0x60D2E0: push    ecx; Src
0x60D2E1: mov     ecx, ds:0B33B00h
0x60D2E7: call    SaveLoad_SaveData
0x60D2EC: mov     ecx, ds:0B33B00h
0x60D2F2: push    4; Size
0x60D2F4: add     esi, 10h
0x60D2F7: push    esi; Src
0x60D2F8: call    SaveLoad_SaveData
0x60D2FD: cmp     byte ptr ds:0B05BACh, 0
0x60D304: jz      short loc_60D36D
0x60D306: mov     eax, ds:0B33B00h
0x60D30B: mov     edi, [eax+84h]
0x60D311: test    edi, edi
0x60D313: mov     esi, [eax+14h]
0x60D316: jz      short loc_60D353
0x60D318: mov     edx, [edi]
0x60D31A: push    edx; a1
0x60D31B: call    TESForm_LookupByFormID
0x60D320: mov     ecx, [edi+5]
0x60D323: mov     edx, [eax]
0x60D325: add     esp, 4
0x60D328: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D32D: push    122h
0x60D332: push    ecx
0x60D333: mov     ecx, eax
0x60D335: mov     eax, [edx+0D4h]
0x60D33B: call    eax
0x60D33D: mov     ecx, [edi]
0x60D33F: push    eax
0x60D340: push    ecx
0x60D341: sub     esi, ebp
0x60D343: push    esi; ArgList
0x60D344: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x60D349: call    sub_40FEC0
0x60D34E: add     esp, 1Ch
0x60D351: jmp     short loc_60D36D
0x60D353: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D358: push    122h
0x60D35D: sub     esi, ebp
0x60D35F: push    esi; ArgList
0x60D360: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x60D365: call    sub_40FEC0
0x60D36A: add     esp, 10h
0x60D36D: mov     ecx, ds:0B33B00h
0x60D373: call    sub_45A170
0x60D378: test    al, al
0x60D37A: jz      short loc_60D3AF
0x60D37C: mov     edx, ds:0B33B00h
0x60D382: mov     edi, [esp+1Ch+var_C]
0x60D386: mov     esi, [edx+14h]
0x60D389: lea     eax, [edi+0FFFFh]
0x60D38F: cmp     esi, eax
0x60D391: jbe     short loc_60D3AA
0x60D393: push    122h
0x60D398: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D39D: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x60D3A2: call    PrintError
0x60D3A7: add     esp, 0Ch
0x60D3AA: sub     esi, edi
0x60D3AC: mov     [edi], si
0x60D3AF: pop     edi
0x60D3B0: pop     esi
0x60D3B1: pop     ebp
0x60D3B2: add     esp, 10h
0x60D3B5: retn    8
