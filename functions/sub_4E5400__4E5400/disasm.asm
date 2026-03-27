0x4E5400: push    ecx
0x4E5401: push    edi
0x4E5402: mov     edi, ecx
0x4E5404: cmp     dword ptr [edi+1Ch], 0
0x4E5408: jz      loc_4E54CB
0x4E540E: push    esi
0x4E540F: xor     esi, esi
0x4E5411: cmp     [edi+30h], si
0x4E5415: jbe     short loc_4E5434
0x4E5417: mov     eax, [edi+24h]
0x4E541A: mov     ecx, [eax+4]
0x4E541D: mov     ecx, [ecx+esi*4]
0x4E5420: test    ecx, ecx
0x4E5422: jz      short loc_4E5429
0x4E5424: call    sub_4E8190
0x4E5429: movzx   edx, word ptr [edi+30h]
0x4E542D: add     esi, 1
0x4E5430: cmp     esi, edx
0x4E5432: jl      short loc_4E5417
0x4E5434: mov     ecx, ds:0B35F88h
0x4E543A: test    ecx, ecx
0x4E543C: push    ebx
0x4E543D: mov     ebx, ds:0A2807Ch
0x4E5443: jz      short loc_4E54A3
0x4E5445: mov     edx, [edi+1Ch]
0x4E5448: mov     eax, [ecx]
0x4E544A: mov     eax, [eax+88h]
0x4E5450: push    edx
0x4E5451: lea     edx, [esp+14h+var_4]
0x4E5455: push    edx
0x4E5456: call    eax
0x4E5458: mov     eax, dword ptr [esp+10h+var_4]
0x4E545C: test    eax, eax
0x4E545E: jz      short loc_4E547A
0x4E5460: mov     esi, eax
0x4E5462: add     eax, 4
0x4E5465: push    eax; lpAddend
0x4E5466: call    ebx ; InterlockedDecrement
0x4E5468: test    eax, eax
0x4E546A: jnz     short loc_4E547A
0x4E546C: test    esi, esi
0x4E546E: jz      short loc_4E547A
0x4E5470: mov     edx, [esi]
0x4E5472: mov     eax, [edx]
0x4E5474: push    1
0x4E5476: mov     ecx, esi
0x4E5478: call    eax
0x4E547A: mov     ecx, ds:0B35F88h; this
0x4E5480: call    NiAVObject_InitializePropertyState
0x4E5485: mov     ecx, ds:0B35F88h
0x4E548B: call    NiNode_UpdateDynamicEffectState
0x4E5490: fldz
0x4E5492: push    0; a3
0x4E5494: push    ecx
0x4E5495: mov     ecx, ds:0B35F88h; this
0x4E549B: fstp    [esp+18h+a2]; a2
0x4E549E: call    NiAVObject_UpdateNiAVObject
0x4E54A3: mov     esi, [edi+1Ch]
0x4E54A6: test    esi, esi
0x4E54A8: jz      short loc_4E54C9
0x4E54AA: lea     ecx, [esi+4]
0x4E54AD: push    ecx; lpAddend
0x4E54AE: call    ebx ; InterlockedDecrement
0x4E54B0: test    eax, eax
0x4E54B2: jnz     short loc_4E54C2
0x4E54B4: test    esi, esi
0x4E54B6: jz      short loc_4E54C2
0x4E54B8: mov     edx, [esi]
0x4E54BA: mov     eax, [edx]
0x4E54BC: push    1
0x4E54BE: mov     ecx, esi
0x4E54C0: call    eax
0x4E54C2: mov     dword ptr [edi+1Ch], 0
0x4E54C9: pop     ebx
0x4E54CA: pop     esi
0x4E54CB: pop     edi
0x4E54CC: pop     ecx
0x4E54CD: retn
