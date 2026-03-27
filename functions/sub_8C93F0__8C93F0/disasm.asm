0x8C93F0: push    0FFFFFFFFh
0x8C93F2: push    offset SEH_8C8900
0x8C93F7: mov     eax, large fs:0
0x8C93FD: push    eax
0x8C93FE: push    ecx
0x8C93FF: mov     eax, ds:0B30AACh
0x8C9404: xor     eax, esp
0x8C9406: push    eax
0x8C9407: lea     eax, [esp+14h+var_C]
0x8C940B: mov     large fs:0, eax
0x8C9411: push    14h; Size
0x8C9413: call    FormHeapAlloc
0x8C9418: add     esp, 4
0x8C941B: mov     [esp+14h+var_10], eax
0x8C941F: test    eax, eax
0x8C9421: mov     [esp+14h+var_4], 0
0x8C9429: jz      short loc_8C9442
0x8C942B: mov     ecx, eax; this
0x8C942D: call    ??0bhkConvexTransformShape@@QAE@XZ; bhkConvexTransformShape::bhkConvexTransformShape(void)
0x8C9432: mov     ecx, [esp+14h+var_C]
0x8C9436: mov     large fs:0, ecx
0x8C943D: pop     ecx
0x8C943E: add     esp, 10h
0x8C9441: retn
0x8C9442: xor     eax, eax
0x8C9444: mov     ecx, [esp+14h+var_C]
0x8C9448: mov     large fs:0, ecx
0x8C944F: pop     ecx
0x8C9450: add     esp, 10h
0x8C9453: retn
