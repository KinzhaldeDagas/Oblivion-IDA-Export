0x8094D0: push    0FFFFFFFFh
0x8094D2: push    offset SEH_8094D0
0x8094D7: mov     eax, large fs:0
0x8094DD: push    eax
0x8094DE: push    ecx
0x8094DF: push    ebx
0x8094E0: push    esi
0x8094E1: push    edi
0x8094E2: mov     eax, ds:0B30AACh
0x8094E7: xor     eax, esp
0x8094E9: push    eax
0x8094EA: lea     eax, [esp+20h+var_C]
0x8094EE: mov     large fs:0, eax
0x8094F4: mov     edi, [esp+20h+arg_0]
0x8094F8: push    4
0x8094FA: mov     ecx, edi
0x8094FC: call    NiNode_GetNiPropertyByID
0x809501: mov     esi, eax
0x809503: test    esi, esi
0x809505: jz      short loc_80955B
0x809507: mov     eax, [esi]
0x809509: mov     edx, [eax+54h]
0x80950C: mov     ecx, esi
0x80950E: call    edx
0x809510: cmp     eax, 5
0x809513: jl      short loc_809527
0x809515: mov     eax, [esi]
0x809517: mov     edx, [eax+54h]
0x80951A: mov     ecx, esi
0x80951C: call    edx
0x80951E: cmp     eax, 0Ah
0x809521: jle     loc_809646
0x809527: push    4
0x809529: lea     eax, [esp+24h+arg_0]
0x80952D: push    eax
0x80952E: mov     ecx, edi
0x809530: call    sub_708560
0x809535: mov     eax, [esp+20h+arg_0]
0x809539: test    eax, eax
0x80953B: jz      short loc_80955B
0x80953D: mov     esi, eax
0x80953F: add     eax, 4
0x809542: push    eax; lpAddend
0x809543: call    dword ptr ds:0A2807Ch
0x809549: test    eax, eax
0x80954B: jnz     short loc_80955B
0x80954D: test    esi, esi
0x80954F: jz      short loc_80955B
0x809551: mov     edx, [esi]
0x809553: mov     eax, [edx]
0x809555: push    1
0x809557: mov     ecx, esi
0x809559: call    eax
0x80955B: push    0F0h ; 'ð'; Size
0x809560: call    FormHeapAlloc
0x809565: add     esp, 4
0x809568: mov     [esp+20h+arg_0], eax
0x80956C: test    eax, eax
0x80956E: mov     [esp+20h+var_4], 0
0x809576: jz      short loc_809583
0x809578: mov     ecx, eax; this
0x80957A: call    ??0BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::BSShaderPPLightingProperty(void)
0x80957F: mov     esi, eax
0x809581: jmp     short loc_809585
0x809583: xor     esi, esi
0x809585: push    esi; a2
0x809586: mov     ecx, edi; this
0x809588: mov     [esp+24h+var_4], 0FFFFFFFFh
0x809590: call    sub_405680
0x809595: or      dword ptr [esi+1Ch], 800h
0x80959C: push    0
0x80959E: lea     ecx, [esp+24h+var_10]
0x8095A2: push    ecx
0x8095A3: mov     ecx, edi
0x8095A5: mov     dword ptr [esi+24h], 0
0x8095AC: call    sub_708560
0x8095B1: mov     eax, [esp+20h+var_10]
0x8095B5: test    eax, eax
0x8095B7: jz      short loc_8095D7
0x8095B9: mov     ebx, eax
0x8095BB: add     eax, 4
0x8095BE: push    eax; lpAddend
0x8095BF: call    dword ptr ds:0A2807Ch
0x8095C5: test    eax, eax
0x8095C7: jnz     short loc_8095D7
0x8095C9: test    ebx, ebx
0x8095CB: jz      short loc_8095D7
0x8095CD: mov     edx, [ebx]
0x8095CF: mov     eax, [edx]
0x8095D1: push    1
0x8095D3: mov     ecx, ebx
0x8095D5: call    eax
0x8095D7: mov     edx, [esi]
0x8095D9: mov     eax, [edx+58h]
0x8095DC: push    edi
0x8095DD: mov     ecx, esi
0x8095DF: call    eax
0x8095E1: test    al, al
0x8095E3: jnz     short loc_809634
0x8095E5: push    esi
0x8095E6: mov     ecx, edi
0x8095E8: call    sub_4A1220
0x8095ED: mov     esi, [edi+0BCh]
0x8095F3: test    esi, esi
0x8095F5: jz      short loc_80961D
0x8095F7: lea     ecx, [esi+4]
0x8095FA: push    ecx; lpAddend
0x8095FB: call    dword ptr ds:0A2807Ch
0x809601: test    eax, eax
0x809603: jnz     short loc_809613
0x809605: test    esi, esi
0x809607: jz      short loc_809613
0x809609: mov     edx, [esi]
0x80960B: mov     eax, [edx]
0x80960D: push    1
0x80960F: mov     ecx, esi
0x809611: call    eax
0x809613: mov     dword ptr [edi+0BCh], 0
0x80961D: xor     al, al
0x80961F: mov     ecx, dword ptr [esp+20h+var_C]
0x809623: mov     large fs:0, ecx
0x80962A: pop     ecx
0x80962B: pop     edi
0x80962C: pop     esi
0x80962D: pop     ebx
0x80962E: add     esp, 10h
0x809631: retn    4
0x809634: mov     edx, [esi]
0x809636: mov     eax, [edx+8Ch]
0x80963C: push    0
0x80963E: mov     ecx, esi
0x809640: call    eax
0x809642: test    eax, eax
0x809644: jz      short loc_80961D
0x809646: mov     al, 1
0x809648: mov     ecx, dword ptr [esp+20h+var_C]
0x80964C: mov     large fs:0, ecx
0x809653: pop     ecx
0x809654: pop     edi
0x809655: pop     esi
0x809656: pop     ebx
0x809657: add     esp, 10h
0x80965A: retn    4
