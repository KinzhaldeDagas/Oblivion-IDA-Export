0x647450: sub     esp, 14h
0x647453: mov     eax, [esp+14h+arg_8]
0x647457: push    ebp
0x647458: push    esi
0x647459: push    edi
0x64745A: mov     edi, [esp+20h+arg_0]
0x64745E: mov     esi, ecx
0x647460: mov     ecx, [esp+20h+arg_4]
0x647464: push    eax
0x647465: push    ecx
0x647466: push    edi
0x647467: mov     ecx, esi
0x647469: call    sub_60D3C0
0x64746E: mov     ecx, ds:0B33B00h
0x647474: xor     ebp, ebp
0x647476: mov     [esp+20h+arg_8], ebp
0x64747A: call    sub_45A170
0x64747F: test    al, al
0x647481: jz      loc_647524
0x647487: mov     ecx, ds:0B33B00h
0x64748D: push    4; Size
0x64748F: lea     edx, [esp+24h+Dst]
0x647493: push    edx; Dst
0x647494: call    SaveLoad_LoadData
0x647499: cmp     [esp+20h+Dst], 4B4F4C42h
0x6474A1: jz      short loc_64750B
0x6474A3: mov     eax, ds:0B33B00h
0x6474A8: mov     edi, [eax+80h]
0x6474AE: test    edi, edi
0x6474B0: jz      short loc_6474EF
0x6474B2: mov     eax, [edi]
0x6474B4: push    eax; a1
0x6474B5: call    TESForm_LookupByFormID
0x6474BA: mov     ecx, [edi+5]
0x6474BD: movzx   edx, byte ptr [edi+9]
0x6474C1: add     esp, 4
0x6474C4: push    ecx
0x6474C5: push    edx
0x6474C6: mov     edx, [eax]
0x6474C8: mov     ecx, eax
0x6474CA: mov     eax, [edx+0D4h]
0x6474D0: call    eax
0x6474D2: mov     ecx, [edi]
0x6474D4: push    eax
0x6474D5: push    ecx
0x6474D6: push    0F38h
0x6474DB: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x6474E0: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x6474E5: call    PrintError
0x6474EA: add     esp, 1Ch
0x6474ED: jmp     short loc_64750B
0x6474EF: movzx   edx, byte ptr [eax+7Ch]
0x6474F3: push    edx
0x6474F4: push    0F38h
0x6474F9: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x6474FE: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x647503: call    PrintError
0x647508: add     esp, 10h
0x64750B: mov     ecx, ds:0B33B00h
0x647511: mov     ebp, [ecx+14h]
0x647514: push    2; Size
0x647516: lea     eax, [esp+24h+arg_8]
0x64751A: push    eax; Dst
0x64751B: call    SaveLoad_LoadData
0x647520: mov     edi, [esp+20h+arg_0]
0x647524: push    ebx
0x647525: push    4; Size
0x647527: lea     ecx, [esi+14h]
0x64752A: push    ecx; Dst
0x64752B: mov     ecx, ds:0B33B00h
0x647531: call    SaveLoad_LoadData
0x647536: mov     ecx, ds:0B33B00h
0x64753C: mov     bl, 36h ; '6'
0x64753E: cmp     [ecx+7Ch], bl
0x647541: jb      short loc_64755D
0x647543: push    4; Size
0x647545: lea     edx, [esi+18h]
0x647548: push    edx; Dst
0x647549: call    SaveLoad_LoadData
0x64754E: mov     ecx, ds:0B33B00h
0x647554: cmp     [ecx+7Ch], bl
0x647557: jnb     loc_64761E
0x64755D: push    4; Size
0x64755F: lea     eax, [esp+28h+arg_4]
0x647563: push    eax; Dst
0x647564: call    SaveLoad_LoadData
0x647569: fld     [esp+24h+arg_4]
0x64756D: fld     qword ptr ds:0A2FA98h
0x647573: call    unknown_libname_14
0x647578: fstp    [esp+24h+arg_0]
0x64757C: fld     [esp+24h+arg_0]
0x647580: fld     qword ptr ds:0A309F0h
0x647586: fdiv    st(1), st
0x647588: fnstcw  word ptr [esp+24h+arg_0]
0x64758C: movzx   eax, word ptr [esp+24h+arg_0]
0x647591: fxch    st(1)
0x647593: or      eax, 0C00h
0x647598: mov     dword ptr [esp+24h+var_10], eax
0x64759C: fldcw   word ptr [esp+24h+var_10]
0x6475A0: fistp   [esp+24h+var_10]
0x6475A4: mov     ebx, dword ptr [esp+24h+var_10]
0x6475A8: fldcw   word ptr [esp+24h+arg_0]
0x6475AC: fld     [esp+24h+arg_4]
0x6475B0: fld     qword ptr ds:0A2FA98h
0x6475B6: fdivr   st, st(1)
0x6475B8: fnstcw  word ptr [esp+24h+arg_0]
0x6475BC: movzx   eax, word ptr [esp+24h+arg_0]
0x6475C1: or      eax, 0C00h
0x6475C6: mov     [esp+24h+arg_4], eax
0x6475CA: fldcw   word ptr [esp+24h+arg_4]
0x6475CE: fistp   [esp+24h+var_10]
0x6475D2: mov     ecx, dword ptr [esp+24h+var_10]
0x6475D6: shl     ecx, 4
0x6475D9: or      ebx, ecx
0x6475DB: fldcw   word ptr [esp+24h+arg_0]
0x6475DF: shl     ebx, 9
0x6475E2: fxch    st(1)
0x6475E4: call    unknown_libname_14
0x6475E9: fstp    [esp+24h+arg_0]
0x6475ED: fld     [esp+24h+arg_0]
0x6475F1: fnstcw  word ptr [esp+24h+arg_0]
0x6475F5: movzx   eax, word ptr [esp+24h+arg_0]
0x6475FA: or      eax, 0C00h
0x6475FF: mov     [esp+24h+arg_4], eax
0x647603: fldcw   word ptr [esp+24h+arg_4]
0x647607: fistp   [esp+24h+var_10]
0x64760B: mov     edx, dword ptr [esp+24h+var_10]
0x64760F: or      ebx, edx
0x647611: mov     [esi+18h], ebx
0x647614: fldcw   word ptr [esp+24h+arg_0]
0x647618: mov     ecx, ds:0B33B00h
0x64761E: push    1; Size
0x647620: lea     eax, [esi+1Ch]
0x647623: push    eax; Dst
0x647624: call    SaveLoad_LoadData
0x647629: push    1; Size
0x64762B: lea     ecx, [esi+1Dh]
0x64762E: push    ecx; Dst
0x64762F: mov     ecx, ds:0B33B00h
0x647635: call    SaveLoad_LoadData
0x64763A: mov     ecx, ds:0B33B00h
0x647640: push    1; Size
0x647642: lea     edx, [esi+84h]
0x647648: push    edx; Dst
0x647649: call    SaveLoad_LoadData
0x64764E: mov     ecx, ds:0B33B00h
0x647654: cmp     byte ptr [ecx+7Ch], 34h ; '4'
0x647658: pop     ebx
0x647659: jb      short loc_64766C
0x64765B: push    1; Size
0x64765D: lea     eax, [esi+1Fh]
0x647660: push    eax; Dst
0x647661: call    SaveLoad_LoadData
0x647666: mov     ecx, ds:0B33B00h
0x64766C: cmp     byte ptr [ecx+7Ch], 37h ; '7'
0x647670: jb      short loc_647683
0x647672: push    1; Size
0x647674: lea     edx, [esi+20h]
0x647677: push    edx; Dst
0x647678: call    SaveLoad_LoadData
0x64767D: mov     ecx, ds:0B33B00h
0x647683: cmp     byte ptr [ecx+7Ch], 4Bh ; 'K'
0x647687: jb      short loc_64769D
0x647689: push    4; Size
0x64768B: lea     eax, [esi+88h]
0x647691: push    eax; Dst
0x647692: call    SaveLoad_LoadData
0x647697: mov     ecx, ds:0B33B00h
0x64769D: cmp     byte ptr [ecx+7Ch], 4Fh ; 'O'
0x6476A1: jb      short loc_6476ED
0x6476A3: push    4; Size
0x6476A5: lea     edx, [esi+28h]
0x6476A8: push    edx; Dst
0x6476A9: call    SaveLoad_LoadData
0x6476AE: mov     ecx, ds:0B33B00h
0x6476B4: push    4; Size
0x6476B6: lea     eax, [esp+24h+arg_0]
0x6476BA: push    eax; Dst
0x6476BB: call    SaveLoad_LoadFormID
0x6476C0: mov     ecx, [esp+28h+a1]
0x6476C4: push    0; int
0x6476C6: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x6476CB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6476D0: push    0; int
0x6476D2: push    ecx; a1
0x6476D3: call    TESForm_LookupByFormID
0x6476D8: add     esp, 4
0x6476DB: push    eax; void *
0x6476DC: call    OblivionDynamicCast
0x6476E1: mov     [esi+24h], eax
0x6476E4: mov     ecx, ds:0B33B00h
0x6476EA: add     esp, 14h
0x6476ED: cmp     byte ptr [ecx+7Ch], 56h ; 'V'
0x6476F1: jb      short loc_647704
0x6476F3: push    4; Size
0x6476F5: lea     edx, [esi+38h]
0x6476F8: push    edx; Dst
0x6476F9: call    SaveLoad_LoadData
0x6476FE: mov     ecx, ds:0B33B00h
0x647704: push    4; Size
0x647706: lea     eax, [esp+2Ch+var_10]
0x64770A: push    eax; Dst
0x64770B: call    SaveLoad_LoadFormID
0x647710: mov     ecx, [esp+30h+var_18]
0x647714: push    4; Size
0x647716: lea     edx, [esp+34h+Dst]
0x64771A: mov     [esi+2Ch], ecx
0x64771D: mov     ecx, ds:0B33B00h
0x647723: push    edx; Dst
0x647724: call    SaveLoad_LoadFormID
0x647729: test    edi, 400000h
0x64772F: mov     eax, [esp+38h+var_1C]
0x647733: mov     [esi+30h], eax
0x647736: jz      short loc_647740
0x647738: lea     ecx, [esi+70h]
0x64773B: call    AVCollection_Load
0x647740: mov     ecx, ds:0B33B00h
0x647746: cmp     byte ptr [ecx+7Ch], 33h ; '3'
0x64774A: jnb     short loc_647785
0x64774C: test    edi, 200000h
0x647752: jz      short loc_647785
0x647754: push    2; Size
0x647756: lea     edx, [esp+3Ch+Dst]
0x64775A: push    edx; Dst
0x64775B: call    SaveLoad_LoadData
0x647760: mov     ax, word ptr [esp+38h+Dst]
0x647765: test    ax, ax
0x647768: mov     ecx, ds:0B33B00h
0x64776E: jz      short loc_647785
0x647770: movzx   eax, ax
0x647773: add     eax, eax
0x647775: add     eax, eax
0x647777: add     eax, eax
0x647779: push    eax
0x64777A: call    SaveLoad_AdvanceBufferOffset
0x64777F: mov     ecx, ds:0B33B00h
0x647785: cmp     byte ptr [ecx+7Ch], 74h ; 't'
0x647789: jb      short loc_64779F
0x64778B: push    4; Size
0x64778D: lea     edx, [esi+8Ch]
0x647793: push    edx; Dst
0x647794: call    SaveLoad_LoadData
0x647799: mov     ecx, ds:0B33B00h
0x64779F: cmp     byte ptr [ecx+7Ch], 76h ; 'v'
0x6477A3: jb      short loc_6477B6
0x6477A5: push    1; Size
0x6477A7: add     esi, 1Eh
0x6477AA: push    esi; Dst
0x6477AB: call    SaveLoad_LoadData
0x6477B0: mov     ecx, ds:0B33B00h
0x6477B6: call    sub_45A170
0x6477BB: test    al, al
0x6477BD: jz      loc_6478D4
0x6477C3: mov     ecx, ds:0B33B00h
0x6477C9: mov     edi, [ecx+80h]
0x6477CF: test    edi, edi
0x6477D1: mov     esi, [ecx+14h]
0x6477D4: jz      loc_64787B
0x6477DA: mov     eax, [edi]
0x6477DC: push    eax; a1
0x6477DD: call    TESForm_LookupByFormID
0x6477E2: movzx   edx, word ptr [esp+3Ch+var_10+4]
0x6477E7: mov     ecx, eax
0x6477E9: lea     eax, [edx+ebp]
0x6477EC: add     esp, 4
0x6477EF: cmp     esi, eax
0x6477F1: jbe     short loc_647834
0x6477F3: mov     eax, [edi+5]
0x6477F6: movzx   edx, byte ptr [edi+9]
0x6477FA: push    eax
0x6477FB: mov     eax, [ecx]
0x6477FD: push    edx
0x6477FE: mov     edx, [eax+0D4h]
0x647804: call    edx
0x647806: movzx   ecx, word ptr [esp+40h+var_10+4]
0x64780B: push    eax
0x64780C: mov     eax, [edi]
0x64780E: push    eax
0x64780F: push    0F8Fh
0x647814: sub     esi, ecx
0x647816: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x64781B: sub     esi, ebp
0x64781D: push    esi; ArgList
0x64781E: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x647823: call    PrintError
0x647828: add     esp, 20h
0x64782B: pop     edi
0x64782C: pop     esi
0x64782D: pop     ebp
0x64782E: add     esp, 14h
0x647831: retn    0Ch
0x647834: jnb     loc_6478D4
0x64783A: mov     edx, [edi+5]
0x64783D: movzx   eax, byte ptr [edi+9]
0x647841: push    edx
0x647842: mov     edx, [ecx]
0x647844: push    eax
0x647845: mov     eax, [edx+0D4h]
0x64784B: call    eax
0x64784D: mov     ecx, [edi]
0x64784F: movzx   edx, word ptr [esp+40h+var_10+4]
0x647854: push    eax
0x647855: push    ecx
0x647856: push    0F8Fh
0x64785B: sub     edx, esi
0x64785D: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x647862: add     edx, ebp
0x647864: push    edx; ArgList
0x647865: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x64786A: call    PrintError
0x64786F: add     esp, 20h
0x647872: pop     edi
0x647873: pop     esi
0x647874: pop     ebp
0x647875: add     esp, 14h
0x647878: retn    0Ch
0x64787B: movzx   eax, word ptr [esp+38h+var_10+4]
0x647880: lea     edx, [eax+ebp]
0x647883: cmp     esi, edx
0x647885: jbe     short loc_6478B1
0x647887: movzx   ecx, byte ptr [ecx+7Ch]
0x64788B: push    ecx
0x64788C: push    0F8Fh
0x647891: sub     esi, eax
0x647893: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x647898: sub     esi, ebp
0x64789A: push    esi; ArgList
0x64789B: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x6478A0: call    PrintError
0x6478A5: add     esp, 14h
0x6478A8: pop     edi
0x6478A9: pop     esi
0x6478AA: pop     ebp
0x6478AB: add     esp, 14h
0x6478AE: retn    0Ch
0x6478B1: jnb     short loc_6478D4
0x6478B3: movzx   edx, byte ptr [ecx+7Ch]
0x6478B7: push    edx
0x6478B8: push    0F8Fh
0x6478BD: sub     eax, esi
0x6478BF: push    offset a_AiLowprocess_; ".\\AI\\LowProcess.cpp"
0x6478C4: add     eax, ebp
0x6478C6: push    eax; ArgList
0x6478C7: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6478CC: call    PrintError
0x6478D1: add     esp, 14h
0x6478D4: pop     edi
0x6478D5: pop     esi
0x6478D6: pop     ebp
0x6478D7: add     esp, 14h
0x6478DA: retn    0Ch
