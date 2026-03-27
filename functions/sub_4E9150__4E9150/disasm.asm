0x4E9150: sub     esp, 24h
0x4E9153: fld     dword ptr ds:0A32048h
0x4E9159: push    esi
0x4E915A: mov     esi, ecx
0x4E915C: fstp    [esp+28h+var_1C]
0x4E9160: xor     eax, eax
0x4E9162: cmp     [esi+28h], eax
0x4E9165: mov     [esp+28h+var_C], esi
0x4E9169: mov     [esp+28h+var_18], eax
0x4E916D: jz      loc_4E94B1
0x4E9173: push    ebx
0x4E9174: push    ebp
0x4E9175: push    edi
0x4E9176: mov     edi, [esp+34h+arg_0]
0x4E917A: fld     dword ptr [edi]
0x4E917C: mov     [esp+34h+var_21], 1
0x4E9181: fstp    [esp+34h+var_4]
0x4E9185: mov     [esp+34h+var_14], eax
0x4E9189: fld     [esp+34h+var_4]
0x4E918D: fistp   [esp+34h+var_10]
0x4E9191: fld     dword ptr [edi+4]
0x4E9194: mov     ebp, [esp+34h+var_10]
0x4E9198: fstp    [esp+34h+var_4]
0x4E919C: sar     ebp, 0Ch
0x4E919F: fld     [esp+34h+var_4]
0x4E91A3: fistp   [esp+34h+var_10]
0x4E91A7: fld     dword ptr ds:0A32048h
0x4E91AD: mov     ebx, [esp+34h+var_10]
0x4E91B1: fstp    [esp+34h+var_20]
0x4E91B5: sar     ebx, 0Ch
0x4E91B8: push    ebx
0x4E91B9: push    ebp
0x4E91BA: call    sub_4EF1D0
0x4E91BF: add     esp, 8
0x4E91C2: lea     ecx, [esp+34h+var_10]
0x4E91C6: push    ecx
0x4E91C7: add     esi, 1Ch
0x4E91CA: push    eax
0x4E91CB: mov     ecx, esi
0x4E91CD: mov     [esp+3Ch+var_10], 0
0x4E91D5: call    NiTMap_GetAt
0x4E91DA: mov     eax, [esp+34h+var_10]
0x4E91DE: mov     ecx, [esp+34h+var_C]
0x4E91E2: lea     edx, [esp+34h+var_20]
0x4E91E6: push    edx
0x4E91E7: push    eax
0x4E91E8: push    edi
0x4E91E9: call    sub_4E8DB0
0x4E91EE: mov     ecx, eax
0x4E91F0: test    ecx, ecx
0x4E91F2: jz      short loc_4E9212
0x4E91F4: fld     [esp+34h+var_20]
0x4E91F8: fcom    qword ptr ds:0A3A5B0h
0x4E91FE: fnstsw  ax
0x4E9200: test    ah, 5
0x4E9203: jp      short loc_4E9210
0x4E9205: fstp    [esp+34h+var_1C]
0x4E9209: mov     [esp+34h+var_18], ecx
0x4E920D: jmp     short loc_4E9212
0x4E920F: align 10h
0x4E9210: fstp    st
0x4E9212: cmp     [esp+34h+var_21], 0
0x4E9217: jnz     short loc_4E9225
0x4E9219: mov     eax, [esp+34h+var_18]
0x4E921D: test    eax, eax
0x4E921F: jnz     loc_4E94AE
0x4E9225: mov     eax, [esp+34h+var_14]
0x4E9229: cmp     eax, 14h
0x4E922C: jge     loc_4E94AA
0x4E9232: add     eax, 2
0x4E9235: sub     ebp, 1
0x4E9238: sub     ebx, 1
0x4E923B: test    eax, eax
0x4E923D: mov     [esp+34h+var_21], 0
0x4E9242: mov     [esp+34h+var_14], eax
0x4E9246: jle     short loc_4E9212
0x4E9248: mov     ecx, eax
0x4E924A: mov     [esp+34h+var_8], ecx
0x4E924E: mov     edi, edi
0x4E9250: push    ebx
0x4E9251: push    ebp
0x4E9252: call    sub_4EF1D0
0x4E9257: add     esp, 8
0x4E925A: lea     edx, [esp+34h+var_10]
0x4E925E: push    edx
0x4E925F: push    eax
0x4E9260: mov     ecx, esi
0x4E9262: mov     [esp+3Ch+var_10], 0
0x4E926A: call    NiTMap_GetAt
0x4E926F: mov     ecx, [esp+34h+var_10]
0x4E9273: lea     eax, [esp+34h+var_20]
0x4E9277: push    eax
0x4E9278: push    ecx
0x4E9279: mov     ecx, [esp+3Ch+var_C]
0x4E927D: push    edi
0x4E927E: call    sub_4E8DB0
0x4E9283: mov     ecx, eax
0x4E9285: test    ecx, ecx
0x4E9287: jz      short loc_4E92A6
0x4E9289: fld     [esp+34h+var_20]
0x4E928D: fld     [esp+34h+var_1C]
0x4E9291: fcomp   st(1)
0x4E9293: fnstsw  ax
0x4E9295: test    ah, 41h
0x4E9298: jnz     short loc_4E92A4
0x4E929A: fstp    [esp+34h+var_1C]
0x4E929E: mov     [esp+34h+var_18], ecx
0x4E92A2: jmp     short loc_4E92A6
0x4E92A4: fstp    st
0x4E92A6: add     ebp, 1
0x4E92A9: sub     [esp+34h+var_8], 1
0x4E92AE: jnz     short loc_4E9250
0x4E92B0: mov     edx, [esp+34h+var_14]
0x4E92B4: mov     [esp+34h+var_10], ebp
0x4E92B8: mov     [esp+34h+var_4], edx
0x4E92BC: jmp     short loc_4E92C4
0x4E92BE: align 10h
0x4E92C0: mov     ebp, [esp+34h+var_10]
0x4E92C4: push    ebx
0x4E92C5: push    ebp
0x4E92C6: call    sub_4EF1D0
0x4E92CB: mov     ebp, eax
0x4E92CD: mov     eax, [esi]
0x4E92CF: mov     edx, [eax+4]
0x4E92D2: add     esp, 8
0x4E92D5: push    ebp
0x4E92D6: mov     ecx, esi
0x4E92D8: mov     [esp+38h+var_8], 0
0x4E92E0: call    edx
0x4E92E2: mov     ecx, [esi+8]
0x4E92E5: mov     edi, [ecx+eax*4]
0x4E92E8: test    edi, edi
0x4E92EA: jz      short loc_4E9311
0x4E92EC: lea     esp, [esp+0]
0x4E92F0: mov     eax, [edi+4]
0x4E92F3: mov     edx, [esi]
0x4E92F5: mov     edx, [edx+8]
0x4E92F8: push    eax
0x4E92F9: push    ebp
0x4E92FA: mov     ecx, esi
0x4E92FC: call    edx
0x4E92FE: test    al, al
0x4E9300: jnz     short loc_4E930A
0x4E9302: mov     edi, [edi]
0x4E9304: test    edi, edi
0x4E9306: jnz     short loc_4E92F0
0x4E9308: jmp     short loc_4E9311
0x4E930A: mov     eax, [edi+8]
0x4E930D: mov     [esp+34h+var_8], eax
0x4E9311: mov     edx, [esp+34h+var_8]
0x4E9315: mov     eax, [esp+34h+arg_0]
0x4E9319: lea     ecx, [esp+34h+var_20]
0x4E931D: push    ecx
0x4E931E: mov     ecx, [esp+38h+var_C]
0x4E9322: push    edx
0x4E9323: push    eax
0x4E9324: call    sub_4E8DB0
0x4E9329: mov     ecx, eax
0x4E932B: test    ecx, ecx
0x4E932D: jz      short loc_4E934C
0x4E932F: fld     [esp+34h+var_20]
0x4E9333: fld     [esp+34h+var_1C]
0x4E9337: fcomp   st(1)
0x4E9339: fnstsw  ax
0x4E933B: test    ah, 41h
0x4E933E: jnz     short loc_4E934A
0x4E9340: fstp    [esp+34h+var_1C]
0x4E9344: mov     [esp+34h+var_18], ecx
0x4E9348: jmp     short loc_4E934C
0x4E934A: fstp    st
0x4E934C: add     ebx, 1
0x4E934F: sub     [esp+34h+var_4], 1
0x4E9354: jnz     loc_4E92C0
0x4E935A: mov     ecx, [esp+34h+var_14]
0x4E935E: mov     [esp+34h+var_8], ecx
0x4E9362: mov     edx, [esp+34h+var_10]
0x4E9366: push    ebx
0x4E9367: push    edx
0x4E9368: call    sub_4EF1D0
0x4E936D: mov     ebp, eax
0x4E936F: mov     eax, [esi]
0x4E9371: mov     edx, [eax+4]
0x4E9374: add     esp, 8
0x4E9377: push    ebp
0x4E9378: mov     ecx, esi
0x4E937A: mov     [esp+38h+var_4], 0
0x4E9382: call    edx
0x4E9384: mov     ecx, [esi+8]
0x4E9387: mov     edi, [ecx+eax*4]
0x4E938A: test    edi, edi
0x4E938C: jz      short loc_4E93B1
0x4E938E: mov     edi, edi
0x4E9390: mov     eax, [edi+4]
0x4E9393: mov     edx, [esi]
0x4E9395: mov     edx, [edx+8]
0x4E9398: push    eax
0x4E9399: push    ebp
0x4E939A: mov     ecx, esi
0x4E939C: call    edx
0x4E939E: test    al, al
0x4E93A0: jnz     short loc_4E93AA
0x4E93A2: mov     edi, [edi]
0x4E93A4: test    edi, edi
0x4E93A6: jnz     short loc_4E9390
0x4E93A8: jmp     short loc_4E93B1
0x4E93AA: mov     eax, [edi+8]
0x4E93AD: mov     [esp+34h+var_4], eax
0x4E93B1: mov     edx, [esp+34h+var_4]
0x4E93B5: mov     eax, [esp+34h+arg_0]
0x4E93B9: lea     ecx, [esp+34h+var_20]
0x4E93BD: push    ecx
0x4E93BE: mov     ecx, [esp+38h+var_C]
0x4E93C2: push    edx
0x4E93C3: push    eax
0x4E93C4: call    sub_4E8DB0
0x4E93C9: mov     ecx, eax
0x4E93CB: test    ecx, ecx
0x4E93CD: jz      short loc_4E93EC
0x4E93CF: fld     [esp+34h+var_20]
0x4E93D3: fld     [esp+34h+var_1C]
0x4E93D7: fcomp   st(1)
0x4E93D9: fnstsw  ax
0x4E93DB: test    ah, 41h
0x4E93DE: jnz     short loc_4E93EA
0x4E93E0: fstp    [esp+34h+var_1C]
0x4E93E4: mov     [esp+34h+var_18], ecx
0x4E93E8: jmp     short loc_4E93EC
0x4E93EA: fstp    st
0x4E93EC: mov     eax, 1
0x4E93F1: sub     [esp+34h+var_10], eax
0x4E93F5: sub     [esp+34h+var_8], eax
0x4E93F9: jnz     loc_4E9362
0x4E93FF: mov     ecx, [esp+34h+var_14]
0x4E9403: mov     [esp+34h+var_8], ecx
0x4E9407: mov     edx, [esp+34h+var_10]
0x4E940B: push    ebx
0x4E940C: push    edx
0x4E940D: call    sub_4EF1D0
0x4E9412: mov     ebp, eax
0x4E9414: mov     eax, [esi]
0x4E9416: mov     edx, [eax+4]
0x4E9419: add     esp, 8
0x4E941C: push    ebp
0x4E941D: mov     ecx, esi
0x4E941F: mov     [esp+38h+var_4], 0
0x4E9427: call    edx
0x4E9429: mov     ecx, [esi+8]
0x4E942C: mov     edi, [ecx+eax*4]
0x4E942F: test    edi, edi
0x4E9431: jz      short loc_4E9454
0x4E9433: mov     eax, [edi+4]
0x4E9436: mov     edx, [esi]
0x4E9438: mov     edx, [edx+8]
0x4E943B: push    eax
0x4E943C: push    ebp
0x4E943D: mov     ecx, esi
0x4E943F: call    edx
0x4E9441: test    al, al
0x4E9443: jnz     short loc_4E944D
0x4E9445: mov     edi, [edi]
0x4E9447: test    edi, edi
0x4E9449: jnz     short loc_4E9433
0x4E944B: jmp     short loc_4E9454
0x4E944D: mov     eax, [edi+8]
0x4E9450: mov     [esp+34h+var_4], eax
0x4E9454: mov     edx, [esp+34h+var_4]
0x4E9458: mov     eax, [esp+34h+arg_0]
0x4E945C: lea     ecx, [esp+34h+var_20]
0x4E9460: push    ecx
0x4E9461: mov     ecx, [esp+38h+var_C]
0x4E9465: push    edx
0x4E9466: push    eax
0x4E9467: call    sub_4E8DB0
0x4E946C: mov     ecx, eax
0x4E946E: test    ecx, ecx
0x4E9470: jz      short loc_4E948F
0x4E9472: fld     [esp+34h+var_20]
0x4E9476: fld     [esp+34h+var_1C]
0x4E947A: fcomp   st(1)
0x4E947C: fnstsw  ax
0x4E947E: test    ah, 41h
0x4E9481: jnz     short loc_4E948D
0x4E9483: fstp    [esp+34h+var_1C]
0x4E9487: mov     [esp+34h+var_18], ecx
0x4E948B: jmp     short loc_4E948F
0x4E948D: fstp    st
0x4E948F: sub     ebx, 1
0x4E9492: sub     [esp+34h+var_8], 1
0x4E9497: jnz     loc_4E9407
0x4E949D: mov     ebp, [esp+34h+var_10]
0x4E94A1: mov     edi, [esp+34h+arg_0]
0x4E94A5: jmp     loc_4E9212
0x4E94AA: mov     eax, [esp+34h+var_18]
0x4E94AE: pop     edi
0x4E94AF: pop     ebp
0x4E94B0: pop     ebx
0x4E94B1: pop     esi
0x4E94B2: add     esp, 24h
0x4E94B5: retn    4
