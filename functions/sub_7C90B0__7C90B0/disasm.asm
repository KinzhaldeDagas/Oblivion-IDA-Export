0x7C90B0: push    esi
0x7C90B1: push    edi
0x7C90B2: mov     edi, ecx
0x7C90B4: cmp     dword ptr [edi+24h], 0
0x7C90B8: jz      short loc_7C90DC
0x7C90BA: xor     esi, esi
0x7C90BC: lea     esp, [esp+0]
0x7C90C0: mov     ecx, ds:dword_B45290[esi]
0x7C90C6: test    ecx, ecx
0x7C90C8: jz      short loc_7C90D1
0x7C90CA: mov     eax, [ecx]
0x7C90CC: mov     edx, [eax+5Ch]
0x7C90CF: call    edx
0x7C90D1: add     esi, 4
0x7C90D4: cmp     esi, 204h
0x7C90DA: jb      short loc_7C90C0
0x7C90DC: xor     esi, esi
0x7C90DE: mov     edi, edi
0x7C90E0: mov     ecx, ds:dword_B45088[esi]
0x7C90E6: test    ecx, ecx
0x7C90E8: jz      short loc_7C90F1
0x7C90EA: mov     eax, [ecx]
0x7C90EC: mov     edx, [eax+44h]
0x7C90EF: call    edx
0x7C90F1: add     esi, 4
0x7C90F4: cmp     esi, 204h
0x7C90FA: jb      short loc_7C90E0
0x7C90FC: mov     ecx, edi
0x7C90FE: pop     edi
0x7C90FF: pop     esi
0x7C9100: jmp     sub_77A4A0
