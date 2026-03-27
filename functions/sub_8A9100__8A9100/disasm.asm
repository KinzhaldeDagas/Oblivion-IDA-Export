0x8A9100: sub     esp, 88h
0x8A9106: mov     eax, ds:0B30AACh
0x8A910B: xor     eax, esp
0x8A910D: mov     [esp+88h+var_4], eax
0x8A9114: push    ebx
0x8A9115: push    esi
0x8A9116: mov     esi, [esp+90h+arg_0]
0x8A911D: push    edi
0x8A911E: mov     edi, ecx
0x8A9120: mov     eax, [edi]
0x8A9122: push    eax
0x8A9123: lea     ecx, [esp+98h+var_84]
0x8A9127: push    offset a0x08x; "0x%08X"
0x8A912C: push    ecx
0x8A912D: call    __sprintf
0x8A9132: lea     edx, [esp+0A0h+var_84]
0x8A9136: push    edx; int
0x8A9137: push    offset aColfilter; "COLFILTER"
0x8A913C: call    TESOutput_PrintLabeledString
0x8A9141: movzx   ebx, word ptr [esi+0Ah]
0x8A9145: mov     dword ptr [esp+0A8h+var_88], eax
0x8A9149: movzx   eax, word ptr [esi+8]
0x8A914D: add     esp, 14h
0x8A9150: cmp     ebx, eax
0x8A9152: jb      short loc_8A9162
0x8A9154: movzx   ecx, word ptr [esi+0Eh]
0x8A9158: add     ecx, ebx
0x8A915A: push    ecx
0x8A915B: mov     ecx, esi
0x8A915D: call    NiTArray_SetSize
0x8A9162: lea     edx, [esp+94h+var_88]
0x8A9166: push    edx
0x8A9167: push    ebx
0x8A9168: mov     ecx, esi
0x8A916A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A916F: movzx   eax, word ptr [edi+2]
0x8A9173: push    eax
0x8A9174: lea     ecx, [esp+98h+var_84]
0x8A9178: push    offset a0xX; "0x%X"
0x8A917D: push    ecx
0x8A917E: call    __sprintf
0x8A9183: lea     edx, [esp+0A0h+var_84]
0x8A9187: push    edx; int
0x8A9188: push    offset aGroup; "-GROUP"
0x8A918D: call    TESOutput_PrintLabeledString
0x8A9192: movzx   ebx, word ptr [esi+0Ah]
0x8A9196: mov     dword ptr [esp+0A8h+var_88], eax
0x8A919A: movzx   eax, word ptr [esi+8]
0x8A919E: add     esp, 14h
0x8A91A1: cmp     ebx, eax
0x8A91A3: jb      short loc_8A91B3
0x8A91A5: movzx   ecx, word ptr [esi+0Eh]
0x8A91A9: add     ecx, ebx
0x8A91AB: push    ecx
0x8A91AC: mov     ecx, esi
0x8A91AE: call    NiTArray_SetSize
0x8A91B3: lea     edx, [esp+94h+var_88]
0x8A91B7: push    edx
0x8A91B8: push    ebx
0x8A91B9: mov     ecx, esi
0x8A91BB: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A91C0: mov     eax, [edi]
0x8A91C2: and     eax, 3Fh
0x8A91C5: mov     eax, ds:0B2EB40h[eax*4]
0x8A91CC: push    eax; int
0x8A91CD: push    offset aLayer; "-LAYER"
0x8A91D2: call    TESOutput_PrintLabeledString
0x8A91D7: movzx   ebx, word ptr [esi+0Ah]
0x8A91DB: movzx   ecx, word ptr [esi+8]
0x8A91DF: add     esp, 8
0x8A91E2: cmp     ebx, ecx
0x8A91E4: mov     dword ptr [esp+94h+var_88], eax
0x8A91E8: jb      short loc_8A91F8
0x8A91EA: movzx   edx, word ptr [esi+0Eh]
0x8A91EE: add     edx, ebx
0x8A91F0: push    edx
0x8A91F1: mov     ecx, esi
0x8A91F3: call    NiTArray_SetSize
0x8A91F8: lea     eax, [esp+94h+var_88]
0x8A91FC: push    eax
0x8A91FD: push    ebx
0x8A91FE: mov     ecx, esi
0x8A9200: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A9205: mov     ecx, [edi]
0x8A9207: shr     ecx, 0Fh
0x8A920A: and     cl, 1
0x8A920D: mov     [esp+94h+var_88], cl
0x8A9211: mov     edx, dword ptr [esp+94h+var_88]
0x8A9215: push    edx; char
0x8A9216: push    offset aLink; "-LINK"
0x8A921B: call    TESOutput_PrintLabeledBool
0x8A9220: movzx   ebx, word ptr [esi+0Ah]
0x8A9224: mov     dword ptr [esp+9Ch+var_88], eax
0x8A9228: movzx   eax, word ptr [esi+8]
0x8A922C: add     esp, 8
0x8A922F: cmp     ebx, eax
0x8A9231: jb      short loc_8A9241
0x8A9233: movzx   ecx, word ptr [esi+0Eh]
0x8A9237: add     ecx, ebx
0x8A9239: push    ecx
0x8A923A: mov     ecx, esi
0x8A923C: call    NiTArray_SetSize
0x8A9241: lea     edx, [esp+94h+var_88]
0x8A9245: push    edx
0x8A9246: push    ebx
0x8A9247: mov     ecx, esi
0x8A9249: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A924E: mov     eax, [edi]
0x8A9250: mov     ecx, eax
0x8A9252: and     cl, 3Fh
0x8A9255: cmp     cl, 8
0x8A9258: jnz     short loc_8A929A
0x8A925A: shr     eax, 8
0x8A925D: and     eax, 1Fh
0x8A9260: mov     eax, ds:0B2EBC0h[eax*4]
0x8A9267: push    eax; int
0x8A9268: push    offset aPart; "-PART"
0x8A926D: call    TESOutput_PrintLabeledString
0x8A9272: movzx   ebx, word ptr [esi+0Ah]
0x8A9276: movzx   edx, word ptr [esi+8]
0x8A927A: add     esp, 8
0x8A927D: cmp     ebx, edx
0x8A927F: mov     dword ptr [esp+94h+var_88], eax
0x8A9283: jb      short loc_8A9293
0x8A9285: movzx   eax, word ptr [esi+0Eh]
0x8A9289: add     eax, ebx
0x8A928B: push    eax
0x8A928C: mov     ecx, esi
0x8A928E: call    NiTArray_SetSize
0x8A9293: lea     ecx, [esp+94h+var_88]
0x8A9297: push    ecx
0x8A9298: jmp     short loc_8A92DB
0x8A929A: mov     edx, eax
0x8A929C: shr     edx, 0Fh
0x8A929F: test    dl, 1
0x8A92A2: jz      short loc_8A92E3
0x8A92A4: shr     eax, 8
0x8A92A7: and     eax, 1Fh
0x8A92AA: push    eax; int
0x8A92AB: push    offset aPart; "-PART"
0x8A92B0: call    TESOutput_PrintLabeledUnsignedInt
0x8A92B5: movzx   ebx, word ptr [esi+0Ah]
0x8A92B9: mov     dword ptr [esp+9Ch+var_88], eax
0x8A92BD: movzx   eax, word ptr [esi+8]
0x8A92C1: add     esp, 8
0x8A92C4: cmp     ebx, eax
0x8A92C6: jb      short loc_8A92D6
0x8A92C8: movzx   ecx, word ptr [esi+0Eh]
0x8A92CC: add     ecx, ebx
0x8A92CE: push    ecx
0x8A92CF: mov     ecx, esi
0x8A92D1: call    NiTArray_SetSize
0x8A92D6: lea     edx, [esp+94h+var_88]
0x8A92DA: push    edx
0x8A92DB: push    ebx
0x8A92DC: mov     ecx, esi
0x8A92DE: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A92E3: mov     eax, [edi]
0x8A92E5: shr     eax, 0Eh
0x8A92E8: and     al, 1
0x8A92EA: mov     [esp+94h+var_88], al
0x8A92EE: mov     ecx, dword ptr [esp+94h+var_88]
0x8A92F2: push    ecx; char
0x8A92F3: push    offset aNocol; "-NOCOL"
0x8A92F8: call    TESOutput_PrintLabeledBool
0x8A92FD: movzx   ebx, word ptr [esi+0Ah]
0x8A9301: movzx   edx, word ptr [esi+8]
0x8A9305: add     esp, 8
0x8A9308: cmp     ebx, edx
0x8A930A: mov     dword ptr [esp+94h+var_88], eax
0x8A930E: jb      short loc_8A931E
0x8A9310: movzx   eax, word ptr [esi+0Eh]
0x8A9314: add     eax, ebx
0x8A9316: push    eax
0x8A9317: mov     ecx, esi
0x8A9319: call    NiTArray_SetSize
0x8A931E: lea     ecx, [esp+94h+var_88]
0x8A9322: push    ecx
0x8A9323: push    ebx
0x8A9324: mov     ecx, esi
0x8A9326: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A932B: mov     edx, [edi]
0x8A932D: shr     edx, 0Dh
0x8A9330: and     dl, 1
0x8A9333: mov     [esp+94h+var_88], dl
0x8A9337: mov     eax, dword ptr [esp+94h+var_88]
0x8A933B: push    eax; char
0x8A933C: push    offset aScaled; "-SCALED"
0x8A9341: call    TESOutput_PrintLabeledBool
0x8A9346: movzx   edi, word ptr [esi+0Ah]
0x8A934A: movzx   ecx, word ptr [esi+8]
0x8A934E: add     esp, 8
0x8A9351: cmp     edi, ecx
0x8A9353: mov     dword ptr [esp+94h+var_88], eax
0x8A9357: jb      short loc_8A9367
0x8A9359: movzx   edx, word ptr [esi+0Eh]
0x8A935D: add     edx, edi
0x8A935F: push    edx
0x8A9360: mov     ecx, esi
0x8A9362: call    NiTArray_SetSize
0x8A9367: lea     eax, [esp+94h+var_88]
0x8A936B: push    eax
0x8A936C: push    edi
0x8A936D: mov     ecx, esi
0x8A936F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8A9374: mov     ecx, [esp+94h+var_4]
0x8A937B: pop     edi
0x8A937C: pop     esi
0x8A937D: pop     ebx
0x8A937E: xor     ecx, esp
0x8A9380: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A9385: add     esp, 88h
0x8A938B: retn    4
