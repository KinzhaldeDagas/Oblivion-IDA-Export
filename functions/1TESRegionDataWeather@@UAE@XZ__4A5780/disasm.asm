0x4A5780: push    0FFFFFFFFh
0x4A5782: push    offset SEH_4A5610
0x4A5787: mov     eax, large fs:0
0x4A578D: push    eax
0x4A578E: push    ecx
0x4A578F: push    esi
0x4A5790: mov     eax, ds:0B30AACh
0x4A5795: xor     eax, esp
0x4A5797: push    eax
0x4A5798: lea     eax, [esp+18h+var_C]
0x4A579C: mov     large fs:0, eax
0x4A57A2: mov     esi, ecx
0x4A57A4: mov     [esp+18h+var_10], esi
0x4A57A8: mov     dword ptr [esi], offset ??_7TESRegionDataWeather@@6B@; const TESRegionDataWeather::`vftable'
0x4A57AE: lea     ecx, [esi+8]
0x4A57B1: mov     [esp+18h+var_4], 0
0x4A57B9: call    sub_4EED70
0x4A57BE: mov     ecx, esi
0x4A57C0: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4A57C8: call    sub_4A3510
0x4A57CD: mov     ecx, [esp+18h+var_C]
0x4A57D1: mov     large fs:0, ecx
0x4A57D8: pop     ecx
0x4A57D9: pop     esi
0x4A57DA: add     esp, 10h
0x4A57DD: retn
