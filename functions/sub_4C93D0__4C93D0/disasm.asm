0x4C93D0: push    0FFFFFFFFh
0x4C93D2: push    offset SEH_4C93D0
0x4C93D7: mov     eax, large fs:0
0x4C93DD: push    eax
0x4C93DE: push    ecx
0x4C93DF: push    ebp
0x4C93E0: push    esi
0x4C93E1: push    edi
0x4C93E2: mov     eax, ds:0B30AACh
0x4C93E7: xor     eax, esp
0x4C93E9: push    eax
0x4C93EA: lea     eax, [esp+20h+var_C]
0x4C93EE: mov     large fs:0, eax
0x4C93F4: mov     esi, ecx
0x4C93F6: mov     [esp+20h+var_10], esi
0x4C93FA: call    TESForm_constr
0x4C93FF: lea     edi, [esi+18h]
0x4C9402: xor     ebp, ebp
0x4C9404: mov     ecx, edi
0x4C9406: mov     [esp+20h+var_4], ebp
0x4C940A: call    TESTexture_constr
0x4C940F: mov     dword ptr [esi], offset ??_7TESLandTexture@@6BTESLandTexture@@@; const TESLandTexture::`vftable'{for `TESLandTexture'}
0x4C9415: mov     dword ptr [edi], offset ??_7TESLandTexture@@6BTESTexture@@@; const TESLandTexture::`vftable'{for `TESTexture'}
0x4C941B: mov     [esi+24h], ebp
0x4C941E: mov     [esi+2Ch], ebp
0x4C9421: mov     [esi+30h], ebp
0x4C9424: push    1; a2
0x4C9426: mov     ecx, esi; this
0x4C9428: mov     byte ptr [esp+24h+var_4], 2
0x4C942D: mov     byte ptr [esi+4], 0Eh
0x4C9431: call    TESForm_SetIsLinked
0x4C9436: mov     edi, [esi+24h]
0x4C9439: cmp     edi, ebp
0x4C943B: jz      short loc_4C945C
0x4C943D: lea     eax, [edi+4]
0x4C9440: push    eax; lpAddend
0x4C9441: call    dword ptr ds:0A2807Ch
0x4C9447: test    eax, eax
0x4C9449: jnz     short loc_4C9459
0x4C944B: cmp     edi, ebp
0x4C944D: jz      short loc_4C9459
0x4C944F: mov     edx, [edi]
0x4C9451: mov     eax, [edx]
0x4C9453: push    1
0x4C9455: mov     ecx, edi
0x4C9457: call    eax
0x4C9459: mov     [esi+24h], ebp
0x4C945C: mov     al, 1Eh
0x4C945E: mov     ecx, esi; this
0x4C9460: mov     byte ptr [esi+28h], 2
0x4C9464: mov     [esi+29h], al
0x4C9467: mov     [esi+2Ah], al
0x4C946A: mov     [esi+2Bh], al
0x4C946D: call    j_TESForm_InitializeComponents
0x4C9472: mov     eax, esi
0x4C9474: mov     ecx, dword ptr [esp+20h+var_C]
0x4C9478: mov     large fs:0, ecx
0x4C947F: pop     ecx
0x4C9480: pop     edi
0x4C9481: pop     esi
0x4C9482: pop     ebp
0x4C9483: add     esp, 10h
0x4C9486: retn
