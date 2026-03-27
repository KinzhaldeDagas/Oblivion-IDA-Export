0x4A8430: push    esi
0x4A8431: push    edi
0x4A8432: mov     edi, [esp+8+arg_4]
0x4A8436: test    edi, edi
0x4A8438: mov     esi, offset aMain_1; "MAIN"
0x4A843D: jz      short loc_4A846E
0x4A843F: mov     eax, [esp+8+arg_0]
0x4A8443: mov     eax, [eax+4]
0x4A8446: test    eax, eax
0x4A8448: jz      short loc_4A845C
0x4A844A: push    3Ah ; ':'; Val
0x4A844C: push    eax; Str
0x4A844D: call    _strchr
0x4A8452: add     esp, 8
0x4A8455: test    eax, eax
0x4A8457: jz      short loc_4A845C
0x4A8459: lea     esi, [eax+1]
0x4A845C: mov     edx, edi
0x4A845E: mov     eax, esi
0x4A8460: sub     edx, esi
0x4A8462: mov     cl, [eax]
0x4A8464: mov     [edx+eax], cl
0x4A8467: add     eax, 1
0x4A846A: test    cl, cl
0x4A846C: jnz     short loc_4A8462
0x4A846E: pop     edi
0x4A846F: pop     esi
0x4A8470: retn
