0x40C350: push    0FFFFFFFFh
0x40C352: push    offset SEH_40C350
0x40C357: mov     eax, large fs:0
0x40C35D: push    eax
0x40C35E: push    ecx
0x40C35F: push    ebx
0x40C360: push    ebp
0x40C361: push    esi
0x40C362: push    edi
0x40C363: mov     eax, ___security_cookie
0x40C368: xor     eax, esp
0x40C36A: push    eax
0x40C36B: lea     eax, [esp+24h+var_C]
0x40C36F: mov     large fs:0, eax
0x40C375: mov     esi, ecx
0x40C377: call    ArchiveManager_Clear?
0x40C37C: mov     ecx, [esi+20h]; this
0x40C37F: call    InputGlobals__SaveControlSettingsToINI
0x40C384: xor     ebx, ebx
0x40C386: mov     LODRoot, ebx
0x40C38C: mov     ObjectLODRoot, ebx
0x40C392: mov     MagicProjectileRoot, ebx
0x40C398: mov     edi, [esi+20h]
0x40C39B: cmp     edi, ebx
0x40C39D: jz      short loc_40C3AF
0x40C39F: mov     ecx, edi
0x40C3A1: call    sub_4043A0
0x40C3A6: push    edi
0x40C3A7: call    FormHeapFree
0x40C3AC: add     esp, 4
0x40C3AF: mov     [esi+20h], ebx
0x40C3B2: mov     ecx, dword_B3339C
0x40C3B8: cmp     ecx, ebx
0x40C3BA: mov     esi, ecx
0x40C3BC: jz      short loc_40C3CC
0x40C3BE: call    sub_494F30
0x40C3C3: push    esi
0x40C3C4: call    FormHeapFree
0x40C3C9: add     esp, 4
0x40C3CC: mov     eax, g_worldScenegraph
0x40C3D1: cmp     eax, ebx
0x40C3D3: mov     edi, ds:InterlockedDecrement
0x40C3D9: mov     ebp, 1
0x40C3DE: jz      short loc_40C3FF
0x40C3E0: mov     esi, eax
0x40C3E2: add     eax, 4
0x40C3E5: push    eax; lpAddend
0x40C3E6: call    edi ; InterlockedDecrement
0x40C3E8: test    eax, eax
0x40C3EA: jnz     short loc_40C3F9
0x40C3EC: cmp     esi, ebx
0x40C3EE: jz      short loc_40C3F9
0x40C3F0: mov     eax, [esi]
0x40C3F2: mov     edx, [eax]
0x40C3F4: push    ebp
0x40C3F5: mov     ecx, esi
0x40C3F7: call    edx
0x40C3F9: mov     g_worldScenegraph, ebx
0x40C3FF: mov     esi, dword_B333D8
0x40C405: cmp     esi, ebx
0x40C407: jz      short loc_40C426
0x40C409: lea     eax, [esi+4]
0x40C40C: push    eax; lpAddend
0x40C40D: call    edi ; InterlockedDecrement
0x40C40F: test    eax, eax
0x40C411: jnz     short loc_40C420
0x40C413: cmp     esi, ebx
0x40C415: jz      short loc_40C420
0x40C417: mov     edx, [esi]
0x40C419: mov     eax, [edx]
0x40C41B: push    ebp
0x40C41C: mov     ecx, esi
0x40C41E: call    eax
0x40C420: mov     dword_B333D8, ebx
0x40C426: mov     esi, dword_B333DC
0x40C42C: cmp     esi, ebx
0x40C42E: jz      short loc_40C44D
0x40C430: lea     ecx, [esi+4]
0x40C433: push    ecx; lpAddend
0x40C434: call    edi ; InterlockedDecrement
0x40C436: test    eax, eax
0x40C438: jnz     short loc_40C447
0x40C43A: cmp     esi, ebx
0x40C43C: jz      short loc_40C447
0x40C43E: mov     edx, [esi]
0x40C440: mov     eax, [edx]
0x40C442: push    ebp
0x40C443: mov     ecx, esi
0x40C445: call    eax
0x40C447: mov     dword_B333DC, ebx
0x40C44D: mov     esi, dword_B333E0
0x40C453: cmp     esi, ebx
0x40C455: jz      short loc_40C474
0x40C457: lea     ecx, [esi+4]
0x40C45A: push    ecx; lpAddend
0x40C45B: call    edi ; InterlockedDecrement
0x40C45D: test    eax, eax
0x40C45F: jnz     short loc_40C46E
0x40C461: cmp     esi, ebx
0x40C463: jz      short loc_40C46E
0x40C465: mov     edx, [esi]
0x40C467: mov     eax, [edx]
0x40C469: push    ebp
0x40C46A: mov     ecx, esi
0x40C46C: call    eax
0x40C46E: mov     dword_B333E0, ebx
0x40C474: mov     esi, dword_B333E4
0x40C47A: cmp     esi, ebx
0x40C47C: jz      short loc_40C49B
0x40C47E: lea     ecx, [esi+4]
0x40C481: push    ecx; lpAddend
0x40C482: call    edi ; InterlockedDecrement
0x40C484: test    eax, eax
0x40C486: jnz     short loc_40C495
0x40C488: cmp     esi, ebx
0x40C48A: jz      short loc_40C495
0x40C48C: mov     edx, [esi]
0x40C48E: mov     eax, [edx]
0x40C490: push    ebp
0x40C491: mov     ecx, esi
0x40C493: call    eax
0x40C495: mov     dword_B333E4, ebx
0x40C49B: mov     esi, menuRenderedTexture
0x40C4A1: cmp     esi, ebx
0x40C4A3: jz      short loc_40C4C2
0x40C4A5: lea     ecx, [esi+4]
0x40C4A8: push    ecx; lpAddend
0x40C4A9: call    edi ; InterlockedDecrement
0x40C4AB: test    eax, eax
0x40C4AD: jnz     short loc_40C4BC
0x40C4AF: cmp     esi, ebx
0x40C4B1: jz      short loc_40C4BC
0x40C4B3: mov     edx, [esi]
0x40C4B5: mov     eax, [edx]
0x40C4B7: push    ebp
0x40C4B8: mov     ecx, esi
0x40C4BA: call    eax
0x40C4BC: mov     menuRenderedTexture, ebx
0x40C4C2: mov     esi, ScreenElementsRoot?
0x40C4C8: cmp     esi, ebx
0x40C4CA: jz      short loc_40C4E9
0x40C4CC: lea     ecx, [esi+4]
0x40C4CF: push    ecx; lpAddend
0x40C4D0: call    edi ; InterlockedDecrement
0x40C4D2: test    eax, eax
0x40C4D4: jnz     short loc_40C4E3
0x40C4D6: cmp     esi, ebx
0x40C4D8: jz      short loc_40C4E3
0x40C4DA: mov     edx, [esi]
0x40C4DC: mov     eax, [edx]
0x40C4DE: push    ebp
0x40C4DF: mov     ecx, esi
0x40C4E1: call    eax
0x40C4E3: mov     ScreenElementsRoot?, ebx
0x40C4E9: mov     ecx, dword_B34D90
0x40C4EF: cmp     ecx, ebx
0x40C4F1: jz      short loc_40C508
0x40C4F3: cmp     [ecx+4], bl
0x40C4F6: jnz     short loc_40C508
0x40C4F8: mov     esi, ecx
0x40C4FA: call    sub_4946B0
0x40C4FF: push    esi
0x40C500: call    FormHeapFree
0x40C505: add     esp, 4
0x40C508: xor     esi, esi
0x40C50A: lea     ebx, [ebx+0]
0x40C510: mov     edi, dword_B39548[esi]
0x40C516: cmp     edi, ebx
0x40C518: jz      short loc_40C52A
0x40C51A: mov     ecx, edi
0x40C51C: call    GameSetting_destr
0x40C521: push    edi
0x40C522: call    FormHeapFree
0x40C527: add     esp, 4
0x40C52A: add     esi, 4
0x40C52D: cmp     esi, 0Ch
0x40C530: jb      short loc_40C510
0x40C532: xor     edi, edi
0x40C534: mov     esi, dword_B39578[edi]
0x40C53A: cmp     esi, ebx
0x40C53C: mov     [esp+24h+var_10], esi
0x40C540: jz      short loc_40C57E
0x40C542: mov     eax, [esi+4]
0x40C545: cmp     eax, ebx
0x40C547: mov     [esp+24h+var_4], ebx
0x40C54B: jz      short loc_40C558
0x40C54D: push    eax
0x40C54E: mov     ecx, offset dword_B35574
0x40C553: call    NiTMap_RemoveAt
0x40C558: mov     eax, [esi+4]
0x40C55B: cmp     eax, ebx
0x40C55D: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C565: jz      short loc_40C575
0x40C567: cmp     byte ptr [eax], 53h ; 'S'
0x40C56A: jnz     short loc_40C575
0x40C56C: push    eax
0x40C56D: call    FormHeapFree
0x40C572: add     esp, 4
0x40C575: push    esi
0x40C576: call    FormHeapFree
0x40C57B: add     esp, 4
0x40C57E: add     edi, 4
0x40C581: cmp     edi, 3B8h
0x40C587: jb      short loc_40C534
0x40C589: xor     edi, edi
0x40C58B: jmp     short loc_40C590
0x40C58D: align 10h
0x40C590: mov     esi, dword_B39554[edi]
0x40C596: cmp     esi, ebx
0x40C598: mov     [esp+24h+var_10], esi
0x40C59C: jz      short loc_40C5DA
0x40C59E: mov     eax, [esi+4]
0x40C5A1: cmp     eax, ebx
0x40C5A3: mov     [esp+24h+var_4], ebp
0x40C5A7: jz      short loc_40C5B4
0x40C5A9: push    eax
0x40C5AA: mov     ecx, offset dword_B35574
0x40C5AF: call    NiTMap_RemoveAt
0x40C5B4: mov     eax, [esi+4]
0x40C5B7: cmp     eax, ebx
0x40C5B9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C5C1: jz      short loc_40C5D1
0x40C5C3: cmp     byte ptr [eax], 53h ; 'S'
0x40C5C6: jnz     short loc_40C5D1
0x40C5C8: push    eax
0x40C5C9: call    FormHeapFree
0x40C5CE: add     esp, 4
0x40C5D1: push    esi
0x40C5D2: call    FormHeapFree
0x40C5D7: add     esp, 4
0x40C5DA: add     edi, 4
0x40C5DD: cmp     edi, 24h ; '$'
0x40C5E0: jb      short loc_40C590
0x40C5E2: xor     edi, edi
0x40C5E4: mov     ebp, 2
0x40C5E9: lea     esp, [esp+0]
0x40C5F0: mov     esi, dword_B39930[edi]
0x40C5F6: cmp     esi, ebx
0x40C5F8: mov     [esp+24h+var_10], esi
0x40C5FC: jz      short loc_40C63A
0x40C5FE: mov     eax, [esi+4]
0x40C601: cmp     eax, ebx
0x40C603: mov     [esp+24h+var_4], ebp
0x40C607: jz      short loc_40C614
0x40C609: push    eax
0x40C60A: mov     ecx, offset dword_B35574
0x40C60F: call    NiTMap_RemoveAt
0x40C614: mov     eax, [esi+4]
0x40C617: cmp     eax, ebx
0x40C619: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C621: jz      short loc_40C631
0x40C623: cmp     byte ptr [eax], 53h ; 'S'
0x40C626: jnz     short loc_40C631
0x40C628: push    eax
0x40C629: call    FormHeapFree
0x40C62E: add     esp, 4
0x40C631: push    esi
0x40C632: call    FormHeapFree
0x40C637: add     esp, 4
0x40C63A: add     edi, 4
0x40C63D: cmp     edi, 20h ; ' '
0x40C640: jb      short loc_40C5F0
0x40C642: xor     edi, edi
0x40C644: mov     ebp, 3
0x40C649: lea     esp, [esp+0]
0x40C650: mov     esi, dword_B399D0[edi]
0x40C656: cmp     esi, ebx
0x40C658: mov     [esp+24h+var_10], esi
0x40C65C: jz      short loc_40C69A
0x40C65E: mov     eax, [esi+4]
0x40C661: cmp     eax, ebx
0x40C663: mov     [esp+24h+var_4], ebp
0x40C667: jz      short loc_40C674
0x40C669: push    eax
0x40C66A: mov     ecx, offset dword_B35574
0x40C66F: call    NiTMap_RemoveAt
0x40C674: mov     eax, [esi+4]
0x40C677: cmp     eax, ebx
0x40C679: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C681: jz      short loc_40C691
0x40C683: cmp     byte ptr [eax], 53h ; 'S'
0x40C686: jnz     short loc_40C691
0x40C688: push    eax
0x40C689: call    FormHeapFree
0x40C68E: add     esp, 4
0x40C691: push    esi
0x40C692: call    FormHeapFree
0x40C697: add     esp, 4
0x40C69A: add     edi, 4
0x40C69D: cmp     edi, 74h ; 't'
0x40C6A0: jb      short loc_40C650
0x40C6A2: xor     edi, edi
0x40C6A4: mov     esi, dword_B39A44[edi]
0x40C6AA: cmp     esi, ebx
0x40C6AC: mov     [esp+24h+var_10], esi
0x40C6B0: jz      short loc_40C6F2
0x40C6B2: mov     eax, [esi+4]
0x40C6B5: cmp     eax, ebx
0x40C6B7: mov     [esp+24h+var_4], 4
0x40C6BF: jz      short loc_40C6CC
0x40C6C1: push    eax
0x40C6C2: mov     ecx, offset dword_B35574
0x40C6C7: call    NiTMap_RemoveAt
0x40C6CC: mov     eax, [esi+4]
0x40C6CF: cmp     eax, ebx
0x40C6D1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C6D9: jz      short loc_40C6E9
0x40C6DB: cmp     byte ptr [eax], 53h ; 'S'
0x40C6DE: jnz     short loc_40C6E9
0x40C6E0: push    eax
0x40C6E1: call    FormHeapFree
0x40C6E6: add     esp, 4
0x40C6E9: push    esi
0x40C6EA: call    FormHeapFree
0x40C6EF: add     esp, 4
0x40C6F2: add     edi, 4
0x40C6F5: cmp     edi, 18h
0x40C6F8: jb      short loc_40C6A4
0x40C6FA: xor     edi, edi
0x40C6FC: mov     ebp, 5
0x40C701: mov     esi, dword_B39A60[edi]
0x40C707: cmp     esi, ebx
0x40C709: mov     [esp+24h+var_10], esi
0x40C70D: jz      short loc_40C74B
0x40C70F: mov     eax, [esi+4]
0x40C712: cmp     eax, ebx
0x40C714: mov     [esp+24h+var_4], ebp
0x40C718: jz      short loc_40C725
0x40C71A: push    eax
0x40C71B: mov     ecx, offset dword_B35574
0x40C720: call    NiTMap_RemoveAt
0x40C725: mov     eax, [esi+4]
0x40C728: cmp     eax, ebx
0x40C72A: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C732: jz      short loc_40C742
0x40C734: cmp     byte ptr [eax], 53h ; 'S'
0x40C737: jnz     short loc_40C742
0x40C739: push    eax
0x40C73A: call    FormHeapFree
0x40C73F: add     esp, 4
0x40C742: push    esi
0x40C743: call    FormHeapFree
0x40C748: add     esp, 4
0x40C74B: add     edi, 4
0x40C74E: cmp     edi, 50h ; 'P'
0x40C751: jb      short loc_40C701
0x40C753: xor     edi, edi
0x40C755: mov     ebp, 6
0x40C75A: lea     ebx, [ebx+0]
0x40C760: mov     esi, dword_B39950[edi]
0x40C766: cmp     esi, ebx
0x40C768: mov     [esp+24h+var_10], esi
0x40C76C: jz      short loc_40C7AA
0x40C76E: mov     eax, [esi+4]
0x40C771: cmp     eax, ebx
0x40C773: mov     [esp+24h+var_4], ebp
0x40C777: jz      short loc_40C784
0x40C779: push    eax
0x40C77A: mov     ecx, offset dword_B35574
0x40C77F: call    NiTMap_RemoveAt
0x40C784: mov     eax, [esi+4]
0x40C787: cmp     eax, ebx
0x40C789: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C791: jz      short loc_40C7A1
0x40C793: cmp     byte ptr [eax], 53h ; 'S'
0x40C796: jnz     short loc_40C7A1
0x40C798: push    eax
0x40C799: call    FormHeapFree
0x40C79E: add     esp, 4
0x40C7A1: push    esi
0x40C7A2: call    FormHeapFree
0x40C7A7: add     esp, 4
0x40C7AA: add     edi, 4
0x40C7AD: cmp     edi, 7Ch ; '|'
0x40C7B0: jb      short loc_40C760
0x40C7B2: xor     edi, edi
0x40C7B4: mov     ebp, 7
0x40C7B9: lea     esp, [esp+0]
0x40C7C0: mov     esi, dword_B39530[edi]
0x40C7C6: cmp     esi, ebx
0x40C7C8: mov     [esp+24h+var_10], esi
0x40C7CC: jz      short loc_40C80A
0x40C7CE: mov     eax, [esi+4]
0x40C7D1: cmp     eax, ebx
0x40C7D3: mov     [esp+24h+var_4], ebp
0x40C7D7: jz      short loc_40C7E4
0x40C7D9: push    eax
0x40C7DA: mov     ecx, offset dword_B35574
0x40C7DF: call    NiTMap_RemoveAt
0x40C7E4: mov     eax, [esi+4]
0x40C7E7: cmp     eax, ebx
0x40C7E9: mov     [esp+24h+var_4], 0FFFFFFFFh
0x40C7F1: jz      short loc_40C801
0x40C7F3: cmp     byte ptr [eax], 53h ; 'S'
0x40C7F6: jnz     short loc_40C801
0x40C7F8: push    eax
0x40C7F9: call    FormHeapFree
0x40C7FE: add     esp, 4
0x40C801: push    esi
0x40C802: call    FormHeapFree
0x40C807: add     esp, 4
0x40C80A: add     edi, 4
0x40C80D: cmp     edi, 18h
0x40C810: jb      short loc_40C7C0
0x40C812: mov     ecx, dword ptr [esp+24h+var_C]
0x40C816: mov     large fs:0, ecx
0x40C81D: pop     ecx
0x40C81E: pop     edi
0x40C81F: pop     esi
0x40C820: pop     ebp
0x40C821: pop     ebx
0x40C822: add     esp, 10h
0x40C825: retn
