0x4476B0: cmp     [esp+Str2], 0
0x4476B5: push    ebx
0x4476B6: mov     ebx, ecx
0x4476B8: jnz     short loc_4476C0
0x4476BA: xor     eax, eax
0x4476BC: pop     ebx
0x4476BD: retn    4
0x4476C0: push    ebp
0x4476C1: mov     ebp, [ebx+0CCh]
0x4476C7: push    esi
0x4476C8: push    edi
0x4476C9: xor     edi, edi
0x4476CB: test    ebp, ebp
0x4476CD: jle     short loc_4476FE
0x4476CF: nop
0x4476D0: mov     eax, [ebx+0C4h]
0x4476D6: mov     esi, [eax+edi*4]
0x4476D9: mov     ecx, [esp+10h+Str2]
0x4476DD: mov     edx, [esi]
0x4476DF: mov     eax, [edx+0D4h]
0x4476E5: push    ecx; Str2
0x4476E6: mov     ecx, esi
0x4476E8: call    eax
0x4476EA: push    eax; Str1
0x4476EB: call    __strcmp
0x4476F0: add     esp, 8
0x4476F3: test    eax, eax
0x4476F5: jz      short loc_447729
0x4476F7: add     edi, 1
0x4476FA: cmp     edi, ebp
0x4476FC: jl      short loc_4476D0
0x4476FE: lea     esi, [ebx+0Ch]
0x447701: test    esi, esi
0x447703: jz      short loc_447720
0x447705: mov     ecx, [esi]
0x447707: test    ecx, ecx
0x447709: jz      short loc_447719
0x44770B: mov     edx, [esp+10h+Str2]
0x44770F: push    edx
0x447710: call    TESWorldSpace__GetCellFromEditorID
0x447715: test    eax, eax
0x447717: jnz     short loc_447722
0x447719: mov     esi, [esi+4]
0x44771C: test    esi, esi
0x44771E: jnz     short loc_447705
0x447720: xor     eax, eax
0x447722: pop     edi
0x447723: pop     esi
0x447724: pop     ebp
0x447725: pop     ebx
0x447726: retn    4
0x447729: pop     edi
0x44772A: mov     eax, esi
0x44772C: pop     esi
0x44772D: pop     ebp
0x44772E: pop     ebx
0x44772F: retn    4
