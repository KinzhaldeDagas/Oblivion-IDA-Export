0x4353D0: push    ebx
0x4353D1: mov     ebx, [esp+4+arg_0]
0x4353D5: mov     eax, [ebx]
0x4353D7: mov     edx, [eax+170h]
0x4353DD: push    esi
0x4353DE: push    edi
0x4353DF: mov     edi, ecx
0x4353E1: mov     ecx, ebx
0x4353E3: call    edx
0x4353E5: mov     ecx, [edi+24h]
0x4353E8: mov     edx, [esp+0Ch+arg_4]
0x4353EC: mov     esi, eax
0x4353EE: mov     eax, [edi+28h]
0x4353F1: push    eax
0x4353F2: push    ecx
0x4353F3: push    edx
0x4353F4: push    ebx
0x4353F5: mov     ecx, esi
0x4353F7: call    sub_528A10
0x4353FC: mov     eax, [esi]
0x4353FE: mov     edx, [eax+128h]
0x435404: push    45h ; 'E'
0x435406: mov     ecx, esi
0x435408: call    edx
0x43540A: test    eax, eax
0x43540C: jz      short loc_435442
0x43540E: mov     eax, [esi]
0x435410: mov     edx, [eax+128h]
0x435416: push    45h ; 'E'
0x435418: mov     ecx, esi
0x43541A: call    edx
0x43541C: mov     [esp+0Ch+arg_0], eax
0x435420: fild    [esp+0Ch+arg_0]
0x435424: push    ecx
0x435425: mov     ecx, esi
0x435427: fstp    [esp+10h+var_10]; float
0x43542A: call    sub_529530
0x43542F: mov     ecx, [ebx+58h]
0x435432: test    ecx, ecx
0x435434: jz      short loc_435442
0x435436: mov     eax, [ecx]
0x435438: mov     edx, [eax+31Ch]
0x43543E: push    1
0x435440: call    edx
0x435442: cmp     ebx, TESDataHandler_g_PlayerRef
0x435448: jz      short loc_43546E
0x43544A: mov     eax, [ebx+0Ch]
0x43544D: mov     ecx, [edi+24h]
0x435450: push    eax
0x435451: push    ecx
0x435452: call    sub_481410
0x435457: mov     eax, [edi+28h]
0x43545A: add     esp, 8
0x43545D: test    eax, eax
0x43545F: jz      short loc_43546E
0x435461: mov     edx, [ebx+0Ch]
0x435464: push    edx
0x435465: push    eax
0x435466: call    sub_481410
0x43546B: add     esp, 8
0x43546E: mov     ecx, [edi+28h]
0x435471: test    ecx, ecx
0x435473: jz      short loc_43547C
0x435475: mov     eax, [ecx]
0x435477: mov     edx, [eax+50h]
0x43547A: call    edx
0x43547C: mov     eax, [edi+28h]
0x43547F: test    eax, eax
0x435481: jz      short loc_435489
0x435483: mov     [eax+114h], ebx
0x435489: mov     edi, [edi+24h]
0x43548C: test    edi, edi
0x43548E: jz      short loc_435496
0x435490: mov     [edi+114h], ebx
0x435496: pop     edi
0x435497: pop     esi
0x435498: pop     ebx
0x435499: retn    8
