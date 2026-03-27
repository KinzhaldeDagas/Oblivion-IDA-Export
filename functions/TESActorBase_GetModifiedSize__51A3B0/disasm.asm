0x51A3B0: push    ecx
0x51A3B1: push    ebx
0x51A3B2: push    esi
0x51A3B3: push    edi
0x51A3B4: mov     edi, ecx
0x51A3B6: mov     ecx, ds:0B33B00h
0x51A3BC: mov     [esp+10h+var_4], 0
0x51A3C4: call    sub_45A170
0x51A3C9: test    al, al
0x51A3CB: jz      short loc_51A3D5
0x51A3CD: mov     [esp+10h+var_4], 6
0x51A3D5: mov     eax, ds:0B33B00h
0x51A3DA: cmp     byte ptr [eax+7Ch], 6Dh ; 'm'
0x51A3DE: mov     ebx, [esp+10h+arg_0]
0x51A3E2: jb      short loc_51A3F6
0x51A3E4: push    ebx
0x51A3E5: mov     ecx, edi
0x51A3E7: call    TESForm_ModifiedFormSize
0x51A3EC: mov     si, word ptr [esp+10h+var_4]
0x51A3F1: add     si, ax
0x51A3F4: jmp     short loc_51A3FB
0x51A3F6: mov     si, word ptr [esp+10h+var_4]
0x51A3FB: push    ebx
0x51A3FC: lea     ecx, [edi+88h]
0x51A402: call    TESAttributes_ModifiedSize
0x51A407: push    ebx
0x51A408: lea     ecx, [edi+24h]
0x51A40B: add     si, ax
0x51A40E: call    TESActorBaseData_ModifiedComponentSize
0x51A413: push    ebx
0x51A414: lea     ecx, [edi+54h]
0x51A417: add     si, ax
0x51A41A: call    TESSpellList_ModifiedComponentSize
0x51A41F: push    ebx
0x51A420: lea     ecx, [edi+68h]
0x51A423: add     si, ax
0x51A426: call    TESAIForm_GetModifiedSize
0x51A42B: add     si, ax
0x51A42E: test    bl, 4
0x51A431: mov     word ptr [esp+10h+var_4], si
0x51A436: jz      short loc_51A442
0x51A438: add     [esp+10h+var_4], 4
0x51A43D: mov     si, word ptr [esp+10h+var_4]
0x51A442: test    ebx, 10000000h
0x51A448: jz      short loc_51A45D
0x51A44A: lea     ecx, [edi+0D0h]
0x51A450: call    AVCollection_GetSaveSize
0x51A455: add     si, ax
0x51A458: mov     word ptr [esp+10h+var_4], si
0x51A45D: test    bl, bl
0x51A45F: jns     short loc_51A494
0x51A461: mov     edi, [edi+0A4h]
0x51A467: add     [esp+10h+var_4], 1
0x51A46C: test    edi, edi
0x51A46E: mov     eax, edi
0x51A470: jnz     short loc_51A477
0x51A472: mov     eax, offset EmptyString
0x51A477: lea     edx, [eax+1]
0x51A47A: lea     ebx, [ebx+0]
0x51A480: mov     cl, [eax]
0x51A482: add     eax, 1
0x51A485: test    cl, cl
0x51A487: jnz     short loc_51A480
0x51A489: sub     eax, edx
0x51A48B: add     [esp+10h+var_4], eax
0x51A48F: mov     si, word ptr [esp+10h+var_4]
0x51A494: cmp     byte ptr ds:0B05BACh, 0
0x51A49B: jz      short loc_51A50C
0x51A49D: mov     ecx, ds:0B33B00h
0x51A4A3: mov     edi, [ecx+84h]
0x51A4A9: test    edi, edi
0x51A4AB: jz      short loc_51A4F1
0x51A4AD: mov     edx, [edi]
0x51A4AF: push    edx; a1
0x51A4B0: call    TESForm_LookupByFormID
0x51A4B5: mov     ecx, [edi+5]
0x51A4B8: mov     edx, [eax]
0x51A4BA: add     esp, 4
0x51A4BD: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A4C2: push    207h
0x51A4C7: push    ecx
0x51A4C8: mov     ecx, eax
0x51A4CA: mov     eax, [edx+0D4h]
0x51A4D0: call    eax
0x51A4D2: mov     ecx, [edi]
0x51A4D4: push    eax
0x51A4D5: movzx   edx, si
0x51A4D8: push    ecx
0x51A4D9: push    edx; ArgList
0x51A4DA: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x51A4DF: call    sub_40FEC0
0x51A4E4: add     esp, 1Ch
0x51A4E7: pop     edi
0x51A4E8: mov     ax, si
0x51A4EB: pop     esi
0x51A4EC: pop     ebx
0x51A4ED: pop     ecx
0x51A4EE: retn    4
0x51A4F1: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A4F6: movzx   eax, si
0x51A4F9: push    207h
0x51A4FE: push    eax; ArgList
0x51A4FF: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x51A504: call    sub_40FEC0
0x51A509: add     esp, 10h
0x51A50C: pop     edi
0x51A50D: mov     ax, si
0x51A510: pop     esi
0x51A511: pop     ebx
0x51A512: pop     ecx
0x51A513: retn    4
