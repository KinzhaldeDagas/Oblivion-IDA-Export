0x4515B0: push    0FFFFFFFFh
0x4515B2: push    offset TESFile_OpenBSFile?_SEH
0x4515B7: mov     eax, large fs:0
0x4515BD: push    eax
0x4515BE: sub     esp, 38Ch
0x4515C4: mov     eax, ds:0B30AACh
0x4515C9: xor     eax, esp
0x4515CB: mov     [esp+398h+var_10], eax
0x4515D2: push    ebx
0x4515D3: push    ebp
0x4515D4: push    esi
0x4515D5: push    edi
0x4515D6: mov     eax, ds:0B30AACh
0x4515DB: xor     eax, esp
0x4515DD: push    eax
0x4515DE: lea     eax, [esp+3ACh+var_C]
0x4515E5: mov     large fs:0, eax
0x4515EB: mov     edi, [esp+3ACh+lpString2]
0x4515F2: test    edi, edi
0x4515F4: mov     eax, [esp+3ACh+arg_4]
0x4515FB: mov     ebx, ecx
0x4515FD: mov     [esp+3ACh+var_398], eax
0x451601: jz      loc_451708
0x451607: test    eax, eax
0x451609: jz      loc_451708
0x45160F: cmp     [esp+3ACh+arg_C], 0
0x451617: jz      short loc_451624
0x451619: mov     [esp+3ACh+arg_8], 1
0x451624: mov     esi, ds:0A28164h
0x45162A: push    edi; lpString2
0x45162B: lea     eax, [esp+3B0h+String1]
0x451632: push    eax; lpString1
0x451633: call    esi ; lstrcpyA
0x451635: push    edi; lpString2
0x451636: lea     ebp, [ebx+120h]
0x45163C: push    ebp; lpString1
0x45163D: call    esi ; lstrcpyA
0x45163F: mov     ecx, [esp+3ACh+var_398]
0x451643: push    ecx; lpString2
0x451644: lea     edx, [esp+3B0h+String1]
0x45164B: push    edx; lpString1
0x45164C: call    dword ptr ds:0A28160h
0x451652: mov     eax, [esp+3ACh+var_398]
0x451656: push    eax; lpString2
0x451657: lea     edi, [ebx+1Ch]
0x45165A: push    edi; lpString1
0x45165B: call    esi ; lstrcpyA
0x45165D: mov     ecx, [ebx+10h]
0x451660: test    ecx, ecx
0x451662: jnz     loc_451881
0x451668: lea     ecx, [esp+3ACh+FindFileData]
0x45166C: push    ecx; lpFindFileData
0x45166D: lea     edx, [esp+3B0h+String1]
0x451674: push    edx; lpFileName
0x451675: call    dword ptr ds:0A2812Ch
0x45167B: cmp     eax, 0FFFFFFFFh
0x45167E: jnz     loc_451743
0x451684: push    ebp; lpString2
0x451685: lea     eax, [esp+3B0h+String1]
0x45168C: push    eax; lpString1
0x45168D: call    esi ; lstrcpyA
0x45168F: push    2Eh ; '.'; Val
0x451691: push    edi; Str
0x451692: call    _strchr
0x451697: add     esp, 8
0x45169A: mov     esi, eax
0x45169C: test    esi, esi
0x45169E: push    edi; lpString2
0x45169F: jz      short loc_4516C8
0x4516A1: mov     edi, ds:0A28160h
0x4516A7: lea     ecx, [esp+3B0h+String1]
0x4516AE: push    ecx; lpString1
0x4516AF: mov     byte ptr [esi], 0
0x4516B2: call    edi ; lstrcatA
0x4516B4: push    offset a_tes; ".tes"
0x4516B9: lea     edx, [esp+3B0h+String1]
0x4516C0: push    edx; lpString1
0x4516C1: call    edi ; lstrcatA
0x4516C3: mov     byte ptr [esi], 2Eh ; '.'
0x4516C6: jmp     short loc_4516E7
0x4516C8: mov     esi, ds:0A28160h
0x4516CE: lea     eax, [esp+3B0h+String1]
0x4516D5: push    eax; lpString1
0x4516D6: call    esi ; lstrcatA
0x4516D8: push    offset a_tes; ".tes"
0x4516DD: lea     ecx, [esp+3B0h+String1]
0x4516E4: push    ecx; lpString1
0x4516E5: call    esi ; lstrcatA
0x4516E7: lea     edx, [esp+3ACh+var_254]
0x4516EE: push    edx; lpFindFileData
0x4516EF: lea     eax, [esp+3B0h+String1]
0x4516F6: push    eax; lpFileName
0x4516F7: call    dword ptr ds:0A2812Ch
0x4516FD: cmp     eax, 0FFFFFFFFh
0x451700: jnz     short loc_451734
0x451702: mov     dword ptr [ebx], 2
0x451708: xor     al, al
0x45170A: mov     ecx, [esp+3ACh+var_C]
0x451711: mov     large fs:0, ecx
0x451718: pop     ecx
0x451719: pop     edi
0x45171A: pop     esi
0x45171B: pop     ebp
0x45171C: pop     ebx
0x45171D: mov     ecx, [esp+398h+var_10]
0x451724: xor     ecx, esp
0x451726: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45172B: add     esp, 398h
0x451731: retn    10h
0x451734: push    eax; hFindFile
0x451735: mov     dword ptr [ebx], 0Ch
0x45173B: call    dword ptr ds:0A28120h
0x451741: jmp     short loc_451708
0x451743: push    eax; hFindFile
0x451744: call    dword ptr ds:0A28120h
0x45174A: lea     edi, [ebx+290h]
0x451750: mov     eax, 140h
0x451755: lea     ecx, [esp+3ACh+FindFileData]
0x451759: mov     edx, edi
0x45175B: jmp     short loc_451760
0x45175D: align 10h
0x451760: mov     esi, [edx]
0x451762: cmp     esi, [ecx]
0x451764: jnz     short loc_451778
0x451766: sub     eax, 4
0x451769: add     ecx, 4
0x45176C: add     edx, 4
0x45176F: cmp     eax, 4
0x451772: jnb     short loc_451760
0x451774: test    eax, eax
0x451776: jz      short loc_4517D5
0x451778: movzx   esi, byte ptr [edx]
0x45177B: movzx   ebp, byte ptr [ecx]
0x45177E: sub     esi, ebp
0x451780: jnz     short loc_4517C7
0x451782: sub     eax, 1
0x451785: add     ecx, 1
0x451788: add     edx, 1
0x45178B: test    eax, eax
0x45178D: jz      short loc_4517D5
0x45178F: movzx   esi, byte ptr [edx]
0x451792: movzx   ebp, byte ptr [ecx]
0x451795: sub     esi, ebp
0x451797: jnz     short loc_4517C7
0x451799: sub     eax, 1
0x45179C: add     ecx, 1
0x45179F: add     edx, 1
0x4517A2: test    eax, eax
0x4517A4: jz      short loc_4517D5
0x4517A6: movzx   esi, byte ptr [edx]
0x4517A9: movzx   ebp, byte ptr [ecx]
0x4517AC: sub     esi, ebp
0x4517AE: jnz     short loc_4517C7
0x4517B0: sub     eax, 1
0x4517B3: add     ecx, 1
0x4517B6: add     edx, 1
0x4517B9: test    eax, eax
0x4517BB: jz      short loc_4517D5
0x4517BD: movzx   esi, byte ptr [edx]
0x4517C0: movzx   ecx, byte ptr [ecx]
0x4517C3: sub     esi, ecx
0x4517C5: jz      short loc_4517D5
0x4517C7: test    esi, esi
0x4517C9: mov     eax, 1
0x4517CE: jg      short loc_4517D7
0x4517D0: or      eax, 0FFFFFFFFh
0x4517D3: jmp     short loc_4517D7
0x4517D5: xor     eax, eax
0x4517D7: test    eax, eax
0x4517D9: jz      short loc_4517ED
0x4517DB: or      dword ptr [ebx+3DCh], 2
0x4517E2: mov     ecx, 50h ; 'P'
0x4517E7: lea     esi, [esp+3ACh+FindFileData]
0x4517EB: rep movsd
0x4517ED: push    154h; Size
0x4517F2: call    FormHeapAlloc
0x4517F7: add     esp, 4
0x4517FA: mov     [esp+3ACh+var_398], eax
0x4517FE: test    eax, eax
0x451800: mov     [esp+3ACh+var_4], 0
0x45180B: jz      short loc_45182F
0x45180D: mov     edx, [ebx+228h]
0x451813: mov     ecx, [esp+3ACh+arg_8]
0x45181A: push    0
0x45181C: push    edx
0x45181D: push    ecx
0x45181E: lea     edx, [esp+3B8h+String1]
0x451825: push    edx
0x451826: mov     ecx, eax
0x451828: call    BSFile_constr
0x45182D: jmp     short loc_451831
0x45182F: xor     eax, eax
0x451831: test    eax, eax
0x451833: mov     [esp+3ACh+var_4], 0FFFFFFFFh
0x45183E: mov     [ebx+10h], eax
0x451841: jz      loc_451708
0x451847: mov     edx, [eax]
0x451849: push    0
0x45184B: mov     ecx, eax
0x45184D: mov     eax, [edx+18h]
0x451850: push    1
0x451852: call    eax
0x451854: mov     ecx, [ebx+10h]
0x451857: cmp     byte ptr [ecx+24h], 0
0x45185B: jnz     short loc_451881
0x45185D: call    __errno
0x451862: mov     eax, [eax]
0x451864: sub     eax, 2
0x451867: jz      loc_451702
0x45186D: sub     eax, 0Bh
0x451870: jnz     loc_451708
0x451876: mov     dword ptr [ebx], 9
0x45187C: jmp     loc_451708
0x451881: mov     edx, [ecx]
0x451883: mov     eax, [edx+1Ch]
0x451886: call    eax
0x451888: cmp     [esp+3ACh+arg_8], 0
0x451890: mov     [ebx+258h], eax
0x451896: setz    cl
0x451899: push    ecx
0x45189A: mov     ecx, ebx
0x45189C: call    TESFile_JumpToBOF
0x4518A1: mov     al, 1
0x4518A3: jmp     loc_45170A
