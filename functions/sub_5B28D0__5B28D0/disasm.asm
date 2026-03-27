0x5B28D0: push    0FFFFFFFFh
0x5B28D2: push    offset SEH_5DC520
0x5B28D7: mov     eax, large fs:0
0x5B28DD: push    eax
0x5B28DE: sub     esp, 8
0x5B28E1: push    esi
0x5B28E2: push    edi
0x5B28E3: mov     eax, ds:0B30AACh
0x5B28E8: xor     eax, esp
0x5B28EA: push    eax
0x5B28EB: lea     eax, [esp+20h+var_C]
0x5B28EF: mov     large fs:0, eax
0x5B28F5: mov     edi, ecx
0x5B28F7: push    3FEh
0x5B28FC: call    InterfaceManager_MenuModeHasFocus
0x5B2901: add     esp, 4
0x5B2904: test    al, al
0x5B2906: jz      loc_5B29F5
0x5B290C: xor     eax, eax
0x5B290E: mov     [esp+20h+var_14], eax
0x5B2912: mov     [esp+20h+var_10], ax
0x5B2917: mov     [esp+20h+var_E], ax
0x5B291C: fld     [esp+20h+arg_4]
0x5B2920: mov     esi, dword ptr [esp+20h+ArgList]
0x5B2924: sub     esp, 8
0x5B2927: fstp    [esp+28h+var_28]
0x5B292A: push    esi; ArgList
0x5B292B: mov     [esp+2Ch+var_4], eax
0x5B292F: lea     eax, [esp+2Ch+var_14]
0x5B2933: push    offset aButtonI0_2f; "Button: %i   - %0.2f"
0x5B2938: push    eax; int
0x5B2939: call    BSStringT_Static_Format
0x5B293E: mov     ecx, [edi+4]
0x5B2941: mov     edi, [esp+34h+var_14]
0x5B2945: add     esp, 14h
0x5B2948: push    edi
0x5B2949: push    0FBDh
0x5B294E: call    Tile_SetString
0x5B2953: cmp     esi, 0Dh
0x5B2956: jnz     short loc_5B298D
0x5B2958: fld1
0x5B295A: fcomp   [esp+20h+arg_4]
0x5B295E: fnstsw  ax
0x5B2960: test    ah, 41h
0x5B2963: jp      loc_5B29EC
0x5B2969: call    sub_5A5EF0
0x5B296E: push    edi
0x5B296F: call    FormHeapFree
0x5B2974: add     esp, 4
0x5B2977: mov     al, 1
0x5B2979: mov     ecx, [esp+20h+var_C]
0x5B297D: mov     large fs:0, ecx
0x5B2984: pop     ecx
0x5B2985: pop     edi
0x5B2986: pop     esi
0x5B2987: add     esp, 14h
0x5B298A: retn    8
0x5B298D: cmp     esi, 0Eh
0x5B2990: jnz     short loc_5B29C3
0x5B2992: fld1
0x5B2994: fcomp   [esp+20h+arg_4]
0x5B2998: fnstsw  ax
0x5B299A: test    ah, 41h
0x5B299D: jp      short loc_5B29EC
0x5B299F: call    sub_5A5FD0
0x5B29A4: push    edi
0x5B29A5: call    FormHeapFree
0x5B29AA: add     esp, 4
0x5B29AD: mov     al, 1
0x5B29AF: mov     ecx, [esp+20h+var_C]
0x5B29B3: mov     large fs:0, ecx
0x5B29BA: pop     ecx
0x5B29BB: pop     edi
0x5B29BC: pop     esi
0x5B29BD: add     esp, 14h
0x5B29C0: retn    8
0x5B29C3: cmp     esi, 0Ch
0x5B29C6: jnz     short loc_5B29EC
0x5B29C8: call    sub_5C1F70
0x5B29CD: push    edi
0x5B29CE: call    FormHeapFree
0x5B29D3: add     esp, 4
0x5B29D6: mov     al, 1
0x5B29D8: mov     ecx, [esp+20h+var_C]
0x5B29DC: mov     large fs:0, ecx
0x5B29E3: pop     ecx
0x5B29E4: pop     edi
0x5B29E5: pop     esi
0x5B29E6: add     esp, 14h
0x5B29E9: retn    8
0x5B29EC: push    edi
0x5B29ED: call    FormHeapFree
0x5B29F2: add     esp, 4
0x5B29F5: xor     al, al
0x5B29F7: mov     ecx, [esp+20h+var_C]
0x5B29FB: mov     large fs:0, ecx
0x5B2A02: pop     ecx
0x5B2A03: pop     edi
0x5B2A04: pop     esi
0x5B2A05: add     esp, 14h
0x5B2A08: retn    8
