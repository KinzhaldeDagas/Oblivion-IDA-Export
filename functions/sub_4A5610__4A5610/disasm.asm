0x4A5610: push    0FFFFFFFFh
0x4A5612: push    offset SEH_4A5610
0x4A5617: mov     eax, large fs:0
0x4A561D: push    eax
0x4A561E: push    ecx
0x4A561F: push    esi
0x4A5620: mov     eax, ds:0B30AACh
0x4A5625: xor     eax, esp
0x4A5627: push    eax
0x4A5628: lea     eax, [esp+18h+var_C]
0x4A562C: mov     large fs:0, eax
0x4A5632: mov     esi, ecx
0x4A5634: mov     [esp+18h+var_10], esi
0x4A5638: call    sub_4A34C0
0x4A563D: lea     ecx, [esi+8]
0x4A5640: mov     [esp+18h+var_4], 0
0x4A5648: mov     dword ptr [esi], offset ??_7TESRegionDataWeather@@6B@; const TESRegionDataWeather::`vftable'
0x4A564E: call    sub_4EED50
0x4A5653: mov     eax, esi
0x4A5655: mov     ecx, [esp+18h+var_C]
0x4A5659: mov     large fs:0, ecx
0x4A5660: pop     ecx
0x4A5661: pop     esi
0x4A5662: add     esp, 10h
0x4A5665: retn
