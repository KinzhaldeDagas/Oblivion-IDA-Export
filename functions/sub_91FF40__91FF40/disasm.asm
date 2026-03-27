0x91FF40: mov     edx, large fs:2Ch
0x91FF47: mov     ecx, ds:0BA9DE4h
0x91FF4D: mov     ecx, [edx+ecx*4]
0x91FF50: mov     ecx, [ecx+19Ch]
0x91FF56: mov     eax, [esp+arg_8]
0x91FF5A: mov     eax, [eax+18h]
0x91FF5D: cmp     eax, [ecx+28h]
0x91FF60: mov     [ecx+20h], eax
0x91FF63: jnz     short locret_91FF6B
0x91FF65: mov     edx, [ecx]
0x91FF67: push    eax
0x91FF68: call    dword ptr [edx+10h]
0x91FF6B: retn    0Ch
