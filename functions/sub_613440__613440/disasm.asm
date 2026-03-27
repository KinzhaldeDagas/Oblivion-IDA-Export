0x613440: push    ebx
0x613441: push    esi
0x613442: mov     esi, ecx
0x613444: mov     ecx, [esi+3Ch]
0x613447: xor     bl, bl
0x613449: call    sub_5E0F50
0x61344E: mov     edx, [eax]
0x613450: mov     ecx, eax
0x613452: mov     eax, [edx+11Ch]
0x613458: call    eax
0x61345A: fld     [esp+8+arg_4]
0x61345E: cmp     al, 64h ; 'd'
0x613460: jge     short loc_613487
0x613462: cmp     dword ptr [esi+70h], 0
0x613466: jz      short loc_613487
0x613468: fld     qword ptr ds:0A3C770h
0x61346E: fmul    st, st(1)
0x613470: fld     qword ptr ds:0A46970h
0x613476: fcom    st(1)
0x613478: fnstsw  ax
0x61347A: test    ah, 41h
0x61347D: jnz     short loc_613483
0x61347F: fstp    st
0x613481: jmp     short loc_613489
0x613483: fstp    st(1)
0x613485: jmp     short loc_613489
0x613487: fldz
0x613489: mov     esi, [esi+70h]
0x61348C: fstp    [esp+8+arg_4]
0x613490: cmp     esi, 2
0x613493: jz      short loc_61349A
0x613495: cmp     esi, 4
0x613498: jnz     short loc_6134A0
0x61349A: fldz
0x61349C: fstp    [esp+8+arg_4]
0x6134A0: fld     [esp+8+arg_0]
0x6134A4: fld     [esp+8+arg_4]
0x6134A8: faddp   st(2), st
0x6134AA: fcompp
0x6134AC: fnstsw  ax
0x6134AE: mov     al, 1
0x6134B0: test    ah, 41h
0x6134B3: jnp     short loc_6134B7
0x6134B5: mov     al, bl
0x6134B7: pop     esi
0x6134B8: pop     ebx
0x6134B9: retn    0Ch
