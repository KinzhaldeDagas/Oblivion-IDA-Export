0x5E51E0: mov     edx, [ecx-4]
0x5E51E3: test    edx, edx
0x5E51E5: jz      short locret_5E520E
0x5E51E7: lea     eax, [ecx-5Ch]
0x5E51EA: neg     eax
0x5E51EC: push    esi
0x5E51ED: mov     esi, [edx]
0x5E51EF: sbb     eax, eax
0x5E51F1: and     eax, ecx
0x5E51F3: mov     ecx, [esp+4+arg_8]
0x5E51F7: push    ecx
0x5E51F8: mov     ecx, [esp+8+arg_4]
0x5E51FC: push    ecx
0x5E51FD: mov     ecx, [esp+0Ch+arg_0]
0x5E5201: push    ecx
0x5E5202: mov     ecx, edx
0x5E5204: mov     edx, [esi+2A4h]
0x5E520A: push    eax
0x5E520B: call    edx
0x5E520D: pop     esi
0x5E520E: retn    0Ch
