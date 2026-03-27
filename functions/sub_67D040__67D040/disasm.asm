0x67D040: push    0FFFFFFFFh
0x67D042: push    offset BoundItemEffect_Remove_SEH
0x67D047: mov     eax, large fs:0
0x67D04D: push    eax
0x67D04E: sub     esp, 18h
0x67D051: push    ebx
0x67D052: push    ebp
0x67D053: push    esi
0x67D054: push    edi
0x67D055: mov     eax, ds:0B30AACh
0x67D05A: xor     eax, esp
0x67D05C: push    eax
0x67D05D: lea     eax, [esp+38h+var_C]
0x67D061: mov     large fs:0, eax
0x67D067: mov     [esp+38h+var_14], ecx
0x67D06B: mov     ecx, ds:0B33B00h
0x67D071: xor     ebp, ebp
0x67D073: mov     [esp+38h+var_20], ebp
0x67D077: xor     ebx, ebx
0x67D079: call    sub_45A170
0x67D07E: test    al, al
0x67D080: jz      loc_67D11F
0x67D086: mov     ecx, ds:0B33B00h
0x67D08C: push    4; Size
0x67D08E: lea     eax, [esp+3Ch+Dst]
0x67D092: push    eax; Dst
0x67D093: call    SaveLoad_LoadData
0x67D098: cmp     [esp+38h+Dst], 4B4F4C42h
0x67D0A0: jz      short loc_67D10A
0x67D0A2: mov     eax, ds:0B33B00h
0x67D0A7: mov     esi, [eax+80h]
0x67D0AD: cmp     esi, ebp
0x67D0AF: jz      short loc_67D0EE
0x67D0B1: mov     ecx, [esi]
0x67D0B3: push    ecx; a1
0x67D0B4: call    TESForm_LookupByFormID
0x67D0B9: mov     edx, [esi+5]
0x67D0BC: movzx   ecx, byte ptr [esi+9]
0x67D0C0: add     esp, 4
0x67D0C3: push    edx
0x67D0C4: mov     edx, [eax]
0x67D0C6: push    ecx
0x67D0C7: mov     ecx, eax
0x67D0C9: mov     eax, [edx+0D4h]
0x67D0CF: call    eax
0x67D0D1: mov     ecx, [esi]
0x67D0D3: push    eax
0x67D0D4: push    ecx
0x67D0D5: push    239h
0x67D0DA: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67D0DF: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x67D0E4: call    PrintError
0x67D0E9: add     esp, 1Ch
0x67D0EC: jmp     short loc_67D10A
0x67D0EE: movzx   edx, byte ptr [eax+7Ch]
0x67D0F2: push    edx
0x67D0F3: push    239h
0x67D0F8: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67D0FD: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x67D102: call    PrintError
0x67D107: add     esp, 10h
0x67D10A: mov     ecx, ds:0B33B00h
0x67D110: mov     ebx, [ecx+14h]
0x67D113: push    2; Size
0x67D115: lea     eax, [esp+3Ch+var_20]
0x67D119: push    eax; Dst
0x67D11A: call    SaveLoad_LoadData
0x67D11F: push    2; Size
0x67D121: lea     ecx, [esp+3Ch+var_24]
0x67D125: push    ecx; Dst
0x67D126: mov     ecx, ds:0B33B00h
0x67D12C: call    SaveLoad_LoadData
0x67D131: cmp     [esp+38h+var_24], bp
0x67D136: mov     [esp+38h+var_1C], ebp
0x67D13A: jbe     short loc_67D1B8
0x67D13C: lea     esp, [esp+0]
0x67D140: push    24h ; '$'; Size
0x67D142: call    FormHeapAlloc
0x67D147: add     esp, 4
0x67D14A: mov     [esp+38h+var_10], eax
0x67D14E: cmp     eax, ebp
0x67D150: mov     [esp+38h+var_4], ebp
0x67D154: jz      short loc_67D161
0x67D156: mov     ecx, eax
0x67D158: call    sub_67CBC0
0x67D15D: mov     edi, eax
0x67D15F: jmp     short loc_67D163
0x67D161: xor     edi, edi
0x67D163: mov     ecx, edi
0x67D165: mov     [esp+38h+var_4], 0FFFFFFFFh
0x67D16D: call    sub_67BA90
0x67D172: cmp     edi, ebp
0x67D174: mov     edx, [esp+38h+var_14]
0x67D178: mov     esi, [edx]
0x67D17A: jz      short loc_67D1A4
0x67D17C: cmp     [esi], ebp
0x67D17E: jz      short loc_67D1A2
0x67D180: push    8; Size
0x67D182: call    FormHeapAlloc
0x67D187: add     esp, 4
0x67D18A: cmp     eax, ebp
0x67D18C: jz      short loc_67D197
0x67D18E: mov     ecx, [esi]
0x67D190: mov     [eax], ecx
0x67D192: mov     [eax+4], ebp
0x67D195: jmp     short loc_67D199
0x67D197: xor     eax, eax
0x67D199: mov     edx, [esi+4]
0x67D19C: mov     [eax+4], edx
0x67D19F: mov     [esi+4], eax
0x67D1A2: mov     [esi], edi
0x67D1A4: mov     eax, [esp+38h+var_1C]
0x67D1A8: movzx   ecx, [esp+38h+var_24]
0x67D1AD: add     eax, 1
0x67D1B0: cmp     eax, ecx
0x67D1B2: mov     [esp+38h+var_1C], eax
0x67D1B6: jl      short loc_67D140
0x67D1B8: mov     ecx, ds:0B33B00h
0x67D1BE: call    sub_45A170
0x67D1C3: test    al, al
0x67D1C5: jz      loc_67D2E2
0x67D1CB: mov     ecx, ds:0B33B00h
0x67D1D1: mov     edi, [ecx+80h]
0x67D1D7: cmp     edi, ebp
0x67D1D9: mov     esi, [ecx+14h]
0x67D1DC: jz      loc_67D298
0x67D1E2: mov     edx, [edi]
0x67D1E4: push    edx; a1
0x67D1E5: call    TESForm_LookupByFormID
0x67D1EA: mov     ecx, eax
0x67D1EC: movzx   eax, word ptr [esp+3Ch+var_20]
0x67D1F1: add     eax, ebx
0x67D1F3: add     esp, 4
0x67D1F6: cmp     esi, eax
0x67D1F8: jbe     short loc_67D246
0x67D1FA: mov     edx, [edi+5]
0x67D1FD: movzx   eax, byte ptr [edi+9]
0x67D201: push    edx
0x67D202: mov     edx, [ecx]
0x67D204: push    eax
0x67D205: mov     eax, [edx+0D4h]
0x67D20B: call    eax
0x67D20D: mov     ecx, [edi]
0x67D20F: movzx   edx, word ptr [esp+40h+var_20]
0x67D214: push    eax
0x67D215: push    ecx
0x67D216: push    248h
0x67D21B: sub     esi, edx
0x67D21D: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67D222: sub     esi, ebx
0x67D224: push    esi; ArgList
0x67D225: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x67D22A: call    PrintError
0x67D22F: add     esp, 20h
0x67D232: mov     ecx, [esp+38h+var_C]
0x67D236: mov     large fs:0, ecx
0x67D23D: pop     ecx
0x67D23E: pop     edi
0x67D23F: pop     esi
0x67D240: pop     ebp
0x67D241: pop     ebx
0x67D242: add     esp, 24h
0x67D245: retn
0x67D246: jnb     loc_67D2E2
0x67D24C: mov     eax, [edi+5]
0x67D24F: movzx   edx, byte ptr [edi+9]
0x67D253: push    eax
0x67D254: mov     eax, [ecx]
0x67D256: push    edx
0x67D257: mov     edx, [eax+0D4h]
0x67D25D: call    edx
0x67D25F: movzx   ecx, word ptr [esp+40h+var_20]
0x67D264: push    eax
0x67D265: mov     eax, [edi]
0x67D267: push    eax
0x67D268: push    248h
0x67D26D: sub     ecx, esi
0x67D26F: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67D274: add     ecx, ebx
0x67D276: push    ecx; ArgList
0x67D277: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x67D27C: call    PrintError
0x67D281: add     esp, 20h
0x67D284: mov     ecx, [esp+38h+var_C]
0x67D288: mov     large fs:0, ecx
0x67D28F: pop     ecx
0x67D290: pop     edi
0x67D291: pop     esi
0x67D292: pop     ebp
0x67D293: pop     ebx
0x67D294: add     esp, 24h
0x67D297: retn
0x67D298: movzx   eax, word ptr [esp+38h+var_20]
0x67D29D: lea     edx, [eax+ebx]
0x67D2A0: cmp     esi, edx
0x67D2A2: jbe     short loc_67D2BF
0x67D2A4: movzx   edx, byte ptr [ecx+7Ch]
0x67D2A8: push    edx
0x67D2A9: push    248h
0x67D2AE: sub     esi, eax
0x67D2B0: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67D2B5: sub     esi, ebx
0x67D2B7: push    esi
0x67D2B8: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x67D2BD: jmp     short loc_67D2DA
0x67D2BF: jnb     short loc_67D2E2
0x67D2C1: movzx   ecx, byte ptr [ecx+7Ch]
0x67D2C5: push    ecx
0x67D2C6: push    248h
0x67D2CB: sub     eax, esi
0x67D2CD: push    offset a_AiSpectatorpa; ".\\AI\\SpectatorPackage.cpp"
0x67D2D2: add     eax, ebx
0x67D2D4: push    eax; ArgList
0x67D2D5: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x67D2DA: call    PrintError
0x67D2DF: add     esp, 14h
0x67D2E2: mov     ecx, [esp+38h+var_C]
0x67D2E6: mov     large fs:0, ecx
0x67D2ED: pop     ecx
0x67D2EE: pop     edi
0x67D2EF: pop     esi
0x67D2F0: pop     ebp
0x67D2F1: pop     ebx
0x67D2F2: add     esp, 24h
0x67D2F5: retn
