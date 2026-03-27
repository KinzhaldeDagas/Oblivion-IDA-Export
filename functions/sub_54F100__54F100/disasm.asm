0x54F100: push    0FFFFFFFFh
0x54F102: push    offset SEH_8C62B0
0x54F107: mov     eax, large fs:0
0x54F10D: push    eax
0x54F10E: push    ecx
0x54F10F: push    esi
0x54F110: mov     eax, ds:0B30AACh
0x54F115: xor     eax, esp
0x54F117: push    eax
0x54F118: lea     eax, [esp+18h+var_C]
0x54F11C: mov     large fs:0, eax
0x54F122: mov     esi, ecx
0x54F124: push    14h; Size
0x54F126: call    FormHeapAlloc
0x54F12B: add     esp, 4
0x54F12E: mov     [esp+18h+var_10], eax
0x54F132: test    eax, eax
0x54F134: mov     [esp+18h+var_4], 0
0x54F13C: jz      short loc_54F157
0x54F13E: push    esi
0x54F13F: mov     ecx, eax
0x54F141: call    sub_54EAA0
0x54F146: mov     ecx, [esp+18h+var_C]
0x54F14A: mov     large fs:0, ecx
0x54F151: pop     ecx
0x54F152: pop     esi
0x54F153: add     esp, 10h
0x54F156: retn
0x54F157: xor     eax, eax
0x54F159: mov     ecx, [esp+18h+var_C]
0x54F15D: mov     large fs:0, ecx
0x54F164: pop     ecx
0x54F165: pop     esi
0x54F166: add     esp, 10h
0x54F169: retn
