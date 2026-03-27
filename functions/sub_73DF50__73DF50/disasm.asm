0x73DF50: push    0FFFFFFFFh
0x73DF52: push    offset SEH_8C8900
0x73DF57: mov     eax, large fs:0
0x73DF5D: push    eax
0x73DF5E: push    ecx
0x73DF5F: mov     eax, ds:0B30AACh
0x73DF64: xor     eax, esp
0x73DF66: push    eax
0x73DF67: lea     eax, [esp+14h+var_C]
0x73DF6B: mov     large fs:0, eax
0x73DF71: push    20h ; ' '; Size
0x73DF73: call    FormHeapAlloc
0x73DF78: add     esp, 4
0x73DF7B: mov     [esp+14h+var_10], eax
0x73DF7F: test    eax, eax
0x73DF81: mov     [esp+14h+var_4], 0
0x73DF89: jz      short loc_73DFA2
0x73DF8B: mov     ecx, eax; this
0x73DF8D: call    ??0NiScreenTexture@@QAE@XZ; NiScreenTexture::NiScreenTexture(void)
0x73DF92: mov     ecx, [esp+14h+var_C]
0x73DF96: mov     large fs:0, ecx
0x73DF9D: pop     ecx
0x73DF9E: add     esp, 10h
0x73DFA1: retn
0x73DFA2: xor     eax, eax
0x73DFA4: mov     ecx, [esp+14h+var_C]
0x73DFA8: mov     large fs:0, ecx
0x73DFAF: pop     ecx
0x73DFB0: add     esp, 10h
0x73DFB3: retn
