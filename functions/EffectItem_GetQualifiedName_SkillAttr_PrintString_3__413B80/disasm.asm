0x413B80: mov     ecx, [ecx+14h]
0x413B83: push    ecx
0x413B84: call    ActorValue_GetName
0x413B89: push    eax
0x413B8A: mov     eax, [esp+8+arg_C]
0x413B8E: push    esi
0x413B8F: push    offset aSS; "%s %s"
0x413B94: push    eax
0x413B95: call    __sprintf
0x413B9A: add     esp, 14h
0x413B9D: pop     esi
0x413B9E: add     esp, 8
0x413BA1: retn    4
