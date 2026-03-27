0x44F3D0: sub     esp, 0Ch
0x44F3D3: cmp     [esp+0Ch+arg_0], 0
0x44F3D8: mov     eax, ds:0BA9DE4h
0x44F3DD: push    ebx
0x44F3DE: mov     bl, byte ptr [esp+10h+arg_4]
0x44F3E2: push    ebp
0x44F3E3: push    esi
0x44F3E4: mov     esi, ecx
0x44F3E6: mov     ecx, large fs:2Ch
0x44F3ED: mov     eax, [ecx+eax*4]
0x44F3F0: push    edi; ArgList
0x44F3F1: mov     [esp+1Ch+var_C], esi
0x44F3F5: mov     [esp+1Ch+var_8], eax
0x44F3F9: mov     byte ptr [eax+184h], 1
0x44F400: jnz     short loc_44F406
0x44F402: test    bl, bl
0x44F404: jz      short loc_44F410
0x44F406: xor     ebp, ebp
0x44F408: mov     [esi+8D0h], ebp
0x44F40E: jmp     short loc_44F412
0x44F410: xor     ebp, ebp
0x44F412: mov     ecx, ds:0B333A0h; this
0x44F418: push    ebp; a3
0x44F419: push    ebp; a2
0x44F41A: call    sub_442630
0x44F41F: cmp     [esp+1Ch+arg_0], 0
0x44F424: jnz     short loc_44F433
0x44F426: test    bl, bl
0x44F428: jnz     short loc_44F433
0x44F42A: mov     edx, ds:0B333A0h
0x44F430: mov     [edx+74h], ebp
0x44F433: mov     eax, ds:0B333A0h
0x44F438: mov     [eax+34h], ebp
0x44F43B: mov     ecx, ds:0B333A0h
0x44F441: call    sub_43F220
0x44F446: cmp     byte ptr [esi+0CD1h], 0
0x44F44D: lea     edi, [esi+8C8h]
0x44F453: mov     [esp+1Ch+arg_4], edi
0x44F457: jz      short loc_44F472
0x44F459: mov     ecx, [esi+8C4h]
0x44F45F: call    TESFile_Open
0x44F464: mov     ecx, [esi+8C4h]
0x44F46A: push    1
0x44F46C: push    edi
0x44F46D: call    TESFile_BuildLoadedMasterArray
0x44F472: cmp     edi, ebp
0x44F474: jz      loc_44F525
0x44F47A: lea     ebx, [ebx+0]
0x44F480: mov     ecx, [esp+1Ch+arg_4]
0x44F484: mov     ebx, [ecx]
0x44F486: test    ebx, ebx
0x44F488: jz      loc_44F521
0x44F48E: mov     ecx, ebx
0x44F490: call    TESFile_IsLoaded
0x44F495: test    al, al
0x44F497: jz      short loc_44F50E
0x44F499: mov     ecx, ebx
0x44F49B: call    TESFile_Open
0x44F4A0: mov     eax, [esp+1Ch+var_C]
0x44F4A4: push    1
0x44F4A6: add     eax, 8C8h
0x44F4AB: push    eax
0x44F4AC: mov     ecx, ebx
0x44F4AE: call    TESFile_BuildLoadedMasterArray
0x44F4B3: mov     ecx, ebx
0x44F4B5: call    TESFile__IsFileVersionTooHigh
0x44F4BA: test    al, al
0x44F4BC: mov     ecx, ebx
0x44F4BE: jnz     short loc_44F507
0x44F4C0: call    TESFile_GetMasterFileCount
0x44F4C5: xor     esi, esi
0x44F4C7: test    eax, eax
0x44F4C9: mov     [esp+1Ch+var_4], eax
0x44F4CD: jbe     short loc_44F50E
0x44F4CF: nop
0x44F4D0: lea     ebp, [esi+1]
0x44F4D3: push    ebp
0x44F4D4: mov     ecx, ebx
0x44F4D6: call    TESFile_GetMasterByIndex
0x44F4DB: mov     edi, eax
0x44F4DD: test    edi, edi
0x44F4DF: jz      loc_44F5B2
0x44F4E5: mov     ecx, edi
0x44F4E7: call    TESFile__IsFileVersionTooHigh
0x44F4EC: test    al, al
0x44F4EE: jnz     loc_44F5B2
0x44F4F4: push    1
0x44F4F6: mov     ecx, edi
0x44F4F8: call    TESFile_SetIsLoaded
0x44F4FD: mov     esi, ebp
0x44F4FF: cmp     esi, [esp+1Ch+var_4]
0x44F503: jb      short loc_44F4D0
0x44F505: jmp     short loc_44F50E
0x44F507: push    0
0x44F509: call    TESFile_SetIsLoaded
0x44F50E: mov     edx, [esp+1Ch+arg_4]
0x44F512: mov     eax, [edx+4]
0x44F515: test    eax, eax
0x44F517: mov     [esp+1Ch+arg_4], eax
0x44F51B: jnz     loc_44F480
0x44F521: mov     esi, [esp+1Ch+var_C]
0x44F525: mov     cl, ds:0B06B18h
0x44F52B: lea     ebp, [esi+8C8h]
0x44F531: xor     bl, bl
0x44F533: test    ebp, ebp
0x44F535: mov     byte ptr [esp+1Ch+arg_4], cl
0x44F539: mov     byte ptr ds:0B06B18h, 1
0x44F540: jz      loc_44F659
0x44F546: jmp     short loc_44F550
0x44F548: align 10h
0x44F550: mov     edi, [ebp+0]
0x44F553: test    edi, edi
0x44F555: jz      loc_44F659
0x44F55B: mov     ecx, edi
0x44F55D: call    TESFile_IsLoaded
0x44F562: test    al, al
0x44F564: jz      loc_44F64E
0x44F56A: mov     ecx, edi
0x44F56C: call    TESFile_GetIsMaster
0x44F571: test    al, al
0x44F573: jnz     short loc_44F59C
0x44F575: cmp     [esi+0CD0h], al
0x44F57B: jnz     short loc_44F59C
0x44F57D: mov     ecx, edi
0x44F57F: call    TESFile_HaveMastersChanged
0x44F584: test    al, al
0x44F586: jz      short loc_44F59C
0x44F588: mov     eax, ds:0B05574h
0x44F58D: lea     edx, [edi+1Ch]
0x44F590: push    edx; ArgList
0x44F591: push    eax; Format
0x44F592: mov     bl, 1
0x44F594: call    PrintError
0x44F599: add     esp, 8
0x44F59C: mov     ecx, edi
0x44F59E: call    TESFile_IsActive
0x44F5A3: test    al, al
0x44F5A5: jz      short loc_44F612
0x44F5A7: mov     [esi+8C4h], edi
0x44F5AD: jmp     loc_44F64E
0x44F5B2: add     esi, 1
0x44F5B5: push    esi
0x44F5B6: mov     ecx, ebx
0x44F5B8: call    TESFile_GetMasterNameByIndex
0x44F5BD: test    eax, eax
0x44F5BF: jz      short loc_44F5EE
0x44F5C1: push    esi
0x44F5C2: mov     ecx, ebx
0x44F5C4: call    TESFile_GetMasterNameByIndex
0x44F5C9: push    eax; ArgList
0x44F5CA: push    offset aUnableToFindMa; "Unable to find masterfile: %s"
0x44F5CF: call    sub_404EC0
0x44F5D4: mov     eax, [esp+24h+var_8]
0x44F5D8: add     esp, 8
0x44F5DB: pop     edi
0x44F5DC: pop     esi
0x44F5DD: pop     ebp
0x44F5DE: mov     byte ptr [eax+184h], 0
0x44F5E5: xor     eax, eax
0x44F5E7: pop     ebx
0x44F5E8: add     esp, 0Ch
0x44F5EB: retn    8
0x44F5EE: push    offset aUnableToFind_8; "Unable to find masterfile: <unknown>"
0x44F5F3: call    sub_404EC0
0x44F5F8: mov     eax, [esp+20h+var_8]
0x44F5FC: add     esp, 4
0x44F5FF: pop     edi
0x44F600: pop     esi
0x44F601: pop     ebp
0x44F602: mov     byte ptr [eax+184h], 0
0x44F609: xor     eax, eax
0x44F60B: pop     ebx
0x44F60C: add     esp, 0Ch
0x44F60F: retn    8
0x44F612: mov     ecx, [esi+8D0h]
0x44F618: mov     [esi+ecx*4+8D4h], edi
0x44F61F: movzx   eax, byte ptr [esi+8D0h]
0x44F626: add     dword ptr [esi+8D0h], 1
0x44F62D: push    eax
0x44F62E: mov     ecx, edi
0x44F630: call    TESFile_SetFileIndex
0x44F635: cmp     dword ptr [esi+8D0h], 0FFh
0x44F63F: jb      short loc_44F64E
0x44F641: push    offset aTooManySelecte; "Too many selected files to compile!"
0x44F646: call    sub_404EC0
0x44F64B: add     esp, 4
0x44F64E: mov     ebp, [ebp+4]
0x44F651: test    ebp, ebp
0x44F653: jnz     loc_44F550
0x44F659: test    bl, bl
0x44F65B: mov     dword ptr [esi+8C0h], 0FF000800h
0x44F665: jz      short loc_44F676
0x44F667: mov     edx, ds:0B0557Ch
0x44F66D: push    edx; Format
0x44F66E: call    PrintError
0x44F673: add     esp, 4
0x44F676: mov     al, byte ptr [esp+1Ch+arg_4]
0x44F67A: mov     ds:0B06B18h, al
0x44F67F: mov     eax, [esi+8C4h]
0x44F685: test    eax, eax
0x44F687: jz      short loc_44F6C9
0x44F689: mov     ecx, [esi+8D0h]
0x44F68F: mov     [esi+ecx*4+8D4h], eax
0x44F696: movzx   eax, byte ptr [esi+8D0h]
0x44F69D: mov     ecx, [esi+8C4h]
0x44F6A3: add     dword ptr [esi+8D0h], 1
0x44F6AA: push    eax
0x44F6AB: call    TESFile_SetFileIndex
0x44F6B0: cmp     dword ptr [esi+8D0h], 0FFh
0x44F6BA: jb      short loc_44F6C9
0x44F6BC: push    offset aTooManySelecte; "Too many selected files to compile!"
0x44F6C1: call    sub_404EC0
0x44F6C6: add     esp, 4
0x44F6C9: mov     ecx, esi
0x44F6CB: call    TESDataHandler_CreateBuiltinObjects
0x44F6D0: xor     ebp, ebp
0x44F6D2: cmp     [esi+8D0h], ebp
0x44F6D8: jbe     short loc_44F71A
0x44F6DA: lea     edi, [esi+8D4h]
0x44F6E0: mov     ecx, [edi]
0x44F6E2: push    0
0x44F6E4: push    0
0x44F6E6: call    TESFile_OpenBSFileWrapper??
0x44F6EB: test    al, al
0x44F6ED: jnz     short loc_44F6FE
0x44F6EF: push    offset aDatahandlerInt; "DataHandler: internal error"
0x44F6F4: call    PrintError
0x44F6F9: add     esp, 4
0x44F6FC: jmp     short loc_44F70C
0x44F6FE: mov     edx, [edi]
0x44F700: mov     eax, [edx+3D4h]
0x44F706: add     ds:0B33A90h, eax
0x44F70C: add     ebp, 1
0x44F70F: add     edi, 4
0x44F712: cmp     ebp, [esi+8D0h]
0x44F718: jb      short loc_44F6E0
0x44F71A: xor     edi, edi
0x44F71C: cmp     [esi+8D0h], edi
0x44F722: mov     dword ptr ds:0B33A94h, 0
0x44F72C: mov     byte ptr [esi+0CD7h], 1
0x44F733: jbe     short loc_44F780
0x44F735: test    edi, edi
0x44F737: mov     byte ptr [esp+1Ch+arg_4], 0
0x44F73C: jnz     short loc_44F74A
0x44F73E: cmp     [esp+1Ch+arg_0], 0
0x44F743: jnz     short loc_44F74A
0x44F745: mov     byte ptr [esp+1Ch+arg_4], 1
0x44F74A: mov     ecx, [esp+1Ch+arg_4]
0x44F74E: mov     edx, [esi+edi*4+8D4h]
0x44F755: push    ecx
0x44F756: push    edx
0x44F757: mov     ecx, esi
0x44F759: call    TESDataHandler_LoadFile
0x44F75E: test    eax, eax
0x44F760: jnz     short loc_44F775
0x44F762: call    sub_494480
0x44F767: push    eax; ArgList
0x44F768: push    offset aDatahandlerUnr; "DataHandler: unrecognized form\r\nLook "...
0x44F76D: call    PrintError
0x44F772: add     esp, 8
0x44F775: add     edi, 1
0x44F778: cmp     edi, [esi+8D0h]
0x44F77E: jb      short loc_44F735
0x44F780: lea     edi, [esi+44h]
0x44F783: test    edi, edi
0x44F785: mov     byte ptr [esi+0CD7h], 0
0x44F78C: jz      short loc_44F7A4
0x44F78E: mov     edi, edi
0x44F790: mov     ecx, [edi]
0x44F792: test    ecx, ecx
0x44F794: jz      short loc_44F7A4
0x44F796: mov     eax, [ecx]
0x44F798: mov     edx, [eax+6Ch]
0x44F79B: call    edx
0x44F79D: mov     edi, [edi+4]
0x44F7A0: test    edi, edi
0x44F7A2: jnz     short loc_44F790
0x44F7A4: lea     edi, [esi+5Ch]
0x44F7A7: test    edi, edi
0x44F7A9: jz      short loc_44F7C4
0x44F7AB: jmp     short loc_44F7B0
0x44F7AD: align 10h
0x44F7B0: mov     ecx, [edi]
0x44F7B2: test    ecx, ecx
0x44F7B4: jz      short loc_44F7C4
0x44F7B6: mov     eax, [ecx]
0x44F7B8: mov     edx, [eax+6Ch]
0x44F7BB: call    edx
0x44F7BD: mov     edi, [edi+4]
0x44F7C0: test    edi, edi
0x44F7C2: jnz     short loc_44F7B0
0x44F7C4: lea     edi, [esi+84h]
0x44F7CA: test    edi, edi
0x44F7CC: jz      short loc_44F7E4
0x44F7CE: mov     edi, edi
0x44F7D0: mov     ecx, [edi]
0x44F7D2: test    ecx, ecx
0x44F7D4: jz      short loc_44F7E4
0x44F7D6: mov     eax, [ecx]
0x44F7D8: mov     edx, [eax+6Ch]
0x44F7DB: call    edx
0x44F7DD: mov     edi, [edi+4]
0x44F7E0: test    edi, edi
0x44F7E2: jnz     short loc_44F7D0
0x44F7E4: lea     edi, [esi+8Ch]
0x44F7EA: test    edi, edi
0x44F7EC: jz      short loc_44F804
0x44F7EE: mov     edi, edi
0x44F7F0: mov     ecx, [edi]
0x44F7F2: test    ecx, ecx
0x44F7F4: jz      short loc_44F804
0x44F7F6: mov     eax, [ecx]
0x44F7F8: mov     edx, [eax+6Ch]
0x44F7FB: call    edx
0x44F7FD: mov     edi, [edi+4]
0x44F800: test    edi, edi
0x44F802: jnz     short loc_44F7F0
0x44F804: lea     edi, [esi+94h]
0x44F80A: test    edi, edi
0x44F80C: jz      short loc_44F824
0x44F80E: mov     edi, edi
0x44F810: mov     ecx, [edi]
0x44F812: test    ecx, ecx
0x44F814: jz      short loc_44F824
0x44F816: mov     eax, [ecx]
0x44F818: mov     edx, [eax+6Ch]
0x44F81B: call    edx
0x44F81D: mov     edi, [edi+4]
0x44F820: test    edi, edi
0x44F822: jnz     short loc_44F810
0x44F824: lea     edi, [esi+0ACh]
0x44F82A: test    edi, edi
0x44F82C: jz      short loc_44F844
0x44F82E: mov     edi, edi
0x44F830: mov     ecx, [edi]
0x44F832: test    ecx, ecx
0x44F834: jz      short loc_44F844
0x44F836: mov     eax, [ecx]
0x44F838: mov     edx, [eax+6Ch]
0x44F83B: call    edx
0x44F83D: mov     edi, [edi+4]
0x44F840: test    edi, edi
0x44F842: jnz     short loc_44F830
0x44F844: lea     edi, [esi+9Ch]
0x44F84A: test    edi, edi
0x44F84C: jz      short loc_44F864
0x44F84E: mov     edi, edi
0x44F850: mov     ecx, [edi]
0x44F852: test    ecx, ecx
0x44F854: jz      short loc_44F864
0x44F856: mov     eax, [ecx]
0x44F858: mov     edx, [eax+6Ch]
0x44F85B: call    edx
0x44F85D: mov     edi, [edi+4]
0x44F860: test    edi, edi
0x44F862: jnz     short loc_44F850
0x44F864: lea     edi, [esi+0B4h]
0x44F86A: test    edi, edi
0x44F86C: jz      short loc_44F884
0x44F86E: mov     edi, edi
0x44F870: mov     ecx, [edi]
0x44F872: test    ecx, ecx
0x44F874: jz      short loc_44F884
0x44F876: mov     eax, [ecx]
0x44F878: mov     edx, [eax+6Ch]
0x44F87B: call    edx
0x44F87D: mov     edi, [edi+4]
0x44F880: test    edi, edi
0x44F882: jnz     short loc_44F870
0x44F884: lea     edi, [esi+0A4h]
0x44F88A: test    edi, edi
0x44F88C: jz      short loc_44F8A4
0x44F88E: mov     edi, edi
0x44F890: mov     ecx, [edi]
0x44F892: test    ecx, ecx
0x44F894: jz      short loc_44F8A4
0x44F896: mov     eax, [ecx]
0x44F898: mov     edx, [eax+6Ch]
0x44F89B: call    edx
0x44F89D: mov     edi, [edi+4]
0x44F8A0: test    edi, edi
0x44F8A2: jnz     short loc_44F890
0x44F8A4: lea     edi, [esi+4Ch]
0x44F8A7: test    edi, edi
0x44F8A9: jz      short loc_44F8C4
0x44F8AB: jmp     short loc_44F8B0
0x44F8AD: align 10h
0x44F8B0: mov     ecx, [edi]
0x44F8B2: test    ecx, ecx
0x44F8B4: jz      short loc_44F8C4
0x44F8B6: mov     eax, [ecx]
0x44F8B8: mov     edx, [eax+6Ch]
0x44F8BB: call    edx
0x44F8BD: mov     edi, [edi+4]
0x44F8C0: test    edi, edi
0x44F8C2: jnz     short loc_44F8B0
0x44F8C4: lea     edi, [esi+8C8h]
0x44F8CA: xor     bl, bl
0x44F8CC: xor     ebp, ebp
0x44F8CE: test    edi, edi
0x44F8D0: jz      short loc_44F8F4
0x44F8D2: mov     ecx, [edi]
0x44F8D4: test    ecx, ecx
0x44F8D6: jz      short loc_44F8EB
0x44F8D8: call    TESFile_IsLoaded
0x44F8DD: test    al, al
0x44F8DF: jz      short loc_44F8E4
0x44F8E1: add     ebp, 1
0x44F8E4: mov     edi, [edi+4]
0x44F8E7: test    edi, edi
0x44F8E9: jnz     short loc_44F8D2
0x44F8EB: cmp     ebp, 1
0x44F8EE: jnz     short loc_44F8F4
0x44F8F0: mov     bl, 1
0x44F8F2: jmp     short loc_44F8FE
0x44F8F4: push    0
0x44F8F6: call    sub_52F6D0
0x44F8FB: add     esp, 4
0x44F8FE: mov     ecx, offset TimeGlobals
0x44F903: call    sub_402860
0x44F908: lea     edi, [esi+7Ch]
0x44F90B: test    edi, edi
0x44F90D: jz      short loc_44F924
0x44F90F: nop
0x44F910: mov     ecx, [edi]
0x44F912: test    ecx, ecx
0x44F914: jz      short loc_44F924
0x44F916: mov     eax, [ecx]
0x44F918: mov     edx, [eax+6Ch]
0x44F91B: call    edx
0x44F91D: mov     edi, [edi+4]
0x44F920: test    edi, edi
0x44F922: jnz     short loc_44F910
0x44F924: test    bl, bl
0x44F926: jnz     short loc_44F932
0x44F928: push    0
0x44F92A: call    sub_52FAE0
0x44F92F: add     esp, 4
0x44F932: mov     ecx, [esi]
0x44F934: call    TESHealthForm_GetHealth
0x44F939: mov     edi, eax
0x44F93B: test    edi, edi
0x44F93D: jz      short loc_44F956
0x44F93F: nop
0x44F940: mov     eax, [edi]
0x44F942: mov     edx, [eax+6Ch]
0x44F945: mov     ecx, edi
0x44F947: call    edx
0x44F949: mov     ecx, edi
0x44F94B: call    TESObject_GetNextObject
0x44F950: mov     edi, eax
0x44F952: test    edi, edi
0x44F954: jnz     short loc_44F940
0x44F956: mov     eax, [esp+1Ch+var_8]
0x44F95A: mov     byte ptr [eax+184h], 0
0x44F961: mov     edi, [esi+0BCh]
0x44F967: test    edi, edi
0x44F969: jz      short loc_44F992
0x44F96B: jmp     short loc_44F970
0x44F96D: align 10h
0x44F970: cmp     dword ptr [edi+8], 0
0x44F974: jnz     short loc_44F97C
0x44F976: cmp     dword ptr [edi+4], 0
0x44F97A: jz      short loc_44F992
0x44F97C: mov     ecx, [edi+4]
0x44F97F: mov     edx, [ecx]
0x44F981: mov     eax, [edx+6Ch]
0x44F984: call    eax
0x44F986: mov     edi, [edi+8]
0x44F989: test    edi, edi
0x44F98B: jz      short loc_44F992
0x44F98D: add     edi, 0FFFFFFFCh
0x44F990: jnz     short loc_44F970
0x44F992: lea     ebx, [esi+0Ch]
0x44F995: mov     edi, ebx
0x44F997: test    edi, edi
0x44F999: jz      short loc_44F9B2
0x44F99B: jmp     short loc_44F9A0
0x44F99D: align 10h
0x44F9A0: mov     ecx, [edi]
0x44F9A2: test    ecx, ecx
0x44F9A4: jz      short loc_44F9AB
0x44F9A6: call    sub_4EF290
0x44F9AB: mov     edi, [edi+4]
0x44F9AE: test    edi, edi
0x44F9B0: jnz     short loc_44F9A0
0x44F9B2: mov     ebp, [esi+0CCh]
0x44F9B8: xor     edi, edi
0x44F9BA: test    ebp, ebp
0x44F9BC: jle     short loc_44F9DB
0x44F9BE: mov     edi, edi
0x44F9C0: mov     ecx, [esi+0C4h]
0x44F9C6: mov     ecx, [ecx+edi*4]
0x44F9C9: test    ecx, ecx
0x44F9CB: jz      short loc_44F9D4
0x44F9CD: mov     edx, [ecx]
0x44F9CF: mov     eax, [edx+6Ch]
0x44F9D2: call    eax
0x44F9D4: add     edi, 1
0x44F9D7: cmp     edi, ebp
0x44F9D9: jl      short loc_44F9C0
0x44F9DB: mov     edi, ebx
0x44F9DD: test    edi, edi
0x44F9DF: jz      short loc_44F9F5
0x44F9E1: mov     ecx, [edi]
0x44F9E3: test    ecx, ecx
0x44F9E5: jz      short loc_44F9EE
0x44F9E7: mov     edx, [ecx]
0x44F9E9: mov     eax, [edx+6Ch]
0x44F9EC: call    eax
0x44F9EE: mov     edi, [edi+4]
0x44F9F1: test    edi, edi
0x44F9F3: jnz     short loc_44F9E1
0x44F9F5: mov     ecx, ds:0B362C0h
0x44F9FB: call    sub_520FA0
0x44FA00: call    sub_416900
0x44FA05: lea     edi, [esi+4]
0x44FA08: test    edi, edi
0x44FA0A: jz      short loc_44FA24
0x44FA0C: lea     esp, [esp+0]
0x44FA10: mov     ecx, [edi]
0x44FA12: test    ecx, ecx
0x44FA14: jz      short loc_44FA1D
0x44FA16: mov     edx, [ecx]
0x44FA18: mov     eax, [edx+6Ch]
0x44FA1B: call    eax
0x44FA1D: mov     edi, [edi+4]
0x44FA20: test    edi, edi
0x44FA22: jnz     short loc_44FA10
0x44FA24: mov     ecx, esi
0x44FA26: call    sub_44D610
0x44FA2B: pop     edi
0x44FA2C: pop     esi
0x44FA2D: pop     ebp
0x44FA2E: mov     dword ptr ds:0B33A9Ch, 0
0x44FA38: mov     eax, 1
0x44FA3D: pop     ebx
0x44FA3E: add     esp, 0Ch
0x44FA41: retn    8
