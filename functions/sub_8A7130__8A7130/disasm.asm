0x8A7130: mov     eax, ds:0BA9DE4h
0x8A7135: mov     edx, large fs:2Ch
0x8A713C: mov     eax, [edx+eax*4]
0x8A713F: mov     eax, [eax+19Ch]
0x8A7145: test    eax, eax
0x8A7147: jnz     short loc_8A714E
0x8A7149: mov     eax, ds:0BA7D9Ch
0x8A714E: mov     edx, [esp+arg_0]
0x8A7152: mov     eax, [eax+edx*4+0BCh]
0x8A7159: mov     edx, [ecx]
0x8A715B: push    esi
0x8A715C: mov     esi, [esp+4+arg_4]
0x8A7160: push    esi
0x8A7161: push    eax
0x8A7162: call    dword ptr [edx+10h]
0x8A7165: pop     esi
0x8A7166: retn    8
