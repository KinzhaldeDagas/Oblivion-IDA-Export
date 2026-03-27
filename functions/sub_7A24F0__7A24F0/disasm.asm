0x7A24F0: mov     eax, [esp+arg_0]
0x7A24F4: test    eax, eax
0x7A24F6: push    esi
0x7A24F7: mov     esi, ecx
0x7A24F9: jnz     short loc_7A2532
0x7A24FB: push    edi
0x7A24FC: lea     edi, [esi+20h]
0x7A24FF: push    0FFFFFFFFh
0x7A2501: mov     ecx, edi
0x7A2503: call    sub_78EA30
0x7A2508: fld     dword ptr ds:0A8C690h
0x7A250E: sub     esp, 8
0x7A2511: fstp    [esp+10h+var_C]; float
0x7A2515: mov     ecx, edi
0x7A2517: fld     dword ptr ds:0A379B4h
0x7A251D: fstp    [esp+10h+var_10]; float
0x7A2520: call    sub_78EA00
0x7A2525: call    Double_To_SInt32
0x7A252A: pop     edi
0x7A252B: mov     [esi+48h], eax
0x7A252E: pop     esi
0x7A252F: retn    4
0x7A2532: cmp     eax, 1
0x7A2535: jz      short loc_7A253A
0x7A2537: mov     [esi+48h], eax
0x7A253A: pop     esi
0x7A253B: retn    4
