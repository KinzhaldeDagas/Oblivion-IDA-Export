0x461310: push    0FFFFFFFFh
0x461312: push    offset SaveLoad_LoadCreatedObjects_SEH
0x461317: mov     eax, large fs:0
0x46131D: push    eax
0x46131E: sub     esp, 34h
0x461321: push    ebx
0x461322: push    ebp
0x461323: push    esi
0x461324: push    edi
0x461325: mov     eax, ds:0B30AACh
0x46132A: xor     eax, esp
0x46132C: push    eax
0x46132D: lea     eax, [esp+54h+var_C]
0x461331: mov     large fs:0, eax
0x461337: mov     esi, ecx
0x461339: mov     [esp+54h+var_3C], esi
0x46133D: xor     ebp, ebp
0x46133F: cmp     [esi+2Ch], ebp
0x461342: jz      short loc_46135A
0x461344: mov     eax, [esi+2Ch]
0x461347: mov     edi, [eax+4]
0x46134A: push    eax
0x46134B: call    FormHeapFree
0x461350: add     esp, 4
0x461353: cmp     edi, ebp
0x461355: mov     [esi+2Ch], edi
0x461358: jnz     short loc_461344
0x46135A: mov     edi, [esp+54h+arg_0]
0x46135E: push    1
0x461360: lea     eax, [esp+58h+var_34]
0x461364: push    eax
0x461365: push    4
0x461367: lea     ecx, [esp+60h+var_38]
0x46136B: push    ecx
0x46136C: mov     [esi+28h], ebp
0x46136F: mov     edx, [edi+4]
0x461372: push    edi
0x461373: mov     [esp+68h+var_34], 1
0x46137B: call    edx
0x46137D: add     esp, 14h
0x461380: cmp     [esp+54h+var_38], ebp
0x461384: jz      loc_461537
0x46138A: or      dword ptr [esi+18h], 20000h
0x461391: push    41Ch; Size
0x461396: call    FormHeapAlloc
0x46139B: add     esp, 4
0x46139E: mov     [esp+54h+var_30], eax
0x4613A2: cmp     eax, ebp
0x4613A4: mov     [esp+54h+var_4], ebp
0x4613A8: jz      short loc_4613BC
0x4613AA: push    ebp; int
0x4613AB: push    ebp; ArgList
0x4613AC: push    ebp; lpString2
0x4613AD: mov     ecx, eax
0x4613AF: call    TESFile_constr
0x4613B4: mov     ebx, eax
0x4613B6: mov     [esp+54h+var_40], ebx
0x4613BA: jmp     short loc_4613C2
0x4613BC: mov     [esp+54h+var_40], ebp
0x4613C0: mov     ebx, ebp
0x4613C2: push    edi
0x4613C3: mov     ecx, ebx
0x4613C5: mov     [esp+58h+var_4], 0FFFFFFFFh
0x4613CD: call    sub_44FFF0
0x4613D2: cmp     [esp+54h+var_38], ebp
0x4613D6: mov     [esp+54h+var_34], ebp
0x4613DA: jbe     loc_461514
0x4613E0: mov     ecx, edi
0x4613E2: call    sub_42BC00
0x4613E7: mov     edx, [edi+4]
0x4613EA: push    1
0x4613EC: mov     ebp, eax
0x4613EE: lea     eax, [esp+58h+var_30]
0x4613F2: push    eax
0x4613F3: push    14h
0x4613F5: lea     ecx, [esp+60h+var_20]
0x4613F9: push    ecx
0x4613FA: push    edi
0x4613FB: mov     [esp+68h+var_30], 1
0x461403: call    edx
0x461405: add     esp, 14h
0x461408: push    ebp; Buffer
0x461409: mov     ecx, ebx
0x46140B: call    TESFIle_JumpToRecord
0x461410: mov     eax, [esp+54h+ArgList]
0x461414: mov     ecx, ds:0B33A98h
0x46141A: push    eax; _DWORD
0x46141B: call    TESDataHandler_IsFormIDCreated?
0x461420: test    al, al
0x461422: jz      loc_461565
0x461428: mov     eax, [esp+54h+ArgList]
0x46142C: push    eax; a1
0x46142D: mov     ebx, eax
0x46142F: call    TESForm_LookupByFormID
0x461434: add     esp, 4
0x461437: test    eax, eax
0x461439: jz      short loc_461445
0x46143B: push    eax
0x46143C: mov     ecx, esi
0x46143E: call    sub_45C7A0
0x461443: jmp     short loc_46144F
0x461445: mov     ecx, [esi]
0x461447: push    1
0x461449: push    ebx
0x46144A: call    sub_452DF0
0x46144F: mov     ecx, large fs:2Ch
0x461456: mov     edx, ds:0BA9DE4h
0x46145C: mov     esi, [ecx+edx*4]
0x46145F: mov     eax, [esp+54h+var_40]
0x461463: mov     bl, [esi+184h]
0x461469: mov     ecx, ds:0B33A98h
0x46146F: push    0
0x461471: push    eax
0x461472: mov     byte ptr [esi+184h], 1
0x461479: call    TESDataHandler_LoadFormRecord
0x46147E: mov     ecx, edi
0x461480: mov     [esi+184h], bl
0x461486: call    sub_42BC00
0x46148B: mov     ecx, [esp+54h+ArgList]
0x46148F: mov     edi, eax
0x461491: push    ecx; a1
0x461492: sub     edi, ebp
0x461494: call    TESForm_LookupByFormID
0x461499: mov     esi, eax
0x46149B: add     esp, 4
0x46149E: test    esi, esi
0x4614A0: jz      loc_46154D
0x4614A6: lea     ecx, [esi+10h]
0x4614A9: test    ecx, ecx
0x4614AB: jz      short loc_4614B2
0x4614AD: call    BSSimpleList_Clear
0x4614B2: mov     edx, [esi]
0x4614B4: mov     eax, [edx+6Ch]
0x4614B7: mov     ecx, esi
0x4614B9: call    eax
0x4614BB: mov     ebx, [esp+54h+var_3C]
0x4614BF: push    esi
0x4614C0: mov     ecx, ebx
0x4614C2: call    SaveLoad_AddCreatedObj
0x4614C7: mov     ecx, [ebx+40h]
0x4614CA: test    ecx, ecx
0x4614CC: jz      short loc_4614F3
0x4614CE: mov     dl, [esi+4]
0x4614D1: mov     eax, [esi+0Ch]
0x4614D4: mov     [esp+54h+var_28], dl
0x4614D8: lea     edx, [esp+54h+var_2C]
0x4614DC: push    edx
0x4614DD: mov     [esp+58h+var_2C], eax
0x4614E1: mov     [esp+58h+var_22], di
0x4614E6: mov     [esp+58h+var_27], 0
0x4614EE: call    sub_45AD00
0x4614F3: mov     esi, ebx
0x4614F5: mov     edi, [esp+54h+arg_0]
0x4614F9: mov     ebx, [esp+54h+var_40]
0x4614FD: mov     eax, [esp+54h+var_34]
0x461501: add     eax, 1
0x461504: cmp     eax, [esp+54h+var_38]
0x461508: mov     [esp+54h+var_34], eax
0x46150C: jb      loc_4613E0
0x461512: xor     ebp, ebp
0x461514: push    ebp
0x461515: mov     ecx, ebx
0x461517: call    sub_44FFF0
0x46151C: cmp     ebx, ebp
0x46151E: jz      short loc_461530
0x461520: mov     ecx, ebx
0x461522: call    TESFile_destr
0x461527: push    ebx
0x461528: call    FormHeapFree
0x46152D: add     esp, 4
0x461530: and     dword ptr [esi+18h], 0FFFDFFFFh
0x461537: mov     ecx, dword ptr [esp+54h+var_C]
0x46153B: mov     large fs:0, ecx
0x461542: pop     ecx
0x461543: pop     edi
0x461544: pop     esi
0x461545: pop     ebp
0x461546: pop     ebx
0x461547: add     esp, 40h
0x46154A: retn    4
0x46154D: mov     eax, [esp+54h+ArgList]
0x461551: push    eax; ArgList
0x461552: push    offset aCouldNotConstr; "Could not construct created base object"...
0x461557: call    PrintError
0x46155C: mov     esi, [esp+5Ch+var_3C]
0x461560: add     esp, 8
0x461563: jmp     short loc_4614F5
0x461565: mov     ecx, [esp+54h+var_1C]
0x461569: add     ecx, ebp
0x46156B: push    ecx; Buffer
0x46156C: mov     ecx, ebx
0x46156E: call    TESFIle_JumpToRecord
0x461573: jmp     short loc_4614FD
