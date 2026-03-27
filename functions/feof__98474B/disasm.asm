0x98474B: mov     eax, [esp+File]
0x98474F: push    esi
0x984750: xor     esi, esi
0x984752: cmp     eax, esi
0x984754: jnz     short loc_984772
0x984756: call    __errno
0x98475B: push    esi
0x98475C: push    esi
0x98475D: push    esi
0x98475E: push    esi
0x98475F: push    esi
0x984760: mov     dword ptr [eax], 16h
0x984766: call    __invalid_parameter
0x98476B: add     esp, 14h
0x98476E: xor     eax, eax
0x984770: pop     esi
0x984771: retn
0x984772: mov     eax, [eax+0Ch]
0x984775: and     eax, 10h
0x984778: pop     esi
0x984779: retn
