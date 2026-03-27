0x9595A0: sub     esp, 19Ch
0x9595A6: push    esi
0x9595A7: mov     esi, [esp+1A0h+arg_0]
0x9595AE: push    esi
0x9595AF: lea     edx, [esp+1A4h+var_19C]
0x9595B3: lea     eax, [esp+1A4h+var_190]
0x9595B7: push    edx
0x9595B8: mov     [esp+1A8h+var_19C], eax
0x9595BC: mov     [esp+1A8h+var_198], 0
0x9595C4: mov     [esp+1A8h+var_194], 80000064h
0x9595CC: call    sub_958BA0
0x9595D1: mov     edx, [esp+1A0h+arg_4]
0x9595D8: lea     eax, [esp+1A0h+arg_8]
0x9595DF: push    eax
0x9595E0: push    edx
0x9595E1: push    esi
0x9595E2: lea     eax, [esp+1ACh+var_19C]
0x9595E6: push    eax
0x9595E7: call    sub_958C20
0x9595EC: mov     esi, eax
0x9595EE: mov     eax, [esp+1A0h+var_194]
0x9595F2: test    eax, eax
0x9595F4: js      short loc_959620
0x9595F6: mov     ecx, [esp+1A0h+var_19C]
0x9595FA: mov     edx, ds:0BA9DE4h
0x959600: and     eax, 3FFFFFFFh
0x959605: push    14h
0x959607: shl     eax, 2
0x95960A: push    eax
0x95960B: mov     eax, large fs:2Ch
0x959611: push    ecx
0x959612: mov     ecx, [eax+edx*4]
0x959615: mov     ecx, [ecx+19Ch]
0x95961B: call    sub_8A75D0
0x959620: mov     eax, esi
0x959622: pop     esi
0x959623: add     esp, 19Ch
0x959629: retn    0Ch
