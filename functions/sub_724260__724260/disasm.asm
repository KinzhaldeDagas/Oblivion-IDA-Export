0x724260: fld     [esp+arg_0]
0x724264: push    esi
0x724265: mov     esi, ecx
0x724267: test    byte ptr [esi+0DCh], 1
0x72426E: fst     dword ptr [esi+0E4h]
0x724274: jz      loc_724304
0x72427A: movzx   eax, byte ptr [esi+18h]
0x72427E: add     dword ptr [esi+0E8h], 1
0x724285: shr     al, 3
0x724288: push    ebx
0x724289: lea     ebx, [esi+0E8h]
0x72428F: and     eax, 0FFFFFF01h
0x724294: push    eax; char
0x724295: push    ecx
0x724296: fstp    [esp+10h+var_10]; float
0x724299: call    sub_47C930
0x72429E: mov     edx, [esi]
0x7242A0: mov     eax, [edx+74h]
0x7242A3: mov     ecx, esi
0x7242A5: call    eax
0x7242A7: mov     eax, [esi+0E0h]
0x7242AD: test    eax, eax
0x7242AF: jl      short loc_7242FF
0x7242B1: mov     ecx, [esi+0B0h]
0x7242B7: push    edi
0x7242B8: mov     edi, [ecx+eax*4]
0x7242BB: test    edi, edi
0x7242BD: jz      short loc_7242FE
0x7242BF: fld     [esp+0Ch+arg_0]
0x7242C3: push    ecx
0x7242C4: mov     ecx, edi
0x7242C6: fstp    [esp+10h+var_10]; float
0x7242C9: call    sub_709E30
0x7242CE: mov     edx, [esi+0E0h]
0x7242D4: push    ebx
0x7242D5: push    edx
0x7242D6: lea     ecx, [esi+0ECh]
0x7242DC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7242E1: mov     edx, [edi+20h]
0x7242E4: lea     eax, [edi+20h]
0x7242E7: lea     ecx, [esi+20h]
0x7242EA: mov     [ecx], edx
0x7242EC: mov     edx, [eax+4]
0x7242EF: mov     [ecx+4], edx
0x7242F2: mov     edx, [eax+8]
0x7242F5: mov     [ecx+8], edx
0x7242F8: mov     eax, [eax+0Ch]
0x7242FB: mov     [ecx+0Ch], eax
0x7242FE: pop     edi
0x7242FF: pop     ebx
0x724300: pop     esi
0x724301: retn    4
0x724304: push    ecx
0x724305: fstp    [esp+8+var_8]; float
0x724308: call    sub_70A190
0x72430D: pop     esi
0x72430E: retn    4
