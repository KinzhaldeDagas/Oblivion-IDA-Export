0x536140: mov     edx, [esp+arg_0]
0x536144: mov     eax, [edx]
0x536146: test    eax, eax
0x536148: jz      short loc_53614F
0x53614A: mov     eax, [eax+8]
0x53614D: jmp     short loc_536151
0x53614F: xor     eax, eax
0x536151: test    eax, eax
0x536153: jnz     short loc_536194
0x536155: mov     eax, [edx+0Ch]
0x536158: test    eax, eax
0x53615A: mov     ecx, edx
0x53615C: jz      short loc_536169
0x53615E: mov     edi, edi
0x536160: mov     ecx, eax
0x536162: mov     eax, [ecx+0Ch]
0x536165: test    eax, eax
0x536167: jnz     short loc_536160
0x536169: mov     eax, [ecx+1Ch]
0x53616C: and     eax, 3Fh
0x53616F: cmp     al, 11h
0x536171: jnz     short loc_536187
0x536173: mov     ecx, [esp+arg_4]
0x536177: push    ecx
0x536178: mov     ecx, ds:0B333A0h
0x53617E: call    sub_440AC0
0x536183: movsx   eax, al
0x536186: retn
0x536187: push    edx
0x536188: call    sub_8AFC90
0x53618D: add     esp, 4
0x536190: movsx   eax, al
0x536193: retn
0x536194: mov     eax, [eax+10h]
0x536197: cmp     eax, 1Eh
0x53619A: jl      short loc_53619E
0x53619C: mov     al, 1Eh
0x53619E: movsx   eax, al
0x5361A1: retn
