0x486330: sub     esp, 14h
0x486333: fld     dword ptr ds:0A3B888h
0x486339: push    ebx
0x48633A: push    ebp
0x48633B: fstp    [esp+1Ch+var_C]
0x48633F: push    esi
0x486340: mov     esi, ecx
0x486342: mov     ecx, [esi+4]; this
0x486345: xor     ebx, ebx
0x486347: cmp     ecx, ebx
0x486349: push    edi
0x48634A: mov     [esp+24h+var_10], esi
0x48634E: mov     [esp+24h+var_14], ebx
0x486352: mov     [esp+24h+var_8], ebx
0x486356: jz      short loc_48635F
0x486358: call    TESObjectREFR_GetContainer
0x48635D: jmp     short loc_486361
0x48635F: xor     eax, eax
0x486361: lea     edi, [eax+8]
0x486364: cmp     edi, ebx
0x486366: jz      loc_48642F
0x48636C: lea     esp, [esp+0]
0x486370: mov     eax, [edi]
0x486372: cmp     eax, ebx
0x486374: jz      loc_486420
0x48637A: mov     eax, [eax+4]
0x48637D: push    ebx; int
0x48637E: push    offset ??_R0?AVTESObjectAPPA@@@8; struct TypeDescriptor *
0x486383: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x486388: push    ebx; int
0x486389: push    eax; void *
0x48638A: call    OblivionDynamicCast
0x48638F: mov     esi, eax
0x486391: add     esp, 14h
0x486394: cmp     esi, ebx
0x486396: jz      loc_486420
0x48639C: mov     ecx, [esp+24h+var_10]
0x4863A0: mov     eax, [ecx]
0x4863A2: cmp     eax, ebx
0x4863A4: mov     dl, 1
0x4863A6: jz      short loc_4863C2
0x4863A8: cmp     dl, bl
0x4863AA: jz      short loc_486416
0x4863AC: mov     ecx, [eax]
0x4863AE: cmp     ecx, ebx
0x4863B0: jz      short loc_4863BB
0x4863B2: cmp     [ecx+8], esi
0x4863B5: jnz     short loc_4863BB
0x4863B7: xor     dl, dl
0x4863B9: jmp     short loc_4863BE
0x4863BB: mov     eax, [eax+4]
0x4863BE: cmp     eax, ebx
0x4863C0: jnz     short loc_4863A8
0x4863C2: xor     eax, eax
0x4863C4: movzx   edx, byte ptr [esi+78h]
0x4863C8: cmp     edx, [esp+24h+arg_0]
0x4863CC: jnz     short loc_486420
0x4863CE: cmp     eax, ebx
0x4863D0: jz      short loc_4863E3
0x4863D2: mov     ecx, [edi]
0x4863D4: mov     ecx, [ecx]
0x4863D6: mov     edx, [eax+4]
0x4863D9: add     edx, ecx
0x4863DB: test    edx, edx
0x4863DD: jg      short loc_4863E3
0x4863DF: cmp     ecx, ebx
0x4863E1: jge     short loc_486420
0x4863E3: push    esi
0x4863E4: call    sub_46E3F0
0x4863E9: movzx   eax, al
0x4863EC: mov     [esp+28h+var_4], eax
0x4863F0: add     esp, 4
0x4863F3: fild    [esp+24h+var_4]
0x4863F7: fstp    [esp+24h+var_4]
0x4863FB: fld     [esp+24h+var_4]
0x4863FF: fld     [esp+24h+var_C]
0x486403: fcomp   st(1)
0x486405: fnstsw  ax
0x486407: test    ah, 5
0x48640A: jp      short loc_48641E
0x48640C: fstp    [esp+24h+var_C]
0x486410: mov     [esp+24h+var_14], esi
0x486414: jmp     short loc_486420
0x486416: cmp     eax, ebx
0x486418: jz      short loc_4863C2
0x48641A: mov     eax, [eax]
0x48641C: jmp     short loc_4863C4
0x48641E: fstp    st
0x486420: mov     edi, [edi+4]
0x486423: cmp     edi, ebx
0x486425: jnz     loc_486370
0x48642B: mov     esi, [esp+24h+var_10]
0x48642F: mov     ebp, [esi]
0x486431: cmp     ebp, ebx
0x486433: jz      loc_48650F
0x486439: lea     esp, [esp+0]
0x486440: mov     edi, [ebp+0]
0x486443: cmp     edi, ebx
0x486445: jz      loc_4864CD
0x48644B: mov     ecx, [edi+8]
0x48644E: push    ebx; int
0x48644F: push    offset ??_R0?AVTESObjectAPPA@@@8; struct TypeDescriptor *
0x486454: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x486459: push    ebx; int
0x48645A: push    ecx; void *
0x48645B: call    OblivionDynamicCast
0x486460: mov     esi, eax
0x486462: add     esp, 14h
0x486465: cmp     esi, ebx
0x486467: jz      short loc_4864CD
0x486469: movzx   edx, byte ptr [esi+78h]
0x48646D: cmp     edx, [esp+24h+arg_0]
0x486471: jnz     short loc_4864CD
0x486473: cmp     [edi+4], ebx
0x486476: jz      short loc_4864CD
0x486478: mov     eax, [esp+24h+var_10]
0x48647C: mov     ecx, [eax+4]; this
0x48647F: cmp     ecx, ebx
0x486481: jz      short loc_48648A
0x486483: call    TESObjectREFR_GetContainer
0x486488: jmp     short loc_48648C
0x48648A: xor     eax, eax
0x48648C: push    esi; a2
0x48648D: mov     ecx, eax; this
0x48648F: call    TESContainer_HasForm
0x486494: test    al, al
0x486496: jnz     short loc_4864CD
0x486498: push    esi
0x486499: call    sub_46E3F0
0x48649E: movzx   ecx, al
0x4864A1: mov     [esp+28h+var_4], ecx
0x4864A5: add     esp, 4
0x4864A8: fild    [esp+24h+var_4]
0x4864AC: fstp    [esp+24h+var_4]
0x4864B0: fld     [esp+24h+var_4]
0x4864B4: fld     [esp+24h+var_C]
0x4864B8: fcomp   st(1)
0x4864BA: fnstsw  ax
0x4864BC: test    ah, 5
0x4864BF: jp      short loc_4864CB
0x4864C1: fstp    [esp+24h+var_C]
0x4864C5: mov     [esp+24h+var_8], esi
0x4864C9: jmp     short loc_4864CD
0x4864CB: fstp    st
0x4864CD: mov     ebp, [ebp+4]
0x4864D0: cmp     ebp, ebx
0x4864D2: jnz     loc_486440
0x4864D8: mov     eax, [esp+24h+var_8]
0x4864DC: cmp     eax, ebx
0x4864DE: jz      short loc_48650F
0x4864E0: mov     esi, [esp+24h+var_14]
0x4864E4: cmp     eax, esi
0x4864E6: jz      short loc_48650F
0x4864E8: cmp     esi, ebx
0x4864EA: jz      short loc_486507
0x4864EC: push    eax
0x4864ED: call    sub_46E3F0
0x4864F2: push    esi
0x4864F3: mov     byte ptr [esp+2Ch+arg_0], al
0x4864F7: call    sub_46E3F0
0x4864FC: mov     cl, byte ptr [esp+2Ch+arg_0]
0x486500: add     esp, 8
0x486503: cmp     cl, al
0x486505: jbe     short loc_48650F
0x486507: mov     edx, [esp+24h+var_8]
0x48650B: mov     [esp+24h+var_14], edx
0x48650F: mov     eax, [esp+24h+var_10]
0x486513: mov     eax, [eax]
0x486515: cmp     eax, ebx
0x486517: mov     dl, 1
0x486519: jz      short loc_48653A
0x48651B: mov     esi, [esp+24h+var_14]
0x48651F: nop
0x486520: cmp     dl, bl
0x486522: jz      short loc_48655E
0x486524: mov     ecx, [eax]
0x486526: cmp     ecx, ebx
0x486528: jz      short loc_486533
0x48652A: cmp     [ecx+8], esi
0x48652D: jnz     short loc_486533
0x48652F: xor     dl, dl
0x486531: jmp     short loc_486536
0x486533: mov     eax, [eax+4]
0x486536: cmp     eax, ebx
0x486538: jnz     short loc_486520
0x48653A: xor     edi, edi
0x48653C: mov     ebp, [esp+24h+var_14]
0x486540: xor     esi, esi
0x486542: cmp     ebp, ebx
0x486544: jz      short loc_48656A
0x486546: push    0Ch; Size
0x486548: call    FormHeapAlloc
0x48654D: add     esp, 4
0x486550: cmp     eax, ebx
0x486552: jz      short loc_486566
0x486554: mov     [eax+8], ebx
0x486557: mov     [eax], ebx
0x486559: mov     [eax+4], ebx
0x48655C: jmp     short loc_486568
0x48655E: cmp     eax, ebx
0x486560: jz      short loc_48653A
0x486562: mov     edi, [eax]
0x486564: jmp     short loc_48653C
0x486566: xor     eax, eax
0x486568: mov     esi, eax
0x48656A: cmp     edi, ebx
0x48656C: jz      short loc_4865B5
0x48656E: mov     ecx, [edi+8]
0x486571: mov     [esi+8], ecx
0x486574: mov     eax, [edi]
0x486576: cmp     eax, ebx
0x486578: jz      short loc_4865DB
0x48657A: cmp     [eax], ebx
0x48657C: jz      short loc_4865DB
0x48657E: push    8; Size
0x486580: call    FormHeapAlloc
0x486585: add     esp, 4
0x486588: cmp     eax, ebx
0x48658A: jz      short loc_486593
0x48658C: mov     [eax], ebx
0x48658E: mov     [eax+4], ebx
0x486591: jmp     short loc_486595
0x486593: xor     eax, eax
0x486595: mov     [esi], eax
0x486597: mov     edx, [edi]
0x486599: mov     ecx, [edx]
0x48659B: push    ecx
0x48659C: mov     ecx, eax
0x48659E: call    BSSimpleList_PushFront
0x4865A3: mov     edx, [edi+4]
0x4865A6: pop     edi
0x4865A7: mov     [esi+4], edx
0x4865AA: mov     eax, esi
0x4865AC: pop     esi
0x4865AD: pop     ebp
0x4865AE: pop     ebx
0x4865AF: add     esp, 14h
0x4865B2: retn    4
0x4865B5: cmp     ebp, ebx
0x4865B7: jz      short loc_4865DB
0x4865B9: mov     eax, [esp+24h+var_10]
0x4865BD: mov     [esi+8], ebp
0x4865C0: mov     ecx, [eax+4]; this
0x4865C3: cmp     ecx, ebx
0x4865C5: jz      short loc_4865CE
0x4865C7: call    TESObjectREFR_GetContainer
0x4865CC: jmp     short loc_4865D0
0x4865CE: xor     eax, eax
0x4865D0: push    ebp
0x4865D1: mov     ecx, eax
0x4865D3: call    TESContainer_GetFormCount
0x4865D8: mov     [esi+4], eax
0x4865DB: pop     edi
0x4865DC: mov     eax, esi
0x4865DE: pop     esi
0x4865DF: pop     ebp
0x4865E0: pop     ebx
0x4865E1: add     esp, 14h
0x4865E4: retn    4
