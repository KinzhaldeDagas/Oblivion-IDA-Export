0x5ED860: sub     esp, 10h
0x5ED863: push    esi
0x5ED864: mov     esi, ecx
0x5ED866: mov     eax, [esi+8]
0x5ED869: shr     eax, 0Bh
0x5ED86C: test    al, 1
0x5ED86E: jnz     loc_5EDA15
0x5ED874: mov     ecx, [esi+58h]
0x5ED877: mov     edx, [ecx]
0x5ED879: mov     eax, [edx+20h]
0x5ED87C: call    eax
0x5ED87E: mov     ecx, esi; this
0x5ED880: call    TESObjectREFR_IsPersistent?
0x5ED885: test    al, al
0x5ED887: jz      short loc_5ED896
0x5ED889: mov     ecx, [esi+58h]
0x5ED88C: mov     edx, [ecx]
0x5ED88E: mov     eax, [edx+14h]
0x5ED891: push    0
0x5ED893: push    esi
0x5ED894: call    eax
0x5ED896: mov     ecx, [esi+58h]
0x5ED899: mov     edx, [ecx]
0x5ED89B: mov     eax, [edx+18h]
0x5ED89E: push    0
0x5ED8A0: push    esi
0x5ED8A1: call    eax
0x5ED8A3: mov     ecx, [esi+58h]
0x5ED8A6: mov     ecx, [ecx+8]
0x5ED8A9: test    ecx, ecx
0x5ED8AB: jz      loc_5EDA0A
0x5ED8B1: cmp     byte ptr [ecx+20h], 2
0x5ED8B5: jle     loc_5EDA0A
0x5ED8BB: fld     dword ptr ds:0A30634h
0x5ED8C1: push    ecx
0x5ED8C2: fstp    [esp+28h+var_28]; float
0x5ED8C5: push    0; char
0x5ED8C7: push    esi; int
0x5ED8C8: call    sub_566DC0
0x5ED8CD: test    al, al
0x5ED8CF: jnz     loc_5EDA0A
0x5ED8D5: mov     edx, [esi+58h]
0x5ED8D8: mov     eax, [edx+8]
0x5ED8DB: mov     ecx, [eax+1Ch]
0x5ED8DE: push    ebx
0x5ED8DF: push    edi
0x5ED8E0: shr     ecx, 17h
0x5ED8E3: xor     edi, edi
0x5ED8E5: test    cl, 1
0x5ED8E8: jz      short loc_5ED901
0x5ED8EA: lea     ebx, [esi+44h]
0x5ED8ED: mov     ecx, ebx; this
0x5ED8EF: call    ExtraDataList__GetTravelHorse
0x5ED8F4: test    eax, eax
0x5ED8F6: jz      short loc_5ED901
0x5ED8F8: mov     ecx, ebx; this
0x5ED8FA: call    ExtraDataList__GetTravelHorse
0x5ED8FF: mov     edi, eax
0x5ED901: mov     edx, [esi+58h]
0x5ED904: mov     ecx, [edx+8]
0x5ED907: push    ebp
0x5ED908: push    esi
0x5ED909: call    sub_566A40
0x5ED90E: mov     ebx, eax
0x5ED910: mov     eax, [esi+58h]
0x5ED913: mov     ecx, [eax+8]
0x5ED916: push    esi
0x5ED917: call    sub_566940
0x5ED91C: mov     ebp, eax
0x5ED91E: push    ebp; int
0x5ED91F: push    ebx; int
0x5ED920: push    esi; Concurrency::details::SchedulerBase *
0x5ED921: call    sub_4DD4B0
0x5ED926: fld     dword ptr ds:0A32048h
0x5ED92C: add     esp, 8
0x5ED92F: mov     ecx, esi
0x5ED931: fstp    [esp+34h+var_34]; float
0x5ED934: call    sub_4D89D0
0x5ED939: mov     ecx, [esi+58h]
0x5ED93C: mov     edx, [ecx+8]
0x5ED93F: mov     ecx, [edx+24h]
0x5ED942: test    ecx, ecx
0x5ED944: jz      short loc_5ED9A4
0x5ED946: call    sub_569740
0x5ED94B: cmp     eax, 1
0x5ED94E: jnz     short loc_5ED9A4
0x5ED950: mov     ecx, ebx; this
0x5ED952: call    TESObjectCELL_IsInterior
0x5ED957: test    al, al
0x5ED959: jz      loc_5EDA07
0x5ED95F: push    1
0x5ED961: push    1Ch
0x5ED963: mov     ecx, ebx
0x5ED965: call    sub_4CBB20
0x5ED96A: test    eax, eax
0x5ED96C: jnz     short loc_5ED97D
0x5ED96E: mov     ecx, ebx
0x5ED970: call    sub_4CBA50
0x5ED975: test    eax, eax
0x5ED977: jz      loc_5EDA07
0x5ED97D: mov     edx, [eax]
0x5ED97F: mov     edi, [esi]
0x5ED981: mov     ecx, eax
0x5ED983: mov     eax, [edx+174h]
0x5ED989: call    eax
0x5ED98B: mov     edx, [edi+1CCh]
0x5ED991: mov     ecx, esi
0x5ED993: push    eax
0x5ED994: call    edx
0x5ED996: pop     ebp
0x5ED997: pop     edi
0x5ED998: pop     ebx
0x5ED999: mov     ecx, esi; int
0x5ED99B: pop     esi
0x5ED99C: add     esp, 10h
0x5ED99F: jmp     sub_5E6E00
0x5ED9A4: mov     edx, [esi+58h]
0x5ED9A7: mov     eax, [esi]
0x5ED9A9: push    esi
0x5ED9AA: lea     ecx, [esp+38h+var_20]
0x5ED9AE: push    ecx
0x5ED9AF: mov     ecx, [edx+8]
0x5ED9B2: mov     [esp+3Ch+var_24], eax
0x5ED9B6: call    sub_566B30
0x5ED9BB: push    eax
0x5ED9BC: mov     eax, [esp+38h+var_24]
0x5ED9C0: mov     edx, [eax+1CCh]
0x5ED9C6: mov     ecx, esi
0x5ED9C8: call    edx
0x5ED9CA: test    edi, edi
0x5ED9CC: jz      short loc_5EDA07
0x5ED9CE: push    ebp; int
0x5ED9CF: push    ebx; int
0x5ED9D0: push    edi; Concurrency::details::SchedulerBase *
0x5ED9D1: call    sub_4DD4B0
0x5ED9D6: fld     dword ptr ds:0A32048h
0x5ED9DC: add     esp, 8
0x5ED9DF: mov     ecx, edi
0x5ED9E1: fstp    [esp+3Ch+var_3C]; float
0x5ED9E4: call    sub_4D89D0
0x5ED9E9: mov     ecx, [esi+58h]
0x5ED9EC: mov     ecx, [ecx+8]
0x5ED9EF: mov     ebx, [edi]
0x5ED9F1: push    esi
0x5ED9F2: lea     eax, [esp+40h+var_28]
0x5ED9F6: push    eax
0x5ED9F7: call    sub_566B30
0x5ED9FC: mov     edx, [ebx+1CCh]
0x5EDA02: mov     ecx, edi
0x5EDA04: push    eax
0x5EDA05: call    edx
0x5EDA07: pop     ebp
0x5EDA08: pop     edi
0x5EDA09: pop     ebx
0x5EDA0A: mov     ecx, esi; int
0x5EDA0C: pop     esi
0x5EDA0D: add     esp, 10h
0x5EDA10: jmp     sub_5E6E00
0x5EDA15: pop     esi
0x5EDA16: add     esp, 10h
0x5EDA19: retn
