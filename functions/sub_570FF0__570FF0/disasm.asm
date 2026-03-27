0x570FF0: sub     esp, 164h
0x570FF6: mov     eax, ds:0B30AACh
0x570FFB: xor     eax, esp
0x570FFD: mov     [esp+164h+var_4], eax
0x571004: push    ebx
0x571005: push    esi
0x571006: push    edi
0x571007: mov     ebx, ecx
0x571009: mov     ecx, ds:0B33B00h
0x57100F: xor     edi, edi
0x571011: mov     [esp+170h+var_15C], edi
0x571015: mov     [esp+170h+var_154], edi
0x571019: call    sub_45A170
0x57101E: test    al, al
0x571020: jz      loc_5710C3
0x571026: mov     ecx, ds:0B33B00h
0x57102C: push    4; Size
0x57102E: lea     eax, [esp+174h+Dst]
0x571032: push    eax; Dst
0x571033: call    SaveLoad_LoadData
0x571038: cmp     [esp+170h+Dst], 4B4F4C42h
0x571040: jz      short loc_5710AA
0x571042: mov     eax, ds:0B33B00h
0x571047: mov     esi, [eax+80h]
0x57104D: cmp     esi, edi
0x57104F: jz      short loc_57108E
0x571051: mov     ecx, [esi]
0x571053: push    ecx; a1
0x571054: call    TESForm_LookupByFormID
0x571059: mov     edx, [esi+5]
0x57105C: movzx   ecx, byte ptr [esi+9]
0x571060: add     esp, 4
0x571063: push    edx
0x571064: mov     edx, [eax]
0x571066: push    ecx
0x571067: mov     ecx, eax
0x571069: mov     eax, [edx+0D4h]
0x57106F: call    eax
0x571071: mov     ecx, [esi]
0x571073: push    eax
0x571074: push    ecx
0x571075: push    134h
0x57107A: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x57107F: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x571084: call    PrintError
0x571089: add     esp, 1Ch
0x57108C: jmp     short loc_5710AA
0x57108E: movzx   edx, byte ptr [eax+7Ch]
0x571092: push    edx
0x571093: push    134h
0x571098: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x57109D: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x5710A2: call    PrintError
0x5710A7: add     esp, 10h
0x5710AA: mov     ecx, ds:0B33B00h
0x5710B0: mov     eax, [ecx+14h]
0x5710B3: push    2; Size
0x5710B5: lea     edx, [esp+174h+var_15C]
0x5710B9: push    edx; Dst
0x5710BA: mov     [esp+178h+var_154], eax
0x5710BE: call    SaveLoad_LoadData
0x5710C3: push    ebp
0x5710C4: mov     ecx, ebx
0x5710C6: call    sub_56BCA0
0x5710CB: mov     ecx, ds:0B33B00h
0x5710D1: mov     [esp+174h+var_162], al
0x5710D5: push    1; Size
0x5710D7: lea     eax, [esp+178h+var_161]
0x5710DB: push    eax; Dst
0x5710DC: call    SaveLoad_LoadData
0x5710E1: push    104h
0x5710E6: lea     ecx, [esp+178h+var_108]
0x5710EA: push    edi
0x5710EB: push    ecx
0x5710EC: call    __memset
0x5710F1: movzx   edx, [esp+180h+var_161]
0x5710F6: mov     ecx, ds:0B33B00h
0x5710FC: add     esp, 0Ch
0x5710FF: push    edx; Size
0x571100: lea     eax, [esp+178h+var_108]
0x571104: push    eax; Dst
0x571105: call    SaveLoad_LoadData
0x57110A: push    10h; Size
0x57110C: lea     ecx, [esp+178h+var_13C]
0x571110: push    ecx; Dst
0x571111: mov     ecx, ds:0B33B00h
0x571117: call    SaveLoad_LoadData
0x57111C: lea     edx, [esp+174h+var_12C]
0x571120: push    edx
0x571121: lea     ecx, [esp+178h+var_13C]
0x571125: call    sub_47C600
0x57112A: mov     ecx, ds:0B33B00h
0x571130: push    0Ch; Size
0x571132: lea     eax, [esp+178h+var_148]
0x571136: push    eax; Dst
0x571137: call    SaveLoad_LoadData
0x57113C: push    4; Size
0x57113E: lea     ecx, [esp+178h+var_14C]
0x571142: push    ecx; Dst
0x571143: mov     ecx, ds:0B33B00h
0x571149: call    SaveLoad_LoadData
0x57114E: mov     ecx, ds:0B33B00h
0x571154: push    2; Size
0x571156: lea     edx, [esp+178h+var_160]
0x57115A: push    edx; Dst
0x57115B: call    SaveLoad_LoadData
0x571160: cmp     [esp+174h+var_162], 0
0x571165: jz      loc_5712A4
0x57116B: mov     ecx, ds:0B33A1Ch
0x571171: push    1
0x571173: push    edi
0x571174: push    edi
0x571175: lea     eax, [esp+180h+var_108]
0x571179: push    eax
0x57117A: call    sub_439EB0
0x57117F: cmp     eax, edi
0x571181: jz      loc_57129F
0x571187: mov     ecx, eax
0x571189: lea     ebp, [ebx+18h]
0x57118C: call    sub_700900
0x571191: push    eax; a2
0x571192: mov     ecx, ebp; this
0x571194: call    NiSmartPointer_Set??
0x571199: cmp     [ebp+0], edi
0x57119C: jz      loc_57129F
0x5711A2: lea     ecx, [esp+174h+var_108]
0x5711A6: push    ecx
0x5711A7: mov     ecx, ds:0B33A1Ch
0x5711AD: call    ModelLoader_IsModelLoaded??
0x5711B2: mov     edx, [eax]
0x5711B4: mov     eax, [ebp+0]
0x5711B7: mov     ecx, [esp+174h+var_148]
0x5711BB: mov     [ebx+1Ch], edx
0x5711BE: mov     [eax+54h], ecx
0x5711C1: mov     edx, [esp+174h+var_144]
0x5711C5: add     eax, 54h ; 'T'
0x5711C8: mov     [eax+4], edx
0x5711CB: mov     ecx, [esp+174h+var_140]
0x5711CF: mov     [eax+8], ecx
0x5711D2: mov     edi, [ebp+0]
0x5711D5: add     edi, 30h ; '0'
0x5711D8: mov     ecx, 9
0x5711DD: lea     esi, [esp+174h+var_12C]
0x5711E1: rep movsd
0x5711E3: fld     [esp+174h+var_14C]
0x5711E7: fabs
0x5711E9: fstp    [esp+174h+var_158]
0x5711ED: fld     [esp+174h+var_158]
0x5711F1: mov     edx, [ebp+0]
0x5711F4: lea     eax, [esp+174h+var_148]
0x5711F8: push    eax
0x5711F9: fstp    dword ptr [edx+60h]
0x5711FC: mov     ecx, [ebx+0Ch]
0x5711FF: call    sub_4C9C80
0x571204: mov     ecx, [ebx+0Ch]
0x571207: push    3
0x571209: push    eax
0x57120A: call    sub_441800
0x57120F: mov     ecx, [ebp+0]
0x571212: mov     edx, [eax]
0x571214: mov     edx, [edx+84h]
0x57121A: push    1
0x57121C: push    ecx
0x57121D: mov     ecx, eax
0x57121F: call    edx
0x571221: mov     ecx, [ebp+0]; this
0x571224: call    NiAVObject_InitializePropertyState
0x571229: fild    dword ptr ds:0B33EA0h
0x57122F: mov     eax, ds:0B33EA0h
0x571234: test    eax, eax
0x571236: push    1; a3
0x571238: jge     short loc_571240
0x57123A: fadd    dword ptr ds:0A2FC78h
0x571240: fdiv    qword ptr ds:0A2FC70h
0x571246: push    ecx
0x571247: mov     ecx, [ebp+0]; this
0x57124A: fstp    [esp+17Ch+var_158]
0x57124E: fld     [esp+17Ch+var_158]
0x571252: fstp    [esp+17Ch+a2]; a2
0x571255: call    NiAVObject_UpdateNiAVObject
0x57125A: mov     ecx, [ebp+0]
0x57125D: push    ecx
0x57125E: call    sub_715B40
0x571263: add     esp, 4
0x571266: cmp     word ptr [esp+174h+var_160], 0
0x57126C: jz      short loc_5712BD
0x57126E: mov     edx, [ebp+0]
0x571271: mov     eax, [edx+0Ch]
0x571274: push    eax
0x571275: push    offset stru_B3CAC0
0x57127A: call    NiRTTI_Cast
0x57127F: add     esp, 8
0x571282: test    eax, eax
0x571284: jz      short loc_57129F
0x571286: fld     dword ptr ds:0A30634h
0x57128C: push    ecx
0x57128D: mov     ecx, [ebp+0]
0x571290: fstp    [esp+178h+var_178]; float
0x571293: push    ecx; int
0x571294: push    eax; int
0x571295: call    sub_4DA8F0
0x57129A: add     esp, 0Ch
0x57129D: jmp     short loc_5712BD
0x57129F: mov     [esp+174h+var_162], 0
0x5712A4: mov     ax, word ptr [esp+174h+var_160]
0x5712A9: test    ax, ax
0x5712AC: jz      short loc_5712BD
0x5712AE: mov     ecx, ds:0B33B00h
0x5712B4: movzx   edx, ax
0x5712B7: push    edx
0x5712B8: call    SaveLoad_AdvanceBufferOffset
0x5712BD: mov     ecx, ds:0B33B00h
0x5712C3: call    sub_45A170
0x5712C8: test    al, al
0x5712CA: pop     ebp
0x5712CB: jz      loc_5713D1
0x5712D1: mov     ecx, ds:0B33B00h
0x5712D7: mov     edi, [ecx+80h]
0x5712DD: test    edi, edi
0x5712DF: mov     esi, [ecx+14h]
0x5712E2: jz      loc_571383
0x5712E8: mov     eax, [edi]
0x5712EA: push    eax; a1
0x5712EB: call    TESForm_LookupByFormID
0x5712F0: movzx   ecx, word ptr [esp+174h+var_15C]
0x5712F5: mov     ebx, [esp+174h+var_154]
0x5712F9: add     ecx, ebx
0x5712FB: add     esp, 4
0x5712FE: cmp     esi, ecx
0x571300: jbe     short loc_571341
0x571302: mov     edx, [edi+5]
0x571305: movzx   ecx, byte ptr [edi+9]
0x571309: push    edx
0x57130A: mov     edx, [eax]
0x57130C: push    ecx
0x57130D: mov     ecx, eax
0x57130F: mov     eax, [edx+0D4h]
0x571315: call    eax
0x571317: mov     ecx, [edi]
0x571319: movzx   edx, word ptr [esp+178h+var_15C]
0x57131E: push    eax
0x57131F: push    ecx
0x571320: push    17Ah
0x571325: sub     esi, edx
0x571327: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x57132C: sub     esi, ebx
0x57132E: push    esi; ArgList
0x57132F: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x571334: call    PrintError
0x571339: add     esp, 20h
0x57133C: jmp     loc_5713D1
0x571341: jnb     loc_5713D1
0x571347: mov     ecx, [edi+5]
0x57134A: movzx   edx, byte ptr [edi+9]
0x57134E: push    ecx
0x57134F: push    edx
0x571350: mov     edx, [eax]
0x571352: mov     ecx, eax
0x571354: mov     eax, [edx+0D4h]
0x57135A: call    eax
0x57135C: mov     ecx, [edi]
0x57135E: movzx   edx, word ptr [esp+178h+var_15C]
0x571363: push    eax
0x571364: push    ecx
0x571365: push    17Ah
0x57136A: sub     edx, esi
0x57136C: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x571371: add     edx, ebx
0x571373: push    edx; ArgList
0x571374: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x571379: call    PrintError
0x57137E: add     esp, 20h
0x571381: jmp     short loc_5713D1
0x571383: movzx   eax, word ptr [esp+170h+var_15C]
0x571388: mov     edx, [esp+170h+var_154]
0x57138C: lea     edi, [eax+edx]
0x57138F: cmp     esi, edi
0x571391: jbe     short loc_5713AE
0x571393: movzx   ecx, byte ptr [ecx+7Ch]
0x571397: push    ecx
0x571398: push    17Ah
0x57139D: sub     esi, eax
0x57139F: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x5713A4: sub     esi, edx
0x5713A6: push    esi
0x5713A7: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x5713AC: jmp     short loc_5713C9
0x5713AE: jnb     short loc_5713D1
0x5713B0: movzx   ecx, byte ptr [ecx+7Ch]
0x5713B4: push    ecx
0x5713B5: push    17Ah
0x5713BA: sub     eax, esi
0x5713BC: push    offset a__TesShared_11; "..\\TES Shared\\TempEffects\\BSTempEffe"...
0x5713C1: add     eax, edx
0x5713C3: push    eax; ArgList
0x5713C4: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x5713C9: call    PrintError
0x5713CE: add     esp, 14h
0x5713D1: mov     ecx, [esp+170h+var_4]
0x5713D8: mov     al, [esp+170h+var_162]
0x5713DC: pop     edi
0x5713DD: pop     esi
0x5713DE: pop     ebx
0x5713DF: xor     ecx, esp
0x5713E1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5713E6: add     esp, 164h
0x5713EC: retn
