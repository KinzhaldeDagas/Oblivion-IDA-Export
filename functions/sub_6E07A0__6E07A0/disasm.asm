0x6E07A0: push    esi
0x6E07A1: mov     esi, ecx
0x6E07A3: mov     al, [esi+8]
0x6E07A6: shr     al, 5
0x6E07A9: test    al, 1
0x6E07AB: jz      short loc_6E07B8
0x6E07AD: fld     dword ptr ds:0A7A164h
0x6E07B3: fstp    dword ptr [esi+28h]
0x6E07B6: jmp     short loc_6E07DE
0x6E07B8: fld     [esp+4+arg_0]
0x6E07BC: push    ecx
0x6E07BD: fstp    [esp+8+var_8]; float
0x6E07C0: call    sub_6C36B0
0x6E07C5: test    al, al
0x6E07C7: jz      short loc_6E07DE
0x6E07C9: mov     ecx, [esi+3Ch]
0x6E07CC: test    ecx, ecx
0x6E07CE: jz      short loc_6E0826
0x6E07D0: mov     edx, [ecx]
0x6E07D2: mov     eax, [edx+94h]
0x6E07D8: call    eax
0x6E07DA: test    al, al
0x6E07DC: jz      short loc_6E0826
0x6E07DE: mov     ecx, [esi+3Ch]
0x6E07E1: test    ecx, ecx
0x6E07E3: jz      short loc_6E0826
0x6E07E5: mov     edx, [ecx]
0x6E07E7: fld     dword ptr [esi+28h]
0x6E07EA: mov     edx, [edx+5Ch]
0x6E07ED: lea     eax, [esp+4+arg_0]
0x6E07F1: push    eax
0x6E07F2: mov     eax, [esi+30h]
0x6E07F5: push    eax
0x6E07F6: push    ecx
0x6E07F7: fstp    [esp+10h+var_10]
0x6E07FA: call    edx
0x6E07FC: test    al, al
0x6E07FE: jz      short loc_6E0826
0x6E0800: mov     esi, [esi+30h]
0x6E0803: test    esi, esi
0x6E0805: jz      short loc_6E0826
0x6E0807: push    esi
0x6E0808: push    offset dword_B3FD14
0x6E080D: call    NiRTTI_Cast
0x6E0812: fld     [esp+0Ch+arg_0]
0x6E0816: add     esp, 8
0x6E0819: fstp    dword ptr [eax+0DCh]
0x6E081F: add     dword ptr [eax+0B8h], 1
0x6E0826: pop     esi
0x6E0827: retn    4
