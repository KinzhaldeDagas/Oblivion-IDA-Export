0x4B27F0: sub     esp, 10Ch
0x4B27F6: mov     eax, ds:0B30AACh
0x4B27FB: xor     eax, esp
0x4B27FD: mov     [esp+10Ch+var_4], eax
0x4B2804: push    ebx
0x4B2805: mov     ebx, [esp+110h+arg_0]
0x4B280C: lea     eax, [esp+110h+var_10C]
0x4B2810: push    eax
0x4B2811: push    ebx
0x4B2812: mov     ecx, offset off_B08300
0x4B2817: mov     [esp+118h+var_10C], 0
0x4B281F: call    NiTMap_GetAt
0x4B2824: test    al, al
0x4B2826: jz      loc_4B28C3
0x4B282C: push    edi
0x4B282D: mov     edi, [esp+114h+var_10C]
0x4B2831: test    edi, edi
0x4B2833: jz      loc_4B28C2
0x4B2839: mov     ecx, edi
0x4B283B: call    BSSimpleList_IsEmpty
0x4B2840: test    al, al
0x4B2842: jnz     short loc_4B28AE
0x4B2844: push    esi
0x4B2845: mov     esi, [edi]
0x4B2847: mov     eax, [esi]
0x4B2849: test    eax, eax
0x4B284B: jz      short loc_4B2877
0x4B284D: cmp     dword ptr [esi+4], 0
0x4B2851: jz      short loc_4B2877
0x4B2853: push    eax; int
0x4B2854: lea     ecx, [esp+11Ch+Str]
0x4B2858: push    ecx; Str
0x4B2859: call    sub_46D540
0x4B285E: mov     edx, [esi+4]
0x4B2861: mov     ecx, ds:0B33A1Ch
0x4B2867: add     esp, 8
0x4B286A: push    edx
0x4B286B: push    1
0x4B286D: lea     eax, [esp+120h+Str]
0x4B2871: push    eax
0x4B2872: call    QueuedModelLoader_RemoveModel
0x4B2877: push    esi
0x4B2878: call    FormHeapFree
0x4B287D: mov     eax, [edi+4]
0x4B2880: add     esp, 4
0x4B2883: test    eax, eax
0x4B2885: jz      short loc_4B289C
0x4B2887: mov     ecx, [eax+4]
0x4B288A: mov     [edi+4], ecx
0x4B288D: mov     edx, [eax]
0x4B288F: push    eax
0x4B2890: mov     [edi], edx
0x4B2892: call    FormHeapFree
0x4B2897: add     esp, 4
0x4B289A: jmp     short loc_4B28A2
0x4B289C: mov     dword ptr [edi], 0
0x4B28A2: mov     ecx, edi
0x4B28A4: call    BSSimpleList_IsEmpty
0x4B28A9: test    al, al
0x4B28AB: jz      short loc_4B2845
0x4B28AD: pop     esi
0x4B28AE: push    edi
0x4B28AF: call    FormHeapFree
0x4B28B4: add     esp, 4
0x4B28B7: push    ebx
0x4B28B8: mov     ecx, offset off_B08300
0x4B28BD: call    NiTMap_RemoveAt
0x4B28C2: pop     edi
0x4B28C3: mov     ecx, [esp+110h+var_4]
0x4B28CA: pop     ebx
0x4B28CB: xor     ecx, esp
0x4B28CD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B28D2: add     esp, 10Ch
0x4B28D8: retn
