0x6DFD70: push    0FFFFFFFFh
0x6DFD72: push    offset SEH_8C8900
0x6DFD77: mov     eax, large fs:0
0x6DFD7D: push    eax
0x6DFD7E: push    ecx
0x6DFD7F: mov     eax, ds:0B30AACh
0x6DFD84: xor     eax, esp
0x6DFD86: push    eax
0x6DFD87: lea     eax, [esp+14h+var_C]
0x6DFD8B: mov     large fs:0, eax
0x6DFD91: push    44h ; 'D'; Size
0x6DFD93: call    FormHeapAlloc
0x6DFD98: add     esp, 4
0x6DFD9B: mov     [esp+14h+var_10], eax
0x6DFD9F: test    eax, eax
0x6DFDA1: mov     [esp+14h+var_4], 0
0x6DFDA9: jz      short loc_6DFDC8
0x6DFDAB: push    0
0x6DFDAD: push    0
0x6DFDAF: push    0
0x6DFDB1: mov     ecx, eax; this
0x6DFDB3: call    ??0NiLookAtInterpolator@@QAE@XZ; NiLookAtInterpolator::NiLookAtInterpolator(void)
0x6DFDB8: mov     ecx, [esp+14h+var_C]
0x6DFDBC: mov     large fs:0, ecx
0x6DFDC3: pop     ecx
0x6DFDC4: add     esp, 10h
0x6DFDC7: retn
0x6DFDC8: xor     eax, eax
0x6DFDCA: mov     ecx, [esp+14h+var_C]
0x6DFDCE: mov     large fs:0, ecx
0x6DFDD5: pop     ecx
0x6DFDD6: add     esp, 10h
0x6DFDD9: retn
