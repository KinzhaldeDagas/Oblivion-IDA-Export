0x65D220: push    esi
0x65D221: push    edi
0x65D222: push    0; a2
0x65D224: mov     esi, ecx
0x65D226: call    Actor_GetActorBaseForm
0x65D22B: fld     [esp+8+arg_4]
0x65D22F: mov     edx, [eax]
0x65D231: mov     edi, [esp+8+a2]
0x65D235: push    ecx
0x65D236: fstp    [esp+0Ch+var_C]
0x65D239: mov     ecx, eax
0x65D23B: mov     eax, [edx+130h]
0x65D241: push    edi
0x65D242: call    eax
0x65D244: push    edi; a2
0x65D245: call    sub_57A6F0
0x65D24A: add     esp, 4
0x65D24D: push    1
0x65D24F: push    edi
0x65D250: mov     ecx, esi
0x65D252: call    sub_5E2670
0x65D257: pop     edi
0x65D258: pop     esi
0x65D259: retn    8
