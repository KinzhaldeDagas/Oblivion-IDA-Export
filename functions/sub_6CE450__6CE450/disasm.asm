0x6CE450: push    esi
0x6CE451: push    edi
0x6CE452: mov     edi, [esp+8+arg_0]
0x6CE456: mov     esi, ecx
0x6CE458: fld     dword ptr [esi]
0x6CE45A: fld     dword ptr [edi]
0x6CE45C: fucompp
0x6CE45E: fnstsw  ax
0x6CE460: test    ah, 44h
0x6CE463: jp      short loc_6CE4AC
0x6CE465: fld     dword ptr [esi+4]
0x6CE468: fld     dword ptr [edi+4]
0x6CE46B: fucompp
0x6CE46D: fnstsw  ax
0x6CE46F: test    ah, 44h
0x6CE472: jp      short loc_6CE4AC
0x6CE474: fld     dword ptr [esi+8]
0x6CE477: fld     dword ptr [edi+8]
0x6CE47A: fucompp
0x6CE47C: fnstsw  ax
0x6CE47E: test    ah, 44h
0x6CE481: jp      short loc_6CE4AC
0x6CE483: lea     eax, [edi+0Ch]
0x6CE486: push    eax
0x6CE487: lea     ecx, [esi+0Ch]
0x6CE48A: call    sub_73B770
0x6CE48F: test    al, al
0x6CE491: jz      short loc_6CE4AC
0x6CE493: fld     dword ptr [esi+1Ch]
0x6CE496: fld     dword ptr [edi+1Ch]
0x6CE499: fucompp
0x6CE49B: fnstsw  ax
0x6CE49D: test    ah, 44h
0x6CE4A0: jp      short loc_6CE4AC
0x6CE4A2: pop     edi
0x6CE4A3: mov     eax, 1
0x6CE4A8: pop     esi
0x6CE4A9: retn    4
0x6CE4AC: pop     edi
0x6CE4AD: xor     eax, eax
0x6CE4AF: pop     esi
0x6CE4B0: retn    4
