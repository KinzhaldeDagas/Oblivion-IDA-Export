0x8E0420: mov     eax, [esp+arg_4]
0x8E0424: sub     esp, 10h
0x8E0427: cmp     eax, 1
0x8E042A: push    edi
0x8E042B: mov     edi, ecx
0x8E042D: jnz     short loc_8E0448
0x8E042F: mov     ecx, [edi+8]
0x8E0432: mov     edx, [esp+14h+arg_0]
0x8E0436: mov     eax, [edi]
0x8E0438: push    ecx
0x8E0439: push    0
0x8E043B: push    edx
0x8E043C: mov     ecx, edi
0x8E043E: call    dword ptr [eax+8]
0x8E0441: pop     edi
0x8E0442: add     esp, 10h
0x8E0445: retn    8
0x8E0448: push    esi
0x8E0449: mov     esi, [esp+18h+arg_0]
0x8E044D: fld     dword ptr [esi+18h]
0x8E0450: fld     dword ptr [esi+14h]
0x8E0453: fst     [esp+18h+var_10]
0x8E0457: fld     st(1)
0x8E0459: fstp    [esp+18h+var_C]
0x8E045D: fxch    st(1)
0x8E045F: fsub    st, st(1)
0x8E0461: fstp    [esp+18h+var_8]
0x8E0465: fstp    st
0x8E0467: fld     dword ptr ds:0A2FAA8h
0x8E046D: fld     [esp+18h+var_8]
0x8E0471: fucompp
0x8E0473: fnstsw  ax
0x8E0475: test    ah, 44h
0x8E0478: jp      short loc_8E0484
0x8E047A: mov     [esp+18h+var_4], 0
0x8E0482: jmp     short loc_8E0492
0x8E0484: fld     dword ptr ds:0A2F948h
0x8E048A: fdiv    [esp+18h+var_8]
0x8E048E: fstp    [esp+18h+var_4]
0x8E0492: push    1
0x8E0494: push    0
0x8E0496: mov     ecx, esi
0x8E0498: call    sub_89BF50
0x8E049D: mov     eax, ds:0BA7D98h
0x8E04A2: cmp     dword ptr [eax+4], 1
0x8E04A6: jnz     short loc_8E04B5
0x8E04A8: pop     esi
0x8E04A9: mov     eax, 2
0x8E04AE: pop     edi
0x8E04AF: add     esp, 10h
0x8E04B2: retn    8
0x8E04B5: lea     ecx, [esp+18h+var_10]
0x8E04B9: push    ecx
0x8E04BA: push    esi
0x8E04BB: mov     ecx, edi
0x8E04BD: call    sub_8D7920
0x8E04C2: mov     edx, ds:0BA7D98h
0x8E04C8: cmp     dword ptr [edx+4], 1
0x8E04CC: jz      short loc_8E04A8
0x8E04CE: mov     dword ptr [edi+0Ch], 0
0x8E04D5: fld     dword ptr [esi+18h]
0x8E04D8: fadd    dword ptr [esi+14h]
0x8E04DB: fmul    dword ptr ds:0A3D65Ch
0x8E04E1: fstp    dword ptr [esi+0Ch]
0x8E04E4: mov     ecx, [edi+8]
0x8E04E7: mov     eax, [edi]
0x8E04E9: push    ecx
0x8E04EA: push    0
0x8E04EC: push    esi
0x8E04ED: mov     ecx, edi
0x8E04EF: call    dword ptr [eax+8]
0x8E04F2: pop     esi
0x8E04F3: pop     edi
0x8E04F4: add     esp, 10h
0x8E04F7: retn    8
