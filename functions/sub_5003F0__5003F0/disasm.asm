0x5003F0: push    ecx
0x5003F1: mov     ecx, [esp+4+l]
0x5003F5: mov     edx, [esp+4+arg_10]
0x5003F9: push    esi
0x5003FA: mov     esi, [esp+8+a4]
0x5003FE: lea     eax, [esp+8+var_4]
0x500402: push    eax; UInt16
0x500403: mov     eax, [esp+0Ch+arg_C]
0x500407: push    ecx; l
0x500408: mov     ecx, [esp+10h+a3]
0x50040C: push    edx; a6
0x50040D: mov     edx, [esp+14h+arg_4]
0x500411: push    eax; a5
0x500412: mov     eax, [esp+18h+a1]
0x500416: push    esi; a4
0x500417: push    ecx; a3
0x500418: push    edx; a2
0x500419: push    eax; a1
0x50041A: mov     dword ptr [esp+28h+var_4], 0
0x500422: call    Script_ExtractArgs
0x500427: add     esp, 20h
0x50042A: test    al, al
0x50042C: jnz     short loc_500431
0x50042E: pop     esi
0x50042F: pop     ecx
0x500430: retn
0x500431: mov     ecx, [esp+8+arg_18]
0x500435: mov     edx, dword ptr [esp+8+var_4]
0x500439: push    ecx
0x50043A: push    0
0x50043C: push    edx
0x50043D: push    esi
0x50043E: call    sub_4F43C0
0x500443: add     esp, 10h
0x500446: pop     esi
0x500447: pop     ecx
0x500448: retn
