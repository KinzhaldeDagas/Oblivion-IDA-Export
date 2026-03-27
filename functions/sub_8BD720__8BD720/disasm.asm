0x8BD720: push    esi
0x8BD721: push    edi
0x8BD722: mov     edi, [esp+8+arg_0]
0x8BD726: push    edi
0x8BD727: mov     esi, ecx
0x8BD729: call    sub_89FD10
0x8BD72E: test    esi, esi
0x8BD730: jz      short loc_8BD76F
0x8BD732: mov     esi, [esi+8]
0x8BD735: test    esi, esi
0x8BD737: jz      short loc_8BD76F
0x8BD739: fld     dword ptr [esi+50h]
0x8BD73C: lea     eax, [esi+30h]
0x8BD73F: fstp    dword ptr [edi+30h]
0x8BD742: push    eax
0x8BD743: fld     dword ptr [esi+54h]
0x8BD746: lea     ecx, [edi+10h]
0x8BD749: fstp    dword ptr [edi+34h]
0x8BD74C: fld     dword ptr [esi+58h]
0x8BD74F: fstp    dword ptr [edi+38h]
0x8BD752: call    sub_47DCD0
0x8BD757: lea     ecx, [esi+40h]
0x8BD75A: push    ecx
0x8BD75B: lea     ecx, [edi+20h]
0x8BD75E: call    sub_47DCD0
0x8BD763: mov     al, [esi+5Ch]
0x8BD766: mov     [edi+3Ch], al
0x8BD769: mov     al, [esi+5Dh]
0x8BD76C: mov     [edi+3Dh], al
0x8BD76F: pop     edi
0x8BD770: pop     esi
0x8BD771: retn    4
