0x88F1B0: push    ecx
0x88F1B1: fld1
0x88F1B3: push    esi
0x88F1B4: mov     esi, [esp+8+arg_0]
0x88F1B8: fstp    [esp+8+var_4]
0x88F1BC: test    esi, esi
0x88F1BE: jz      short loc_88F1EC
0x88F1C0: mov     eax, [esp+8+arg_4]
0x88F1C4: test    eax, eax
0x88F1C6: jz      short loc_88F1D6
0x88F1C8: mov     edx, [esi]
0x88F1CA: push    eax
0x88F1CB: mov     eax, [edx+58h]
0x88F1CE: mov     ecx, esi
0x88F1D0: call    eax
0x88F1D2: test    eax, eax
0x88F1D4: jnz     short loc_88F1D8
0x88F1D6: mov     eax, esi
0x88F1D8: push    eax
0x88F1D9: call    sub_497420
0x88F1DE: add     esp, 4
0x88F1E1: test    eax, eax
0x88F1E3: jz      short loc_88F1EC
0x88F1E5: fld     dword ptr [eax+14h]
0x88F1E8: fstp    [esp+8+var_4]
0x88F1EC: fld     [esp+8+var_4]
0x88F1F0: pop     esi
0x88F1F1: pop     ecx
0x88F1F2: retn
