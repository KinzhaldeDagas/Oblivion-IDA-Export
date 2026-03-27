0x630100: sub     esp, 18h
0x630103: push    ebx
0x630104: push    ebp
0x630105: push    esi
0x630106: mov     esi, ecx
0x630108: mov     eax, [esi]
0x63010A: mov     edx, [eax+184h]
0x630110: push    edi
0x630111: call    edx
0x630113: mov     ebx, eax
0x630115: mov     eax, [esi]
0x630117: mov     edx, [eax+36Ch]
0x63011D: mov     ecx, esi
0x63011F: call    edx
0x630121: test    eax, eax
0x630123: mov     edi, [esp+28h+arg_0]
0x630127: jz      short loc_630135
0x630129: mov     eax, [edi]
0x63012B: mov     edx, [eax+320h]
0x630131: mov     ecx, edi
0x630133: call    edx
0x630135: xor     ebp, ebp
0x630137: test    ebx, ebx
0x630139: jz      short loc_630143
0x63013B: cmp     byte ptr [ebx+20h], 0Fh
0x63013F: jnz     short loc_630143
0x630141: mov     ebp, ebx
0x630143: mov     ecx, ds:0B333C4h
0x630149: mov     eax, [esi]
0x63014B: mov     edx, [eax+0D0h]
0x630151: push    ecx
0x630152: mov     ecx, esi
0x630154: call    edx
0x630156: fld     dword ptr ds:0A30634h
0x63015C: push    ecx
0x63015D: fstp    [esp+2Ch+var_2C]; float
0x630160: push    0; char
0x630162: push    edi; int
0x630163: mov     ecx, ebp
0x630165: call    sub_566DC0
0x63016A: test    al, al
0x63016C: jnz     short loc_6301C0
0x63016E: mov     eax, ds:0B333C4h
0x630173: push    0
0x630175: push    eax
0x630176: mov     ecx, edi
0x630178: call    TesObjectREF_GetDistance
0x63017D: fcomp   qword ptr ds:0A2FC70h
0x630183: mov     edx, [esi]
0x630185: mov     ecx, esi
0x630187: fnstsw  ax
0x630189: test    ah, 41h
0x63018C: mov     eax, [edx+58Ch]
0x630192: jnz     short loc_6301AA
0x630194: push    201h
0x630199: push    0
0x63019B: push    0
0x63019D: push    edi
0x63019E: call    eax
0x6301A0: pop     edi
0x6301A1: pop     esi
0x6301A2: pop     ebp
0x6301A3: pop     ebx
0x6301A4: add     esp, 18h
0x6301A7: retn    4
0x6301AA: push    101h
0x6301AF: push    0
0x6301B1: push    0
0x6301B3: push    edi
0x6301B4: call    eax
0x6301B6: pop     edi
0x6301B7: pop     esi
0x6301B8: pop     ebp
0x6301B9: pop     ebx
0x6301BA: add     esp, 18h
0x6301BD: retn    4
0x6301C0: mov     edx, [esi]
0x6301C2: mov     eax, [edx+0C0h]
0x6301C8: mov     ecx, esi
0x6301CA: call    eax
0x6301CC: test    al, al
0x6301CE: jnz     loc_630393
0x6301D4: mov     edx, [esi]
0x6301D6: mov     eax, [edx+0BCh]
0x6301DC: push    1
0x6301DE: mov     ecx, esi
0x6301E0: call    eax
0x6301E2: mov     edx, [edi]
0x6301E4: mov     eax, [edx+174h]
0x6301EA: mov     ecx, edi
0x6301EC: call    eax
0x6301EE: mov     ecx, ds:0B333C4h
0x6301F4: mov     edx, [ecx]
0x6301F6: mov     ebx, eax
0x6301F8: mov     eax, [edx+174h]
0x6301FE: call    eax
0x630200: fld     dword ptr [eax+4]
0x630203: fsub    dword ptr [ebx+4]
0x630206: lea     ecx, [esp+28h+var_C]
0x63020A: push    ecx
0x63020B: fstp    [esp+2Ch+arg_0]
0x63020F: fld     dword ptr [eax+8]
0x630212: fsub    dword ptr [ebx+8]
0x630215: fstp    [esp+2Ch+var_18]
0x630219: fld     dword ptr [eax]
0x63021B: fsub    dword ptr [ebx]
0x63021D: fstp    [esp+2Ch+var_C]
0x630221: fld     [esp+2Ch+arg_0]
0x630225: fstp    [esp+2Ch+var_8]
0x630229: fld     [esp+2Ch+var_18]
0x63022D: fstp    [esp+2Ch+var_4]
0x630231: call    sub_683CB0
0x630236: fstp    [esp+2Ch+var_18]
0x63023A: add     esp, 4
0x63023D: fldz
0x63023F: lea     edx, [esp+28h+var_14]
0x630243: push    edx; int
0x630244: fstp    [esp+2Ch+var_14]
0x630248: fld     [esp+2Ch+var_18]
0x63024C: push    ecx
0x63024D: fstp    [esp+30h+var_30]; float
0x630250: push    edi; int
0x630251: call    sub_683D80
0x630256: fstp    [esp+34h+var_10]
0x63025A: fild    dword ptr ds:0B36C10h
0x630260: add     esp, 0Ch
0x630263: mov     ecx, edi
0x630265: fmul    qword ptr ds:0A31C78h
0x63026B: fstp    [esp+28h+arg_0]
0x63026F: call    sub_5E0590
0x630274: test    al, al
0x630276: jz      short loc_630288
0x630278: fild    dword ptr ds:0B36C18h
0x63027E: fmul    qword ptr ds:0A31C78h
0x630284: fstp    [esp+28h+arg_0]
0x630288: fld     [esp+28h+var_10]
0x63028C: fabs
0x63028E: fstp    [esp+28h+var_10]
0x630292: fld     [esp+28h+var_10]
0x630296: fld     [esp+28h+arg_0]
0x63029A: fcompp
0x63029C: fnstsw  ax
0x63029E: test    ah, 5
0x6302A1: jp      short loc_6302B8
0x6302A3: fld     [esp+28h+var_18]
0x6302A7: push    1; char
0x6302A9: push    ecx
0x6302AA: fstp    [esp+30h+var_30]; float
0x6302AD: push    edi; Concurrency::details::SchedulerBase *
0x6302AE: call    sub_685530
0x6302B3: add     esp, 0Ch
0x6302B6: jmp     short loc_6302C1
0x6302B8: push    30h ; '0'
0x6302BA: mov     ecx, edi
0x6302BC: call    sub_5E05F0
0x6302C1: push    3
0x6302C3: push    2
0x6302C5: call    TESTopic__GEtTopic
0x6302CA: mov     ecx, ds:0B333C4h
0x6302D0: add     esp, 8
0x6302D3: push    1
0x6302D5: push    0
0x6302D7: mov     [edi+0E4h], ecx
0x6302DD: mov     ecx, [edi+58h]
0x6302E0: mov     edx, [ecx]
0x6302E2: push    0
0x6302E4: push    eax
0x6302E5: mov     eax, [edx+1A4h]
0x6302EB: push    edi
0x6302EC: call    eax
0x6302EE: mov     edx, [esi]
0x6302F0: mov     eax, [edx+594h]
0x6302F6: push    edi
0x6302F7: mov     ecx, esi
0x6302F9: mov     byte ptr [esi+25Dh], 1
0x630300: call    eax
0x630302: mov     ecx, ds:0B333C4h
0x630308: mov     edx, [ecx]
0x63030A: mov     eax, [edx+170h]
0x630310: push    ecx
0x630311: call    eax
0x630313: push    eax
0x630314: push    edi
0x630315: mov     ecx, esi
0x630317: call    sub_6286E0
0x63031C: mov     edx, [esi]
0x63031E: mov     eax, [esi+2Ch]
0x630321: mov     edx, [edx+484h]
0x630327: push    eax
0x630328: mov     ecx, esi
0x63032A: call    edx
0x63032C: mov     esi, [ebp+3Ch]
0x63032F: test    esi, esi
0x630331: jz      loc_6303F0
0x630337: jmp     short loc_630340
0x630339: align 10h
0x630340: mov     ebx, [esi]
0x630342: test    ebx, ebx
0x630344: jz      loc_6303F0
0x63034A: cmp     dword ptr [ebx+4], 0
0x63034E: jnz     short loc_630382
0x630350: lea     ecx, [edi+44h]
0x630353: mov     ebp, edi
0x630355: call    sub_420680
0x63035A: test    eax, eax
0x63035C: jz      short loc_630368
0x63035E: lea     ecx, [edi+44h]
0x630361: call    sub_420680
0x630366: mov     ebp, eax
0x630368: mov     ebx, [ebx+24h]
0x63036B: mov     eax, ds:0B333C4h
0x630370: push    ebx
0x630371: push    ebp
0x630372: lea     ecx, [eax+44h]; this
0x630375: push    eax
0x630376: call    ExtraDataList_GetContainerChanges
0x63037B: mov     ecx, eax
0x63037D: call    sub_4919E0
0x630382: mov     esi, [esi+4]
0x630385: test    esi, esi
0x630387: jnz     short loc_630340
0x630389: pop     edi
0x63038A: pop     esi
0x63038B: pop     ebp
0x63038C: pop     ebx
0x63038D: add     esp, 18h
0x630390: retn    4
0x630393: mov     eax, [edi]
0x630395: mov     edx, [eax+164h]
0x63039B: mov     ecx, edi
0x63039D: call    edx
0x63039F: mov     ecx, eax
0x6303A1: call    sub_472EA0
0x6303A6: test    al, al
0x6303A8: jz      short loc_6303F0
0x6303AA: lea     ecx, [edi+44h]
0x6303AD: call    ExtraDataList__GetExtraPackage
0x6303B2: test    eax, eax
0x6303B4: jz      short loc_6303E1
0x6303B6: cmp     byte ptr [eax+20h], 4
0x6303BA: jnz     short loc_6303E1
0x6303BC: mov     eax, ds:0B333C4h
0x6303C1: mov     edx, [esi]
0x6303C3: push    0
0x6303C5: push    0FFFFFFFFh
0x6303C7: push    0
0x6303C9: mov     [esi+2Ch], eax
0x6303CC: mov     eax, [edx+198h]
0x6303D2: push    edi
0x6303D3: mov     ecx, esi
0x6303D5: call    eax
0x6303D7: pop     edi
0x6303D8: pop     esi
0x6303D9: pop     ebp
0x6303DA: pop     ebx
0x6303DB: add     esp, 18h
0x6303DE: retn    4
0x6303E1: mov     edx, [esi]
0x6303E3: mov     eax, [edx+188h]
0x6303E9: push    1
0x6303EB: push    edi
0x6303EC: mov     ecx, esi
0x6303EE: call    eax
0x6303F0: pop     edi
0x6303F1: pop     esi
0x6303F2: pop     ebp
0x6303F3: pop     ebx
0x6303F4: add     esp, 18h
0x6303F7: retn    4
