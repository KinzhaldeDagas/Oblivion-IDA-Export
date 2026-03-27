0x50A400: mov     eax, 1228h
0x50A405: call    __alloca_probe
0x50A40A: mov     eax, ds:0B30AACh
0x50A40F: xor     eax, esp
0x50A411: mov     [esp+1228h+var_4], eax
0x50A418: mov     edx, [esp+1228h+arg_C]
0x50A41F: mov     ecx, [esp+1228h+arg_4]
0x50A426: mov     eax, [esp+1228h+a1]
0x50A42D: push    ebx
0x50A42E: mov     ebx, [esp+122Ch+l]
0x50A435: push    ebp
0x50A436: mov     ebp, [esp+1230h+arg_1C]
0x50A43D: push    esi
0x50A43E: mov     esi, [esp+1234h+arg_8]
0x50A445: push    edi
0x50A446: mov     edi, [esp+1238h+arg_10]
0x50A44D: mov     [esp+1238h+NumberOfBytesWritten], ebp
0x50A451: lea     ebp, [esp+1238h+var_204]
0x50A458: push    ebp; UInt16
0x50A459: push    ebx; l
0x50A45A: push    edi; a6
0x50A45B: push    edx; a5
0x50A45C: mov     edx, [esp+1248h+NumberOfBytesWritten]
0x50A460: push    esi; a4
0x50A461: push    edx; a3
0x50A462: push    ecx; a2
0x50A463: push    eax; a1
0x50A464: call    Script_ExtractArgs
0x50A469: add     esp, 20h
0x50A46C: test    al, al
0x50A46E: jnz     short loc_50A477
0x50A470: xor     al, al
0x50A472: jmp     loc_50A885
0x50A477: mov     eax, ds:0B09EF0h
0x50A47C: cmp     byte ptr [eax], 0
0x50A47F: jz      short loc_50A470
0x50A481: push    0; hTemplateFile
0x50A483: push    80h ; '€'; dwFlagsAndAttributes
0x50A488: push    4; dwCreationDisposition
0x50A48A: push    0; lpSecurityAttributes
0x50A48C: push    0; dwShareMode
0x50A48E: push    0C0000000h; dwDesiredAccess
0x50A493: push    eax; lpFileName
0x50A494: call    dword ptr ds:0A28090h
0x50A49A: mov     edi, eax
0x50A49C: cmp     edi, 0FFFFFFFFh
0x50A49F: jz      short loc_50A470
0x50A4A1: push    2; dwMoveMethod
0x50A4A3: push    0; lpDistanceToMoveHigh
0x50A4A5: push    0; lDistanceToMove
0x50A4A7: push    edi; hFile
0x50A4A8: call    dword ptr ds:0A280A4h
0x50A4AE: lea     eax, [esp+1238h+SystemTime]
0x50A4B2: push    eax; lpSystemTime
0x50A4B3: call    dword ptr ds:0A28174h
0x50A4B9: movzx   ecx, [esp+1238h+SystemTime.wMinute]
0x50A4BE: movzx   edx, [esp+1238h+SystemTime.wHour]
0x50A4C3: movzx   eax, [esp+1238h+SystemTime.wYear]
0x50A4C8: push    ecx
0x50A4C9: movzx   ecx, [esp+123Ch+SystemTime.wDay]
0x50A4CE: push    edx
0x50A4CF: movzx   edx, [esp+1240h+SystemTime.wMonth]
0x50A4D4: push    eax
0x50A4D5: push    ecx
0x50A4D6: push    edx
0x50A4D7: lea     eax, [esp+124Ch+Buffer]
0x50A4DB: push    offset aDDD02d02d; "%d/%d/%d (%02d:%02d)\t"
0x50A4E0: push    eax
0x50A4E1: call    __sprintf
0x50A4E6: lea     eax, [esp+1254h+Buffer]
0x50A4EA: add     esp, 1Ch
0x50A4ED: lea     edx, [eax+1]
0x50A4F0: mov     cl, [eax]
0x50A4F2: add     eax, 1
0x50A4F5: test    cl, cl
0x50A4F7: jnz     short loc_50A4F0
0x50A4F9: mov     ebx, ds:0A28098h
0x50A4FF: push    0; lpOverlapped
0x50A501: lea     ecx, [esp+123Ch+NumberOfBytesWritten]
0x50A505: push    ecx; lpNumberOfBytesWritten
0x50A506: sub     eax, edx
0x50A508: push    eax; nNumberOfBytesToWrite
0x50A509: lea     edx, [esp+1244h+Buffer]
0x50A50D: push    edx; lpBuffer
0x50A50E: push    edi; hFile
0x50A50F: call    ebx ; WriteFile
0x50A511: test    esi, esi
0x50A513: jz      loc_50A5C4
0x50A519: push    0FFFFFFFFh; a2
0x50A51B: mov     ecx, esi; this
0x50A51D: call    TESForm_GetOverrideFile
0x50A522: test    eax, eax
0x50A524: jz      loc_50A5C4
0x50A52A: push    0FFFFFFFFh; a2
0x50A52C: mov     ecx, esi; this
0x50A52E: call    TESForm_GetOverrideFile
0x50A533: add     eax, 1Ch
0x50A536: push    eax
0x50A537: lea     eax, [esp+123Ch+Buffer]
0x50A53B: push    offset aS_5; "%s\t"
0x50A540: push    eax
0x50A541: call    __sprintf
0x50A546: lea     eax, [esp+1244h+Buffer]
0x50A54A: add     esp, 0Ch
0x50A54D: lea     ebp, [eax+1]
0x50A550: mov     cl, [eax]
0x50A552: add     eax, 1
0x50A555: test    cl, cl
0x50A557: jnz     short loc_50A550
0x50A559: push    0; lpOverlapped
0x50A55B: lea     ecx, [esp+123Ch+NumberOfBytesWritten]
0x50A55F: push    ecx; lpNumberOfBytesWritten
0x50A560: sub     eax, ebp
0x50A562: push    eax; nNumberOfBytesToWrite
0x50A563: lea     edx, [esp+1244h+Buffer]
0x50A567: push    edx; lpBuffer
0x50A568: push    edi; hFile
0x50A569: call    ebx ; WriteFile
0x50A56B: lea     eax, [esp+1238h+var_1224]
0x50A56F: push    eax; lpSystemTime
0x50A570: push    0FFFFFFFFh; a2
0x50A572: mov     ecx, esi; this
0x50A574: call    TESForm_GetOverrideFile
0x50A579: mov     ecx, eax
0x50A57B: call    TESFile_GetLastWriteTime
0x50A580: movzx   ecx, [esp+1238h+var_1224.wMinute]
0x50A585: movzx   edx, [esp+1238h+var_1224.wHour]
0x50A58A: movzx   eax, [esp+1238h+var_1224.wYear]
0x50A58F: push    ecx
0x50A590: movzx   ecx, [esp+123Ch+var_1224.wDay]
0x50A595: push    edx
0x50A596: movzx   edx, [esp+1240h+var_1224.wMonth]
0x50A59B: push    eax
0x50A59C: push    ecx
0x50A59D: push    edx
0x50A59E: lea     eax, [esp+124Ch+Buffer]
0x50A5A2: push    offset aDDD02d02d; "%d/%d/%d (%02d:%02d)\t"
0x50A5A7: push    eax
0x50A5A8: call    __sprintf
0x50A5AD: lea     eax, [esp+1254h+Buffer]
0x50A5B1: add     esp, 1Ch
0x50A5B4: lea     ebp, [eax+1]
0x50A5B7: mov     cl, [eax]
0x50A5B9: add     eax, 1
0x50A5BC: test    cl, cl
0x50A5BE: jnz     short loc_50A5B7
0x50A5C0: sub     eax, ebp
0x50A5C2: jmp     short loc_50A5EB
0x50A5C4: lea     eax, [esp+1238h+Buffer]
0x50A5C8: push    offset asc_A4C8E4; "\t\t"
0x50A5CD: push    eax
0x50A5CE: call    __sprintf
0x50A5D3: lea     eax, [esp+1240h+Buffer]
0x50A5D7: add     esp, 8
0x50A5DA: lea     edx, [eax+1]
0x50A5DD: lea     ecx, [ecx+0]
0x50A5E0: mov     cl, [eax]
0x50A5E2: add     eax, 1
0x50A5E5: test    cl, cl
0x50A5E7: jnz     short loc_50A5E0
0x50A5E9: sub     eax, edx
0x50A5EB: push    0; lpOverlapped
0x50A5ED: lea     ecx, [esp+123Ch+NumberOfBytesWritten]
0x50A5F1: push    ecx; lpNumberOfBytesWritten
0x50A5F2: push    eax; nNumberOfBytesToWrite
0x50A5F3: lea     edx, [esp+1244h+Buffer]
0x50A5F7: push    edx; lpBuffer
0x50A5F8: push    edi; hFile
0x50A5F9: call    ebx ; WriteFile
0x50A5FB: push    offset byte_B34190
0x50A600: lea     eax, [esp+123Ch+Buffer]
0x50A604: push    offset aS_5; "%s\t"
0x50A609: push    eax
0x50A60A: call    __sprintf
0x50A60F: lea     eax, [esp+1244h+Buffer]
0x50A613: add     esp, 0Ch
0x50A616: lea     edx, [eax+1]
0x50A619: lea     esp, [esp+0]
0x50A620: mov     cl, [eax]
0x50A622: add     eax, 1
0x50A625: test    cl, cl
0x50A627: jnz     short loc_50A620
0x50A629: push    0; lpOverlapped
0x50A62B: lea     ecx, [esp+123Ch+NumberOfBytesWritten]
0x50A62F: push    ecx; lpNumberOfBytesWritten
0x50A630: sub     eax, edx
0x50A632: push    eax; nNumberOfBytesToWrite
0x50A633: lea     edx, [esp+1244h+Buffer]
0x50A637: push    edx; lpBuffer
0x50A638: push    edi; hFile
0x50A639: call    ebx ; WriteFile
0x50A63B: mov     eax, [esi]
0x50A63D: mov     edx, [eax+170h]
0x50A643: mov     ecx, esi
0x50A645: call    edx
0x50A647: mov     edx, [eax]
0x50A649: mov     ecx, eax
0x50A64B: mov     eax, [edx+0D4h]
0x50A651: call    eax
0x50A653: push    eax
0x50A654: lea     ecx, [esp+123Ch+Buffer]
0x50A658: push    offset aS_5; "%s\t"
0x50A65D: push    ecx
0x50A65E: call    __sprintf
0x50A663: lea     eax, [esp+1244h+Buffer]
0x50A667: add     esp, 0Ch
0x50A66A: lea     ebp, [eax+1]
0x50A66D: lea     ecx, [ecx+0]
0x50A670: mov     cl, [eax]
0x50A672: add     eax, 1
0x50A675: test    cl, cl
0x50A677: jnz     short loc_50A670
0x50A679: push    0; lpOverlapped
0x50A67B: lea     edx, [esp+123Ch+NumberOfBytesWritten]
0x50A67F: push    edx; lpNumberOfBytesWritten
0x50A680: sub     eax, ebp
0x50A682: push    eax; nNumberOfBytesToWrite
0x50A683: lea     eax, [esp+1244h+Buffer]
0x50A687: push    eax; lpBuffer
0x50A688: push    edi; hFile
0x50A689: call    ebx ; WriteFile
0x50A68B: mov     ecx, esi; this
0x50A68D: call    TESObjectREFR_GetParentCell
0x50A692: mov     ebp, eax
0x50A694: mov     ecx, ebp; this
0x50A696: call    TESObjectCELL_IsInterior
0x50A69B: test    al, al
0x50A69D: mov     ecx, ebp; this
0x50A69F: jnz     short loc_50A6D1
0x50A6A1: call    TESObjectCELL_GetYCoordinate
0x50A6A6: push    eax
0x50A6A7: mov     ecx, ebp; this
0x50A6A9: call    TESObjectCELL_GetXCoordinate
0x50A6AE: mov     edx, [ebp+0]
0x50A6B1: push    eax
0x50A6B2: mov     eax, [edx+0D4h]
0x50A6B8: mov     ecx, ebp
0x50A6BA: call    eax
0x50A6BC: push    eax
0x50A6BD: lea     ecx, [esp+1244h+Buffer]
0x50A6C1: push    offset aSDD_0; "%s (%d,%d)\t"
0x50A6C6: push    ecx
0x50A6C7: call    __sprintf
0x50A6CC: add     esp, 14h
0x50A6CF: jmp     short loc_50A6EF
0x50A6D1: mov     edx, [ebp+0]
0x50A6D4: mov     eax, [edx+0D4h]
0x50A6DA: call    eax
0x50A6DC: push    eax
0x50A6DD: lea     ecx, [esp+123Ch+Buffer]
0x50A6E1: push    offset aS_5; "%s\t"
0x50A6E6: push    ecx
0x50A6E7: call    __sprintf
0x50A6EC: add     esp, 0Ch
0x50A6EF: lea     eax, [esp+1238h+Buffer]
0x50A6F3: lea     edx, [eax+1]
0x50A6F6: mov     cl, [eax]
0x50A6F8: add     eax, 1
0x50A6FB: test    cl, cl
0x50A6FD: jnz     short loc_50A6F6
0x50A6FF: sub     eax, edx
0x50A701: push    0; lpOverlapped
0x50A703: lea     edx, [esp+123Ch+NumberOfBytesWritten]
0x50A707: push    edx; lpNumberOfBytesWritten
0x50A708: push    eax; nNumberOfBytesToWrite
0x50A709: lea     eax, [esp+1244h+Buffer]
0x50A70D: push    eax; lpBuffer
0x50A70E: push    edi; hFile
0x50A70F: call    ebx ; WriteFile
0x50A711: mov     edx, [esi]
0x50A713: mov     eax, [edx+174h]
0x50A719: mov     ecx, esi
0x50A71B: call    eax
0x50A71D: fld     dword ptr [eax]
0x50A71F: sub     esp, 8
0x50A722: fstp    [esp+1240h+var_1240]
0x50A725: lea     ecx, [esp+1240h+Buffer]
0x50A729: push    offset a_0f; "%.0f\t"
0x50A72E: push    ecx
0x50A72F: call    __sprintf
0x50A734: lea     eax, [esp+1248h+Buffer]
0x50A738: add     esp, 10h
0x50A73B: lea     ebp, [eax+1]
0x50A73E: mov     edi, edi
0x50A740: mov     cl, [eax]
0x50A742: add     eax, 1
0x50A745: test    cl, cl
0x50A747: jnz     short loc_50A740
0x50A749: push    0; lpOverlapped
0x50A74B: lea     edx, [esp+123Ch+NumberOfBytesWritten]
0x50A74F: push    edx; lpNumberOfBytesWritten
0x50A750: sub     eax, ebp
0x50A752: push    eax; nNumberOfBytesToWrite
0x50A753: lea     eax, [esp+1244h+Buffer]
0x50A757: push    eax; lpBuffer
0x50A758: push    edi; hFile
0x50A759: call    ebx ; WriteFile
0x50A75B: mov     edx, [esi]
0x50A75D: mov     eax, [edx+174h]
0x50A763: mov     ecx, esi
0x50A765: call    eax
0x50A767: fld     dword ptr [eax+4]
0x50A76A: sub     esp, 8
0x50A76D: fstp    [esp+1240h+var_1240]
0x50A770: lea     ecx, [esp+1240h+Buffer]
0x50A774: push    offset a_0f; "%.0f\t"
0x50A779: push    ecx
0x50A77A: call    __sprintf
0x50A77F: lea     eax, [esp+1248h+Buffer]
0x50A783: add     esp, 10h
0x50A786: lea     ebp, [eax+1]
0x50A789: lea     esp, [esp+0]
0x50A790: mov     cl, [eax]
0x50A792: add     eax, 1
0x50A795: test    cl, cl
0x50A797: jnz     short loc_50A790
0x50A799: push    0; lpOverlapped
0x50A79B: lea     edx, [esp+123Ch+NumberOfBytesWritten]
0x50A79F: push    edx; lpNumberOfBytesWritten
0x50A7A0: sub     eax, ebp
0x50A7A2: push    eax; nNumberOfBytesToWrite
0x50A7A3: lea     eax, [esp+1244h+Buffer]
0x50A7A7: push    eax; lpBuffer
0x50A7A8: push    edi; hFile
0x50A7A9: call    ebx ; WriteFile
0x50A7AB: mov     edx, [esi]
0x50A7AD: mov     eax, [edx+174h]
0x50A7B3: mov     ecx, esi
0x50A7B5: call    eax
0x50A7B7: fld     dword ptr [eax+8]
0x50A7BA: sub     esp, 8
0x50A7BD: fstp    [esp+1240h+var_1240]
0x50A7C0: lea     ecx, [esp+1240h+Buffer]
0x50A7C4: push    offset a_0f; "%.0f\t"
0x50A7C9: push    ecx
0x50A7CA: call    __sprintf
0x50A7CF: lea     eax, [esp+1248h+Buffer]
0x50A7D3: add     esp, 10h
0x50A7D6: lea     esi, [eax+1]
0x50A7D9: lea     esp, [esp+0]
0x50A7E0: mov     cl, [eax]
0x50A7E2: add     eax, 1
0x50A7E5: test    cl, cl
0x50A7E7: jnz     short loc_50A7E0
0x50A7E9: push    0; lpOverlapped
0x50A7EB: lea     edx, [esp+123Ch+NumberOfBytesWritten]
0x50A7EF: push    edx; lpNumberOfBytesWritten
0x50A7F0: sub     eax, esi
0x50A7F2: push    eax; nNumberOfBytesToWrite
0x50A7F3: lea     eax, [esp+1244h+Buffer]
0x50A7F7: push    eax; lpBuffer
0x50A7F8: push    edi; hFile
0x50A7F9: call    ebx ; WriteFile
0x50A7FB: lea     ecx, [esp+1238h+var_204]
0x50A802: push    ecx
0x50A803: lea     edx, [esp+123Ch+Buffer]
0x50A807: push    offset aS_4; "\"%s\"\t"
0x50A80C: push    edx
0x50A80D: call    __sprintf
0x50A812: lea     eax, [esp+1244h+Buffer]
0x50A816: add     esp, 0Ch
0x50A819: lea     esi, [eax+1]
0x50A81C: lea     esp, [esp+0]
0x50A820: mov     cl, [eax]
0x50A822: add     eax, 1
0x50A825: test    cl, cl
0x50A827: jnz     short loc_50A820
0x50A829: push    0; lpOverlapped
0x50A82B: lea     ecx, [esp+123Ch+NumberOfBytesWritten]
0x50A82F: push    ecx; lpNumberOfBytesWritten
0x50A830: sub     eax, esi
0x50A832: push    eax; nNumberOfBytesToWrite
0x50A833: lea     edx, [esp+1244h+Buffer]
0x50A837: push    edx; lpBuffer
0x50A838: push    edi; hFile
0x50A839: call    ebx ; WriteFile
0x50A83B: lea     eax, [esp+1238h+Buffer]
0x50A83F: push    offset word_A3D9B0
0x50A844: push    eax
0x50A845: call    __sprintf
0x50A84A: lea     eax, [esp+1240h+Buffer]
0x50A84E: add     esp, 8
0x50A851: lea     edx, [eax+1]
0x50A854: mov     cl, [eax]
0x50A856: add     eax, 1
0x50A859: test    cl, cl
0x50A85B: jnz     short loc_50A854
0x50A85D: push    0; lpOverlapped
0x50A85F: lea     ecx, [esp+123Ch+NumberOfBytesWritten]
0x50A863: push    ecx; lpNumberOfBytesWritten
0x50A864: sub     eax, edx
0x50A866: push    eax; nNumberOfBytesToWrite
0x50A867: lea     edx, [esp+1244h+Buffer]
0x50A86B: push    edx; lpBuffer
0x50A86C: push    edi; hFile
0x50A86D: call    ebx ; WriteFile
0x50A86F: push    edi; hObject
0x50A870: call    dword ptr ds:0A28094h
0x50A876: push    offset aBetacommentAdd; "BetaComment added"
0x50A87B: call    Interface_ConsolePrint
0x50A880: add     esp, 4
0x50A883: mov     al, 1
0x50A885: mov     ecx, [esp+1238h+var_4]
0x50A88C: pop     edi
0x50A88D: pop     esi
0x50A88E: pop     ebp
0x50A88F: pop     ebx
0x50A890: xor     ecx, esp
0x50A892: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50A897: add     esp, 1228h
0x50A89D: retn
