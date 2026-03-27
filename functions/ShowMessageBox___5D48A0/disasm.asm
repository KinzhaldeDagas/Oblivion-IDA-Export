0x5D48A0: push    0FFFFFFFFh
0x5D48A2: push    offset ShowMessageBox??_SEH
0x5D48A7: mov     eax, large fs:0
0x5D48AD: push    eax
0x5D48AE: push    esi
0x5D48AF: mov     eax, ds:0B30AACh
0x5D48B4: xor     eax, esp
0x5D48B6: push    eax
0x5D48B7: lea     eax, [esp+14h+var_C]
0x5D48BB: mov     large fs:0, eax
0x5D48C1: mov     eax, ds:0B38CF0h
0x5D48C6: mov     esi, [esp+14h+arg_0]
0x5D48CA: push    0
0x5D48CC: push    eax
0x5D48CD: push    1
0x5D48CF: push    0
0x5D48D1: push    esi
0x5D48D2: mov     [esp+28h+var_4], 0
0x5D48DA: call    ShowUIMessageBox
0x5D48DF: push    esi
0x5D48E0: call    FormHeapFree
0x5D48E5: add     esp, 18h
0x5D48E8: mov     ecx, [esp+14h+var_C]
0x5D48EC: mov     large fs:0, ecx
0x5D48F3: pop     ecx
0x5D48F4: pop     esi
0x5D48F5: add     esp, 0Ch
0x5D48F8: retn    8
