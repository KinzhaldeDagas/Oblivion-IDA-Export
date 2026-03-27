0x628330: sub     esp, 0Ch
0x628333: push    esi
0x628334: push    edi
0x628335: mov     edi, [esp+14h+arg_0]
0x628339: test    edi, edi
0x62833B: mov     esi, ecx
0x62833D: jz      loc_6283EC
0x628343: mov     ecx, edi
0x628345: call    sub_5E01B0
0x62834A: test    al, al
0x62834C: jnz     loc_6283DD
0x628352: mov     eax, [edi]
0x628354: mov     edx, [eax+174h]
0x62835A: mov     ecx, edi
0x62835C: call    edx
0x62835E: mov     ecx, [eax]
0x628360: mov     [esp+14h+var_C], ecx
0x628364: mov     edx, [eax+4]
0x628367: mov     [esp+14h+var_8], edx
0x62836B: mov     eax, [eax+8]
0x62836E: mov     ecx, edi; this
0x628370: mov     [esp+14h+var_4], eax
0x628374: call    TESObjectREFR_GetParentCell
0x628379: mov     ecx, eax
0x62837B: call    TESObjectCELL_GetWaterHeight
0x628380: fadd    qword ptr ds:0A3F470h
0x628386: mov     edx, [esi]
0x628388: mov     eax, [edx+410h]
0x62838E: mov     ecx, esi
0x628390: fstp    [esp+14h+var_4]
0x628394: call    eax
0x628396: test    eax, eax
0x628398: jnz     short loc_6283B6
0x62839A: mov     edx, [esi]
0x62839C: mov     eax, [edx+408h]
0x6283A2: mov     ecx, esi
0x6283A4: call    eax
0x6283A6: mov     edx, [esi]
0x6283A8: mov     eax, [edx+410h]
0x6283AE: mov     ecx, esi
0x6283B0: call    eax
0x6283B2: test    eax, eax
0x6283B4: jz      short loc_6283C2
0x6283B6: lea     ecx, [esp+14h+var_C]
0x6283BA: push    ecx
0x6283BB: mov     ecx, eax
0x6283BD: call    sub_6862C0
0x6283C2: mov     edx, [esi]
0x6283C4: mov     eax, [edx+2C4h]
0x6283CA: push    1
0x6283CC: push    101h
0x6283D1: mov     ecx, esi
0x6283D3: call    eax
0x6283D5: pop     edi
0x6283D6: pop     esi
0x6283D7: add     esp, 0Ch
0x6283DA: retn    4
0x6283DD: mov     edx, [esi]
0x6283DF: mov     eax, [edx+188h]
0x6283E5: push    1
0x6283E7: push    edi
0x6283E8: mov     ecx, esi
0x6283EA: call    eax
0x6283EC: pop     edi
0x6283ED: pop     esi
0x6283EE: add     esp, 0Ch
0x6283F1: retn    4
