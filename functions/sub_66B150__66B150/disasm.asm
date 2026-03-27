0x66B150: push    0FFFFFFFFh
0x66B152: push    offset SEH_66B150
0x66B157: mov     eax, large fs:0
0x66B15D: push    eax
0x66B15E: push    ecx
0x66B15F: push    ebx
0x66B160: push    ebp
0x66B161: push    esi
0x66B162: push    edi; int
0x66B163: mov     eax, ds:0B30AACh
0x66B168: xor     eax, esp
0x66B16A: push    eax; int
0x66B16B: lea     eax, [esp+24h+var_C]
0x66B16F: mov     large fs:0, eax
0x66B175: mov     esi, ecx
0x66B177: mov     [esp+24h+var_10], esi
0x66B17B: mov     dword ptr [esi], offset ??_7PlayerCharacter@@6BPlayerCharacter@@@; const PlayerCharacter::`vftable'{for `PlayerCharacter'}
0x66B181: mov     dword ptr [esi+18h], offset ??_7PlayerCharacter@@6BTESChildCell@@@; const PlayerCharacter::`vftable'{for `TESChildCell'}
0x66B188: mov     dword ptr [esi+5Ch], offset ??_7PlayerCharacter@@6BMagicCaster@@@; const PlayerCharacter::`vftable'{for `MagicCaster'}
0x66B18F: mov     dword ptr [esi+68h], offset ??_7PlayerCharacter@@6BMagicTarget@@@; const PlayerCharacter::`vftable'{for `MagicTarget'}
0x66B196: mov     ebx, 6
0x66B19B: mov     [esp+24h+var_4], ebx
0x66B19F: call    sub_65E800
0x66B1A4: xor     ebp, ebp
0x66B1A6: push    ebp; char
0x66B1A7: mov     ecx, esi; int
0x66B1A9: call    sub_668D00
0x66B1AE: mov     ecx, [esi+5ACh]
0x66B1B4: cmp     ecx, ebp
0x66B1B6: jz      short loc_66B1BD
0x66B1B8: call    BSSimpleList_Clear
0x66B1BD: mov     eax, [esi+5ACh]
0x66B1C3: push    eax
0x66B1C4: call    FormHeapFree
0x66B1C9: mov     ecx, [esi+58h]
0x66B1CC: add     esp, 4
0x66B1CF: cmp     ecx, ebp
0x66B1D1: jz      short loc_66B1DB
0x66B1D3: mov     eax, [ecx]
0x66B1D5: mov     edx, [eax]
0x66B1D7: push    1
0x66B1D9: call    edx
0x66B1DB: mov     eax, [esi+5B0h]
0x66B1E1: cmp     eax, ebp
0x66B1E3: mov     [esi+58h], ebp
0x66B1E6: jz      short loc_66B1F1
0x66B1E8: push    eax
0x66B1E9: call    FormHeapFree
0x66B1EE: add     esp, 4
0x66B1F1: mov     ecx, [esi+1F8h]
0x66B1F7: cmp     ecx, ebp
0x66B1F9: jz      short loc_66B20F
0x66B1FB: call    BSSimpleList_Clear
0x66B200: mov     eax, [esi+1F8h]
0x66B206: push    eax
0x66B207: call    FormHeapFree
0x66B20C: add     esp, 4
0x66B20F: mov     ecx, [esi+1FCh]
0x66B215: cmp     ecx, ebp
0x66B217: jz      short loc_66B22D
0x66B219: call    BSSimpleList_Clear
0x66B21E: mov     eax, [esi+1FCh]
0x66B224: push    eax
0x66B225: call    FormHeapFree
0x66B22A: add     esp, 4
0x66B22D: mov     edi, [esi+1F0h]
0x66B233: cmp     edi, ebp
0x66B235: jz      short loc_66B247
0x66B237: mov     ecx, edi
0x66B239: call    sub_532180
0x66B23E: push    edi
0x66B23F: call    FormHeapFree
0x66B244: add     esp, 4
0x66B247: mov     edi, [esi+1F4h]
0x66B24D: cmp     edi, ebp
0x66B24F: jz      short loc_66B269
0x66B251: mov     ecx, edi; this
0x66B253: call    sub_535680
0x66B258: movzx   eax, byte ptr [edi-1]
0x66B25C: sub     edi, eax
0x66B25E: push    edi; void *
0x66B25F: mov     ecx, offset FormHeap
0x66B264: call    MemoryHeap_Free_checked
0x66B269: mov     edi, [esi+574h]
0x66B26F: cmp     edi, ebp
0x66B271: jz      short loc_66B295
0x66B273: lea     ecx, [edi+4]
0x66B276: push    ecx; lpAddend
0x66B277: call    dword ptr ds:0A2807Ch
0x66B27D: test    eax, eax
0x66B27F: jnz     short loc_66B28F
0x66B281: cmp     edi, ebp
0x66B283: jz      short loc_66B28F
0x66B285: mov     edx, [edi]
0x66B287: mov     eax, [edx]
0x66B289: push    1
0x66B28B: mov     ecx, edi
0x66B28D: call    eax
0x66B28F: mov     [esi+574h], ebp
0x66B295: mov     ecx, [esi+624h]
0x66B29B: cmp     ecx, ebp
0x66B29D: jz      short loc_66B2A6
0x66B29F: push    1
0x66B2A1: call    sub_419F10
0x66B2A6: cmp     [esi+1E4h], ebp
0x66B2AC: jz      short loc_66B30A
0x66B2AE: mov     edi, edi
0x66B2B0: mov     eax, [esi+1E4h]
0x66B2B6: cmp     [eax+4], ebp
0x66B2B9: jnz     short loc_66B2BF
0x66B2BB: cmp     [eax], ebp
0x66B2BD: jz      short loc_66B2FB
0x66B2BF: mov     eax, [eax]
0x66B2C1: cmp     eax, ebp
0x66B2C3: jz      short loc_66B2CF
0x66B2C5: mov     edx, [eax]
0x66B2C7: mov     ecx, eax
0x66B2C9: mov     eax, [edx]
0x66B2CB: push    1
0x66B2CD: call    eax
0x66B2CF: mov     eax, [esi+1E4h]
0x66B2D5: mov     ecx, [eax+4]
0x66B2D8: cmp     ecx, ebp
0x66B2DA: jz      short loc_66B2F1
0x66B2DC: mov     edx, [ecx+4]
0x66B2DF: mov     [eax+4], edx
0x66B2E2: mov     edx, [ecx]
0x66B2E4: push    ecx
0x66B2E5: mov     [eax], edx
0x66B2E7: call    FormHeapFree
0x66B2EC: add     esp, 4
0x66B2EF: jmp     short loc_66B2F3
0x66B2F1: mov     [eax], ebp
0x66B2F3: cmp     [esi+1E4h], ebp
0x66B2F9: jnz     short loc_66B2B0
0x66B2FB: mov     eax, [esi+1E4h]
0x66B301: push    eax
0x66B302: call    FormHeapFree
0x66B307: add     esp, 4
0x66B30A: cmp     [esi+5E8h], ebp
0x66B310: jz      short loc_66B32E
0x66B312: mov     eax, [esi+5E8h]
0x66B318: mov     edi, [eax+4]
0x66B31B: push    eax
0x66B31C: call    FormHeapFree
0x66B321: add     esp, 4
0x66B324: cmp     edi, ebp
0x66B326: mov     [esi+5E8h], edi
0x66B32C: jnz     short loc_66B312
0x66B32E: mov     [esi+5E4h], ebp
0x66B334: cmp     [esi+5F0h], ebp
0x66B33A: jz      short loc_66B35C
0x66B33C: lea     esp, [esp+0]
0x66B340: mov     eax, [esi+5F0h]
0x66B346: mov     edi, [eax+4]
0x66B349: push    eax
0x66B34A: call    FormHeapFree
0x66B34F: add     esp, 4
0x66B352: cmp     edi, ebp
0x66B354: mov     [esi+5F0h], edi
0x66B35A: jnz     short loc_66B340
0x66B35C: mov     [esi+5ECh], ebp
0x66B362: cmp     [esi+5FCh], ebp
0x66B368: jz      short loc_66B38C
0x66B36A: lea     ebx, [ebx+0]
0x66B370: mov     eax, [esi+5FCh]
0x66B376: mov     edi, [eax+4]
0x66B379: push    eax
0x66B37A: call    FormHeapFree
0x66B37F: add     esp, 4
0x66B382: cmp     edi, ebp
0x66B384: mov     [esi+5FCh], edi
0x66B38A: jnz     short loc_66B370
0x66B38C: mov     [esi+5F8h], ebp
0x66B392: mov     ecx, [esi+5E0h]
0x66B398: cmp     ecx, ebp
0x66B39A: jz      short loc_66B3A4
0x66B39C: mov     eax, [ecx]
0x66B39E: mov     edx, [eax]
0x66B3A0: push    1
0x66B3A2: call    edx
0x66B3A4: mov     eax, ds:0B33398h
0x66B3A9: cmp     eax, ebp
0x66B3AB: jz      short loc_66B3C7
0x66B3AD: cmp     byte ptr [eax], 0
0x66B3B0: jnz     short loc_66B3C7
0x66B3B2: cmp     byte ptr [eax+1], 0
0x66B3B6: jnz     short loc_66B3C7
0x66B3B8: push    offset aPlayercharac_1; "PlayerCharacter::Set3D( 0 ) called befo"...
0x66B3BD: call    PrintError
0x66B3C2: jmp     loc_66B469
0x66B3C7: push    ebp
0x66B3C8: mov     ecx, esi
0x66B3CA: call    Character_Set3D
0x66B3CF: mov     edi, [esi+5C8h]
0x66B3D5: cmp     edi, ebp
0x66B3D7: jz      short loc_66B3E9
0x66B3D9: mov     ecx, edi
0x66B3DB: call    sub_47AB80
0x66B3E0: push    edi
0x66B3E1: call    FormHeapFree
0x66B3E6: add     esp, 4
0x66B3E9: mov     edi, [esi+5CCh]
0x66B3EF: cmp     edi, ebp
0x66B3F1: mov     [esi+5C8h], ebp
0x66B3F7: jz      short loc_66B409
0x66B3F9: mov     ecx, edi; this
0x66B3FB: call    DisposeActorAnimData
0x66B400: push    edi
0x66B401: call    FormHeapFree
0x66B406: add     esp, 4
0x66B409: mov     [esi+5CCh], ebp
0x66B40F: mov     edi, [esi+5D0h]
0x66B415: cmp     edi, ebp
0x66B417: jz      short loc_66B43B
0x66B419: lea     eax, [edi+4]
0x66B41C: push    eax; lpAddend
0x66B41D: call    dword ptr ds:0A2807Ch
0x66B423: test    eax, eax
0x66B425: jnz     short loc_66B435
0x66B427: cmp     edi, ebp
0x66B429: jz      short loc_66B435
0x66B42B: mov     edx, [edi]
0x66B42D: mov     eax, [edx]
0x66B42F: push    1
0x66B431: mov     ecx, edi
0x66B433: call    eax
0x66B435: mov     [esi+5D0h], ebp
0x66B43B: mov     ecx, ds:0B36BB8h
0x66B441: push    1
0x66B443: push    1
0x66B445: push    ecx
0x66B446: mov     ecx, ds:0B33A1Ch
0x66B44C: mov     ds:0B3BB0Ch, ebp
0x66B452: mov     ds:0B3BB10h, ebp
0x66B458: mov     ds:0B3BB14h, ebp
0x66B45E: call    QueuedModelLoader_RemoveModel
0x66B463: push    ebp
0x66B464: call    sub_578CF0
0x66B469: add     esp, 4
0x66B46C: cmp     [esi+708h], ebp
0x66B472: jz      short loc_66B490
0x66B474: mov     eax, [esi+708h]
0x66B47A: mov     edi, [eax+4]
0x66B47D: push    eax
0x66B47E: call    FormHeapFree
0x66B483: add     esp, 4
0x66B486: cmp     edi, ebp
0x66B488: mov     [esi+708h], edi
0x66B48E: jnz     short loc_66B474
0x66B490: mov     [esi+704h], ebp
0x66B496: mov     eax, [esi+70Ch]
0x66B49C: cmp     eax, ebp
0x66B49E: jz      short loc_66B4AC
0x66B4A0: mov     ecx, ds:0B33B00h
0x66B4A6: push    eax
0x66B4A7: call    sub_452230
0x66B4AC: mov     eax, [esi+730h]
0x66B4B2: cmp     eax, ebp
0x66B4B4: jz      short loc_66B4F2
0x66B4B6: xor     ecx, ecx
0x66B4B8: cmp     [eax+0Ah], bp
0x66B4BC: jbe     short loc_66B4D2
0x66B4BE: mov     edi, edi
0x66B4C0: mov     edi, [eax+4]
0x66B4C3: movzx   edx, cx
0x66B4C6: add     ecx, 1
0x66B4C9: mov     [edi+edx*4], ebp
0x66B4CC: cmp     cx, [eax+0Ah]
0x66B4D0: jb      short loc_66B4C0
0x66B4D2: mov     [eax+0Ah], bp
0x66B4D6: mov     [eax+0Ch], bp
0x66B4DA: mov     ecx, [esi+730h]
0x66B4E0: cmp     ecx, ebp
0x66B4E2: jz      short loc_66B4EC
0x66B4E4: mov     eax, [ecx]
0x66B4E6: mov     edx, [eax]
0x66B4E8: push    1
0x66B4EA: call    edx
0x66B4EC: mov     [esi+730h], ebp
0x66B4F2: mov     edi, [esi+764h]
0x66B4F8: cmp     edi, ebp
0x66B4FA: jz      short loc_66B518
0x66B4FC: mov     ecx, edi; this
0x66B4FE: call    sub_6B73E0
0x66B503: push    edi
0x66B504: call    FormHeapFree
0x66B509: add     esp, 4
0x66B50C: mov     [esi+764h], ebp
0x66B512: mov     [esi+760h], ebp
0x66B518: lea     edi, [esi+768h]
0x66B51E: mov     edi, edi
0x66B520: mov     ecx, [edi]
0x66B522: cmp     ecx, ebp
0x66B524: jz      short loc_66B549
0x66B526: call    sub_6B7240
0x66B52B: mov     ebp, [edi]
0x66B52D: test    ebp, ebp
0x66B52F: jz      short loc_66B541
0x66B531: mov     ecx, ebp; this
0x66B533: call    sub_6B73E0
0x66B538: push    ebp
0x66B539: call    FormHeapFree
0x66B53E: add     esp, 4
0x66B541: mov     dword ptr [edi], 0
0x66B547: xor     ebp, ebp
0x66B549: add     edi, 4
0x66B54C: sub     ebx, 1
0x66B54F: jnz     short loc_66B520
0x66B551: mov     ecx, esi
0x66B553: call    sub_663980
0x66B558: cmp     [esi+784h], ebp
0x66B55E: jz      short loc_66B57C
0x66B560: mov     eax, [esi+784h]
0x66B566: mov     edi, [eax+4]
0x66B569: push    eax
0x66B56A: call    FormHeapFree
0x66B56F: add     esp, 4
0x66B572: cmp     edi, ebp
0x66B574: mov     [esi+784h], edi
0x66B57A: jnz     short loc_66B560
0x66B57C: mov     ebx, ds:0A2807Ch
0x66B582: mov     [esi+780h], ebp
0x66B588: mov     edi, [esi+798h]
0x66B58E: cmp     edi, ebp
0x66B590: jz      short loc_66B5B0
0x66B592: lea     eax, [edi+4]
0x66B595: push    eax; lpAddend
0x66B596: call    ebx ; InterlockedDecrement
0x66B598: test    eax, eax
0x66B59A: jnz     short loc_66B5AA
0x66B59C: cmp     edi, ebp
0x66B59E: jz      short loc_66B5AA
0x66B5A0: mov     edx, [edi]
0x66B5A2: mov     eax, [edx]
0x66B5A4: push    1
0x66B5A6: mov     ecx, edi
0x66B5A8: call    eax
0x66B5AA: mov     [esi+798h], ebp
0x66B5B0: mov     edi, [esi+79Ch]
0x66B5B6: cmp     edi, ebp
0x66B5B8: jz      short loc_66B5D8
0x66B5BA: lea     ecx, [edi+4]
0x66B5BD: push    ecx; lpAddend
0x66B5BE: call    ebx ; InterlockedDecrement
0x66B5C0: test    eax, eax
0x66B5C2: jnz     short loc_66B5D2
0x66B5C4: cmp     edi, ebp
0x66B5C6: jz      short loc_66B5D2
0x66B5C8: mov     edx, [edi]
0x66B5CA: mov     eax, [edx]
0x66B5CC: push    1
0x66B5CE: mov     ecx, edi
0x66B5D0: call    eax
0x66B5D2: mov     [esi+79Ch], ebp
0x66B5D8: mov     edi, ds:0B3BB60h
0x66B5DE: cmp     edi, ebp
0x66B5E0: jz      short loc_66B600
0x66B5E2: lea     ecx, [edi+4]
0x66B5E5: push    ecx; lpAddend
0x66B5E6: call    ebx ; InterlockedDecrement
0x66B5E8: test    eax, eax
0x66B5EA: jnz     short loc_66B5FA
0x66B5EC: cmp     edi, ebp
0x66B5EE: jz      short loc_66B5FA
0x66B5F0: mov     edx, [edi]
0x66B5F2: mov     eax, [edx]
0x66B5F4: push    1
0x66B5F6: mov     ecx, edi
0x66B5F8: call    eax
0x66B5FA: mov     ds:0B3BB60h, ebp
0x66B600: push    ebp
0x66B601: push    offset Vector3_InitValue?
0x66B606: push    offset Vector3_InitValue?
0x66B60B: mov     ecx, offset word_B3BB4C
0x66B610: call    sub_959D60
0x66B615: mov     edi, [esi+79Ch]
0x66B61B: cmp     edi, ebp
0x66B61D: mov     byte ptr [esp+24h+var_4], 5
0x66B622: jz      short loc_66B63C
0x66B624: lea     ecx, [edi+4]
0x66B627: push    ecx; lpAddend
0x66B628: call    ebx ; InterlockedDecrement
0x66B62A: test    eax, eax
0x66B62C: jnz     short loc_66B63C
0x66B62E: cmp     edi, ebp
0x66B630: jz      short loc_66B63C
0x66B632: mov     edx, [edi]
0x66B634: mov     eax, [edx]
0x66B636: push    1
0x66B638: mov     ecx, edi
0x66B63A: call    eax
0x66B63C: mov     edi, [esi+798h]
0x66B642: cmp     edi, ebp
0x66B644: mov     byte ptr [esp+24h+var_4], 4
0x66B649: jz      short loc_66B663
0x66B64B: lea     ecx, [edi+4]
0x66B64E: push    ecx; lpAddend
0x66B64F: call    ebx ; InterlockedDecrement
0x66B651: test    eax, eax
0x66B653: jnz     short loc_66B663
0x66B655: cmp     edi, ebp
0x66B657: jz      short loc_66B663
0x66B659: mov     edx, [edi]
0x66B65B: mov     eax, [edx]
0x66B65D: push    1
0x66B65F: mov     ecx, edi
0x66B661: call    eax
0x66B663: lea     ecx, [esi+788h]
0x66B669: mov     byte ptr [esp+24h+var_4], 3
0x66B66E: call    ??1?$NiTMap@IE@@UAE@XZ; NiTMap<uint,uchar>::~NiTMap<uint,uchar>(void)
0x66B673: mov     edi, [esi+5D8h]
0x66B679: cmp     edi, ebp
0x66B67B: mov     byte ptr [esp+24h+var_4], 2
0x66B680: jz      short loc_66B69A
0x66B682: lea     ecx, [edi+4]
0x66B685: push    ecx; lpAddend
0x66B686: call    ebx ; InterlockedDecrement
0x66B688: test    eax, eax
0x66B68A: jnz     short loc_66B69A
0x66B68C: cmp     edi, ebp
0x66B68E: jz      short loc_66B69A
0x66B690: mov     edx, [edi]
0x66B692: mov     eax, [edx]
0x66B694: push    1
0x66B696: mov     ecx, edi
0x66B698: call    eax
0x66B69A: mov     edi, [esi+5D0h]
0x66B6A0: cmp     edi, ebp
0x66B6A2: mov     byte ptr [esp+24h+var_4], 1
0x66B6A7: jz      short loc_66B6C1
0x66B6A9: lea     ecx, [edi+4]
0x66B6AC: push    ecx; lpAddend
0x66B6AD: call    ebx ; InterlockedDecrement
0x66B6AF: test    eax, eax
0x66B6B1: jnz     short loc_66B6C1
0x66B6B3: cmp     edi, ebp
0x66B6B5: jz      short loc_66B6C1
0x66B6B7: mov     edx, [edi]
0x66B6B9: mov     eax, [edx]
0x66B6BB: push    1
0x66B6BD: mov     ecx, edi
0x66B6BF: call    eax
0x66B6C1: mov     edi, [esi+574h]
0x66B6C7: cmp     edi, ebp
0x66B6C9: mov     byte ptr [esp+24h+var_4], 0
0x66B6CE: jz      short loc_66B6E8
0x66B6D0: lea     ecx, [edi+4]
0x66B6D3: push    ecx; lpAddend
0x66B6D4: call    ebx ; InterlockedDecrement
0x66B6D6: test    eax, eax
0x66B6D8: jnz     short loc_66B6E8
0x66B6DA: cmp     edi, ebp
0x66B6DC: jz      short loc_66B6E8
0x66B6DE: mov     edx, [edi]
0x66B6E0: mov     eax, [edx]
0x66B6E2: push    1
0x66B6E4: mov     ecx, edi
0x66B6E6: call    eax
0x66B6E8: mov     ecx, esi; int
0x66B6EA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x66B6F2: call    sub_612150
0x66B6F7: mov     ecx, dword ptr [esp+24h+var_C]
0x66B6FB: mov     large fs:0, ecx
0x66B702: pop     ecx
0x66B703: pop     edi
0x66B704: pop     esi
0x66B705: pop     ebp
0x66B706: pop     ebx
0x66B707: add     esp, 10h
0x66B70A: retn
