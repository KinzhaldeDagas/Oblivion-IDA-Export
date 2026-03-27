0x6CC550: sub     esp, 8
0x6CC553: cmp     byte ptr [ecx+0Eh], 1
0x6CC557: jnz     short loc_6CC560
0x6CC559: mov     al, [ecx+0Fh]
0x6CC55C: add     esp, 8
0x6CC55F: retn
0x6CC560: fldz
0x6CC562: push    ebx
0x6CC563: mov     bl, [ecx+0Dh]
0x6CC566: fstp    [esp+0Ch+var_4]
0x6CC56A: xor     dl, dl
0x6CC56C: test    bl, bl
0x6CC56E: mov     [esp+0Ch+var_5], 0FFh
0x6CC573: jbe     short loc_6CC5AB
0x6CC575: mov     ecx, [ecx+14h]
0x6CC578: add     ecx, 8
0x6CC57B: jmp     short loc_6CC580
0x6CC57D: align 10h
0x6CC580: fld     dword ptr [ecx]
0x6CC582: fld     [esp+0Ch+var_4]
0x6CC586: fcompp
0x6CC588: fnstsw  ax
0x6CC58A: test    ah, 5
0x6CC58D: jp      short loc_6CC599
0x6CC58F: fld     dword ptr [ecx]
0x6CC591: mov     [esp+0Ch+var_5], dl
0x6CC595: fstp    [esp+0Ch+var_4]
0x6CC599: add     dl, 1
0x6CC59C: add     ecx, 18h
0x6CC59F: cmp     dl, bl
0x6CC5A1: jb      short loc_6CC580
0x6CC5A3: mov     al, [esp+0Ch+var_5]
0x6CC5A7: cmp     al, 0FFh
0x6CC5A9: jnz     short loc_6CC5AD
0x6CC5AB: or      al, 0FFh
0x6CC5AD: pop     ebx
0x6CC5AE: add     esp, 8
0x6CC5B1: retn
