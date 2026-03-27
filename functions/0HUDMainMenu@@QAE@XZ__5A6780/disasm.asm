0x5A6780: push    0FFFFFFFFh
0x5A6782: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5A6787: mov     eax, large fs:0
0x5A678D: push    eax
0x5A678E: push    ecx
0x5A678F: push    esi
0x5A6790: mov     eax, ds:0B30AACh
0x5A6795: xor     eax, esp
0x5A6797: push    eax
0x5A6798: lea     eax, [esp+18h+var_C]
0x5A679C: mov     large fs:0, eax
0x5A67A2: mov     esi, ecx
0x5A67A4: call    ??0Menu@@QAE@XZ; Menu::Menu(void)
0x5A67A9: fldz
0x5A67AB: xor     eax, eax
0x5A67AD: mov     dword ptr [esi], offset ??_7HUDMainMenu@@6B@; const HUDMainMenu::`vftable'
0x5A67B3: mov     [esi+80h], eax
0x5A67B9: mov     [esi+84h], eax
0x5A67BF: mov     [esi+88h], eax
0x5A67C5: mov     [esi+7Ch], eax
0x5A67C8: mov     [esi+90h], al
0x5A67CE: mov     dword ptr [esi+8Ch], 1
0x5A67D8: mov     dword ptr [esi+78h], offset ??_7IconArray@@6B@; const IconArray::`vftable'
0x5A67DF: fst     dword ptr [esi+68h]
0x5A67E2: fstp    dword ptr [esi+6Ch]
0x5A67E5: mov     [esi+28h], eax
0x5A67E8: fld     dword ptr ds:0A3F424h
0x5A67EE: mov     [esi+2Ch], eax
0x5A67F1: mov     [esi+30h], eax
0x5A67F4: fstp    dword ptr [esi+70h]
0x5A67F7: mov     [esi+34h], eax
0x5A67FA: mov     [esi+38h], eax
0x5A67FD: mov     [esi+3Ch], eax
0x5A6800: mov     [esi+40h], eax
0x5A6803: mov     [esi+44h], eax
0x5A6806: mov     [esi+48h], eax
0x5A6809: mov     [esi+4Ch], eax
0x5A680C: mov     [esi+50h], eax
0x5A680F: mov     [esi+54h], eax
0x5A6812: mov     [esi+58h], eax
0x5A6815: mov     [esi+5Ch], eax
0x5A6818: mov     [esi+60h], eax
0x5A681B: mov     [esi+64h], eax
0x5A681E: mov     [esi+74h], eax
0x5A6821: mov     dword ptr [esi+8Ch], 8
0x5A682B: mov     eax, esi
0x5A682D: mov     ecx, [esp+18h+var_C]
0x5A6831: mov     large fs:0, ecx
0x5A6838: pop     ecx
0x5A6839: pop     esi
0x5A683A: add     esp, 10h
0x5A683D: retn
