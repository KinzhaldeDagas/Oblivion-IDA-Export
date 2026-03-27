0x7A8720: mov     ecx, [esp+arg_4]
0x7A8724: test    ecx, ecx
0x7A8726: jbe     short locret_7A874A
0x7A8728: mov     edx, [esp+arg_8]
0x7A872C: mov     eax, [esp+arg_0]
0x7A8730: push    esi
0x7A8731: test    eax, eax
0x7A8733: jz      short loc_7A873F
0x7A8735: mov     esi, [edx]
0x7A8737: mov     [eax], esi
0x7A8739: mov     esi, [edx+4]
0x7A873C: mov     [eax+4], esi
0x7A873F: sub     ecx, 1
0x7A8742: add     eax, 8
0x7A8745: test    ecx, ecx
0x7A8747: ja      short loc_7A8731
0x7A8749: pop     esi
0x7A874A: retn
