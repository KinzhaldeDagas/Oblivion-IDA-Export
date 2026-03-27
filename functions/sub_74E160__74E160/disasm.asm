0x74E160: mov     eax, [esp+arg_4]
0x74E164: push    esi
0x74E165: push    edi
0x74E166: mov     edi, [esp+8+arg_0]
0x74E16A: push    eax
0x74E16B: push    edi
0x74E16C: mov     esi, ecx
0x74E16E: call    sub_752C40
0x74E173: fld     dword ptr [esi+18h]
0x74E176: fstp    dword ptr [edi+18h]
0x74E179: lea     eax, [esi+28h]
0x74E17C: fld     dword ptr [esi+1Ch]
0x74E17F: fstp    dword ptr [edi+1Ch]
0x74E182: mov     cl, [esi+35h]
0x74E185: mov     [edi+35h], cl
0x74E188: fld     dword ptr [esi+20h]
0x74E18B: fstp    dword ptr [edi+20h]
0x74E18E: lea     ecx, [edi+28h]
0x74E191: fld     dword ptr [esi+24h]
0x74E194: fstp    dword ptr [edi+24h]
0x74E197: mov     dl, [esi+34h]
0x74E19A: mov     [edi+34h], dl
0x74E19D: mov     edx, [eax]
0x74E19F: mov     [ecx], edx
0x74E1A1: mov     edx, [eax+4]
0x74E1A4: mov     [ecx+4], edx
0x74E1A7: mov     eax, [eax+8]
0x74E1AA: pop     edi
0x74E1AB: mov     [ecx+8], eax
0x74E1AE: pop     esi
0x74E1AF: retn    8
