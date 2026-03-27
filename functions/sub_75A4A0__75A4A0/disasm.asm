0x75A4A0: push    esi
0x75A4A1: push    edi
0x75A4A2: push    24h ; '$'; Size
0x75A4A4: mov     edi, ecx
0x75A4A6: call    FormHeapAlloc
0x75A4AB: mov     esi, eax
0x75A4AD: add     esp, 4
0x75A4B0: test    esi, esi
0x75A4B2: jz      short loc_75A4D2
0x75A4B4: mov     ecx, esi
0x75A4B6: call    sub_752BF0
0x75A4BB: fldz
0x75A4BD: mov     dword ptr [esi], offset ??_7NiPSysColorModifier@@6B@; const NiPSysColorModifier::`vftable'
0x75A4C3: mov     dword ptr [esi+18h], 0
0x75A4CA: fst     dword ptr [esi+1Ch]
0x75A4CD: fstp    dword ptr [esi+20h]
0x75A4D0: jmp     short loc_75A4D4
0x75A4D2: xor     esi, esi
0x75A4D4: mov     eax, [esp+8+arg_0]
0x75A4D8: push    eax
0x75A4D9: push    esi
0x75A4DA: mov     ecx, edi
0x75A4DC: call    sub_752C40
0x75A4E1: mov     ecx, [edi+18h]
0x75A4E4: push    ecx
0x75A4E5: mov     ecx, esi
0x75A4E7: call    sub_75A3F0
0x75A4EC: pop     edi
0x75A4ED: mov     eax, esi
0x75A4EF: pop     esi
0x75A4F0: retn    4
