0x65A3E0: push    esi
0x65A3E1: push    edi
0x65A3E2: mov     edi, [esp+8+a2]
0x65A3E6: mov     edx, [edi+4]
0x65A3E9: mov     esi, ecx
0x65A3EB: mov     ecx, [edi]
0x65A3ED: sub     esp, 0Ch
0x65A3F0: mov     eax, esp
0x65A3F2: mov     [eax], ecx
0x65A3F4: mov     ecx, [edi+8]
0x65A3F7: mov     [eax+4], edx
0x65A3FA: mov     [eax+8], ecx
0x65A3FD: mov     ecx, esi; this
0x65A3FF: call    TESObjectREFR_SetPosition
0x65A404: mov     ecx, esi; this
0x65A406: call    MobileObject_GetCharProxy
0x65A40B: mov     esi, eax
0x65A40D: test    esi, esi
0x65A40F: jz      short loc_65A44A
0x65A411: push    edi; a2
0x65A412: mov     ecx, esi; this
0x65A414: call    sub_452A10
0x65A419: mov     ecx, [esi+8]; this
0x65A41C: test    ecx, ecx
0x65A41E: jz      short loc_65A42A
0x65A420: push    offset stru_BA7A40; a2
0x65A425: call    sub_8AC0B0
0x65A42A: mov     edx, [esi+1F4h]
0x65A430: fldz
0x65A432: shr     edx, 7
0x65A435: fstp    dword ptr [esi+320h]
0x65A43B: test    dl, 1
0x65A43E: jz      short loc_65A44A
0x65A440: and     dword ptr [esi+1F4h], 0FFFFFF7Fh
0x65A44A: pop     edi
0x65A44B: pop     esi
0x65A44C: retn    4
