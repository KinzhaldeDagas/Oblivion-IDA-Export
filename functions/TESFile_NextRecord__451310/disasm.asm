0x451310: push    ecx
0x451311: push    esi
0x451312: mov     esi, ecx
0x451314: mov     eax, [esi+23Ch]
0x45131A: cmp     eax, ds:0B05E20h
0x451320: jz      short loc_45133B
0x451322: cmp     eax, ds:0B06138h
0x451328: jz      short loc_45133B
0x45132A: mov     eax, [esi+240h]
0x451330: add     eax, 14h
0x451333: add     [esi+25Ch], eax
0x451339: jmp     short loc_451342
0x45133B: add     dword ptr [esi+25Ch], 14h
0x451342: mov     eax, [esi+25Ch]
0x451348: cmp     eax, [esi+258h]
0x45134E: jb      short loc_451375
0x451350: xor     eax, eax
0x451352: mov     [esi+23Ch], eax
0x451358: mov     [esi+240h], eax
0x45135E: mov     [esi+244h], eax
0x451364: mov     [esi+248h], eax
0x45136A: mov     [esi+24Ch], eax
0x451370: xor     al, al
0x451372: pop     esi
0x451373: pop     ecx
0x451374: retn
0x451375: mov     ecx, [esi+10h]
0x451378: mov     edx, [ecx]
0x45137A: push    edi
0x45137B: mov     edi, ds:0A853D0h
0x451381: push    edi
0x451382: push    eax
0x451383: mov     eax, [edx+0Ch]
0x451386: call    eax
0x451388: mov     eax, [esi+10h]
0x45138B: mov     ecx, [eax+30h]
0x45138E: cmp     ecx, 0FFFFFFFFh
0x451391: pop     edi
0x451392: jz      short loc_451398
0x451394: mov     eax, ecx
0x451396: jmp     short loc_45139E
0x451398: mov     eax, [eax+148h]
0x45139E: cmp     eax, 0FFFFFFFFh
0x4513A1: mov     [esi+25Ch], eax
0x4513A7: jnz     short loc_4513ED
0x4513A9: push    0; Arguments
0x4513AB: push    0; nSize
0x4513AD: lea     ecx, [esp+10h+Buffer]
0x4513B1: push    ecx; lpBuffer
0x4513B2: push    400h; dwLanguageId
0x4513B7: call    dword ptr ds:0A281ECh
0x4513BD: push    eax; dwMessageId
0x4513BE: push    0; lpSource
0x4513C0: push    1300h; dwFlags
0x4513C5: call    dword ptr ds:0A28170h
0x4513CB: mov     edx, dword ptr [esp+8+Buffer]
0x4513CF: push    edx; ArgList
0x4513D0: push    offset aSetfilepointer; "SetFilePointer() in NextForm failed wit"...
0x4513D5: call    PrintError
0x4513DA: mov     eax, dword ptr [esp+10h+Buffer]
0x4513DE: add     esp, 8
0x4513E1: push    eax; hMem
0x4513E2: call    dword ptr ds:0A2816Ch
0x4513E8: xor     al, al
0x4513EA: pop     esi
0x4513EB: pop     ecx
0x4513EC: retn
0x4513ED: xor     eax, eax
0x4513EF: mov     dword ptr [esi+260h], 0
0x4513F9: mov     dword ptr [esi+264h], 0
0x451403: mov     [esi+23Ch], eax
0x451409: mov     [esi+240h], eax
0x45140F: mov     [esi+244h], eax
0x451415: mov     [esi+248h], eax
0x45141B: mov     ecx, esi
0x45141D: mov     [esi+24Ch], eax
0x451423: call    TESFile_GetRecordType
0x451428: cmp     dword ptr [esi+23Ch], 0
0x45142F: jnz     short loc_45144E
0x451431: mov     ecx, [esi+25Ch]
0x451437: push    ecx
0x451438: add     esi, 1Ch
0x45143B: push    esi; ArgList
0x45143C: push    offset aTryingToLoadAB; "Trying to load a bad form in TESFile::N"...
0x451441: call    PrintError
0x451446: add     esp, 0Ch
0x451449: xor     al, al
0x45144B: pop     esi
0x45144C: pop     ecx
0x45144D: retn
0x45144E: mov     al, 1
0x451450: pop     esi
0x451451: pop     ecx
0x451452: retn
