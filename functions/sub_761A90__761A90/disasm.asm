0x761A90: mov     eax, [esp+Src]
0x761A94: test    eax, eax
0x761A96: jz      short loc_761AB1
0x761A98: push    0FFh; Src
0x761A9D: push    eax; Src
0x761A9E: push    100h; SizeInBytes
0x761AA3: push    offset byte_B3F828; Dst
0x761AA8: call    _strncpy_s
0x761AAD: add     esp, 10h
0x761AB0: retn
0x761AB1: mov     byte ptr ds:0B3F828h, 0
0x761AB8: retn
