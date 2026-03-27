0x90D8A0: mov     edx, [esp+arg_4]
0x90D8A4: test    edx, edx
0x90D8A6: push    esi
0x90D8A7: jnz     short loc_90D8C0
0x90D8A9: mov     eax, [ecx+0Ch]
0x90D8AC: mov     esi, [esp+4+arg_0]
0x90D8B0: mov     ecx, [ecx+8]
0x90D8B3: add     eax, esi
0x90D8B5: mov     esi, [ecx]
0x90D8B7: push    edx
0x90D8B8: push    eax
0x90D8B9: call    dword ptr [esi+18h]
0x90D8BC: pop     esi
0x90D8BD: retn    8
0x90D8C0: mov     eax, [esp+4+arg_0]
0x90D8C4: mov     ecx, [ecx+8]
0x90D8C7: mov     esi, [ecx]
0x90D8C9: push    edx
0x90D8CA: push    eax
0x90D8CB: call    dword ptr [esi+18h]
0x90D8CE: pop     esi
0x90D8CF: retn    8
