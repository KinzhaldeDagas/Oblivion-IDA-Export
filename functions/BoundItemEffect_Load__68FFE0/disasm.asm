0x68FFE0: push    0FFFFFFFFh
0x68FFE2: push    offset BoundItemEffect_Load_SEH
0x68FFE7: mov     eax, large fs:0
0x68FFED: push    eax
0x68FFEE: sub     esp, 10h
0x68FFF1: push    ebx
0x68FFF2: push    ebp
0x68FFF3: push    esi
0x68FFF4: push    edi
0x68FFF5: mov     eax, ds:0B30AACh
0x68FFFA: xor     eax, esp
0x68FFFC: push    eax
0x68FFFD: lea     eax, [esp+30h+var_C]
0x690001: mov     large fs:0, eax
0x690007: mov     ebx, ecx
0x690009: mov     eax, [esp+30h+arg_0]
0x69000D: push    eax; Dst
0x69000E: call    AssociatedItemEffect_Load
0x690013: mov     ecx, ds:0B33B00h
0x690019: xor     ebp, ebp
0x69001B: mov     [esp+30h+var_1C], ebp
0x69001F: call    sub_45A170
0x690024: test    al, al
0x690026: jz      loc_6900C5
0x69002C: push    4; Size
0x69002E: lea     ecx, [esp+34h+Dst]
0x690032: push    ecx; Dst
0x690033: mov     ecx, ds:0B33B00h
0x690039: call    SaveLoad_LoadData
0x69003E: cmp     [esp+30h+Dst], 4B4F4C42h
0x690046: jz      short loc_6900B0
0x690048: mov     eax, ds:0B33B00h
0x69004D: mov     esi, [eax+80h]
0x690053: test    esi, esi
0x690055: jz      short loc_690094
0x690057: mov     edx, [esi]
0x690059: push    edx; a1
0x69005A: call    TESForm_LookupByFormID
0x69005F: mov     ecx, [esi+5]
0x690062: movzx   edx, byte ptr [esi+9]
0x690066: add     esp, 4
0x690069: push    ecx
0x69006A: push    edx
0x69006B: mov     edx, [eax]
0x69006D: mov     ecx, eax
0x69006F: mov     eax, [edx+0D4h]
0x690075: call    eax
0x690077: mov     ecx, [esi]
0x690079: push    eax
0x69007A: push    ecx
0x69007B: push    2E4h
0x690080: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x690085: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x69008A: call    PrintError
0x69008F: add     esp, 1Ch
0x690092: jmp     short loc_6900B0
0x690094: movzx   edx, byte ptr [eax+7Ch]
0x690098: push    edx
0x690099: push    2E4h
0x69009E: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x6900A3: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x6900A8: call    PrintError
0x6900AD: add     esp, 10h
0x6900B0: mov     ecx, ds:0B33B00h
0x6900B6: mov     ebp, [ecx+14h]
0x6900B9: push    2; Size
0x6900BB: lea     eax, [esp+34h+var_1C]
0x6900BF: push    eax; Dst
0x6900C0: call    SaveLoad_LoadData
0x6900C5: mov     esi, 1
0x6900CA: push    esi; Size
0x6900CB: lea     ecx, [esp+34h+arg_0]
0x6900CF: push    ecx; Dst
0x6900D0: mov     ecx, ds:0B33B00h
0x6900D6: call    SaveLoad_LoadData
0x6900DB: cmp     byte ptr [esp+30h+arg_0], 0
0x6900E0: jz      short loc_690119
0x6900E2: push    0Ch; Size
0x6900E4: call    FormHeapAlloc
0x6900E9: add     esp, 4
0x6900EC: mov     [esp+30h+var_18], eax
0x6900F0: test    eax, eax
0x6900F2: mov     [esp+30h+var_4], 0
0x6900FA: jz      short loc_690105
0x6900FC: mov     ecx, eax
0x6900FE: call    sub_4842D0
0x690103: jmp     short loc_690107
0x690105: xor     eax, eax
0x690107: mov     ecx, eax
0x690109: mov     [esp+30h+var_4], 0FFFFFFFFh
0x690111: mov     [ebx+3Ch], eax
0x690114: call    ContainerEntryExtraData_LoadModified
0x690119: lea     edi, [ebx+40h]
0x69011C: mov     [esp+30h+var_18], 10h
0x690124: mov     ecx, ds:0B33B00h
0x69012A: push    esi; Size
0x69012B: lea     edx, [esp+34h+arg_0]
0x69012F: push    edx; Dst
0x690130: call    SaveLoad_LoadData
0x690135: cmp     byte ptr [esp+30h+arg_0], 0
0x69013A: jz      short loc_690190
0x69013C: push    0Ch; Size
0x69013E: call    FormHeapAlloc
0x690143: add     esp, 4
0x690146: mov     [esp+30h+var_10], eax
0x69014A: test    eax, eax
0x69014C: mov     [esp+30h+var_4], esi
0x690150: jz      short loc_69015B
0x690152: mov     ecx, eax
0x690154: call    sub_4842D0
0x690159: jmp     short loc_69015D
0x69015B: xor     eax, eax
0x69015D: mov     ecx, eax
0x69015F: mov     [esp+30h+var_4], 0FFFFFFFFh
0x690167: mov     [edi], eax
0x690169: call    ContainerEntryExtraData_LoadModified
0x69016E: mov     esi, [edi]
0x690170: cmp     dword ptr [esi+8], 0
0x690174: jnz     short loc_690190
0x690176: test    esi, esi
0x690178: jz      short loc_69018A
0x69017A: mov     ecx, esi
0x69017C: call    ContainerEntryExtraData_DestroyDataTable
0x690181: push    esi
0x690182: call    FormHeapFree
0x690187: add     esp, 4
0x69018A: mov     dword ptr [edi], 0
0x690190: mov     esi, 1
0x690195: add     edi, 4
0x690198: sub     [esp+30h+var_18], esi
0x69019C: jnz     short loc_690124
0x69019E: lea     esi, [ebx+84h]
0x6901A4: mov     byte ptr [esi], 1
0x6901A7: mov     ecx, ds:0B33B00h
0x6901AD: cmp     byte ptr [ecx+7Ch], 41h ; 'A'
0x6901B1: jb      short loc_6901D5
0x6901B3: push    4; Size
0x6901B5: lea     eax, [ebx+80h]
0x6901BB: push    eax; Dst
0x6901BC: call    SaveLoad_LoadData
0x6901C1: mov     ecx, ds:0B33B00h
0x6901C7: push    1; Size
0x6901C9: push    esi; Dst
0x6901CA: call    SaveLoad_LoadData
0x6901CF: mov     ecx, ds:0B33B00h
0x6901D5: cmp     byte ptr [ecx+7Ch], 6Bh ; 'k'
0x6901D9: jb      short loc_6901EF
0x6901DB: push    1; Size
0x6901DD: add     ebx, 88h ; 'ˆ'
0x6901E3: push    ebx; Dst
0x6901E4: call    SaveLoad_LoadData
0x6901E9: mov     ecx, ds:0B33B00h
0x6901EF: call    sub_45A170
0x6901F4: test    al, al
0x6901F6: jz      loc_6902F3
0x6901FC: mov     ecx, ds:0B33B00h
0x690202: mov     edi, [ecx+80h]
0x690208: test    edi, edi
0x69020A: mov     esi, [ecx+14h]
0x69020D: jz      loc_6902A9
0x690213: mov     ecx, [edi]
0x690215: push    ecx; a1
0x690216: call    TESForm_LookupByFormID
0x69021B: movzx   edx, word ptr [esp+34h+var_1C]
0x690220: mov     ecx, eax
0x690222: lea     eax, [edx+ebp]
0x690225: add     esp, 4
0x690228: cmp     esi, eax
0x69022A: jbe     short loc_690269
0x69022C: mov     eax, [edi+5]
0x69022F: movzx   edx, byte ptr [edi+9]
0x690233: push    eax
0x690234: mov     eax, [ecx]
0x690236: push    edx
0x690237: mov     edx, [eax+0D4h]
0x69023D: call    edx
0x69023F: movzx   ecx, word ptr [esp+38h+var_1C]
0x690244: push    eax
0x690245: mov     eax, [edi]
0x690247: push    eax
0x690248: push    30Ch
0x69024D: sub     esi, ecx
0x69024F: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x690254: sub     esi, ebp
0x690256: push    esi; ArgList
0x690257: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x69025C: call    PrintError
0x690261: add     esp, 20h
0x690264: jmp     loc_6902F3
0x690269: jnb     loc_6902F3
0x69026F: mov     edx, [edi+5]
0x690272: movzx   eax, byte ptr [edi+9]
0x690276: push    edx
0x690277: mov     edx, [ecx]
0x690279: push    eax
0x69027A: mov     eax, [edx+0D4h]
0x690280: call    eax
0x690282: mov     ecx, [edi]
0x690284: movzx   edx, word ptr [esp+38h+var_1C]
0x690289: push    eax
0x69028A: push    ecx
0x69028B: push    30Ch
0x690290: sub     edx, esi
0x690292: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x690297: add     edx, ebp
0x690299: push    edx; ArgList
0x69029A: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x69029F: call    PrintError
0x6902A4: add     esp, 20h
0x6902A7: jmp     short loc_6902F3
0x6902A9: movzx   eax, word ptr [esp+30h+var_1C]
0x6902AE: lea     edx, [eax+ebp]
0x6902B1: cmp     esi, edx
0x6902B3: jbe     short loc_6902D0
0x6902B5: movzx   ecx, byte ptr [ecx+7Ch]
0x6902B9: push    ecx
0x6902BA: push    30Ch
0x6902BF: sub     esi, eax
0x6902C1: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x6902C6: sub     esi, ebp
0x6902C8: push    esi
0x6902C9: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x6902CE: jmp     short loc_6902EB
0x6902D0: jnb     short loc_6902F3
0x6902D2: movzx   edx, byte ptr [ecx+7Ch]
0x6902D6: push    edx
0x6902D7: push    30Ch
0x6902DC: sub     eax, esi
0x6902DE: push    offset a_MagicBoundite; ".\\Magic\\BoundItemEffect.cpp"
0x6902E3: add     eax, ebp
0x6902E5: push    eax; ArgList
0x6902E6: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x6902EB: call    PrintError
0x6902F0: add     esp, 14h
0x6902F3: mov     ecx, [esp+30h+var_C]
0x6902F7: mov     large fs:0, ecx
0x6902FE: pop     ecx
0x6902FF: pop     edi
0x690300: pop     esi
0x690301: pop     ebp
0x690302: pop     ebx
0x690303: add     esp, 1Ch
0x690306: retn    4
