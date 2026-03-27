0x4502C0: sub     esp, 18h
0x4502C3: push    edi
0x4502C4: mov     edi, ecx
0x4502C6: mov     ecx, [esp+1Ch+arg_0]
0x4502CA: test    ecx, ecx
0x4502CC: jz      loc_450429
0x4502D2: cmp     byte ptr [ecx+4], 1
0x4502D6: jz      loc_450429
0x4502DC: push    ebx
0x4502DD: lea     ebx, [edi+284h]
0x4502E3: push    esi
0x4502E4: mov     esi, ebx
0x4502E6: test    esi, esi
0x4502E8: mov     [esp+24h+var_18], 0
0x4502F0: jz      short loc_45033F
0x4502F2: push    ebp
0x4502F3: mov     ebp, [esi]
0x4502F5: test    ebp, ebp
0x4502F7: jz      short loc_450314
0x4502F9: mov     eax, [ecx]
0x4502FB: mov     edx, [eax+0BCh]
0x450301: push    1
0x450303: push    1
0x450305: push    ebp
0x450306: call    edx
0x450308: test    al, al
0x45030A: mov     ecx, [esp+28h+arg_0]
0x45030E: jnz     short loc_450314
0x450310: mov     [esp+28h+var_18], ebp
0x450314: mov     esi, [esi+4]
0x450317: test    esi, esi
0x450319: jnz     short loc_4502F3
0x45031B: cmp     [esp+28h+var_18], esi
0x45031F: pop     ebp
0x450320: jz      short loc_45033F
0x450322: mov     esi, [ebx]
0x450324: test    esi, esi
0x450326: jz      short loc_45033F
0x450328: mov     ecx, edi
0x45032A: call    TESFile_CloseGroupRecord
0x45032F: cmp     esi, [esp+24h+var_18]
0x450333: jz      short loc_45033B
0x450335: mov     esi, [ebx]
0x450337: test    esi, esi
0x450339: jnz     short loc_450328
0x45033B: mov     ecx, [esp+24h+arg_0]
0x45033F: mov     esi, [ebx]
0x450341: test    esi, esi
0x450343: jz      short loc_450360
0x450345: mov     eax, [ecx]
0x450347: mov     edx, [eax+0BCh]
0x45034D: push    1
0x45034F: push    0
0x450351: push    esi
0x450352: call    edx
0x450354: test    al, al
0x450356: jnz     loc_450427
0x45035C: mov     ecx, [esp+24h+arg_0]
0x450360: mov     eax, [ecx]
0x450362: mov     eax, [eax+0C0h]
0x450368: push    esi
0x450369: lea     edx, [esp+28h+var_14]
0x45036D: push    edx
0x45036E: call    eax
0x450370: mov     ecx, [esp+24h+var_14]
0x450374: cmp     ecx, ds:0B05E20h
0x45037A: jnz     short loc_4503F8
0x45037C: push    18h; Size
0x45037E: call    FormHeapAlloc
0x450383: add     esp, 4
0x450386: mov     esi, eax
0x450388: push    esi
0x450389: mov     ecx, ebx
0x45038B: call    BSSimpleList_PushFront
0x450390: mov     edx, [esp+24h+var_14]
0x450394: mov     [esi], edx
0x450396: mov     eax, [esp+24h+var_10]
0x45039A: mov     [esi+4], eax
0x45039D: mov     ecx, [esp+24h+var_C]
0x4503A1: mov     [esi+8], ecx
0x4503A4: mov     edx, [esp+24h+var_8]
0x4503A8: mov     [esi+0Ch], edx
0x4503AB: mov     eax, [esp+24h+var_4]
0x4503AF: mov     [esi+10h], eax
0x4503B2: mov     ecx, [edi+10h]
0x4503B5: test    ecx, ecx
0x4503B7: jz      short loc_45033B
0x4503B9: mov     eax, ds:0A853D8h
0x4503BE: mov     edx, [ecx]
0x4503C0: mov     edx, [edx+0Ch]
0x4503C3: mov     esi, [ebx]
0x4503C5: push    eax
0x4503C6: push    0
0x4503C8: call    edx
0x4503CA: mov     eax, [edi+10h]
0x4503CD: mov     ecx, [eax+30h]
0x4503D0: cmp     ecx, 0FFFFFFFFh
0x4503D3: jz      short loc_4503D9
0x4503D5: mov     eax, ecx
0x4503D7: jmp     short loc_4503DF
0x4503D9: mov     eax, [eax+148h]
0x4503DF: push    14h
0x4503E1: push    esi
0x4503E2: mov     ecx, edi
0x4503E4: mov     [esi+14h], eax
0x4503E7: call    TESFile_WriteData
0x4503EC: add     dword ptr [edi+3D4h], 1
0x4503F3: jmp     loc_45033B
0x4503F8: mov     ecx, [esp+24h+arg_0]
0x4503FC: movzx   eax, byte ptr [ecx+4]
0x450400: mov     edx, [ecx+0Ch]
0x450403: lea     eax, [eax+eax*2]
0x450406: mov     esi, ds:0B05E04h[eax*4]
0x45040D: push    edx
0x45040E: mov     edx, [ecx]
0x450410: mov     eax, [edx+0D4h]
0x450416: call    eax
0x450418: push    eax
0x450419: push    esi; ArgList
0x45041A: push    offset aFailedToCrea_0; "Failed to CreateGroupData for %s form '"...
0x45041F: call    PrintError
0x450424: add     esp, 10h
0x450427: pop     esi
0x450428: pop     ebx
0x450429: pop     edi
0x45042A: add     esp, 18h
0x45042D: retn    4
