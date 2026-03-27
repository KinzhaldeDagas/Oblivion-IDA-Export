0x4FCA10: push    esi
0x4FCA11: mov     esi, ecx
0x4FCA13: call    Script_StaticDestructor
0x4FCA18: test    [esp+4+arg_0], 1
0x4FCA1D: jz      short loc_4FCA28
0x4FCA1F: push    esi
0x4FCA20: call    FormHeapFree
0x4FCA25: add     esp, 4
0x4FCA28: mov     eax, esi
0x4FCA2A: pop     esi
0x4FCA2B: retn    4
