0x7485D0: mov     eax, [esp+lpCaption]
0x7485D4: mov     ecx, [esp+lpText]
0x7485D8: push    40000h; uType
0x7485DD: push    eax; lpCaption
0x7485DE: push    ecx; lpText
0x7485DF: push    0; hWnd
0x7485E1: call    dword ptr ds:0A28258h
0x7485E7: xor     eax, eax
0x7485E9: retn
