0x98F39B: push    10h
0x98F39D: push    offset stru_AFFF28
0x98F3A2: call    __SEH_prolog4
0x98F3A7: xor     ebx, ebx
0x98F3A9: xor     edi, edi
0x98F3AB: mov     [ebp+var_1C], edi
0x98F3AE: push    1
0x98F3B0: call    __lock
0x98F3B5: pop     ecx
0x98F3B6: mov     [ebp+ms_exc.registration.TryLevel], ebx
0x98F3B9: xor     esi, esi
0x98F3BB: mov     [ebp+var_20], esi
0x98F3BE: cmp     esi, dword_BABC00
0x98F3C4: jge     loc_98F48B
0x98F3CA: mov     eax, dword_BAABE4
0x98F3CF: lea     eax, [eax+esi*4]
0x98F3D2: cmp     [eax], ebx
0x98F3D4: jz      short loc_98F426
0x98F3D6: mov     eax, [eax]
0x98F3D8: test    byte ptr [eax+0Ch], 83h
0x98F3DC: jnz     short loc_98F41F
0x98F3DE: lea     eax, [esi-3]
0x98F3E1: cmp     eax, 10h
0x98F3E4: ja      short loc_98F3F8
0x98F3E6: lea     eax, [esi+10h]
0x98F3E9: push    eax
0x98F3EA: call    __mtinitlocknum
0x98F3EF: pop     ecx
0x98F3F0: test    eax, eax
0x98F3F2: jz      loc_98F48B
0x98F3F8: mov     eax, dword_BAABE4
0x98F3FD: push    dword ptr [eax+esi*4]
0x98F400: push    esi
0x98F401: call    __lock_file2
0x98F406: pop     ecx
0x98F407: pop     ecx
0x98F408: mov     eax, dword_BAABE4
0x98F40D: mov     eax, [eax+esi*4]
0x98F410: test    byte ptr [eax+0Ch], 83h
0x98F414: jz      short loc_98F422
0x98F416: push    eax
0x98F417: push    esi
0x98F418: call    __unlock_file2
0x98F41D: pop     ecx
0x98F41E: pop     ecx
0x98F41F: inc     esi
0x98F420: jmp     short loc_98F3BB
0x98F422: mov     edi, eax
0x98F424: jmp     short loc_98F488
0x98F426: shl     esi, 2
0x98F429: push    38h ; '8'
0x98F42B: call    unknown_libname_72
0x98F430: pop     ecx
0x98F431: mov     ecx, dword_BAABE4
0x98F437: mov     [esi+ecx], eax
0x98F43A: mov     eax, dword_BAABE4
0x98F43F: add     eax, esi
0x98F441: cmp     [eax], ebx
0x98F443: jz      short loc_98F48B
0x98F445: push    0FA0h
0x98F44A: mov     eax, [eax]
0x98F44C: add     eax, 20h ; ' '
0x98F44F: push    eax
0x98F450: call    ___crtInitCritSecAndSpinCount
0x98F455: pop     ecx
0x98F456: pop     ecx
0x98F457: test    eax, eax
0x98F459: mov     eax, dword_BAABE4
0x98F45E: jnz     short loc_98F473
0x98F460: push    dword ptr [esi+eax]; Memory
0x98F463: call    _free
0x98F468: pop     ecx
0x98F469: mov     eax, dword_BAABE4
0x98F46E: mov     [esi+eax], ebx
0x98F471: jmp     short loc_98F48B
0x98F473: mov     eax, [esi+eax]
0x98F476: add     eax, 20h ; ' '
0x98F479: push    eax; lpCriticalSection
0x98F47A: call    ds:EnterCriticalSection
0x98F480: mov     eax, dword_BAABE4
0x98F485: mov     edi, [esi+eax]
0x98F488: mov     [ebp+var_1C], edi
0x98F48B: cmp     edi, ebx
0x98F48D: jz      short loc_98F4A1
0x98F48F: mov     [edi+4], ebx
0x98F492: mov     [edi+0Ch], ebx
0x98F495: mov     [edi+8], ebx
0x98F498: mov     [edi], ebx
0x98F49A: mov     [edi+1Ch], ebx
0x98F49D: or      dword ptr [edi+10h], 0FFFFFFFFh
0x98F4A1: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98F4A8: call    __getstream___$LN19_6
