0x4BCB40: mov     eax, [ecx+2Ch]
0x4BCB43: mov     ecx, [eax+4]
0x4BCB46: mov     edx, [eax]
0x4BCB48: mov     eax, [esp+arg_0]
0x4BCB4C: push    ecx
0x4BCB4D: push    edx
0x4BCB4E: push    offset aDistantlodload; "DistantLODLoaderTask for cell ( %i, %i "...
0x4BCB53: push    eax
0x4BCB54: call    __sprintf
0x4BCB59: add     esp, 10h
0x4BCB5C: mov     al, 1
0x4BCB5E: retn    4
