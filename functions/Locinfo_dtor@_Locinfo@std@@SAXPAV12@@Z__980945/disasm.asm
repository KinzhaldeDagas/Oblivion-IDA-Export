0x980945: mov     eax, [esp+arg_0]
0x980949: cmp     dword ptr [eax+50h], 0
0x98094D: jbe     short locret_980967
0x98094F: cmp     dword ptr [eax+54h], 10h
0x980953: jb      short loc_98095A
0x980955: mov     eax, [eax+40h]
0x980958: jmp     short loc_98095D
0x98095A: add     eax, 40h ; '@'
0x98095D: push    eax; char *
0x98095E: push    0; int
0x980960: call    _setlocale
0x980965: pop     ecx
0x980966: pop     ecx
0x980967: retn
