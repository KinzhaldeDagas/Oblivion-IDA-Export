0x590000: push    0FFFFFFFFh
0x590002: push    offset SEH_8C8900
0x590007: mov     eax, large fs:0
0x59000D: push    eax
0x59000E: push    ecx
0x59000F: mov     eax, ds:0B30AACh
0x590014: xor     eax, esp
0x590016: push    eax
0x590017: lea     eax, [esp+14h+var_C]
0x59001B: mov     large fs:0, eax
0x590021: push    4Ch ; 'L'; Size
0x590023: call    FormHeapAlloc
0x590028: add     esp, 4
0x59002B: mov     [esp+14h+var_10], eax
0x59002F: test    eax, eax
0x590031: mov     [esp+14h+var_4], 0
0x590039: jz      short loc_590052
0x59003B: mov     ecx, eax; this
0x59003D: call    ??0TileImage@@QAE@XZ; TileImage::TileImage(void)
0x590042: mov     ecx, [esp+14h+var_C]
0x590046: mov     large fs:0, ecx
0x59004D: pop     ecx
0x59004E: add     esp, 10h
0x590051: retn
0x590052: xor     eax, eax
0x590054: mov     ecx, [esp+14h+var_C]
0x590058: mov     large fs:0, ecx
0x59005F: pop     ecx
0x590060: add     esp, 10h
0x590063: retn
