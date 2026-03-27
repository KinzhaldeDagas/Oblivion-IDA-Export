0x475020: push    0FFFFFFFFh
0x475022: push    offset SEH_6B9010
0x475027: mov     eax, large fs:0
0x47502D: push    eax
0x47502E: sub     esp, 14h
0x475031: push    ebx
0x475032: push    ebp
0x475033: push    esi
0x475034: push    edi
0x475035: mov     eax, ds:0B30AACh
0x47503A: xor     eax, esp
0x47503C: push    eax
0x47503D: lea     eax, [esp+34h+var_C]
0x475041: mov     large fs:0, eax
0x475047: mov     ecx, ds:0B33B00h
0x47504D: xor     ebx, ebx
0x47504F: mov     [esp+34h+var_1C], ebx
0x475053: xor     ebp, ebp
0x475055: call    sub_45A170
0x47505A: test    al, al
0x47505C: jz      loc_4750FB
0x475062: mov     ecx, ds:0B33B00h
0x475068: push    4; Size
0x47506A: lea     eax, [esp+38h+Dst]
0x47506E: push    eax; Dst
0x47506F: call    SaveLoad_LoadData
0x475074: cmp     [esp+34h+Dst], 4B4F4C42h
0x47507C: jz      short loc_4750E6
0x47507E: mov     eax, ds:0B33B00h
0x475083: mov     esi, [eax+80h]
0x475089: cmp     esi, ebx
0x47508B: jz      short loc_4750CA
0x47508D: mov     ecx, [esi]
0x47508F: push    ecx; a1
0x475090: call    TESForm_LookupByFormID
0x475095: mov     edx, [esi+5]
0x475098: movzx   ecx, byte ptr [esi+9]
0x47509C: add     esp, 4
0x47509F: push    edx
0x4750A0: mov     edx, [eax]
0x4750A2: push    ecx
0x4750A3: mov     ecx, eax
0x4750A5: mov     eax, [edx+0D4h]
0x4750AB: call    eax
0x4750AD: mov     ecx, [esi]
0x4750AF: push    eax
0x4750B0: push    ecx
0x4750B1: push    0F7Eh
0x4750B6: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4750BB: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x4750C0: call    PrintError
0x4750C5: add     esp, 1Ch
0x4750C8: jmp     short loc_4750E6
0x4750CA: movzx   edx, byte ptr [eax+7Ch]
0x4750CE: push    edx
0x4750CF: push    0F7Eh
0x4750D4: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4750D9: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x4750DE: call    PrintError
0x4750E3: add     esp, 10h
0x4750E6: mov     ecx, ds:0B33B00h
0x4750EC: mov     ebp, [ecx+14h]
0x4750EF: push    2; Size
0x4750F1: lea     eax, [esp+38h+var_1C]
0x4750F5: push    eax; Dst
0x4750F6: call    SaveLoad_LoadData
0x4750FB: push    4; Size
0x4750FD: lea     ecx, [esp+38h+ArgList]
0x475101: push    ecx; Dst
0x475102: mov     ecx, ds:0B33B00h
0x475108: call    SaveLoad_LoadFormID
0x47510D: cmp     dword ptr [esp+3Ch+var_20], ebx
0x475111: jnz     short loc_47511B
0x475113: test    al, al
0x475115: jz      loc_4751D8
0x47511B: mov     ecx, ds:0B33B00h
0x475121: push    2; Size
0x475123: lea     edx, [esp+40h+var_28]
0x475127: push    edx; Dst
0x475128: call    SaveLoad_LoadData
0x47512D: mov     eax, dword ptr [esp+3Ch+var_20]
0x475131: cmp     eax, ebx
0x475133: jz      short loc_4751A6
0x475135: push    ebx; int
0x475136: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x47513B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x475140: push    ebx; int
0x475141: push    eax; a1
0x475142: call    TESForm_LookupByFormID
0x475147: add     esp, 4
0x47514A: push    eax; void *
0x47514B: call    OblivionDynamicCast
0x475150: mov     esi, eax
0x475152: add     esp, 14h
0x475155: cmp     esi, ebx
0x475157: jz      short loc_4751A6
0x475159: push    2Ch ; ','; Size
0x47515B: call    FormHeapAlloc
0x475160: add     esp, 4
0x475163: mov     dword ptr [esp+3Ch+ArgList], eax
0x475167: cmp     eax, ebx
0x475169: mov     [esp+3Ch+var_C], ebx
0x47516D: jz      short loc_475184
0x47516F: mov     ecx, [esp+3Ch+var_4]
0x475173: push    1
0x475175: push    ecx
0x475176: push    1
0x475178: push    4
0x47517A: push    esi
0x47517B: mov     ecx, eax
0x47517D: call    sub_474C50
0x475182: jmp     short loc_475186
0x475184: xor     eax, eax
0x475186: mov     edx, [esp+3Ch]
0x47518A: fld     [esp+3Ch+arg_0]
0x47518E: push    edx; AnimSequenceSingle *
0x47518F: push    ecx
0x475190: mov     ecx, eax; Dst
0x475192: fstp    [esp+44h+var_44]; float
0x475195: mov     [esp+44h+var_C], 0FFFFFFFFh
0x47519D: mov     ebx, eax
0x47519F: call    sub_474E90
0x4751A4: jmp     short loc_4751D8
0x4751A6: mov     ecx, [esp+3Ch+var_4]
0x4751AA: mov     eax, [ecx]
0x4751AC: mov     edx, [eax+0D4h]
0x4751B2: call    edx
0x4751B4: push    eax
0x4751B5: mov     eax, dword ptr [esp+40h+var_20]
0x4751B9: push    eax; ArgList
0x4751BA: push    offset aCouldNotFindId; "Could not find IdleForm %08X when loadi"...
0x4751BF: call    PrintError
0x4751C4: movzx   ecx, word ptr [esp+48h+var_28]
0x4751C9: add     esp, 0Ch
0x4751CC: push    ecx
0x4751CD: mov     ecx, ds:0B33B00h
0x4751D3: call    SaveLoad_AdvanceBufferOffset
0x4751D8: mov     ecx, ds:0B33B00h
0x4751DE: call    sub_45A170
0x4751E3: test    al, al
0x4751E5: jz      loc_4752E1
0x4751EB: mov     ecx, ds:0B33B00h
0x4751F1: mov     edi, [ecx+80h]
0x4751F7: test    edi, edi
0x4751F9: mov     esi, [ecx+14h]
0x4751FC: jz      loc_475297
0x475202: mov     edx, [edi]
0x475204: push    edx; a1
0x475205: call    TESForm_LookupByFormID
0x47520A: mov     ecx, eax
0x47520C: movzx   eax, [esp+40h+var_24]
0x475211: add     eax, ebp
0x475213: add     esp, 4
0x475216: cmp     esi, eax
0x475218: jbe     short loc_475257
0x47521A: mov     edx, [edi+5]
0x47521D: movzx   eax, byte ptr [edi+9]
0x475221: push    edx
0x475222: mov     edx, [ecx]
0x475224: push    eax
0x475225: mov     eax, [edx+0D4h]
0x47522B: call    eax
0x47522D: mov     ecx, [edi]
0x47522F: movzx   edx, [esp+44h+var_24]
0x475234: push    eax
0x475235: push    ecx
0x475236: push    0F99h
0x47523B: sub     esi, edx
0x47523D: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x475242: sub     esi, ebp
0x475244: push    esi; ArgList
0x475245: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x47524A: call    PrintError
0x47524F: add     esp, 20h
0x475252: jmp     loc_4752E1
0x475257: jnb     loc_4752E1
0x47525D: mov     eax, [edi+5]
0x475260: movzx   edx, byte ptr [edi+9]
0x475264: push    eax
0x475265: mov     eax, [ecx]
0x475267: push    edx
0x475268: mov     edx, [eax+0D4h]
0x47526E: call    edx
0x475270: movzx   ecx, [esp+44h+var_24]
0x475275: push    eax
0x475276: mov     eax, [edi]
0x475278: push    eax
0x475279: push    0F99h
0x47527E: sub     ecx, esi
0x475280: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x475285: add     ecx, ebp
0x475287: push    ecx; ArgList
0x475288: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x47528D: call    PrintError
0x475292: add     esp, 20h
0x475295: jmp     short loc_4752E1
0x475297: movzx   eax, [esp+3Ch+var_24]
0x47529C: lea     edx, [eax+ebp]
0x47529F: cmp     esi, edx
0x4752A1: jbe     short loc_4752BE
0x4752A3: movzx   edx, byte ptr [ecx+7Ch]
0x4752A7: push    edx
0x4752A8: push    0F99h
0x4752AD: sub     esi, eax
0x4752AF: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4752B4: sub     esi, ebp
0x4752B6: push    esi
0x4752B7: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x4752BC: jmp     short loc_4752D9
0x4752BE: jnb     short loc_4752E1
0x4752C0: movzx   ecx, byte ptr [ecx+7Ch]
0x4752C4: push    ecx
0x4752C5: push    0F99h
0x4752CA: sub     eax, esi
0x4752CC: push    offset a__TesSharedAni; "..\\TES Shared\\Animation.cpp"
0x4752D1: add     eax, ebp
0x4752D3: push    eax; ArgList
0x4752D4: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x4752D9: call    PrintError
0x4752DE: add     esp, 14h
0x4752E1: mov     eax, ebx
0x4752E3: mov     ecx, [esp+3Ch+Dst]
0x4752E7: mov     large fs:0, ecx
0x4752EE: pop     ecx
0x4752EF: pop     edi
0x4752F0: pop     esi
0x4752F1: pop     ebp
0x4752F2: pop     ebx
0x4752F3: add     esp, 20h
0x4752F6: retn
