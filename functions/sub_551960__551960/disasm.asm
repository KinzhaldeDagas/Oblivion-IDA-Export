0x551960: mov     eax, ds:0B39B80h
0x551965: test    eax, eax
0x551967: jnz     short loc_55196C
0x551969: xor     al, al
0x55196B: retn
0x55196C: cmp     dword ptr [eax+0DACh], 0
0x551973: jz      short loc_551969
0x551975: mov     ecx, [esp+arg_0]
0x551979: push    ecx
0x55197A: mov     ecx, [eax+0DACh]
0x551980: call    sub_5517F0
0x551985: retn
