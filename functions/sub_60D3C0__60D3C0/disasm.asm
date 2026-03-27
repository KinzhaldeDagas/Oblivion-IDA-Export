0x60D3C0: sub     esp, 10h
0x60D3C3: push    ebp
0x60D3C4: push    esi
0x60D3C5: push    edi
0x60D3C6: mov     edi, ecx
0x60D3C8: mov     ecx, ds:0B33B00h
0x60D3CE: xor     ebp, ebp
0x60D3D0: mov     [esp+1Ch+var_8], ebp
0x60D3D4: call    sub_45A170
0x60D3D9: test    al, al
0x60D3DB: jz      loc_60D47A
0x60D3E1: mov     ecx, ds:0B33B00h
0x60D3E7: push    4; Size
0x60D3E9: lea     eax, [esp+20h+Dst]
0x60D3ED: push    eax; Dst
0x60D3EE: call    SaveLoad_LoadData
0x60D3F3: cmp     [esp+1Ch+Dst], 4B4F4C42h
0x60D3FB: jz      short loc_60D465
0x60D3FD: mov     eax, ds:0B33B00h
0x60D402: mov     esi, [eax+80h]
0x60D408: test    esi, esi
0x60D40A: jz      short loc_60D449
0x60D40C: mov     ecx, [esi]
0x60D40E: push    ecx; a1
0x60D40F: call    TESForm_LookupByFormID
0x60D414: mov     edx, [esi+5]
0x60D417: movzx   ecx, byte ptr [esi+9]
0x60D41B: add     esp, 4
0x60D41E: push    edx
0x60D41F: mov     edx, [eax]
0x60D421: push    ecx
0x60D422: mov     ecx, eax
0x60D424: mov     eax, [edx+0D4h]
0x60D42A: call    eax
0x60D42C: mov     ecx, [esi]
0x60D42E: push    eax
0x60D42F: push    ecx
0x60D430: push    12Dh
0x60D435: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D43A: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x60D43F: call    PrintError
0x60D444: add     esp, 1Ch
0x60D447: jmp     short loc_60D465
0x60D449: movzx   edx, byte ptr [eax+7Ch]
0x60D44D: push    edx
0x60D44E: push    12Dh
0x60D453: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D458: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x60D45D: call    PrintError
0x60D462: add     esp, 10h
0x60D465: mov     ecx, ds:0B33B00h
0x60D46B: mov     ebp, [ecx+14h]
0x60D46E: push    2; Size
0x60D470: lea     eax, [esp+20h+var_8]
0x60D474: push    eax; Dst
0x60D475: call    SaveLoad_LoadData
0x60D47A: push    4; Size
0x60D47C: lea     ecx, [esp+20h+var_C]
0x60D480: push    ecx; Dst
0x60D481: mov     ecx, ds:0B33B00h
0x60D487: call    SaveLoad_LoadFormID
0x60D48C: mov     ecx, [edi+8]
0x60D48F: test    ecx, ecx
0x60D491: mov     [esp+24h+var_15], al
0x60D495: jz      short loc_60D4AF
0x60D497: call    sub_5660A0
0x60D49C: test    al, al
0x60D49E: jz      short loc_60D4AF
0x60D4A0: mov     edx, [edi+8]
0x60D4A3: mov     ecx, ds:0B33B00h
0x60D4A9: push    edx
0x60D4AA: call    sub_45C7A0
0x60D4AF: mov     eax, [esp+24h+a1]
0x60D4B3: test    eax, eax
0x60D4B5: push    ebx
0x60D4B6: mov     ebx, [esp+28h+arg_0]
0x60D4BA: mov     dword ptr [edi+8], 0
0x60D4C1: mov     [esp+28h+var_16], 0
0x60D4C6: jz      loc_60D5F2
0x60D4CC: mov     esi, [esp+28h+Dst]
0x60D4D0: test    esi, 20000h
0x60D4D6: jz      loc_60D57C
0x60D4DC: mov     ecx, ds:0B33A98h
0x60D4E2: push    eax; _DWORD
0x60D4E3: call    TESDataHandler_IsFormIDCreated?
0x60D4E8: test    al, al
0x60D4EA: jz      loc_60D578
0x60D4F0: mov     ecx, ds:0B33B00h
0x60D4F6: push    1; Size
0x60D4F8: lea     eax, [esp+2Ch+arg_0]
0x60D4FC: push    eax; Dst
0x60D4FD: call    SaveLoad_LoadData
0x60D502: test    esi, 10000h
0x60D508: jnz     short loc_60D56F
0x60D50A: push    0; int
0x60D50C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x60D511: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60D516: push    0; int
0x60D518: push    ebx; void *
0x60D519: call    OblivionDynamicCast
0x60D51E: mov     esi, eax
0x60D520: add     esp, 14h
0x60D523: test    esi, esi
0x60D525: jnz     short loc_60D539
0x60D527: mov     ecx, ds:0B34D90h
0x60D52D: mov     edx, [ecx]
0x60D52F: mov     eax, [edx+18h]
0x60D532: push    offset aPackageBeingCr; "Package being created on non-actor!"
0x60D537: call    eax
0x60D539: mov     ecx, [esp+2Ch]
0x60D53D: mov     edx, [esp+14h]
0x60D541: push    ecx
0x60D542: mov     ecx, ds:0B33B00h
0x60D548: push    esi
0x60D549: push    edx
0x60D54A: call    sub_463EC0
0x60D54F: mov     esi, eax
0x60D551: mov     eax, [esi]
0x60D553: mov     edx, [eax+0E4h]
0x60D559: mov     ecx, esi
0x60D55B: call    edx
0x60D55D: mov     [edi+8], esi
0x60D560: cmp     dword ptr [esi+18h], 0FFFFFFFFh
0x60D564: jnz     short loc_60D5B1
0x60D566: mov     ecx, esi
0x60D568: call    sub_5672A0
0x60D56D: jmp     short loc_60D5B1
0x60D56F: mov     eax, [esp+28h+a1]
0x60D573: mov     [edi+8], eax
0x60D576: jmp     short loc_60D5B1
0x60D578: mov     eax, [esp+28h+a1]
0x60D57C: push    0; int
0x60D57E: push    offset ??_R0?AVTESPackage@@@8; struct TypeDescriptor *
0x60D583: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x60D588: push    0; int
0x60D58A: push    eax; a1
0x60D58B: call    TESForm_LookupByFormID
0x60D590: add     esp, 4
0x60D593: push    eax; void *
0x60D594: call    OblivionDynamicCast
0x60D599: add     esp, 14h
0x60D59C: test    eax, eax
0x60D59E: mov     [edi+8], eax
0x60D5A1: jz      short loc_60D5AC
0x60D5A3: mov     ecx, eax
0x60D5A5: call    sub_5672A0
0x60D5AA: jmp     short loc_60D5B1
0x60D5AC: mov     [esp+28h+var_16], 1
0x60D5B1: mov     ecx, ds:0B33B00h
0x60D5B7: push    4; Size
0x60D5B9: lea     esi, [edi+4]
0x60D5BC: push    esi; Dst
0x60D5BD: call    SaveLoad_LoadData
0x60D5C2: cmp     [esp+2Ch+var_1A], 0
0x60D5C7: jz      short loc_60D630
0x60D5C9: mov     ecx, [esp+14h]
0x60D5CD: test    ecx, ecx
0x60D5CF: mov     eax, [ebx+0Ch]
0x60D5D2: mov     edx, [ebx]
0x60D5D4: jz      short loc_60D611
0x60D5D6: push    ecx
0x60D5D7: push    eax
0x60D5D8: mov     eax, [edx+0D4h]
0x60D5DE: mov     ecx, ebx
0x60D5E0: call    eax
0x60D5E2: push    eax; ArgList
0x60D5E3: push    offset aS08xCouldnTFin; "%s %08X couldn't find package %08X whil"...
0x60D5E8: call    PrintError
0x60D5ED: add     esp, 10h
0x60D5F0: jmp     short loc_60D62A
0x60D5F2: cmp     [esp+28h+var_15], 0
0x60D5F7: jz      short loc_60D630
0x60D5F9: mov     ecx, ds:0B33B00h
0x60D5FF: push    4
0x60D601: call    SaveLoad_AdvanceBufferOffset
0x60D606: lea     esi, [edi+4]
0x60D609: mov     dword ptr [esi], 0
0x60D60F: jmp     short loc_60D5C9
0x60D611: push    eax
0x60D612: mov     eax, [edx+0D4h]
0x60D618: mov     ecx, ebx
0x60D61A: call    eax
0x60D61C: push    eax; ArgList
0x60D61D: push    offset aS08xCouldnTF_0; "%s %08X couldn't find a plugin package "...
0x60D622: call    PrintError
0x60D627: add     esp, 0Ch
0x60D62A: mov     dword ptr [esi], 0FFFFFFFFh
0x60D630: push    4; Size
0x60D632: lea     ecx, [edi+0Ch]
0x60D635: push    ecx; Dst
0x60D636: mov     ecx, ds:0B33B00h
0x60D63C: call    SaveLoad_LoadData
0x60D641: mov     ecx, ds:0B33B00h
0x60D647: push    4; Size
0x60D649: add     edi, 10h
0x60D64C: push    edi; Dst
0x60D64D: call    SaveLoad_LoadData
0x60D652: mov     ecx, ds:0B33B00h
0x60D658: call    sub_45A170
0x60D65D: test    al, al
0x60D65F: pop     ebx
0x60D660: jz      loc_60D776
0x60D666: mov     ecx, ds:0B33B00h
0x60D66C: mov     edi, [ecx+80h]
0x60D672: test    edi, edi
0x60D674: mov     esi, [ecx+14h]
0x60D677: jz      loc_60D71D
0x60D67D: mov     edx, [edi]
0x60D67F: push    edx; a1
0x60D680: call    TESForm_LookupByFormID
0x60D685: mov     ecx, eax
0x60D687: movzx   eax, word ptr [esp+2Ch+a1]
0x60D68C: add     eax, ebp
0x60D68E: add     esp, 4
0x60D691: cmp     esi, eax
0x60D693: jbe     short loc_60D6D6
0x60D695: mov     edx, [edi+5]
0x60D698: movzx   eax, byte ptr [edi+9]
0x60D69C: push    edx
0x60D69D: mov     edx, [ecx]
0x60D69F: push    eax
0x60D6A0: mov     eax, [edx+0D4h]
0x60D6A6: call    eax
0x60D6A8: mov     ecx, [edi]
0x60D6AA: movzx   edx, word ptr [esp+30h+a1]
0x60D6AF: push    eax
0x60D6B0: push    ecx
0x60D6B1: push    17Bh
0x60D6B6: sub     esi, edx
0x60D6B8: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D6BD: sub     esi, ebp
0x60D6BF: push    esi; ArgList
0x60D6C0: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x60D6C5: call    PrintError
0x60D6CA: add     esp, 20h
0x60D6CD: pop     edi
0x60D6CE: pop     esi
0x60D6CF: pop     ebp
0x60D6D0: add     esp, 10h
0x60D6D3: retn    0Ch
0x60D6D6: jnb     loc_60D776
0x60D6DC: mov     eax, [edi+5]
0x60D6DF: movzx   edx, byte ptr [edi+9]
0x60D6E3: push    eax
0x60D6E4: mov     eax, [ecx]
0x60D6E6: push    edx
0x60D6E7: mov     edx, [eax+0D4h]
0x60D6ED: call    edx
0x60D6EF: movzx   ecx, word ptr [esp+30h+a1]
0x60D6F4: push    eax
0x60D6F5: mov     eax, [edi]
0x60D6F7: push    eax
0x60D6F8: push    17Bh
0x60D6FD: sub     ecx, esi
0x60D6FF: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D704: add     ecx, ebp
0x60D706: push    ecx; ArgList
0x60D707: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x60D70C: call    PrintError
0x60D711: add     esp, 20h
0x60D714: pop     edi
0x60D715: pop     esi
0x60D716: pop     ebp
0x60D717: add     esp, 10h
0x60D71A: retn    0Ch
0x60D71D: movzx   eax, word ptr [esp+28h+a1]
0x60D722: lea     edx, [eax+ebp]
0x60D725: cmp     esi, edx
0x60D727: jbe     short loc_60D753
0x60D729: movzx   edx, byte ptr [ecx+7Ch]
0x60D72D: push    edx
0x60D72E: push    17Bh
0x60D733: sub     esi, eax
0x60D735: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D73A: sub     esi, ebp
0x60D73C: push    esi; ArgList
0x60D73D: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x60D742: call    PrintError
0x60D747: add     esp, 14h
0x60D74A: pop     edi
0x60D74B: pop     esi
0x60D74C: pop     ebp
0x60D74D: add     esp, 10h
0x60D750: retn    0Ch
0x60D753: jnb     short loc_60D776
0x60D755: movzx   ecx, byte ptr [ecx+7Ch]
0x60D759: push    ecx
0x60D75A: push    17Bh
0x60D75F: sub     eax, esi
0x60D761: push    offset a_AiBaseprocess; ".\\AI\\BaseProcess.cpp"
0x60D766: add     eax, ebp
0x60D768: push    eax; ArgList
0x60D769: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x60D76E: call    PrintError
0x60D773: add     esp, 14h
0x60D776: pop     edi
0x60D777: pop     esi
0x60D778: pop     ebp
0x60D779: add     esp, 10h
0x60D77C: retn    0Ch
