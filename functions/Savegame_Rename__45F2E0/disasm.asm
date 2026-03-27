0x45F2E0: push    0FFFFFFFFh
0x45F2E2: push    offset Savegame_Rename_SEH
0x45F2E7: mov     eax, large fs:0
0x45F2ED: push    eax
0x45F2EE: sub     esp, 628h
0x45F2F4: mov     eax, ds:0B30AACh
0x45F2F9: xor     eax, esp
0x45F2FB: mov     [esp+634h+var_10], eax
0x45F302: push    ebx
0x45F303: push    ebp
0x45F304: push    esi
0x45F305: push    edi
0x45F306: mov     eax, ds:0B30AACh
0x45F30B: xor     eax, esp
0x45F30D: push    eax
0x45F30E: lea     eax, [esp+648h+var_C]
0x45F315: mov     large fs:0, eax
0x45F31B: mov     ebx, [esp+648h+arg_0]
0x45F322: test    ebx, ebx
0x45F324: mov     ebp, [esp+648h+arg_8]
0x45F32B: mov     [esp+648h+var_630], ecx
0x45F32F: mov     [esp+648h+var_62C], ebx
0x45F333: jz      short loc_45F35D
0x45F335: lea     eax, [ebx+3Ch]
0x45F338: lea     edx, [esp+648h+var_420]
0x45F33F: sub     edx, eax
0x45F341: mov     cl, [eax]
0x45F343: mov     [edx+eax], cl
0x45F346: add     eax, 1
0x45F349: test    cl, cl
0x45F34B: jnz     short loc_45F341
0x45F34D: cmp     ebp, 3; switch 4 cases
0x45F350: ja      Savegame_Rename___def_45F356; jumptable 0045F356 default case, case 3
0x45F356: jmp     ds:jpt_45F356[ebp*4]; switch jump
0x45F35D: mov     eax, [esp+648h+arg_4]
0x45F364: test    eax, eax
0x45F366: jnz     short loc_45F377
0x45F368: lea     eax, [esp+648h+var_218]
0x45F36F: push    eax
0x45F370: call    sub_45D920
0x45F375: jmp     short loc_45F38C
0x45F377: lea     edx, [esp+648h+var_218]
0x45F37E: sub     edx, eax
0x45F380: mov     cl, [eax]
0x45F382: mov     [edx+eax], cl
0x45F385: add     eax, 1
0x45F388: test    cl, cl
0x45F38A: jnz     short loc_45F380
0x45F38C: mov     edx, ds:0B05564h
0x45F392: lea     ecx, [esp+648h+var_218]
0x45F399: push    ecx
0x45F39A: push    edx
0x45F39B: push    offset word_B3F280
0x45F3A0: lea     eax, [esp+654h+var_420]
0x45F3A7: push    offset aSSS_ess; "%s%s%s.ess"
0x45F3AC: push    eax
0x45F3AD: call    __sprintf
0x45F3B2: add     esp, 14h
0x45F3B5: test    ebp, ebp
0x45F3B7: jnz     short loc_45F34D
0x45F3B9: xor     eax, eax
0x45F3BB: jmp     short loc_45F3C0
0x45F3BD: align 10h
0x45F3C0: mov     cl, byte ptr ds:word_B3F280[eax]
0x45F3C6: mov     [esp+eax+648h+PathName], cl
0x45F3CD: add     eax, 1
0x45F3D0: test    cl, cl
0x45F3D2: jnz     short loc_45F3C0
0x45F3D4: mov     eax, ds:0B05564h
0x45F3D9: mov     edx, eax
0x45F3DB: jmp     short loc_45F3E0
0x45F3DD: align 10h
0x45F3E0: mov     cl, [eax]
0x45F3E2: add     eax, 1
0x45F3E5: test    cl, cl
0x45F3E7: jnz     short loc_45F3E0
0x45F3E9: lea     edi, [esp+648h+PathName]
0x45F3F0: sub     eax, edx
0x45F3F2: add     edi, 0FFFFFFFFh
0x45F3F5: mov     cl, [edi+1]
0x45F3F8: add     edi, 1
0x45F3FB: test    cl, cl
0x45F3FD: jnz     short loc_45F3F5
0x45F3FF: mov     ecx, eax
0x45F401: shr     ecx, 2
0x45F404: mov     esi, edx
0x45F406: rep movsd
0x45F408: mov     ecx, eax
0x45F40A: and     ecx, 3
0x45F40D: rep movsb
0x45F40F: push    0; lpSecurityAttributes
0x45F411: lea     ecx, [esp+64Ch+PathName]
0x45F418: push    ecx; lpPathName
0x45F419: call    dword ptr ds:0A280D8h
0x45F41F: mov     eax, ds:0B05BC4h
0x45F424: cmp     eax, 0Ah
0x45F427: jle     short loc_45F42E
0x45F429: mov     eax, 0Ah
0x45F42E: add     eax, 0FFFFFFFFh
0x45F431: mov     [esp+648h+var_634], eax
0x45F435: js      loc_45F356
0x45F43B: mov     bl, ds:0A3AAE4h
0x45F441: mov     ebp, ds:0A3AAE0h
0x45F447: jmp     short loc_45F450
0x45F449: align 10h
0x45F450: xor     eax, eax
0x45F452: mov     cl, byte ptr ds:word_B3F280[eax]
0x45F458: mov     [esp+eax+648h+OldFilename], cl
0x45F45C: add     eax, 1
0x45F45F: test    cl, cl
0x45F461: jnz     short loc_45F452
0x45F463: mov     eax, ds:0B05564h
0x45F468: mov     edx, eax
0x45F46A: lea     ebx, [ebx+0]
0x45F470: mov     cl, [eax]
0x45F472: add     eax, 1
0x45F475: test    cl, cl
0x45F477: jnz     short loc_45F470
0x45F479: lea     edi, [esp+648h+OldFilename]
0x45F47D: sub     eax, edx
0x45F47F: add     edi, 0FFFFFFFFh
0x45F482: mov     cl, [edi+1]
0x45F485: add     edi, 1
0x45F488: test    cl, cl
0x45F48A: jnz     short loc_45F482
0x45F48C: mov     ecx, eax
0x45F48E: shr     ecx, 2
0x45F491: mov     esi, edx
0x45F493: rep movsd
0x45F495: mov     ecx, eax
0x45F497: and     ecx, 3
0x45F49A: lea     eax, [esp+648h+var_218]
0x45F4A1: rep movsb
0x45F4A3: mov     ecx, eax
0x45F4A5: mov     dl, [eax]
0x45F4A7: add     eax, 1
0x45F4AA: test    dl, dl
0x45F4AC: jnz     short loc_45F4A5
0x45F4AE: lea     edi, [esp+648h+OldFilename]
0x45F4B2: sub     eax, ecx
0x45F4B4: mov     esi, ecx
0x45F4B6: add     edi, 0FFFFFFFFh
0x45F4B9: lea     esp, [esp+0]
0x45F4C0: mov     cl, [edi+1]
0x45F4C3: add     edi, 1
0x45F4C6: test    cl, cl
0x45F4C8: jnz     short loc_45F4C0
0x45F4CA: mov     ecx, eax
0x45F4CC: shr     ecx, 2
0x45F4CF: rep movsd
0x45F4D1: mov     ecx, eax
0x45F4D3: and     ecx, 3
0x45F4D6: cmp     [esp+648h+var_634], 0
0x45F4DB: rep movsb
0x45F4DD: jle     short loc_45F504
0x45F4DF: mov     edx, [esp+648h+var_634]
0x45F4E3: lea     eax, [esp+648h+OldFilename]
0x45F4E7: add     eax, 0FFFFFFFFh
0x45F4EA: lea     ebx, [ebx+0]
0x45F4F0: mov     cl, [eax+1]
0x45F4F3: add     eax, 1
0x45F4F6: test    cl, cl
0x45F4F8: jnz     short loc_45F4F0
0x45F4FA: sub     edx, 1
0x45F4FD: mov     [eax], ebp
0x45F4FF: mov     [eax+4], bl
0x45F502: jnz     short loc_45F4E3
0x45F504: xor     eax, eax
0x45F506: jmp     short loc_45F510
0x45F508: align 10h
0x45F510: mov     cl, [esp+eax+648h+OldFilename]
0x45F514: mov     [esp+eax+648h+FileName], cl
0x45F51B: add     eax, 1
0x45F51E: test    cl, cl
0x45F520: jnz     short loc_45F510
0x45F522: lea     eax, [esp+648h+FileName]
0x45F529: add     eax, 0FFFFFFFFh
0x45F52C: lea     esp, [esp+0]
0x45F530: mov     cl, [eax+1]
0x45F533: add     eax, 1
0x45F536: test    cl, cl
0x45F538: jnz     short loc_45F530
0x45F53A: cmp     [esp+648h+var_634], 0
0x45F53F: mov     [eax], ebp
0x45F541: mov     [eax+4], bl
0x45F544: jnz     short loc_45F562
0x45F546: xor     eax, eax
0x45F548: jmp     short loc_45F550
0x45F54A: align 10h
0x45F550: mov     cl, [esp+eax+648h+var_420]
0x45F557: mov     [esp+eax+648h+OldFilename], cl
0x45F55B: add     eax, 1
0x45F55E: test    cl, cl
0x45F560: jnz     short loc_45F550
0x45F562: mov     ecx, ds:0B33A04h
0x45F568: test    ecx, ecx
0x45F56A: jz      short loc_45F5D4
0x45F56C: mov     edx, [ecx]
0x45F56E: mov     edx, [edx+4]
0x45F571: push    0FFFFFFFFh
0x45F573: push    0
0x45F575: push    0
0x45F577: lea     eax, [esp+654h+OldFilename]
0x45F57B: push    eax
0x45F57C: call    edx
0x45F57E: test    eax, eax
0x45F580: jz      short loc_45F5C8
0x45F582: mov     ecx, ds:0B33A04h
0x45F588: test    ecx, ecx
0x45F58A: jz      short loc_45F5B3
0x45F58C: mov     eax, [ecx]
0x45F58E: mov     eax, [eax+4]
0x45F591: push    0FFFFFFFFh
0x45F593: push    0
0x45F595: push    0
0x45F597: lea     edx, [esp+654h+FileName]
0x45F59E: push    edx
0x45F59F: call    eax
0x45F5A1: test    eax, eax
0x45F5A3: jz      short loc_45F5B3
0x45F5A5: lea     ecx, [esp+648h+FileName]
0x45F5AC: push    ecx; lpFileName
0x45F5AD: call    dword ptr ds:0A280ACh
0x45F5B3: lea     edx, [esp+648h+FileName]
0x45F5BA: push    edx; NewFilename
0x45F5BB: lea     eax, [esp+64Ch+OldFilename]
0x45F5BF: push    eax; OldFilename
0x45F5C0: call    _rename
0x45F5C5: add     esp, 8
0x45F5C8: mov     ebp, ds:0A3AAE0h
0x45F5CE: mov     bl, ds:0A3AAE4h
0x45F5D4: sub     [esp+648h+var_634], 1
0x45F5D9: jns     loc_45F450
0x45F5DF: mov     ebx, [esp+648h+var_62C]
0x45F5E3: mov     ebp, [esp+648h+arg_8]
0x45F5EA: jmp     loc_45F356
0x45F5EF: test    ebx, ebx; jumptable 0045F356 case 0
0x45F5F1: jz      loc_45F6BE
0x45F5F7: lea     ecx, [ebx+3Ch]
0x45F5FA: push    5Ch ; '\'; Ch
0x45F5FC: push    ecx; Str
0x45F5FD: call    _strrchr
0x45F602: add     eax, 1
0x45F605: lea     edx, [esp+650h+Str]
0x45F60C: add     esp, 8
0x45F60F: sub     edx, eax
0x45F611: mov     cl, [eax]
0x45F613: mov     [edx+eax], cl
0x45F616: add     eax, 1
0x45F619: test    cl, cl
0x45F61B: jnz     short loc_45F611
0x45F61D: lea     eax, [esp+648h+Str]
0x45F624: lea     edx, [eax+1]
0x45F627: mov     cl, [eax]
0x45F629: add     eax, 1
0x45F62C: test    cl, cl
0x45F62E: jnz     short loc_45F627
0x45F630: sub     eax, edx
0x45F632: cmp     eax, 4
0x45F635: jbe     short loc_45F654
0x45F637: push    4; MaxCount
0x45F639: lea     esi, [esp+eax+64Ch+Str1]
0x45F640: push    offset a_ess; ".ess"
0x45F645: push    esi; Str1
0x45F646: call    __strnicmp
0x45F64B: add     esp, 0Ch
0x45F64E: test    eax, eax
0x45F650: jnz     short loc_45F654
0x45F652: mov     [esi], al
0x45F654: mov     esi, [esp+648h+var_630]
0x45F658: push    0
0x45F65A: push    ebx
0x45F65B: mov     ecx, esi
0x45F65D: call    DeleteSavegame
0x45F662: push    5; MaxCount
0x45F664: lea     edx, [esp+64Ch+Str]
0x45F66B: push    offset aSave; "Save "
0x45F670: push    edx; Str1
0x45F671: call    __strnicmp
0x45F676: add     esp, 0Ch
0x45F679: test    eax, eax
0x45F67B: jz      short loc_45F6AC
0x45F67D: lea     eax, [esp+648h+Str]
0x45F684: push    offset aAutosave; "autosave"
0x45F689: push    eax; Str
0x45F68A: call    _strstr
0x45F68F: add     esp, 8
0x45F692: test    eax, eax
0x45F694: jnz     short loc_45F6AC
0x45F696: push    eax
0x45F697: lea     ecx, [esp+64Ch+Str]
0x45F69E: push    ecx
0x45F69F: push    eax
0x45F6A0: mov     ecx, esi
0x45F6A2: call    Savegame_Rename
0x45F6A7: jmp     loc_45F765
0x45F6AC: push    0
0x45F6AE: push    0
0x45F6B0: push    0
0x45F6B2: mov     ecx, esi
0x45F6B4: call    Savegame_Rename
0x45F6B9: jmp     loc_45F765
0x45F6BE: push    154h; Size
0x45F6C3: call    FormHeapAlloc
0x45F6C8: add     esp, 4
0x45F6CB: mov     [esp+648h+var_630], eax
0x45F6CF: test    eax, eax
0x45F6D1: mov     [esp+648h+var_4], 0
0x45F6DC: jz      short loc_45F6F8
0x45F6DE: push    0
0x45F6E0: push    20000h
0x45F6E5: push    1
0x45F6E7: lea     edx, [esp+654h+var_420]
0x45F6EE: push    edx
0x45F6EF: mov     ecx, eax
0x45F6F1: call    BSFile_constr
0x45F6F6: jmp     short loc_45F765
0x45F6F8: xor     eax, eax
0x45F6FA: jmp     short loc_45F765
0x45F6FC: push    154h; jumptable 0045F356 case 1
0x45F701: call    FormHeapAlloc
0x45F706: add     esp, 4
0x45F709: mov     [esp+648h+var_630], eax
0x45F70D: test    eax, eax
0x45F70F: mov     [esp+648h+var_4], 1
0x45F71A: jz      short loc_45F738
0x45F71C: push    0
0x45F71E: push    20000h
0x45F723: push    0
0x45F725: lea     ecx, [esp+654h+var_420]
0x45F72C: push    ecx
0x45F72D: mov     ecx, eax
0x45F72F: call    BSFile_constr
0x45F734: mov     esi, eax
0x45F736: jmp     short loc_45F73A
0x45F738: xor     esi, esi
0x45F73A: mov     edx, [esi]
0x45F73C: mov     eax, [edx+18h]
0x45F73F: push    0
0x45F741: push    0
0x45F743: mov     ecx, esi
0x45F745: mov     [esp+650h+var_4], 0FFFFFFFFh
0x45F750: call    eax
0x45F752: mov     eax, esi
0x45F754: jmp     short loc_45F765
0x45F756: mov     edx, [ebx]; jumptable 0045F356 case 2
0x45F758: mov     eax, [edx+18h]
0x45F75B: push    0
0x45F75D: push    0
0x45F75F: mov     ecx, ebx
0x45F761: call    eax
0x45F763: mov     eax, ebx; jumptable 0045F356 default case, case 3
0x45F765: mov     ecx, dword ptr [esp+648h+var_C]
0x45F76C: mov     large fs:0, ecx
0x45F773: pop     ecx
0x45F774: pop     edi
0x45F775: pop     esi
0x45F776: pop     ebp
0x45F777: pop     ebx
0x45F778: mov     ecx, [esp+634h+var_10]
0x45F77F: xor     ecx, esp
0x45F781: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45F786: add     esp, 634h
0x45F78C: retn    0Ch
