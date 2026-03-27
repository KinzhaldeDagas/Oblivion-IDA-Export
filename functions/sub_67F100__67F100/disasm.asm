0x67F100: mov     eax, [ecx+4]
0x67F103: test    eax, eax
0x67F105: jz      short loc_67F11B
0x67F107: mov     edx, [eax+4]
0x67F10A: mov     [ecx+4], edx
0x67F10D: mov     edx, [eax]
0x67F10F: push    eax
0x67F110: mov     [ecx], edx
0x67F112: call    FormHeapFree
0x67F117: add     esp, 4
0x67F11A: retn
0x67F11B: mov     dword ptr [ecx], 0
0x67F121: retn
