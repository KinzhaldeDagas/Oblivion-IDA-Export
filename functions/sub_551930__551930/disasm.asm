0x551930: mov     eax, ds:0B39B80h
0x551935: test    eax, eax
0x551937: jnz     short loc_55193C
0x551939: xor     al, al
0x55193B: retn
0x55193C: cmp     dword ptr [eax+0DACh], 0
0x551943: jz      short loc_551939
0x551945: mov     ecx, [esp+arg_0]
0x551949: push    ecx
0x55194A: mov     ecx, [eax+0DACh]
0x551950: call    sub_5516B0
0x551955: retn
