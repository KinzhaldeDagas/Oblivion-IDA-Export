0x5F3FD3: mov     ecx, esi; this
0x5F3FD5: call    TESObjectREFR_GetName
0x5F3FDA: push    eax; ArgList
0x5F3FDB: push    offset aSDoesnTHaveACa; "%s doesn't have a casting animation."
0x5F3FE0: call    PrintError
0x5F3FE5: add     esp, 8
0x5F3FE8: push    0
0x5F3FEA: push    0
0x5F3FEC: mov     ebx, 14h
0x5F3FF1: push    ebx
0x5F3FF2: mov     ecx, esi
0x5F3FF4: call    Actor_LoadAnimGroup?
0x5F3FF9: movzx   ebp, ax
