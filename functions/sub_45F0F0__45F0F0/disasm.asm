0x45F0F0: push    0FFFFFFFFh
0x45F0F2: push    offset SEH_8C62B0
0x45F0F7: mov     eax, large fs:0
0x45F0FD: push    eax
0x45F0FE: push    ecx
0x45F0FF: push    esi
0x45F100: mov     eax, ds:0B30AACh
0x45F105: xor     eax, esp
0x45F107: push    eax
0x45F108: lea     eax, [esp+18h+var_C]
0x45F10C: mov     large fs:0, eax
0x45F112: mov     esi, ecx
0x45F114: push    10h; Size
0x45F116: call    FormHeapAlloc
0x45F11B: add     esp, 4
0x45F11E: mov     [esp+18h+var_10], eax
0x45F122: test    eax, eax
0x45F124: mov     [esp+18h+var_4], 0
0x45F12C: jz      short loc_45F139
0x45F12E: push    25h ; '%'
0x45F130: mov     ecx, eax
0x45F132: call    ??0?$NiTPointerMap@EPAV?$BSSimpleList@PAULoadFormHeader@@@@@@QAE@XZ; NiTPointerMap<uchar,BSSimpleList<LoadFormHeader *> *>::NiTPointerMap<uchar,BSSimpleList<LoadFormHeader *> *>(void)
0x45F137: jmp     short loc_45F13B
0x45F139: xor     eax, eax
0x45F13B: push    8; Size
0x45F13D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x45F145: mov     [esi], eax
0x45F147: call    FormHeapAlloc
0x45F14C: add     esp, 4
0x45F14F: test    eax, eax
0x45F151: jz      short loc_45F162
0x45F153: mov     dword ptr [eax], 0
0x45F159: mov     dword ptr [eax+4], 0
0x45F160: jmp     short loc_45F164
0x45F162: xor     eax, eax
0x45F164: mov     [esi+4], eax
0x45F167: mov     eax, esi
0x45F169: mov     ecx, [esp+18h+var_C]
0x45F16D: mov     large fs:0, ecx
0x45F174: pop     ecx
0x45F175: pop     esi
0x45F176: add     esp, 10h
0x45F179: retn
