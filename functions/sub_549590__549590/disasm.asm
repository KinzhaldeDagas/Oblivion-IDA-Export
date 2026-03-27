0x549590: push    ebx
0x549591: mov     bl, [esp+4+arg_0]
0x549595: test    bl, bl
0x549597: push    esi
0x549598: mov     esi, ecx
0x54959A: jz      short loc_5495E5
0x54959C: cmp     byte ptr [esi+1DAh], 0
0x5495A3: jnz     loc_54962D
0x5495A9: cmp     byte ptr [esp+8+arg_4], 0
0x5495AE: jz      short loc_5495B4
0x5495B0: fldz
0x5495B2: jmp     short loc_5495B6
0x5495B4: fld1
0x5495B6: mov     eax, [esi]
0x5495B8: fstp    [esp+8+arg_4]
0x5495BC: fld     [esp+8+arg_4]
0x5495C0: mov     edx, [eax+78h]
0x5495C3: push    1
0x5495C5: push    1
0x5495C7: push    1
0x5495C9: push    1
0x5495CB: push    1
0x5495CD: push    ecx
0x5495CE: fstp    [esp+20h+var_20]
0x5495D1: call    edx
0x5495D3: mov     [esi+1DAh], bl
0x5495D9: mov     byte ptr [esi+1D7h], 1
0x5495E0: pop     esi
0x5495E1: pop     ebx
0x5495E2: retn    8
0x5495E5: cmp     byte ptr [esi+1DAh], 0
0x5495EC: jz      short loc_54962D
0x5495EE: cmp     byte ptr [esp+8+arg_4], 0
0x5495F3: mov     byte ptr [esi+1DAh], 0
0x5495FA: jz      short loc_549600
0x5495FC: fldz
0x5495FE: jmp     short loc_549602
0x549600: fld1
0x549602: mov     eax, [esi]
0x549604: fstp    [esp+8+arg_4]
0x549608: fld     [esp+8+arg_4]
0x54960C: mov     edx, [eax+78h]
0x54960F: push    0
0x549611: push    1
0x549613: push    1
0x549615: push    1
0x549617: push    1
0x549619: push    ecx
0x54961A: fstp    [esp+20h+var_20]
0x54961D: call    edx
0x54961F: mov     byte ptr [esi+1D5h], 1
0x549626: mov     byte ptr [esi+1D7h], 1
0x54962D: pop     esi
0x54962E: pop     ebx
0x54962F: retn    8
