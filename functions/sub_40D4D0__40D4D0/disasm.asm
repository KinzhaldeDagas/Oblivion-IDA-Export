0x40D4D0: sub     esp, 10Ch
0x40D4D6: mov     eax, ___security_cookie
0x40D4DB: xor     eax, esp
0x40D4DD: mov     [esp+10Ch+var_4], eax
0x40D4E4: push    ebx
0x40D4E5: push    ebp
0x40D4E6: push    edi
0x40D4E7: push    3
0x40D4E9: mov     ebp, ecx
0x40D4EB: call    nullsub_returnTrue_0arg
0x40D4F0: add     esp, 4
0x40D4F3: call    sub_7A99A0
0x40D4F8: mov     edi, g_Renderer
0x40D4FE: xor     ebx, ebx
0x40D500: cmp     byte_B34FA4, bl
0x40D506: jz      short loc_40D50D
0x40D508: call    sub_497C30
0x40D50D: mov     ecx, dword_B3A6B0
0x40D513: push    2
0x40D515: call    sub_572E30
0x40D51A: test    al, al
0x40D51C: jz      loc_40D5F8
0x40D522: mov     eax, dword_B33418
0x40D527: add     eax, 1
0x40D52A: mov     dword_B33418, eax
0x40D52F: sub     eax, 1
0x40D532: jz      loc_40D5DE
0x40D538: sub     eax, 9
0x40D53B: jnz     loc_40D5FE
0x40D541: mov     ecx, dword_B3A6B0
0x40D547: push    ebx
0x40D548: push    2
0x40D54A: call    sub_572EC0
0x40D54F: mov     eax, SaveLoad_CurrentSavegame
0x40D554: and     dword ptr [eax+18h], 0FFFFDFFFh
0x40D55B: mov     eax, SaveLoad_CurrentSavegame
0x40D560: mov     ecx, [eax+18h]
0x40D563: shr     ecx, 0Fh
0x40D566: test    cl, 1
0x40D569: jz      short loc_40D57D
0x40D56B: and     dword ptr [eax+18h], 0FFFF7FFFh
0x40D572: mov     ecx, SaveLoad_CurrentSavegame
0x40D578: call    sub_466B70
0x40D57D: mov     eax, menuRenderedTexture
0x40D582: cmp     eax, ebx
0x40D584: jz      short loc_40D5D6
0x40D586: mov     ecx, g_textureManager; this
0x40D58C: push    esi
0x40D58D: push    eax; a2
0x40D58E: call    sub_7C1EE0
0x40D593: mov     esi, menuRenderedTexture
0x40D599: cmp     esi, ebx
0x40D59B: jz      short loc_40D5BF
0x40D59D: lea     edx, [esi+4]
0x40D5A0: push    edx; lpAddend
0x40D5A1: call    ds:InterlockedDecrement
0x40D5A7: test    eax, eax
0x40D5A9: jnz     short loc_40D5B9
0x40D5AB: cmp     esi, ebx
0x40D5AD: jz      short loc_40D5B9
0x40D5AF: mov     eax, [esi]
0x40D5B1: mov     edx, [eax]
0x40D5B3: push    1
0x40D5B5: mov     ecx, esi
0x40D5B7: call    edx
0x40D5B9: mov     menuRenderedTexture, ebx
0x40D5BF: cmp     byte_B42D54, bl
0x40D5C5: pop     esi
0x40D5C6: jz      short loc_40D5D0
0x40D5C8: fldz
0x40D5CA: fstp    flt_B42D50
0x40D5D0: mov     byte_B42D54, bl
0x40D5D6: mov     byte_B33397, bl
0x40D5DC: jmp     short loc_40D606
0x40D5DE: mov     ecx, TES
0x40D5E4: push    ebx
0x40D5E5: push    ebx
0x40D5E6: push    ebx
0x40D5E7: call    sub_440AF0
0x40D5EC: mov     ecx, offset ActorProcessManager_ptr
0x40D5F1: call    sub_674500
0x40D5F6: jmp     short loc_40D5FE
0x40D5F8: mov     dword_B33418, ebx
0x40D5FE: cmp     byte_B33397, bl
0x40D604: jnz     short loc_40D662
0x40D606: call    GetOpenedMenuCode
0x40D60B: cmp     eax, 414h
0x40D610: jz      short loc_40D662
0x40D612: mov     ecx, TESDataHandler_g_PlayerRef
0x40D618: mov     eax, [ecx]
0x40D61A: mov     edx, [eax+154h]
0x40D620: call    edx
0x40D622: test    eax, eax
0x40D624: jz      short loc_40D662
0x40D626: mov     ecx, dword_B3A6B0
0x40D62C: push    2
0x40D62E: call    sub_572DF0
0x40D633: test    al, al
0x40D635: jnz     short loc_40D662
0x40D637: mov     eax, TES
0x40D63C: cmp     [eax+34h], ebx
0x40D63F: jnz     short loc_40D655
0x40D641: mov     ecx, [eax+8]
0x40D644: cmp     ecx, ebx
0x40D646: jz      short loc_40D655
0x40D648: cmp     byte_B06A28, bl
0x40D64E: jz      short loc_40D655
0x40D650: call    ShadowCanopyPass
0x40D655: push    ebx; a2
0x40D656: mov     ecx, ebp; this
0x40D658: call    NiRenderer_Render
0x40D65D: jmp     loc_40D6F1
0x40D662: cmp     menuRenderedTexture, ebx
0x40D668: jz      loc_40D6F1
0x40D66E: cmp     ImageSpaceEffectEnabled, bl
0x40D674: jz      short loc_40D6B0
0x40D676: mov     ecx, dword_B3A6B0
0x40D67C: push    2
0x40D67E: call    sub_572E70
0x40D683: test    al, al
0x40D685: jz      short loc_40D68B
0x40D687: push    0Ch
0x40D689: jmp     short loc_40D68D
0x40D68B: push    19h; a1
0x40D68D: call    GetShaderDefinition
0x40D692: add     esp, 4
0x40D695: cmp     eax, ebx
0x40D697: jz      short loc_40D6F1
0x40D699: mov     ecx, menuRenderedTexture
0x40D69F: mov     edx, [eax+4]
0x40D6A2: push    ebx; a4
0x40D6A3: push    ecx; a3
0x40D6A4: push    edi; a2
0x40D6A5: push    edx; a1
0x40D6A6: call    sub_7B4900
0x40D6AB: add     esp, 10h
0x40D6AE: jmp     short loc_40D6F1
0x40D6B0: push    ebx; a2
0x40D6B1: push    7; a1
0x40D6B3: call    NiRenderer_BeginScene1
0x40D6B8: mov     eax, 1
0x40D6BD: add     esp, 8
0x40D6C0: cmp     [edi+200h], eax
0x40D6C6: jz      short loc_40D6D0
0x40D6C8: cmp     [edi+204h], eax
0x40D6CE: jnz     short loc_40D6E5
0x40D6D0: cmp     [edi+20Ch], al
0x40D6D6: jnz     short loc_40D6E5
0x40D6D8: mov     eax, [edi]
0x40D6DA: mov     edx, [eax+144h]
0x40D6E0: push    ebx
0x40D6E1: mov     ecx, edi
0x40D6E3: call    edx
0x40D6E5: mov     ecx, ScreenElementsRoot?; this
0x40D6EB: push    edi
0x40D6EC: call    sub_709C60
0x40D6F1: call    sub_7B8400
0x40D6F6: push    ebx
0x40D6F7: call    sub_579260
0x40D6FC: mov     ecx, [ebp+20h]; this
0x40D6FF: add     esp, 4
0x40D702: push    1; a3
0x40D704: push    1Fh; a2
0x40D706: call    InputGlobals__QueryControlState
0x40D70B: test    eax, eax
0x40D70D: jz      loc_40D7BD
0x40D713: mov     ecx, [ebp+20h]; this
0x40D716: push    ebx; a3
0x40D717: push    9Dh; a2
0x40D71C: call    InputGlobals__QueryKeyboardState
0x40D721: test    eax, eax
0x40D723: mov     al, byte_B333B9
0x40D728: jnz     short loc_40D73C
0x40D72A: cmp     al, bl
0x40D72C: jnz     short loc_40D73E
0x40D72E: push    ebx
0x40D72F: call    TakeScreenshot
0x40D734: add     esp, 4
0x40D737: jmp     loc_40D7BD
0x40D73C: cmp     al, bl
0x40D73E: setz    al
0x40D741: cmp     al, bl
0x40D743: mov     byte_B333B9, al
0x40D748: jz      short loc_40D7B5
0x40D74A: mov     eax, dword_B02D58
0x40D74F: add     eax, 1
0x40D752: push    eax
0x40D753: mov     dword_B02D58, eax
0x40D758: mov     eax, off_B02D50; "TestCameraPath"
0x40D75D: push    eax
0x40D75E: lea     ecx, [esp+120h+PathName]
0x40D762: push    offset aS03d; "%s%03d"
0x40D767: push    ecx
0x40D768: mov     dword_B333C8, ebx
0x40D76E: call    __sprintf
0x40D773: add     esp, 10h
0x40D776: push    ebx; lpSecurityAttributes
0x40D777: lea     edx, [esp+11Ch+PathName]
0x40D77B: push    edx; lpPathName
0x40D77C: call    ds:CreateDirectoryA
0x40D782: mov     eax, dword_B02D48
0x40D787: cmp     eax, ebx
0x40D789: jz      short loc_40D7AB
0x40D78B: test    eax, eax
0x40D78D: mov     [esp+118h+var_10C], eax
0x40D791: fild    [esp+118h+var_10C]
0x40D795: jge     short loc_40D79D
0x40D797: fadd    ds:flt_A2FC78
0x40D79D: fdivr   ds:dbl_A2FC70
0x40D7A3: fstp    g_FPSGlobal
0x40D7A9: jmp     short loc_40D7BD
0x40D7AB: fldz
0x40D7AD: fstp    g_FPSGlobal
0x40D7B3: jmp     short loc_40D7BD
0x40D7B5: fldz
0x40D7B7: fstp    g_FPSGlobal
0x40D7BD: call    sub_40FDA0
0x40D7C2: test    al, al
0x40D7C4: jnz     short loc_40D7D3
0x40D7C6: cmp     [edi+200h], ebx
0x40D7CC: jz      short loc_40D7D3
0x40D7CE: call    sub_7D7210
0x40D7D3: mov     ecx, g_worldScenegraph
0x40D7D9: call    sub_411100
0x40D7DE: push    2
0x40D7E0: call    nullsub_returnTrue_0arg
0x40D7E5: mov     ecx, [esp+11Ch+var_4]
0x40D7EC: add     esp, 4
0x40D7EF: pop     edi
0x40D7F0: pop     ebp
0x40D7F1: pop     ebx
0x40D7F2: xor     ecx, esp
0x40D7F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x40D7F9: add     esp, 10Ch
0x40D7FF: retn
