0x5AE4F0: push    0FFFFFFFFh
0x5AE4F2: push    offset ??1SaveMenu@@UAE@XZ_SEH
0x5AE4F7: mov     eax, large fs:0
0x5AE4FD: push    eax
0x5AE4FE: push    ecx
0x5AE4FF: push    esi
0x5AE500: mov     eax, ds:0B30AACh
0x5AE505: xor     eax, esp
0x5AE507: push    eax
0x5AE508: lea     eax, [esp+18h+var_C]
0x5AE50C: mov     large fs:0, eax
0x5AE512: mov     esi, ecx
0x5AE514: mov     dword ptr [esi], offset ??_7LoadgameMenu@@6B@; const LoadgameMenu::`vftable'
0x5AE51A: mov     eax, [esi+5Ch]
0x5AE51D: push    eax
0x5AE51E: call    FormHeapFree
0x5AE523: xor     eax, eax
0x5AE525: add     esp, 4
0x5AE528: mov     ecx, esi; this
0x5AE52A: mov     [esi+5Ch], eax
0x5AE52D: mov     [esi+62h], ax
0x5AE531: mov     [esi+60h], ax
0x5AE535: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5AE53D: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5AE542: mov     ecx, [esp+18h+var_C]
0x5AE546: mov     large fs:0, ecx
0x5AE54D: pop     ecx
0x5AE54E: pop     esi
0x5AE54F: add     esp, 10h
0x5AE552: retn
