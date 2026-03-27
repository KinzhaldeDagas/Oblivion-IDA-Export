0x5902A0: mov     eax, [esp+arg_4]
0x5902A4: add     eax, 0FFFFFC7Bh; switch 7 cases
0x5902A9: cmp     eax, 6
0x5902AC: ja      short def_5902AE; jumptable 005902AE default case, case 906
0x5902AE: jmp     ds:jpt_5902AE[eax*4]; switch jump
0x5902B5: mov     eax, [esp+arg_0]; jumptable 005902AE case 901
0x5902B9: push    eax
0x5902BA: call    sub_590070
0x5902BF: add     esp, 4
0x5902C2: retn
0x5902C3: mov     ecx, [esp+arg_0]; jumptable 005902AE case 902
0x5902C7: push    ecx
0x5902C8: call    sub_590000
0x5902CD: add     esp, 4
0x5902D0: retn
0x5902D1: push    5Ch ; '\'; jumptable 005902AE case 904
0x5902D3: call    FormHeapAlloc
0x5902D8: add     esp, 4
0x5902DB: test    eax, eax
0x5902DD: jz      short def_5902AE; jumptable 005902AE default case, case 906
0x5902DF: mov     ecx, eax
0x5902E1: jmp     loc_58FF50
0x5902E6: mov     edx, [esp+arg_0]; jumptable 005902AE case 903
0x5902EA: push    edx
0x5902EB: call    sub_58FEC0
0x5902F0: add     esp, 4
0x5902F3: retn
0x5902F4: mov     eax, [esp+arg_0]; jumptable 005902AE case 905
0x5902F8: push    eax
0x5902F9: call    ??0TileMenu@@QAE@XZ; TileMenu::TileMenu(void)
0x5902FE: add     esp, 4
0x590301: retn
0x590302: mov     ecx, [esp+arg_0]; jumptable 005902AE case 907
0x590306: push    ecx
0x590307: call    ??0TileWindow@@QAE@XZ; TileWindow::TileWindow(void)
0x59030C: add     esp, 4
0x59030F: retn
0x590310: xor     eax, eax; jumptable 005902AE default case, case 906
0x590312: retn
