0x4C95B0: push    0FFFFFFFFh
0x4C95B2: push    offset SEH_4C95B0
0x4C95B7: mov     eax, large fs:0
0x4C95BD: push    eax
0x4C95BE: sub     esp, 214h
0x4C95C4: mov     eax, ds:0B30AACh
0x4C95C9: xor     eax, esp
0x4C95CB: mov     [esp+220h+var_10], eax
0x4C95D2: push    ebx
0x4C95D3: push    esi
0x4C95D4: push    edi
0x4C95D5: mov     eax, ds:0B30AACh
0x4C95DA: xor     eax, esp
0x4C95DC: push    eax
0x4C95DD: lea     eax, [esp+230h+var_C]
0x4C95E4: mov     large fs:0, eax
0x4C95EA: mov     eax, ecx
0x4C95EC: mov     ecx, [eax+24h]
0x4C95EF: test    ecx, ecx
0x4C95F1: lea     esi, [eax+24h]
0x4C95F4: jnz     loc_4C9737
0x4C95FA: mov     ebx, ds:0B35300h
0x4C9600: test    ebx, ebx
0x4C9602: jz      loc_4C9737
0x4C9608: mov     [esp+230h+var_21C], ecx
0x4C960C: mov     eax, [eax+1Ch]
0x4C960F: test    eax, eax
0x4C9611: mov     [esp+230h+var_4], ecx
0x4C9618: jnz     short loc_4C961F
0x4C961A: mov     eax, offset EmptyString
0x4C961F: push    eax
0x4C9620: push    offset aTextures; "Textures"
0x4C9625: lea     eax, [esp+238h+Src]
0x4C9629: push    offset aSLandscapeS; "%s\\Landscape\\%s"
0x4C962E: push    eax
0x4C962F: call    __sprintf
0x4C9634: mov     edx, [ebx]
0x4C9636: mov     edx, [edx+4]
0x4C9639: add     esp, 10h
0x4C963C: push    0
0x4C963E: lea     eax, [esp+234h+Src]
0x4C9642: push    eax
0x4C9643: mov     ecx, ebx
0x4C9645: call    edx
0x4C9647: push    eax; a2
0x4C9648: lea     ecx, [esp+234h+var_21C]; this
0x4C964C: call    NiSmartPointer_Set??
0x4C9651: mov     edi, [esp+230h+var_21C]
0x4C9655: test    edi, edi
0x4C9657: jnz     short loc_4C96CF
0x4C9659: mov     ecx, ds:0B33A04h
0x4C965F: test    ecx, ecx
0x4C9661: jz      short loc_4C968F
0x4C9663: mov     eax, [ecx]
0x4C9665: mov     eax, [eax+4]
0x4C9668: push    0FFFFFFFFh
0x4C966A: push    edi
0x4C966B: lea     edx, [esp+238h+var_114]
0x4C9672: push    edx
0x4C9673: lea     edx, [esp+23Ch+Src]
0x4C9677: push    edx
0x4C9678: call    eax
0x4C967A: test    eax, eax
0x4C967C: jz      short loc_4C968F
0x4C967E: push    1
0x4C9680: push    offset dword_B256D0
0x4C9685: lea     ecx, [esp+238h+var_114]
0x4C968C: push    ecx
0x4C968D: jmp     short loc_4C969B
0x4C968F: push    1; char
0x4C9691: push    offset dword_B256D0; int
0x4C9696: lea     edx, [esp+238h+Src]
0x4C969A: push    edx; Src
0x4C969B: call    NiSourceTexture__LoadTextureByFilename
0x4C96A0: add     esp, 0Ch
0x4C96A3: push    eax; a2
0x4C96A4: mov     ecx, esi; this
0x4C96A6: call    NiSmartPointer_Set??
0x4C96AB: mov     eax, [esi]
0x4C96AD: mov     edx, [ebx]
0x4C96AF: mov     edx, [edx+8]
0x4C96B2: push    eax
0x4C96B3: lea     eax, [esp+234h+Src]
0x4C96B7: push    eax
0x4C96B8: mov     ecx, ebx
0x4C96BA: call    edx
0x4C96BC: mov     esi, [esi]
0x4C96BE: push    1; a3
0x4C96C0: push    esi; a2
0x4C96C1: mov     ecx, offset off_B09414; this
0x4C96C6: call    NiTMap_SetAt
0x4C96CB: mov     al, 1
0x4C96CD: jmp     short loc_4C9739
0x4C96CF: push    edi
0x4C96D0: push    offset dword_B3F95C
0x4C96D5: call    NiRTTI_Cast
0x4C96DA: add     esp, 8
0x4C96DD: push    eax; a2
0x4C96DE: mov     ecx, esi; this
0x4C96E0: call    NiSmartPointer_Set??
0x4C96E5: mov     eax, [esi]
0x4C96E7: lea     ecx, [esp+230h+var_220]
0x4C96EB: push    ecx
0x4C96EC: push    eax
0x4C96ED: mov     ecx, offset off_B09414
0x4C96F2: mov     [esp+238h+var_220], 0
0x4C96FA: call    NiTMap_GetAt
0x4C96FF: mov     eax, [esp+230h+var_220]
0x4C9703: mov     esi, [esi]
0x4C9705: add     eax, 1
0x4C9708: push    eax; a3
0x4C9709: push    esi; a2
0x4C970A: mov     ecx, offset off_B09414; this
0x4C970F: call    NiTMap_SetAt
0x4C9714: lea     edx, [edi+4]
0x4C9717: push    edx; lpAddend
0x4C9718: mov     [esp+234h+var_4], 0FFFFFFFFh
0x4C9723: call    dword ptr ds:0A2807Ch
0x4C9729: test    eax, eax
0x4C972B: jnz     short loc_4C9737
0x4C972D: mov     eax, [edi]
0x4C972F: mov     edx, [eax]
0x4C9731: push    1
0x4C9733: mov     ecx, edi
0x4C9735: call    edx
0x4C9737: xor     al, al
0x4C9739: mov     ecx, dword ptr [esp+230h+var_C]
0x4C9740: mov     large fs:0, ecx
0x4C9747: pop     ecx
0x4C9748: pop     edi
0x4C9749: pop     esi
0x4C974A: pop     ebx
0x4C974B: mov     ecx, [esp+220h+var_10]
0x4C9752: xor     ecx, esp
0x4C9754: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C9759: add     esp, 220h
0x4C975F: retn
