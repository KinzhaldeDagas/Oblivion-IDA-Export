0x486790: sub     esp, 0Ch
0x486793: mov     ecx, [ecx]
0x486795: push    ebx
0x486796: push    ebp
0x486797: xor     ebp, ebp
0x486799: cmp     ecx, ebp
0x48679B: push    esi
0x48679C: push    edi
0x48679D: mov     [esp+1Ch+var_4], ecx
0x4867A1: jz      loc_486915
0x4867A7: mov     eax, [esp+1Ch+var_4]
0x4867AB: mov     edi, [eax]
0x4867AD: cmp     edi, ebp
0x4867AF: jz      loc_486915
0x4867B5: mov     esi, [edi]
0x4867B7: xor     bl, bl
0x4867B9: cmp     esi, ebp
0x4867BB: mov     [esp+1Ch+var_C], esi
0x4867BF: mov     [esp+1Ch+var_8], ebp
0x4867C3: jz      short loc_4867ED
0x4867C5: mov     ecx, [esi]
0x4867C7: cmp     ecx, ebp
0x4867C9: jz      short loc_4867ED
0x4867CB: call    sub_41DEF0
0x4867D0: test    al, al
0x4867D2: jnz     short loc_4867DD
0x4867D4: mov     esi, [esi+4]
0x4867D7: cmp     esi, ebp
0x4867D9: jnz     short loc_4867C5
0x4867DB: jmp     short loc_4867ED
0x4867DD: cmp     [edi+4], ebp
0x4867E0: jge     short loc_4867ED
0x4867E2: push    1
0x4867E4: push    ebp
0x4867E5: push    ebp
0x4867E6: mov     ecx, edi
0x4867E8: call    sub_4853B0
0x4867ED: cmp     [esp+1Ch+var_C], ebp
0x4867F1: jz      loc_486902
0x4867F7: mov     ecx, [esp+1Ch+var_C]
0x4867FB: mov     eax, [ecx]
0x4867FD: cmp     eax, ebp
0x4867FF: jz      loc_4868FE
0x486805: test    bl, bl
0x486807: jnz     loc_486921
0x48680D: push    ebp
0x48680E: mov     ecx, eax
0x486810: mov     [esp+20h+var_8], eax
0x486814: call    ExtraDataList_HasWorn
0x486819: test    al, al
0x48681B: jz      loc_4868EB; jumptable 00486831 cases 10,11
0x486821: mov     esi, [esp+1Ch+arg_0]
0x486825: lea     eax, [esi-6]; switch 9 cases
0x486828: cmp     eax, 8
0x48682B: ja      ContainerExtraData_GetEquippedInstance___def_486831; jumptable 00486831 default case, cases 8,13
0x486831: jmp     ds:jpt_486831[eax*4]; switch jump
0x486838: mov     edx, [edi+8]; jumptable 00486831 case 9
0x48683B: cmp     byte ptr [edx+4], 21h ; '!'
0x48683F: jnz     loc_4868EB; jumptable 00486831 cases 10,11
0x486845: jmp     loc_4868E9
0x48684A: mov     eax, [edi+8]; jumptable 00486831 case 14
0x48684D: cmp     byte ptr [eax+4], 1Ah
0x486851: jnz     loc_4868EB; jumptable 00486831 cases 10,11
0x486857: jmp     loc_4868E9
0x48685C: mov     ecx, [edi+8]; jumptable 00486831 case 12
0x48685F: cmp     byte ptr [ecx+4], 22h ; '"'
0x486863: jnz     loc_4868EB; jumptable 00486831 cases 10,11
0x486869: jmp     loc_4868E9
0x48686E: mov     eax, [edi+8]; jumptable 00486831 cases 6,7
0x486871: push    eax
0x486872: call    sub_4691B0
0x486877: mov     esi, eax
0x486879: add     esp, 4
0x48687C: cmp     esi, ebp
0x48687E: jz      short loc_4868EB; jumptable 00486831 cases 10,11
0x486880: push    ebp
0x486881: push    7
0x486883: mov     ecx, esi
0x486885: call    TESBipedModelForm_CoversSlot
0x48688A: test    al, al
0x48688C: jnz     short loc_48689C
0x48688E: push    ebp
0x48688F: push    6
0x486891: mov     ecx, esi
0x486893: call    TESBipedModelForm_CoversSlot
0x486898: test    al, al
0x48689A: jz      short loc_4868EB; jumptable 00486831 cases 10,11
0x48689C: mov     eax, [esp+1Ch+arg_0]
0x4868A0: cmp     eax, 7
0x4868A3: jnz     short loc_4868B6
0x4868A5: mov     ecx, [esp+1Ch+var_8]
0x4868A9: push    1
0x4868AB: call    ExtraDataList_HasWorn
0x4868B0: test    al, al
0x4868B2: jnz     short loc_4868E9
0x4868B4: jmp     short loc_4868EB; jumptable 00486831 cases 10,11
0x4868B6: cmp     eax, 6
0x4868B9: jnz     short loc_4868EB; jumptable 00486831 cases 10,11
0x4868BB: mov     ecx, [esp+1Ch+var_8]
0x4868BF: push    1
0x4868C1: call    ExtraDataList_HasWorn
0x4868C6: test    al, al
0x4868C8: jnz     short loc_4868EB; jumptable 00486831 cases 10,11
0x4868CA: jmp     short loc_4868E9
0x4868CC: mov     eax, [edi+8]; jumptable 00486831 default case, cases 8,13
0x4868CF: push    eax
0x4868D0: call    sub_4691B0
0x4868D5: add     esp, 4
0x4868D8: cmp     eax, ebp
0x4868DA: jz      short loc_4868EB; jumptable 00486831 cases 10,11
0x4868DC: push    ebp
0x4868DD: push    esi
0x4868DE: mov     ecx, eax
0x4868E0: call    TESBipedModelForm_CoversSlot
0x4868E5: test    al, al
0x4868E7: jz      short loc_4868EB; jumptable 00486831 cases 10,11
0x4868E9: mov     bl, 1
0x4868EB: mov     edx, [esp+1Ch+var_C]; jumptable 00486831 cases 10,11
0x4868EF: mov     eax, [edx+4]
0x4868F2: cmp     eax, ebp
0x4868F4: mov     [esp+1Ch+var_C], eax
0x4868F8: jnz     loc_4867F7
0x4868FE: test    bl, bl
0x486900: jnz     short loc_486921
0x486902: mov     eax, [esp+1Ch+var_4]
0x486906: mov     eax, [eax+4]
0x486909: cmp     eax, ebp
0x48690B: mov     [esp+1Ch+var_4], eax
0x48690F: jnz     loc_4867A7
0x486915: pop     edi
0x486916: pop     esi
0x486917: pop     ebp
0x486918: xor     eax, eax
0x48691A: pop     ebx
0x48691B: add     esp, 0Ch
0x48691E: retn    8
0x486921: cmp     [esp+1Ch+arg_4], 0
0x486926: jz      short loc_486931
0x486928: mov     ecx, [edi+8]
0x48692B: cmp     byte ptr [ecx+4], 14h
0x48692F: jnz     short loc_486915
0x486931: push    0Ch; Size
0x486933: call    FormHeapAlloc
0x486938: add     esp, 4
0x48693B: cmp     eax, ebp
0x48693D: jz      short loc_48694B
0x48693F: mov     [eax+8], ebp
0x486942: mov     [eax], ebp
0x486944: mov     [eax+4], ebp
0x486947: mov     esi, eax
0x486949: jmp     short loc_48694D
0x48694B: xor     esi, esi
0x48694D: cmp     [esi], ebp
0x48694F: mov     edx, [edi+8]
0x486952: mov     [esi+8], edx
0x486955: jnz     short loc_486970
0x486957: push    8; Size
0x486959: call    FormHeapAlloc
0x48695E: add     esp, 4
0x486961: cmp     eax, ebp
0x486963: jz      short loc_48696C
0x486965: mov     [eax], ebp
0x486967: mov     [eax+4], ebp
0x48696A: jmp     short loc_48696E
0x48696C: xor     eax, eax
0x48696E: mov     [esi], eax
0x486970: mov     edi, [esp+1Ch+var_8]
0x486974: mov     ecx, [esi]
0x486976: push    edi
0x486977: call    BSSimpleList_PushFront
0x48697C: mov     ecx, edi
0x48697E: call    ExtraDataList_GetExtraCount
0x486983: movsx   eax, ax
0x486986: pop     edi
0x486987: mov     [esi+4], eax
0x48698A: mov     eax, esi
0x48698C: pop     esi
0x48698D: pop     ebp
0x48698E: pop     ebx
0x48698F: add     esp, 0Ch
0x486992: retn    8
