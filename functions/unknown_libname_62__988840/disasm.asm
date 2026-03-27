0x988840: push    0Ch
0x988842: push    offset stru_AFFBE8
0x988847: call    __SEH_prolog4
0x98884C: xor     ebx, ebx
0x98884E: mov     [ebp+var_1C], ebx
0x988851: xor     eax, eax
0x988853: mov     esi, [ebp+File]
0x988856: cmp     esi, ebx
0x988858: setnz   al
0x98885B: cmp     eax, ebx
0x98885D: jnz     short loc_98887F
0x98885F: call    __errno
0x988864: mov     dword ptr [eax], 16h
0x98886A: push    ebx
0x98886B: push    ebx
0x98886C: push    ebx
0x98886D: push    ebx
0x98886E: push    ebx
0x98886F: call    __invalid_parameter
0x988874: add     esp, 14h
0x988877: or      eax, 0FFFFFFFFh
0x98887A: jmp     loc_98892E
0x98887F: mov     eax, [ebp+arg_8]
0x988882: cmp     eax, 4
0x988885: jz      short loc_988890
0x988887: cmp     eax, ebx
0x988889: jz      short loc_988899
0x98888B: cmp     eax, 40h ; '@'
0x98888E: jnz     short loc_98885F
0x988890: cmp     eax, ebx
0x988892: jz      short loc_988899
0x988894: cmp     eax, 40h ; '@'
0x988897: jnz     short loc_9888A8
0x988899: mov     edi, [ebp+arg_C]
0x98889C: lea     eax, [edi-2]
0x98889F: cmp     eax, 7FFFFFFDh
0x9888A4: jbe     short loc_9888AB
0x9888A6: jmp     short loc_98885F
0x9888A8: mov     edi, [ebp+arg_C]
0x9888AB: and     edi, 0FFFFFFFEh
0x9888AE: mov     [ebp+File], esi
0x9888B1: push    esi
0x9888B2: call    __lock_file
0x9888B7: pop     ecx
0x9888B8: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x9888BB: push    esi; File
0x9888BC: call    __flush
0x9888C1: push    esi
0x9888C2: call    __freebuf
0x9888C7: pop     ecx
0x9888C8: pop     ecx
0x9888C9: and     dword ptr [esi+0Ch], 0FFFFC2F3h
0x9888D0: mov     ecx, [esi+0Ch]
0x9888D3: test    byte ptr [ebp+arg_8], 4
0x9888D7: jz      short loc_9888E4
0x9888D9: or      ecx, 4
0x9888DC: lea     eax, [esi+14h]
0x9888DF: push    2
0x9888E1: pop     edi
0x9888E2: jmp     short loc_988911
0x9888E4: mov     eax, [ebp+arg_4]
0x9888E7: cmp     eax, ebx
0x9888E9: jnz     short loc_98890B
0x9888EB: push    edi
0x9888EC: call    unknown_libname_72
0x9888F1: pop     ecx
0x9888F2: cmp     eax, ebx
0x9888F4: jnz     short loc_988902
0x9888F6: inc     dword_BA9E14
0x9888FC: or      [ebp+var_1C], 0FFFFFFFFh
0x988900: jmp     short unknown_libname_62___unknown_libname_63
0x988902: or      dword ptr [esi+0Ch], 408h
0x988909: jmp     short loc_988914
0x98890B: or      ecx, 500h
0x988911: mov     [esi+0Ch], ecx
0x988914: mov     [esi+18h], edi
0x988917: mov     [esi+8], eax
0x98891A: mov     [esi], eax
0x98891C: mov     [esi+4], ebx
