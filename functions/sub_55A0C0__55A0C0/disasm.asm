0x55A0C0: push    0FFFFFFFFh
0x55A0C2: push    offset SEH_55A010
0x55A0C7: mov     eax, large fs:0
0x55A0CD: push    eax
0x55A0CE: push    ecx
0x55A0CF: push    esi
0x55A0D0: mov     eax, ds:0B30AACh
0x55A0D5: xor     eax, esp
0x55A0D7: push    eax
0x55A0D8: lea     eax, [esp+18h+var_C]
0x55A0DC: mov     large fs:0, eax
0x55A0E2: mov     esi, ecx
0x55A0E4: mov     [esp+18h+var_10], esi
0x55A0E8: mov     eax, [esp+18h+arg_0]
0x55A0EC: xor     ecx, ecx
0x55A0EE: cmp     eax, ecx
0x55A0F0: mov     [esp+18h+var_4], ecx
0x55A0F4: mov     dword ptr [esi], offset ??_7BSFaceGenMorphDifferential@@6B@; const BSFaceGenMorphDifferential::`vftable'
0x55A0FA: mov     [esi+8], eax
0x55A0FD: jz      short loc_55A12E
0x55A0FF: mov     edx, 0Ch
0x55A104: mul     edx
0x55A106: seto    cl
0x55A109: neg     ecx
0x55A10B: or      ecx, eax
0x55A10D: push    ecx; Size
0x55A10E: call    FormHeapAlloc
0x55A113: mov     [esi+4], eax
0x55A116: add     esp, 4
0x55A119: mov     eax, esi
0x55A11B: mov     ecx, [esp+18h+var_C]
0x55A11F: mov     large fs:0, ecx
0x55A126: pop     ecx
0x55A127: pop     esi
0x55A128: add     esp, 10h
0x55A12B: retn    4
0x55A12E: mov     [esi+4], ecx
0x55A131: mov     eax, esi
0x55A133: mov     ecx, [esp+18h+var_C]
0x55A137: mov     large fs:0, ecx
0x55A13E: pop     ecx
0x55A13F: pop     esi
0x55A140: add     esp, 10h
0x55A143: retn    4
