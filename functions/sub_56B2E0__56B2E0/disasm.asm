0x56B2E0: push    0FFFFFFFFh
0x56B2E2: push    offset SEH_56B2E0
0x56B2E7: mov     eax, large fs:0
0x56B2ED: push    eax
0x56B2EE: sub     esp, 30h
0x56B2F1: push    ebx
0x56B2F2: push    ebp
0x56B2F3: push    esi
0x56B2F4: push    edi
0x56B2F5: mov     eax, ds:0B30AACh
0x56B2FA: xor     eax, esp
0x56B2FC: push    eax
0x56B2FD: lea     eax, [esp+50h+var_C]
0x56B301: mov     large fs:0, eax
0x56B307: mov     ebp, [esp+50h+arg_0]
0x56B30B: xor     ebx, ebx
0x56B30D: cmp     ebp, ebx
0x56B30F: jz      loc_56B65E
0x56B315: mov     esi, [esp+50h+arg_4]
0x56B319: cmp     esi, ebx
0x56B31B: jz      loc_56B65E
0x56B321: movzx   eax, word ptr [esi]
0x56B324: cmp     eax, 171h
0x56B329: mov     [esp+50h+var_34], ebx
0x56B32D: jnb     short loc_56B33E
0x56B32F: lea     eax, [eax+eax*4]
0x56B332: movzx   ecx, word ptr ds:0B0C8D2h[eax*8]
0x56B33A: mov     [esp+50h+var_34], ecx
0x56B33E: push    0FFFFFFFFh; a2
0x56B340: mov     ecx, ebp; this
0x56B342: call    TESForm_GetOverrideFile
0x56B347: xor     edi, edi
0x56B349: cmp     [esp+50h+var_34], ebx
0x56B34D: mov     [esp+50h+a2], eax
0x56B351: mov     dword ptr [esp+50h+ArgList], edi
0x56B355: jbe     loc_56B65E
0x56B35B: lea     edx, [esi+4]
0x56B35E: mov     [esp+50h+var_3C], ebx
0x56B362: mov     [esp+50h+arg_0], edx
0x56B366: jmp     short loc_56B370
0x56B368: align 10h
0x56B370: movzx   eax, word ptr [esi]
0x56B373: cmp     eax, 171h
0x56B378: jnb     loc_56B643
0x56B37E: lea     ecx, [eax+eax*4]
0x56B381: add     ecx, ecx
0x56B383: add     ecx, ecx
0x56B385: movzx   edx, ds:Script_CommandList?.numParams[ecx+ecx]
0x56B38D: add     ecx, ecx
0x56B38F: cmp     edi, edx
0x56B391: jnb     loc_56B4DF
0x56B397: mov     ecx, ds:Script_CommandList?.params[ecx]
0x56B39D: mov     edx, [esp+50h+var_3C]
0x56B3A1: mov     ecx, [ecx+edx+4]
0x56B3A5: cmp     ds:0B0A54Dh[ecx*8], bl
0x56B3AC: jz      loc_56B4DF
0x56B3B2: mov     edx, [esp+50h+arg_0]
0x56B3B6: mov     eax, [edx]
0x56B3B8: cmp     eax, ebx
0x56B3BA: mov     dword ptr [esp+50h+ArgList], eax
0x56B3BE: jz      loc_56B643
0x56B3C4: mov     eax, [esp+50h+a2]
0x56B3C8: push    eax; a2
0x56B3C9: lea     ecx, [esp+54h+ArgList]
0x56B3CD: push    ecx; a1
0x56B3CE: call    TESForm_ResolveFormID
0x56B3D3: mov     edx, dword ptr [esp+58h+ArgList]
0x56B3D7: push    edx; a1
0x56B3D8: call    TESForm_LookupByFormID
0x56B3DD: mov     ecx, [esp+5Ch+arg_0]
0x56B3E1: add     esp, 0Ch
0x56B3E4: cmp     eax, ebx
0x56B3E6: mov     [ecx], eax
0x56B3E8: jnz     short loc_56B447
0x56B3EA: mov     [esp+50h+var_2C], ebx
0x56B3EE: mov     word ptr [esp+50h+var_28], bx
0x56B3F3: mov     word ptr [esp+50h+var_28+2], bx
0x56B3F8: mov     edx, [ebp+0]
0x56B3FB: mov     edx, [edx+74h]
0x56B3FE: lea     eax, [esp+50h+var_2C]
0x56B402: push    eax
0x56B403: mov     ecx, ebp
0x56B405: mov     [esp+54h+var_4], ebx
0x56B409: call    edx
0x56B40B: mov     eax, [esp+50h+var_2C]
0x56B40F: mov     ecx, dword ptr [esp+50h+ArgList]
0x56B413: push    eax
0x56B414: push    ecx; ArgList
0x56B415: push    offset aUnableToFin_23; "Unable to find Function Info TESForm (%"...
0x56B41A: call    PrintError
0x56B41F: mov     edx, [esp+5Ch+var_2C]
0x56B423: push    edx
0x56B424: mov     [esp+60h+var_4], 0FFFFFFFFh
0x56B42C: call    FormHeapFree
0x56B431: add     esp, 10h
0x56B434: mov     [esp+50h+var_2C], ebx
0x56B438: mov     word ptr [esp+50h+var_28+2], bx
0x56B43D: mov     word ptr [esp+50h+var_28], bx
0x56B442: jmp     loc_56B643
0x56B447: movzx   ecx, word ptr [esi]
0x56B44A: lea     ecx, [ecx+ecx*4]
0x56B44D: mov     edx, ds:0B0C8D4h[ecx*8]
0x56B454: mov     ecx, [esp+50h+var_3C]
0x56B458: mov     edx, [edx+ecx+4]
0x56B45C: cmp     dword ptr ds:0B0A548h[edx*8], 0Bh
0x56B464: jnz     loc_56B643
0x56B46A: push    ebx; int
0x56B46B: push    offset ??_R0?AVMagicItem@@@8; struct TypeDescriptor *
0x56B470: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x56B475: push    ebx; int
0x56B476: push    eax; void *
0x56B477: call    OblivionDynamicCast
0x56B47C: mov     ecx, [esp+64h+arg_0]
0x56B480: add     esp, 14h
0x56B483: cmp     eax, ebx
0x56B485: mov     [ecx], eax
0x56B487: jnz     loc_56B643
0x56B48D: mov     [esp+50h+var_24], ebx
0x56B491: mov     word ptr [esp+50h+var_20], bx
0x56B496: mov     word ptr [esp+50h+var_20+2], bx
0x56B49B: mov     edx, [ebp+0]
0x56B49E: mov     edx, [edx+74h]
0x56B4A1: lea     eax, [esp+50h+var_24]
0x56B4A5: push    eax
0x56B4A6: mov     ecx, ebp
0x56B4A8: mov     [esp+54h+var_4], 1
0x56B4B0: call    edx
0x56B4B2: mov     eax, [esp+50h+var_24]
0x56B4B6: mov     ecx, dword ptr [esp+50h+ArgList]
0x56B4BA: push    eax
0x56B4BB: push    ecx; ArgList
0x56B4BC: push    offset aUnableToFin_24; "Unable to find Function Info MagicItem "...
0x56B4C1: call    PrintError
0x56B4C6: add     esp, 0Ch
0x56B4C9: lea     ecx, [esp+50h+var_24]; void *
0x56B4CD: mov     [esp+50h+var_4], 0FFFFFFFFh
0x56B4D5: call    BSStringT_Clear
0x56B4DA: jmp     loc_56B643
0x56B4DF: cmp     eax, 171h
0x56B4E4: jnb     loc_56B643
0x56B4EA: lea     eax, [eax+eax*4]
0x56B4ED: add     eax, eax
0x56B4EF: add     eax, eax
0x56B4F1: movzx   ecx, ds:Script_CommandList?.numParams[eax+eax]
0x56B4F9: add     eax, eax
0x56B4FB: cmp     edi, ecx
0x56B4FD: jnb     loc_56B643
0x56B503: mov     edx, ds:Script_CommandList?.params[eax]
0x56B509: mov     eax, [esp+50h+var_3C]
0x56B50D: cmp     dword ptr [edx+eax+4], 16h
0x56B512: jnz     loc_56B643
0x56B518: cmp     [esp+50h+arg_8], bl
0x56B51C: jz      loc_56B5AC
0x56B522: cmp     edi, ebx
0x56B524: jbe     loc_56B643
0x56B52A: lea     ecx, [edi-1]
0x56B52D: push    esi
0x56B52E: push    ecx
0x56B52F: call    sub_56B220
0x56B534: mov     esi, eax
0x56B536: add     esp, 8
0x56B539: cmp     esi, ebx
0x56B53B: jz      short loc_56B5A8
0x56B53D: mov     edx, [esp+50h+arg_0]
0x56B541: mov     eax, [edx]
0x56B543: push    eax
0x56B544: mov     ecx, esi
0x56B546: call    sub_4FA890
0x56B54B: cmp     eax, ebx
0x56B54D: jnz     short loc_56B5A8
0x56B54F: mov     dword ptr [esp+50h+var_1C], ebx
0x56B553: mov     word ptr [esp+50h+var_18], bx
0x56B558: mov     word ptr [esp+50h+var_18+2], bx
0x56B55D: mov     edx, [ebp+0]
0x56B560: mov     edx, [edx+74h]
0x56B563: lea     eax, [esp+50h+var_1C]
0x56B567: push    eax
0x56B568: mov     ecx, ebp
0x56B56A: mov     [esp+54h+var_4], 2
0x56B572: call    edx
0x56B574: mov     eax, [esi]
0x56B576: mov     edx, [eax+0D4h]
0x56B57C: mov     edi, dword ptr [esp+50h+var_1C]
0x56B580: mov     ecx, esi
0x56B582: call    edx
0x56B584: push    eax
0x56B585: push    edi; ArgList
0x56B586: push    offset aTesconditionit; "TESConditionItem Parameter for %s conta"...
0x56B58B: call    PrintError
0x56B590: add     esp, 0Ch
0x56B593: lea     ecx, [esp+50h+var_1C]; void *
0x56B597: mov     [esp+50h+var_4], 0FFFFFFFFh
0x56B59F: call    BSStringT_Clear
0x56B5A4: mov     edi, dword ptr [esp+50h+ArgList]
0x56B5A8: mov     esi, [esp+50h+arg_4]
0x56B5AC: cmp     edi, ebx
0x56B5AE: jbe     loc_56B643
0x56B5B4: cmp     [esp+50h+arg_8], bl
0x56B5B8: jnz     loc_56B643
0x56B5BE: lea     eax, [edi-1]
0x56B5C1: push    esi
0x56B5C2: push    eax
0x56B5C3: call    sub_56B220
0x56B5C8: mov     esi, eax
0x56B5CA: add     esp, 8
0x56B5CD: cmp     esi, ebx
0x56B5CF: jz      short loc_56B63F
0x56B5D1: mov     ecx, [esp+50h+arg_0]
0x56B5D5: mov     edx, [ecx]
0x56B5D7: push    edx; ArgList
0x56B5D8: mov     ecx, esi
0x56B5DA: call    sub_4FA840
0x56B5DF: test    eax, eax
0x56B5E1: jnz     short loc_56B63F
0x56B5E3: mov     [esp+50h+var_14], ebx
0x56B5E7: mov     word ptr [esp+50h+var_10], bx
0x56B5EC: mov     word ptr [esp+50h+var_10+2], bx
0x56B5F1: mov     eax, [ebp+0]
0x56B5F4: mov     edx, [eax+74h]
0x56B5F7: lea     ecx, [esp+50h+var_14]
0x56B5FB: push    ecx
0x56B5FC: mov     ecx, ebp
0x56B5FE: mov     [esp+54h+var_4], 3
0x56B606: call    edx
0x56B608: mov     eax, [esp+50h+var_14]
0x56B60C: mov     edx, [esi]
0x56B60E: push    eax
0x56B60F: mov     eax, [edx+0D4h]
0x56B615: mov     ecx, esi
0x56B617: call    eax
0x56B619: mov     ecx, [esp+54h+arg_0]
0x56B61D: mov     edx, [ecx]
0x56B61F: push    eax
0x56B620: push    edx; ArgList
0x56B621: push    offset aUnableToFin_25; "Unable to find variableID %d on script "...
0x56B626: call    PrintError
0x56B62B: add     esp, 10h
0x56B62E: lea     ecx, [esp+50h+var_14]; void *
0x56B632: mov     [esp+50h+var_4], 0FFFFFFFFh
0x56B63A: call    BSStringT_Clear
0x56B63F: mov     esi, [esp+50h+arg_4]
0x56B643: add     [esp+50h+var_3C], 0Ch
0x56B648: add     [esp+50h+arg_0], 4
0x56B64D: add     edi, 1
0x56B650: cmp     edi, [esp+50h+var_34]
0x56B654: mov     dword ptr [esp+50h+ArgList], edi
0x56B658: jb      loc_56B370
0x56B65E: mov     ecx, [esp+50h+var_C]
0x56B662: mov     large fs:0, ecx
0x56B669: pop     ecx
0x56B66A: pop     edi
0x56B66B: pop     esi
0x56B66C: pop     ebp
0x56B66D: pop     ebx
0x56B66E: add     esp, 3Ch
0x56B671: retn
