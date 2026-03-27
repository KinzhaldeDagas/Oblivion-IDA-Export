0x716A40: push    0FFFFFFFFh
0x716A42: push    offset SEH_8C8900
0x716A47: mov     eax, large fs:0
0x716A4D: push    eax
0x716A4E: push    ecx
0x716A4F: mov     eax, ds:0B30AACh
0x716A54: xor     eax, esp
0x716A56: push    eax
0x716A57: lea     eax, [esp+14h+var_C]
0x716A5B: mov     large fs:0, eax
0x716A61: push    20h ; ' '; Size
0x716A63: call    FormHeapAlloc
0x716A68: add     esp, 4
0x716A6B: mov     [esp+14h+var_10], eax
0x716A6F: test    eax, eax
0x716A71: mov     [esp+14h+var_4], 0
0x716A79: jz      short loc_716A94
0x716A7B: push    0
0x716A7D: mov     ecx, eax; this
0x716A7F: call    ??0NiDefaultAVObjectPalette@@QAE@XZ; NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(void)
0x716A84: mov     ecx, [esp+14h+var_C]
0x716A88: mov     large fs:0, ecx
0x716A8F: pop     ecx
0x716A90: add     esp, 10h
0x716A93: retn
0x716A94: xor     eax, eax
0x716A96: mov     ecx, [esp+14h+var_C]
0x716A9A: mov     large fs:0, ecx
0x716AA1: pop     ecx
0x716AA2: add     esp, 10h
0x716AA5: retn
