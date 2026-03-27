0x413B00: mov     ecx, [ecx+14h]
0x413B03: push    ecx
0x413B04: call    ActorValue_GetName
0x413B09: mov     ecx, [esp+4+arg_C]
0x413B0D: push    eax
0x413B0E: push    esi
0x413B0F: push    offset aSS; "%s %s"
0x413B14: push    ecx
0x413B15: call    __sprintf
0x413B1A: add     esp, 14h
0x413B1D: pop     esi
0x413B1E: add     esp, 8
0x413B21: retn    4
