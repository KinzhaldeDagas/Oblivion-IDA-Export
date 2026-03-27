0x62A0E0: sub     esp, 10h
0x62A0E3: push    ebx
0x62A0E4: push    ebp
0x62A0E5: push    esi
0x62A0E6: mov     esi, ecx
0x62A0E8: mov     eax, [esi]
0x62A0EA: mov     edx, [eax+184h]
0x62A0F0: call    edx
0x62A0F2: xor     ebp, ebp
0x62A0F4: test    eax, eax
0x62A0F6: mov     dword ptr [esp+1Ch+var_10], ebp
0x62A0FA: jz      short loc_62A108
0x62A0FC: cmp     byte ptr [eax+20h], 11h
0x62A100: jnz     short loc_62A108
0x62A102: mov     dword ptr [esp+1Ch+var_10], eax
0x62A106: mov     ebp, eax
0x62A108: xor     bl, bl
0x62A10A: test    ebp, ebp
0x62A10C: jz      loc_62A344
0x62A112: mov     ecx, [esi+2Ch]
0x62A115: test    ecx, ecx
0x62A117: jz      loc_62A344
0x62A11D: mov     eax, [ecx]
0x62A11F: mov     edx, [eax+190h]
0x62A125: call    edx
0x62A127: test    al, al
0x62A129: jz      loc_62A344
0x62A12F: mov     ecx, [esi+2Ch]
0x62A132: test    ecx, ecx
0x62A134: jz      loc_62A344
0x62A13A: mov     eax, [ecx]
0x62A13C: mov     edx, [eax+354h]
0x62A142: call    edx
0x62A144: test    al, al
0x62A146: jnz     short loc_62A164
0x62A148: mov     ecx, [esp+1Ch+arg_0]
0x62A14C: mov     eax, [esi]
0x62A14E: mov     edx, [eax+188h]
0x62A154: push    1
0x62A156: push    ecx
0x62A157: mov     ecx, esi
0x62A159: call    edx
0x62A15B: pop     esi
0x62A15C: pop     ebp
0x62A15D: pop     ebx
0x62A15E: add     esp, 10h
0x62A161: retn    4
0x62A164: cmp     dword ptr [ebp+50h], 1
0x62A168: push    edi
0x62A169: mov     edi, [esp+20h+arg_0]
0x62A16D: jge     short loc_62A176
0x62A16F: mov     ecx, edi; this
0x62A171: call    sub_5E6C60
0x62A176: fldz
0x62A178: fcom    dword ptr [ebp+3Ch]
0x62A17B: fnstsw  ax
0x62A17D: test    ah, 1
0x62A180: jnz     loc_62A2DA
0x62A186: mov     ecx, ds:0B333C4h; this
0x62A18C: fstp    st
0x62A18E: call    TESObjectREFR_GetParentCell
0x62A193: mov     ecx, eax
0x62A195: call    TESObjectCELL_GetOwner
0x62A19A: push    4
0x62A19C: push    2
0x62A19E: mov     ds:0B361C4h, eax
0x62A1A3: call    TESTopic__GEtTopic
0x62A1A8: mov     ebx, eax
0x62A1AA: add     esp, 8
0x62A1AD: test    ebx, ebx
0x62A1AF: mov     dword ptr ds:0B361C4h, 0
0x62A1B9: jz      loc_62A343
0x62A1BF: mov     eax, [esi]
0x62A1C1: mov     edx, [eax+344h]
0x62A1C7: push    0
0x62A1C9: mov     ecx, esi
0x62A1CB: call    edx
0x62A1CD: mov     eax, [esi+2Ch]
0x62A1D0: push    0
0x62A1D2: push    0
0x62A1D4: push    eax
0x62A1D5: push    edi
0x62A1D6: mov     ecx, ebx
0x62A1D8: call    TESTopic__CreateDialogueInfo
0x62A1DD: mov     edx, [esi]
0x62A1DF: mov     edx, [edx+484h]
0x62A1E5: mov     ebx, eax
0x62A1E7: mov     eax, [esi+2Ch]
0x62A1EA: push    eax
0x62A1EB: mov     ecx, esi
0x62A1ED: mov     dword ptr [esp+24h+var_10+4], ebx
0x62A1F1: call    edx
0x62A1F3: test    ebx, ebx
0x62A1F5: jz      loc_62A2AE
0x62A1FB: mov     ecx, ebx
0x62A1FD: call    sub_6B7BA0
0x62A202: mov     ecx, ebx
0x62A204: call    sub_6B7C20
0x62A209: mov     edi, eax
0x62A20B: test    edi, edi
0x62A20D: jz      loc_62A2AE
0x62A213: mov     ebx, [edi+0Ch]
0x62A216: push    1
0x62A218: push    0
0x62A21A: push    0
0x62A21C: push    1
0x62A21E: mov     ecx, edi
0x62A220: lea     ebp, [esi+220h]
0x62A226: call    BSStringT_GetLen
0x62A22B: push    eax
0x62A22C: mov     eax, [edi+8]
0x62A22F: push    ebx
0x62A230: mov     ebx, [esp+38h+arg_0]
0x62A234: push    eax
0x62A235: mov     eax, [edi+10h]
0x62A238: push    ebp
0x62A239: push    eax
0x62A23A: mov     ecx, ebx
0x62A23C: call    Actor__InitDialogue
0x62A241: fstp    dword ptr [esi+21Ch]
0x62A247: cmp     byte ptr ds:0B13208h, 0
0x62A24E: jz      short loc_62A29C
0x62A250: cmp     dword ptr [edi], 0
0x62A253: jz      short loc_62A29C
0x62A255: mov     eax, ds:0B333C4h
0x62A25A: push    0
0x62A25C: push    eax
0x62A25D: mov     ecx, ebx
0x62A25F: call    TesObjectREF_GetDistance
0x62A264: fstp    [esp+20h+var_8]
0x62A268: mov     ecx, offset unk_B36AD8
0x62A26D: call    GameSetting_GetSafeFloatPointer
0x62A272: fld     dword ptr [eax]
0x62A274: fadd    st, st
0x62A276: fcomp   [esp+20h+var_8]
0x62A27A: fnstsw  ax
0x62A27C: test    ah, 1
0x62A27F: jnz     short loc_62A29C
0x62A281: fld     dword ptr ds:0A30634h
0x62A287: mov     edx, [edi]
0x62A289: push    ecx
0x62A28A: mov     ecx, [ebp+0]
0x62A28D: fstp    [esp+24h+duration]; duration
0x62A290: push    0; unk2
0x62A292: push    ecx; unk1
0x62A293: push    edx; string
0x62A294: call    GameUI_QueueMessage
0x62A299: add     esp, 10h
0x62A29C: mov     eax, [esi]
0x62A29E: mov     edx, [eax+48h]
0x62A2A1: push    ebx
0x62A2A2: mov     ecx, esi
0x62A2A4: call    edx
0x62A2A6: mov     ebp, dword ptr [esp+20h+var_10]
0x62A2AA: mov     ebx, dword ptr [esp+20h+var_10+4]
0x62A2AE: mov     [esi+250h], ebx
0x62A2B4: mov     byte ptr [esi+228h], 1
0x62A2BB: fld     dword ptr [ebp+3Ch]
0x62A2BE: fadd    dword ptr ds:0B33E9Ch
0x62A2C4: push    1
0x62A2C6: mov     ecx, ebp
0x62A2C8: fstp    dword ptr [ebp+3Ch]
0x62A2CB: call    sub_67D330
0x62A2D0: pop     edi
0x62A2D1: pop     esi
0x62A2D2: pop     ebp
0x62A2D3: pop     ebx
0x62A2D4: add     esp, 10h
0x62A2D7: retn    4
0x62A2DA: fcomp   dword ptr [esi+21Ch]
0x62A2E0: fnstsw  ax
0x62A2E2: test    ah, 5
0x62A2E5: jp      short loc_62A2FB
0x62A2E7: fld     dword ptr [esi+21Ch]
0x62A2ED: fsub    dword ptr ds:0B33E9Ch
0x62A2F3: fstp    dword ptr [esi+21Ch]
0x62A2F9: jmp     short loc_62A2FD
0x62A2FB: mov     bl, 1
0x62A2FD: mov     ecx, [esi+250h]; int
0x62A303: test    ecx, ecx
0x62A305: jz      short loc_62A330
0x62A307: call    sub_6B7C30
0x62A30C: mov     ebp, [esi+250h]
0x62A312: test    ebp, ebp
0x62A314: jz      short loc_62A326
0x62A316: mov     ecx, ebp
0x62A318: call    sub_6B81D0
0x62A31D: push    ebp
0x62A31E: call    FormHeapFree
0x62A323: add     esp, 4
0x62A326: mov     dword ptr [esi+250h], 0
0x62A330: test    bl, bl
0x62A332: jz      short loc_62A343
0x62A334: mov     eax, [esi]
0x62A336: mov     edx, [eax+188h]
0x62A33C: push    0FFFFFFFFh
0x62A33E: push    edi
0x62A33F: mov     ecx, esi
0x62A341: call    edx
0x62A343: pop     edi
0x62A344: pop     esi
0x62A345: pop     ebp
0x62A346: pop     ebx
0x62A347: add     esp, 10h
0x62A34A: retn    4
