0x5F4009: mov     ecx, esi; this
0x5F400B: call    TESObjectREFR_GetName
0x5F4010: push    eax; ArgList
0x5F4011: push    offset aSDoesnTHaveALe; "%s doesn't have a LEFT attack animation"...
0x5F4016: call    PrintError
0x5F401B: add     esp, 8
0x5F401E: push    0
0x5F4020: push    0
0x5F4022: mov     ebx, 16h
0x5F4027: push    ebx
0x5F4028: mov     ecx, esi
0x5F402A: call    Actor_LoadAnimGroup?
0x5F402F: movzx   ebp, ax
