0x6DE410: push    0FFFFFFFFh
0x6DE412: push    offset SEH_6DE410
0x6DE417: mov     eax, large fs:0
0x6DE41D: push    eax
0x6DE41E: sub     esp, 128h
0x6DE424: mov     eax, ds:0B30AACh
0x6DE429: xor     eax, esp
0x6DE42B: mov     [esp+134h+var_10], eax
0x6DE432: push    ebx
0x6DE433: push    ebp
0x6DE434: push    esi
0x6DE435: push    edi
0x6DE436: mov     eax, ds:0B30AACh
0x6DE43B: xor     eax, esp
0x6DE43D: push    eax
0x6DE43E: lea     eax, [esp+148h+var_C]
0x6DE445: mov     large fs:0, eax
0x6DE44B: mov     edi, [esp+148h+a2]
0x6DE452: mov     ebx, ecx
0x6DE454: push    edi; a2
0x6DE455: mov     [esp+14Ch+var_124], ebx
0x6DE459: call    sub_7008A0
0x6DE45E: mov     eax, [edi+21Ch]
0x6DE464: mov     edx, [eax+4]
0x6DE467: push    1
0x6DE469: lea     ecx, [esp+14Ch+ArgList]
0x6DE46D: push    ecx
0x6DE46E: mov     ebp, 4
0x6DE473: push    ebp
0x6DE474: lea     esi, [ebx+8]
0x6DE477: push    esi
0x6DE478: push    eax
0x6DE479: mov     dword ptr [esp+15Ch+ArgList], ebp
0x6DE47D: call    edx
0x6DE47F: mov     eax, [edi+21Ch]
0x6DE485: push    1
0x6DE487: lea     edx, [esp+160h+ArgList]
0x6DE48B: push    edx
0x6DE48C: lea     ecx, [ebx+0Ch]
0x6DE48F: push    ebp
0x6DE490: push    ecx
0x6DE491: push    eax
0x6DE492: mov     eax, [eax+4]
0x6DE495: mov     dword ptr [esp+170h+ArgList], ebp
0x6DE499: call    eax
0x6DE49B: mov     eax, [edi+21Ch]
0x6DE4A1: push    1
0x6DE4A3: lea     ecx, [esp+174h+ArgList]
0x6DE4A7: push    ecx
0x6DE4A8: push    1
0x6DE4AA: lea     edx, [esp+17Ch+var_12D]
0x6DE4AE: push    edx
0x6DE4AF: push    eax
0x6DE4B0: mov     eax, [eax+4]
0x6DE4B3: mov     dword ptr [esp+184h+ArgList], 1
0x6DE4BB: call    eax
0x6DE4BD: cmp     [esp+184h+var_12D], 1
0x6DE4C2: mov     ebp, [esi]
0x6DE4C4: setz    cl
0x6DE4C7: mov     [ebx+14h], cl
0x6DE4CA: xor     ecx, ecx
0x6DE4CC: mov     eax, ebp
0x6DE4CE: mov     edx, 0Ch
0x6DE4D3: mul     edx
0x6DE4D5: seto    cl
0x6DE4D8: neg     ecx
0x6DE4DA: or      ecx, eax
0x6DE4DC: xor     eax, eax
0x6DE4DE: add     ecx, 4
0x6DE4E1: setb    al
0x6DE4E4: neg     eax
0x6DE4E6: or      eax, ecx
0x6DE4E8: push    eax; Size
0x6DE4E9: call    FormHeapAlloc
0x6DE4EE: add     esp, 40h
0x6DE4F1: mov     [esp+148h+var_11C], eax
0x6DE4F5: xor     ecx, ecx
0x6DE4F7: cmp     eax, ecx
0x6DE4F9: mov     [esp+148h+var_4], ecx
0x6DE500: jz      short loc_6DE526
0x6DE502: push    offset sub_6DE0D0; a5
0x6DE507: push    offset sub_4842D0; a4
0x6DE50C: push    ebp; size
0x6DE50D: mov     [eax], ebp
0x6DE50F: add     eax, 4
0x6DE512: push    0Ch; a2
0x6DE514: push    eax; a1
0x6DE515: mov     dword ptr [esp+15Ch+ArgList], eax
0x6DE519: call    ArrayConstructor
0x6DE51E: mov     eax, dword ptr [esp+148h+ArgList]
0x6DE522: xor     ecx, ecx
0x6DE524: jmp     short loc_6DE528
0x6DE526: xor     eax, eax
0x6DE528: cmp     [esi], ecx
0x6DE52A: mov     [esp+148h+var_4], 0FFFFFFFFh
0x6DE535: mov     [ebx+10h], eax
0x6DE538: mov     dword ptr [esp+148h+ArgList], ecx
0x6DE53C: jbe     loc_6DE75E
0x6DE542: mov     [esp+148h+var_12C], ecx
0x6DE546: jmp     short loc_6DE550
0x6DE548: align 10h
0x6DE550: cmp     dword ptr [edi+0D8h], 0A010068h
0x6DE55A: jnb     loc_6DE734
0x6DE560: mov     eax, [edi+21Ch]
0x6DE566: push    1
0x6DE568: lea     ecx, [esp+14Ch+var_128]
0x6DE56C: push    ecx
0x6DE56D: mov     esi, 4
0x6DE572: push    esi
0x6DE573: lea     edx, [esp+154h+var_120]
0x6DE577: push    edx
0x6DE578: push    eax
0x6DE579: mov     eax, [eax+4]
0x6DE57C: mov     [esp+15Ch+var_128], esi
0x6DE580: call    eax
0x6DE582: mov     eax, [edi+21Ch]
0x6DE588: push    1
0x6DE58A: lea     ecx, [esp+160h+var_118]
0x6DE58E: push    ecx
0x6DE58F: push    esi
0x6DE590: lea     edx, [esp+168h+var_114]
0x6DE594: push    edx
0x6DE595: push    eax
0x6DE596: mov     eax, [eax+4]
0x6DE599: mov     [esp+170h+var_118], esi
0x6DE59D: call    eax
0x6DE59F: mov     ecx, [esp+170h+var_120]
0x6DE5A3: add     esp, 28h
0x6DE5A6: test    ecx, ecx
0x6DE5A8: jbe     loc_6DE677
0x6DE5AE: mov     esi, [esp+148h+var_114]
0x6DE5B2: mov     dl, ds:byte_B3D3E8[esi]
0x6DE5B8: mov     eax, ds:0B3D088h[esi*4]
0x6DE5BF: push    ecx
0x6DE5C0: push    edi
0x6DE5C1: mov     byte ptr [esp+150h+var_11C], dl
0x6DE5C5: call    eax ; dword_B3D088
0x6DE5C7: mov     ecx, [esp+150h+var_11C]
0x6DE5CB: mov     edx, [esp+150h+var_120]
0x6DE5CF: push    ecx
0x6DE5D0: mov     ebx, eax
0x6DE5D2: mov     eax, ds:0B3D410h[esi*4]
0x6DE5D9: push    edx
0x6DE5DA: push    ebx
0x6DE5DB: call    eax ; dword_B3D410
0x6DE5DD: push    18h; Size
0x6DE5DF: call    FormHeapAlloc
0x6DE5E4: add     esp, 18h
0x6DE5E7: mov     [esp+148h+var_128], eax
0x6DE5EB: test    eax, eax
0x6DE5ED: mov     [esp+148h+var_4], 1
0x6DE5F8: jz      short loc_6DE607
0x6DE5FA: push    0
0x6DE5FC: mov     ecx, eax
0x6DE5FE: call    sub_6D2990
0x6DE603: mov     ebp, eax
0x6DE605: jmp     short loc_6DE609
0x6DE607: xor     ebp, ebp
0x6DE609: mov     eax, [esp+148h+var_120]
0x6DE60D: push    esi
0x6DE60E: push    eax
0x6DE60F: push    ebx
0x6DE610: mov     ecx, ebp
0x6DE612: mov     [esp+154h+var_4], 0FFFFFFFFh
0x6DE61D: call    sub_6DE010
0x6DE622: mov     ecx, [esp+148h+var_124]
0x6DE626: mov     edx, [ecx+10h]
0x6DE629: mov     eax, [esp+148h+var_12C]
0x6DE62D: mov     esi, [eax+edx+8]
0x6DE631: cmp     esi, ebp
0x6DE633: lea     ebx, [eax+edx+8]
0x6DE637: jz      short loc_6DE669
0x6DE639: test    esi, esi
0x6DE63B: jz      short loc_6DE659
0x6DE63D: lea     ecx, [esi+4]
0x6DE640: push    ecx; lpAddend
0x6DE641: call    dword ptr ds:0A2807Ch
0x6DE647: test    eax, eax
0x6DE649: jnz     short loc_6DE659
0x6DE64B: test    esi, esi
0x6DE64D: jz      short loc_6DE659
0x6DE64F: mov     edx, [esi]
0x6DE651: mov     eax, [edx]
0x6DE653: push    1
0x6DE655: mov     ecx, esi
0x6DE657: call    eax
0x6DE659: test    ebp, ebp
0x6DE65B: mov     [ebx], ebp
0x6DE65D: jz      short loc_6DE669
0x6DE65F: lea     ecx, [ebp+4]
0x6DE662: push    ecx; lpAddend
0x6DE663: call    dword ptr ds:0A28078h
0x6DE669: mov     edx, [ebp+0]
0x6DE66C: mov     eax, [edx+7Ch]
0x6DE66F: mov     ecx, ebp
0x6DE671: call    eax
0x6DE673: mov     ebx, [esp+148h+var_124]
0x6DE677: mov     ecx, dword ptr [esp+148h+ArgList]
0x6DE67B: push    ecx; ArgList
0x6DE67C: push    offset aMtD; "MT %d"
0x6DE681: lea     edx, [esp+150h+Src]
0x6DE685: push    100h; SizeInBytes
0x6DE68A: push    edx; DstBuf
0x6DE68B: call    sub_6C5D40
0x6DE690: mov     esi, [ebx+10h]
0x6DE693: add     esi, [esp+158h+var_12C]
0x6DE697: mov     eax, [esi+4]
0x6DE69A: push    eax
0x6DE69B: call    FormHeapFree
0x6DE6A0: lea     eax, [esp+15Ch+Src]
0x6DE6A4: add     esp, 14h
0x6DE6A7: lea     ebp, [eax+1]
0x6DE6AA: lea     ebx, [ebx+0]
0x6DE6B0: mov     cl, [eax]
0x6DE6B2: add     eax, 1
0x6DE6B5: test    cl, cl
0x6DE6B7: jnz     short loc_6DE6B0
0x6DE6B9: sub     eax, ebp
0x6DE6BB: lea     ebp, [eax+1]
0x6DE6BE: push    ebp; Size
0x6DE6BF: call    FormHeapAlloc
0x6DE6C4: lea     ecx, [esp+14Ch+Src]
0x6DE6C8: push    ecx; Src
0x6DE6C9: push    ebp; SizeInBytes
0x6DE6CA: push    eax; Dst
0x6DE6CB: mov     [esi+4], eax
0x6DE6CE: call    _strcpy_s
0x6DE6D3: mov     esi, [ebx+0Ch]
0x6DE6D6: add     ebx, 0Ch
0x6DE6D9: xor     ecx, ecx
0x6DE6DB: mov     eax, esi
0x6DE6DD: mov     edx, 0Ch
0x6DE6E2: mul     edx
0x6DE6E4: seto    cl
0x6DE6E7: neg     ecx
0x6DE6E9: or      ecx, eax
0x6DE6EB: push    ecx; Size
0x6DE6EC: call    FormHeapAlloc
0x6DE6F1: xor     esi, esi
0x6DE6F3: add     esp, 14h
0x6DE6F6: cmp     [ebx], esi
0x6DE6F8: mov     [esp+148h+var_128], eax
0x6DE6FC: jbe     short loc_6DE712
0x6DE6FE: mov     ebp, eax
0x6DE700: push    edi
0x6DE701: mov     ecx, ebp
0x6DE703: call    sub_709430
0x6DE708: add     esi, 1
0x6DE70B: add     ebp, 0Ch
0x6DE70E: cmp     esi, [ebx]
0x6DE710: jb      short loc_6DE700
0x6DE712: mov     eax, [esp+148h+var_124]
0x6DE716: mov     esi, [eax+10h]
0x6DE719: add     esi, [esp+148h+var_12C]
0x6DE71D: mov     ecx, [esi]
0x6DE71F: push    ecx
0x6DE720: call    FormHeapFree
0x6DE725: mov     edx, [esp+14Ch+var_128]
0x6DE729: mov     ebx, [esp+14Ch+var_124]
0x6DE72D: add     esp, 4
0x6DE730: mov     [esi], edx
0x6DE732: jmp     short loc_6DE745
0x6DE734: mov     eax, [ebx+0Ch]
0x6DE737: mov     ecx, [ebx+10h]
0x6DE73A: add     ecx, [esp+148h+var_12C]
0x6DE73E: push    eax
0x6DE73F: push    edi
0x6DE740: call    sub_6DE2F0
0x6DE745: mov     eax, dword ptr [esp+148h+ArgList]
0x6DE749: add     [esp+148h+var_12C], 0Ch
0x6DE74E: add     eax, 1
0x6DE751: cmp     eax, [ebx+8]
0x6DE754: mov     dword ptr [esp+148h+ArgList], eax
0x6DE758: jb      loc_6DE550
0x6DE75E: mov     ecx, [esp+148h+var_C]
0x6DE765: mov     large fs:0, ecx
0x6DE76C: pop     ecx
0x6DE76D: pop     edi
0x6DE76E: pop     esi
0x6DE76F: pop     ebp
0x6DE770: pop     ebx
0x6DE771: mov     ecx, [esp+134h+var_10]
0x6DE778: xor     ecx, esp
0x6DE77A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6DE77F: add     esp, 134h
0x6DE785: retn    4
