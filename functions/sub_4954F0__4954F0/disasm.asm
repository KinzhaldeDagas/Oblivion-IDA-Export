0x4954F0: sub     esp, 2Ch
0x4954F3: push    esi
0x4954F4: push    edi
0x4954F5: push    2Ch ; ','
0x4954F7: lea     eax, [esp+38h+var_2C]
0x4954FB: push    0
0x4954FD: push    eax
0x4954FE: call    __memset
0x495503: mov     ecx, [esp+40h+lParam]
0x495507: mov     esi, [esp+40h+hWnd]
0x49550B: mov     edi, ds:0A28290h
0x495511: add     esp, 0Ch
0x495514: push    ecx; lParam
0x495515: push    4; wParam
0x495517: push    110Ah; Msg
0x49551C: push    esi; hWnd
0x49551D: mov     [esp+44h+var_2C], 0Dh
0x495525: mov     [esp+44h+var_1C], offset unk_B34E98
0x49552D: mov     [esp+44h+var_18], 104h
0x495535: call    edi ; SendMessageA
0x495537: test    eax, eax
0x495539: mov     [esp+34h+var_28], eax
0x49553D: jz      short loc_4955A9
0x49553F: push    ebx
0x495540: mov     ebx, [esp+38h+wParam]
0x495544: lea     edx, [esp+38h+var_2C]
0x495548: push    edx; lParam
0x495549: push    0; wParam
0x49554B: push    110Ch; Msg
0x495550: push    esi; hWnd
0x495551: call    edi ; SendMessageA
0x495553: test    eax, eax
0x495555: jz      short loc_495591
0x495557: mov     ecx, [esp+38h+var_8]
0x49555B: test    ecx, ecx
0x49555D: jz      short loc_495591
0x49555F: mov     eax, [ecx]
0x495561: mov     edx, [eax+8]
0x495564: call    edx
0x495566: test    eax, eax
0x495568: jz      short loc_495591
0x49556A: cmp     word ptr [eax+0B8h], 0
0x495572: jz      short loc_495591
0x495574: mov     eax, [esp+38h+var_28]
0x495578: push    eax; lParam
0x495579: push    ebx; wParam
0x49557A: push    1102h; Msg
0x49557F: push    esi; hWnd
0x495580: call    edi ; SendMessageA
0x495582: mov     ecx, [esp+38h+var_28]
0x495586: push    ebx; wParam
0x495587: push    ecx; lParam
0x495588: push    esi; hWnd
0x495589: call    sub_4954F0
0x49558E: add     esp, 0Ch
0x495591: mov     edx, [esp+38h+var_28]
0x495595: push    edx; lParam
0x495596: push    1; wParam
0x495598: push    110Ah; Msg
0x49559D: push    esi; hWnd
0x49559E: call    edi ; SendMessageA
0x4955A0: test    eax, eax
0x4955A2: mov     [esp+38h+var_28], eax
0x4955A6: jnz     short loc_495544
0x4955A8: pop     ebx
0x4955A9: pop     edi
0x4955AA: pop     esi
0x4955AB: add     esp, 2Ch
0x4955AE: retn
