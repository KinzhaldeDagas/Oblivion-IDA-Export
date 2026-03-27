0x4A8CF0: push    esi
0x4A8CF1: mov     esi, ecx
0x4A8CF3: mov     ecx, [esi+108h]
0x4A8CF9: test    ecx, ecx
0x4A8CFB: mov     al, 1
0x4A8CFD: jz      short loc_4A8D15
0x4A8CFF: push    ecx; hKey
0x4A8D00: call    dword ptr ds:0A2800Ch
0x4A8D06: test    eax, eax
0x4A8D08: setz    al
0x4A8D0B: mov     dword ptr [esi+108h], 0
0x4A8D15: pop     esi
0x4A8D16: retn
