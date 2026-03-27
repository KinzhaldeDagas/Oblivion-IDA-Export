0x5022F0: fldz
0x5022F2: mov     eax, [esp+arg_14]
0x5022F6: test    eax, eax
0x5022F8: mov     ecx, [esp+arg_18]
0x5022FC: fstp    qword ptr [ecx]
0x5022FE: jz      short loc_502313
0x502300: mov     eax, [eax+10h]
0x502303: test    eax, eax
0x502305: jz      short loc_502313
0x502307: cmp     byte ptr [eax], 0
0x50230A: mov     al, 1
0x50230C: jz      short locret_502315
0x50230E: fld1
0x502310: fstp    qword ptr [ecx]
0x502312: retn
0x502313: mov     al, 1
0x502315: retn
