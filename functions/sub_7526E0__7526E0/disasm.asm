0x7526E0: push    esi
0x7526E1: push    edi
0x7526E2: push    34h ; '4'; Size
0x7526E4: mov     edi, ecx
0x7526E6: call    FormHeapAlloc
0x7526EB: mov     esi, eax
0x7526ED: add     esp, 4
0x7526F0: test    esi, esi
0x7526F2: jz      short loc_752727
0x7526F4: mov     ecx, esi
0x7526F6: call    sub_752BF0
0x7526FB: fld1
0x7526FD: fstp    dword ptr [esi+1Ch]
0x752700: mov     eax, 1
0x752705: fldz
0x752707: mov     dword ptr [esi], offset ??_7NiPSysSpawnModifier@@6B@; const NiPSysSpawnModifier::`vftable'
0x75270D: fst     dword ptr [esi+24h]
0x752710: mov     [esi+18h], ax
0x752714: fst     dword ptr [esi+28h]
0x752717: mov     [esi+20h], ax
0x75271B: fst     dword ptr [esi+2Ch]
0x75271E: mov     [esi+22h], ax
0x752722: fstp    dword ptr [esi+30h]
0x752725: jmp     short loc_752729
0x752727: xor     esi, esi
0x752729: mov     eax, [esp+8+arg_0]
0x75272D: push    eax
0x75272E: push    esi
0x75272F: mov     ecx, edi
0x752731: call    sub_752C40
0x752736: mov     cx, [edi+18h]
0x75273A: mov     [esi+18h], cx
0x75273E: fld     dword ptr [edi+1Ch]
0x752741: fstp    dword ptr [esi+1Ch]
0x752744: mov     dx, [edi+20h]
0x752748: mov     [esi+20h], dx
0x75274C: mov     ax, [edi+22h]
0x752750: mov     [esi+22h], ax
0x752754: fld     dword ptr [edi+24h]
0x752757: fstp    dword ptr [esi+24h]
0x75275A: mov     eax, esi
0x75275C: fld     dword ptr [edi+28h]
0x75275F: fstp    dword ptr [esi+28h]
0x752762: fld     dword ptr [edi+2Ch]
0x752765: fstp    dword ptr [esi+2Ch]
0x752768: fld     dword ptr [edi+30h]
0x75276B: pop     edi
0x75276C: fstp    dword ptr [esi+30h]
0x75276F: pop     esi
0x752770: retn    4
