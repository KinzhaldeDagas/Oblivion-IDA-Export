0x4FCCE0: cmp     dword ptr ds:0B10270h, 1171h
0x4FCCEA: push    esi; ArgList
0x4FCCEB: mov     esi, ecx
0x4FCCED: jz      short loc_4FCCFC
0x4FCCEF: push    offset aTheScriptFunct; "The script function list doesn't have a"...
0x4FCCF4: call    sub_404EC0
0x4FCCF9: add     esp, 4
0x4FCCFC: cmp     dword ptr ds:0B0C8A0h, 183h
0x4FCD06: jz      short loc_4FCD15
0x4FCD08: push    offset aTheScriptConso; "The script console-command list doesn't"...
0x4FCD0D: call    sub_404EC0
0x4FCD12: add     esp, 4
0x4FCD15: mov     eax, esi
0x4FCD17: pop     esi
0x4FCD18: retn
