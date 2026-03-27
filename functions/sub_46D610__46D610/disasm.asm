0x46D610: mov     eax, [esp+arg_4]
0x46D614: sub     esp, 10h
0x46D617: push    ebx
0x46D618: mov     ebx, ecx
0x46D61A: xor     ecx, ecx
0x46D61C: mov     [ebx], al
0x46D61E: mov     edx, 4
0x46D623: mul     edx
0x46D625: seto    cl
0x46D628: push    edi
0x46D629: neg     ecx
0x46D62B: or      ecx, eax
0x46D62D: push    ecx; Size
0x46D62E: call    FormHeapAlloc
0x46D633: xor     edi, edi
0x46D635: add     esp, 4
0x46D638: cmp     [esp+18h+arg_4], edi
0x46D63C: mov     [ebx+4], eax
0x46D63F: jbe     loc_46D741
0x46D645: push    ebp
0x46D646: mov     ebp, [esp+1Ch+arg_8]
0x46D64A: push    esi; ArgList
0x46D64B: mov     esi, [esp+20h+arg_0]
0x46D64F: add     esi, 2
0x46D652: movzx   ecx, byte ptr [esi-1]
0x46D656: movzx   edx, byte ptr [esi]
0x46D659: movzx   eax, byte ptr [esi-2]
0x46D65D: mov     [esp+20h+var_F], cl
0x46D661: mov     ecx, [esi+2]
0x46D664: mov     [esp+20h+var_E], dl
0x46D668: movzx   edx, byte ptr [esi+0Eh]
0x46D66C: mov     [esp+20h+var_10], al
0x46D670: movzx   eax, byte ptr [esi+1]
0x46D674: mov     [esp+20h+var_C], ecx
0x46D678: movzx   ecx, byte ptr [esi+10h]
0x46D67C: mov     [esp+20h+var_8], dl
0x46D680: movzx   edx, byte ptr [esi+11h]
0x46D684: mov     [esp+20h+var_D], al
0x46D688: movzx   eax, byte ptr [esi+0Fh]
0x46D68C: mov     [esp+20h+var_6], cl
0x46D690: push    0
0x46D692: lea     ecx, [esp+24h+var_10]
0x46D696: mov     [esp+24h+var_5], dl
0x46D69A: push    ecx
0x46D69B: lea     edx, [esp+28h+var_8]
0x46D69F: mov     [esp+28h+var_7], al
0x46D6A3: mov     eax, [esi+12h]
0x46D6A6: push    edx
0x46D6A7: push    1
0x46D6A9: mov     [esp+30h+var_4], eax
0x46D6AD: call    ArchiveManager_LazyFileLookup
0x46D6B2: mov     ecx, [ebx+4]
0x46D6B5: add     esp, 10h
0x46D6B8: mov     [ecx+edi*4], eax
0x46D6BB: cmp     byte ptr ds:0B06310h, 0
0x46D6C2: jz      short loc_46D72F
0x46D6C4: cmp     byte ptr ds:0B04428h, 0
0x46D6CB: jz      short loc_46D72F
0x46D6CD: mov     edx, [ebx+4]
0x46D6D0: cmp     dword ptr [edx+edi*4], 0
0x46D6D4: jnz     short loc_46D72F
0x46D6D6: test    ebp, ebp
0x46D6D8: jz      short loc_46D707
0x46D6DA: cmp     dword ptr [esp+20h+ArgList], 0
0x46D6DF: jz      short loc_46D722
0x46D6E1: mov     eax, [ebp+0Ch]
0x46D6E4: push    eax
0x46D6E5: mov     eax, [ebp+0]
0x46D6E8: mov     edx, [eax+0D4h]
0x46D6EE: mov     ecx, ebp
0x46D6F0: call    edx
0x46D6F2: push    eax
0x46D6F3: mov     eax, dword ptr [esp+28h+ArgList]
0x46D6F7: push    eax; ArgList
0x46D6F8: push    offset aFailedToFindAr; "Failed to find archive file entry for t"...
0x46D6FD: call    PrintError
0x46D702: add     esp, 10h
0x46D705: jmp     short loc_46D72F
0x46D707: cmp     dword ptr [esp+20h+ArgList], 0
0x46D70C: jz      short loc_46D722
0x46D70E: mov     ecx, dword ptr [esp+20h+ArgList]
0x46D712: push    ecx; ArgList
0x46D713: push    offset aFailedToFind_0; "Failed to find archive file entry for t"...
0x46D718: call    PrintError
0x46D71D: add     esp, 8
0x46D720: jmp     short loc_46D72F
0x46D722: push    offset aFailedToFind_1; "Failed to find archive file entry for t"...
0x46D727: call    PrintError
0x46D72C: add     esp, 4
0x46D72F: add     edi, 1
0x46D732: add     esi, 18h
0x46D735: cmp     edi, [esp+20h+arg_4]
0x46D739: jb      loc_46D652
0x46D73F: pop     esi
0x46D740: pop     ebp
0x46D741: pop     edi
0x46D742: pop     ebx
0x46D743: add     esp, 10h
0x46D746: retn    10h
