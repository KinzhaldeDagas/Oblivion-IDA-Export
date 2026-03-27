0x56D4E0: push    esi
0x56D4E1: mov     esi, ecx
0x56D4E3: mov     ecx, ds:0B33B00h
0x56D4E9: push    edi
0x56D4EA: xor     edi, edi
0x56D4EC: call    sub_45A170
0x56D4F1: test    al, al
0x56D4F3: jz      short loc_56D4FA
0x56D4F5: mov     edi, 6
0x56D4FA: mov     ecx, esi
0x56D4FC: call    sub_73D5D0
0x56D501: add     edi, eax
0x56D503: mov     eax, [esi+18h]
0x56D506: mov     eax, [eax]
0x56D508: test    eax, eax
0x56D50A: jz      short loc_56D511
0x56D50C: mov     eax, [eax+34h]
0x56D50F: jmp     short loc_56D513
0x56D511: xor     eax, eax
0x56D513: mov     ecx, ds:0B33B00h
0x56D519: push    ebx
0x56D51A: push    eax
0x56D51B: call    sub_452400
0x56D520: movzx   ecx, ax
0x56D523: mov     eax, [esi+1Ch]
0x56D526: lea     edx, [edi+ecx+35h]
0x56D52A: mov     ecx, [eax+0B4h]
0x56D530: mov     eax, [eax+0B8h]
0x56D536: mov     eax, [eax+8]
0x56D539: movzx   esi, word ptr [ecx+8]
0x56D53D: mov     ebx, [eax+44h]
0x56D540: movzx   edi, word ptr [eax+40h]
0x56D544: movzx   ecx, word ptr [ecx+44h]
0x56D548: movzx   eax, si
0x56D54B: lea     eax, [eax+eax*2]
0x56D54E: lea     ecx, [ecx+eax*4]
0x56D551: movzx   eax, di
0x56D554: test    eax, eax
0x56D556: lea     esi, [edx+ecx*2+6]
0x56D55A: jle     short loc_56D56F
0x56D55C: lea     ecx, [ebx+48h]
0x56D55F: nop
0x56D560: movzx   edx, word ptr [ecx]
0x56D563: add     ecx, 4Ch ; 'L'
0x56D566: sub     eax, 1
0x56D569: lea     esi, [esi+edx*8+2]
0x56D56D: jnz     short loc_56D560
0x56D56F: cmp     byte ptr ds:0B05BACh, 0
0x56D576: pop     ebx
0x56D577: jz      short loc_56D5DC
0x56D579: mov     eax, ds:0B33B00h
0x56D57E: mov     edi, [eax+84h]
0x56D584: test    edi, edi
0x56D586: jz      short loc_56D5C4
0x56D588: mov     ecx, [edi]
0x56D58A: push    ecx; a1
0x56D58B: call    TESForm_LookupByFormID
0x56D590: mov     edx, [edi+5]
0x56D593: add     esp, 4
0x56D596: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56D59B: push    51Dh
0x56D5A0: push    edx
0x56D5A1: mov     edx, [eax]
0x56D5A3: mov     ecx, eax
0x56D5A5: mov     eax, [edx+0D4h]
0x56D5AB: call    eax
0x56D5AD: mov     ecx, [edi]
0x56D5AF: push    eax
0x56D5B0: push    ecx
0x56D5B1: push    esi; ArgList
0x56D5B2: push    offset aGetsavesize5iF; "GetSaveSize(): %-5i for form %08X %s wi"...
0x56D5B7: call    sub_40FEC0
0x56D5BC: add     esp, 1Ch
0x56D5BF: pop     edi
0x56D5C0: mov     eax, esi
0x56D5C2: pop     esi
0x56D5C3: retn
0x56D5C4: push    offset a__TesShared_10; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x56D5C9: push    51Dh
0x56D5CE: push    esi; ArgList
0x56D5CF: push    offset aGetsavesize5iE; "GetSaveSize(): %-5i ending at line %i i"...
0x56D5D4: call    sub_40FEC0
0x56D5D9: add     esp, 10h
0x56D5DC: pop     edi
0x56D5DD: mov     eax, esi
0x56D5DF: pop     esi
0x56D5E0: retn
