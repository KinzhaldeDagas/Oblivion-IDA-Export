0x4955B0: sub     esp, 54h
0x4955B3: push    ebx
0x4955B4: mov     ebx, [esp+58h+Msg]
0x4955B8: push    ebp
0x4955B9: mov     ebp, [esp+5Ch+hWnd]
0x4955BD: push    esi
0x4955BE: mov     esi, [esp+60h+arg_C]
0x4955C2: mov     eax, ebx
0x4955C4: sub     eax, 5
0x4955C7: push    edi
0x4955C8: jz      loc_4957F3
0x4955CE: sub     eax, 1
0x4955D1: jz      loc_4957D9
0x4955D7: sub     eax, 48h ; 'H'
0x4955DA: jnz     loc_495824
0x4955E0: mov     eax, [esi+8]
0x4955E3: cmp     eax, 0FFFFFE64h
0x4955E8: jz      loc_49575D
0x4955EE: cmp     eax, 0FFFFFE6Eh
0x4955F3: jz      loc_49571E
0x4955F9: cmp     eax, 0FFFFFFFBh
0x4955FC: jnz     loc_495824
0x495602: push    2Ch ; ','
0x495604: lea     eax, [esp+68h+var_2C]
0x495608: push    0
0x49560A: push    eax
0x49560B: call    __memset
0x495610: mov     ecx, [esp+70h+lParam]
0x495614: mov     edx, [esi]
0x495616: mov     edi, ds:0A28290h
0x49561C: add     esp, 0Ch
0x49561F: push    ecx; lParam
0x495620: push    8; wParam
0x495622: push    110Ah; Msg
0x495627: push    edx; hWnd
0x495628: mov     [esp+74h+var_2C], 14h
0x495630: call    edi ; SendMessageA
0x495632: mov     ecx, ds:0B34F9Ch
0x495638: test    ecx, ecx
0x49563A: mov     [esp+64h+lParam], eax
0x49563E: jz      short loc_495654
0x495640: mov     eax, [esp+64h+var_8]
0x495644: push    0
0x495646: push    0
0x495648: push    2
0x49564A: push    eax
0x49564B: call    ecx
0x49564D: mov     eax, [esp+74h+lParam]
0x495651: add     esp, 10h
0x495654: test    eax, eax
0x495656: jnz     short loc_495669
0x495658: mov     ecx, [esi]
0x49565A: push    eax; lParam
0x49565B: push    9; wParam
0x49565D: push    110Ah; Msg
0x495662: push    ecx; hWnd
0x495663: call    edi ; SendMessageA
0x495665: mov     [esp+64h+lParam], eax
0x495669: test    eax, eax
0x49566B: mov     [esp+64h+var_2C], 0Dh
0x495673: mov     [esp+64h+var_1C], offset unk_B34E98
0x49567B: mov     [esp+64h+var_18], 104h
0x495683: jz      loc_495824
0x495689: mov     eax, [esi]
0x49568B: lea     edx, [esp+64h+var_2C]
0x49568F: push    edx; lParam
0x495690: push    0; wParam
0x495692: push    110Ch; Msg
0x495697: push    eax; hWnd
0x495698: call    edi ; SendMessageA
0x49569A: test    eax, eax
0x49569C: jz      loc_495824
0x4956A2: mov     ecx, [esp+64h+lParam]
0x4956A6: mov     edx, [esi]
0x4956A8: push    ecx; lParam
0x4956A9: push    9; wParam
0x4956AB: push    110Bh; Msg
0x4956B0: push    edx; hWnd
0x4956B1: call    edi ; SendMessageA
0x4956B3: test    [esp+64h+var_24], 20h
0x4956B8: jz      short loc_4956EC
0x4956BA: mov     eax, [esp+64h+lParam]
0x4956BE: mov     ecx, [esi]
0x4956C0: push    1; wParam
0x4956C2: push    eax; lParam
0x4956C3: push    ecx; hWnd
0x4956C4: call    sub_4954F0
0x4956C9: mov     edx, [esp+70h+lParam]
0x4956CD: mov     eax, [esi]
0x4956CF: add     esp, 0Ch
0x4956D2: push    edx; lParam
0x4956D3: push    1; wParam
0x4956D5: push    1102h; Msg
0x4956DA: push    eax; hWnd
0x4956DB: call    edi ; SendMessageA
0x4956DD: pop     edi
0x4956DE: pop     esi
0x4956DF: pop     ebp
0x4956E0: mov     eax, 1
0x4956E5: pop     ebx
0x4956E6: add     esp, 54h
0x4956E9: retn    10h
0x4956EC: mov     ecx, [esp+64h+lParam]
0x4956F0: mov     edx, [esi]
0x4956F2: push    2; wParam
0x4956F4: push    ecx; lParam
0x4956F5: push    edx; hWnd
0x4956F6: call    sub_4954F0
0x4956FB: mov     eax, [esp+70h+lParam]
0x4956FF: mov     ecx, [esi]
0x495701: add     esp, 0Ch
0x495704: push    eax; lParam
0x495705: push    2; wParam
0x495707: push    1102h; Msg
0x49570C: push    ecx; hWnd
0x49570D: call    edi ; SendMessageA
0x49570F: pop     edi
0x495710: pop     esi
0x495711: pop     ebp
0x495712: mov     eax, 1
0x495717: pop     ebx
0x495718: add     esp, 54h
0x49571B: retn    10h
0x49571E: mov     eax, ds:0B34F9Ch
0x495723: test    eax, eax
0x495725: jz      short loc_49574E
0x495727: mov     edx, [esi+34h]
0x49572A: push    0
0x49572C: push    0
0x49572E: push    1
0x495730: push    edx
0x495731: call    eax
0x495733: mov     eax, ds:0B34F9Ch
0x495738: add     esp, 10h
0x49573B: test    eax, eax
0x49573D: jz      short loc_49574E
0x49573F: mov     ecx, [esi+5Ch]
0x495742: push    0
0x495744: push    0
0x495746: push    0
0x495748: push    ecx
0x495749: call    eax
0x49574B: add     esp, 10h
0x49574E: pop     edi
0x49574F: pop     esi
0x495750: pop     ebp
0x495751: mov     eax, 1
0x495756: pop     ebx
0x495757: add     esp, 54h
0x49575A: retn    10h
0x49575D: push    2Ch ; ','
0x49575F: lea     edx, [esp+68h+var_2C]
0x495763: push    0
0x495765: push    edx
0x495766: call    __memset
0x49576B: mov     eax, [esi]
0x49576D: mov     edi, ds:0A28290h
0x495773: add     esp, 0Ch
0x495776: push    0; lParam
0x495778: push    9; wParam
0x49577A: push    110Ah; Msg
0x49577F: push    eax; hWnd
0x495780: call    edi ; SendMessageA
0x495782: test    eax, eax
0x495784: mov     [esp+64h+var_50], eax
0x495788: jz      loc_495824
0x49578E: mov     edx, [esi]
0x495790: lea     ecx, [esp+64h+var_54]
0x495794: push    ecx; lParam
0x495795: push    0; wParam
0x495797: push    110Ch; Msg
0x49579C: push    edx; hWnd
0x49579D: mov     [esp+74h+var_54], 4
0x4957A5: call    edi ; SendMessageA
0x4957A7: mov     edx, ds:0B34F9Ch
0x4957AD: test    edx, edx
0x4957AF: mov     eax, [esi+0Eh]
0x4957B2: movzx   ecx, word ptr [esi+0Ch]
0x4957B6: jz      short loc_495824
0x4957B8: push    eax
0x4957B9: mov     eax, [esp+68h+var_30]
0x4957BD: push    ecx
0x4957BE: push    3
0x4957C0: push    eax
0x4957C1: call    edx
0x4957C3: add     esp, 10h
0x4957C6: test    eax, eax
0x4957C8: jz      short loc_495824
0x4957CA: pop     edi
0x4957CB: pop     esi
0x4957CC: pop     ebp
0x4957CD: mov     eax, 1
0x4957D2: pop     ebx
0x4957D3: add     esp, 54h
0x4957D6: retn    10h
0x4957D9: mov     eax, [esp+64h+wParam]
0x4957DD: cmp     ax, 1
0x4957E1: jz      short loc_4957E9
0x4957E3: cmp     ax, 2
0x4957E7: jnz     short loc_495824
0x4957E9: push    1; bShow
0x4957EB: call    dword ptr ds:0A2825Ch
0x4957F1: jmp     short loc_495824
0x4957F3: push    5; uCmd
0x4957F5: push    ebp; hWnd
0x4957F6: call    dword ptr ds:0A28284h
0x4957FC: mov     edi, eax
0x4957FE: test    edi, edi
0x495800: jz      short loc_495824
0x495802: push    2; uFlags
0x495804: mov     ecx, esi
0x495806: shr     ecx, 10h
0x495809: push    ecx; cy
0x49580A: movzx   edx, si
0x49580D: push    edx; cx
0x49580E: push    0; Y
0x495810: push    0; X
0x495812: push    0; hWndInsertAfter
0x495814: push    edi; hWnd
0x495815: call    dword ptr ds:0A28288h
0x49581B: push    1; nCmdShow
0x49581D: push    edi; hWnd
0x49581E: call    dword ptr ds:0A2828Ch
0x495824: mov     eax, [esp+64h+wParam]
0x495828: push    esi; lParam
0x495829: push    eax; wParam
0x49582A: push    ebx; Msg
0x49582B: push    ebp; hWnd
0x49582C: call    dword ptr ds:0A28260h
0x495832: pop     edi
0x495833: pop     esi
0x495834: pop     ebp
0x495835: pop     ebx
0x495836: add     esp, 54h
0x495839: retn    10h
