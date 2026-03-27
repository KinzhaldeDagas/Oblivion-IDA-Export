0x5922E0: mov     eax, [esp+arg_0]
0x5922E4: sub     esp, 8
0x5922E7: cmp     eax, 0FDEh
0x5922EC: push    esi
0x5922ED: push    edi
0x5922EE: mov     esi, ecx
0x5922F0: jnz     short loc_59233C
0x5922F2: push    eax
0x5922F3: call    sub_588C10
0x5922F8: test    eax, eax
0x5922FA: mov     edi, [esp+10h+arg_8]
0x5922FE: jnz     short loc_592304
0x592300: test    edi, edi
0x592302: jnz     short loc_59232E
0x592304: push    0FDEh
0x592309: mov     ecx, esi
0x59230B: call    sub_588C10
0x592310: test    eax, eax
0x592312: jz      short loc_59235E
0x592314: push    0FDEh
0x592319: mov     ecx, esi
0x59231B: call    sub_588C10
0x592320: push    eax; unsigned __int8 *
0x592321: push    edi; unsigned __int8 *
0x592322: call    __mbscmp
0x592327: add     esp, 8
0x59232A: test    eax, eax
0x59232C: jnz     short loc_59235E
0x59232E: or      dword ptr [esi+2Ch], 2
0x592332: pop     edi
0x592333: mov     eax, esi
0x592335: pop     esi
0x592336: add     esp, 8
0x592339: retn    0Ch
0x59233C: cmp     eax, 0FD1h
0x592341: jnz     short loc_59235E
0x592343: fld     [esp+10h+arg_4]
0x592347: push    eax
0x592348: fstp    [esp+14h+var_8]
0x59234C: call    Tile_GetFloat
0x592351: fld     [esp+10h+var_8]
0x592355: fucompp
0x592357: fnstsw  ax
0x592359: test    ah, 44h
0x59235C: jp      short loc_59232E
0x59235E: pop     edi
0x59235F: xor     eax, eax
0x592361: pop     esi
0x592362: add     esp, 8
0x592365: retn    0Ch
