0x471390: push    esi
0x471391: mov     esi, [esp+4+arg_0]
0x471395: fld     dword ptr [esi]
0x471397: push    edi
0x471398: sub     esp, 8
0x47139B: fstp    [esp+10h+X]; X
0x47139E: mov     edi, ecx
0x4713A0: call    __isnan
0x4713A5: add     esp, 8
0x4713A8: test    eax, eax
0x4713AA: jnz     short loc_471424
0x4713AC: fld     dword ptr [esi]
0x4713AE: sub     esp, 8
0x4713B1: fstp    [esp+10h+X]; X
0x4713B4: call    __finite
0x4713B9: add     esp, 8
0x4713BC: test    eax, eax
0x4713BE: jz      short loc_471424
0x4713C0: fld     dword ptr [esi+4]
0x4713C3: sub     esp, 8
0x4713C6: fstp    [esp+10h+X]; X
0x4713C9: call    __isnan
0x4713CE: add     esp, 8
0x4713D1: test    eax, eax
0x4713D3: jnz     short loc_471424
0x4713D5: fld     dword ptr [esi+4]
0x4713D8: sub     esp, 8
0x4713DB: fstp    [esp+10h+X]; X
0x4713DE: call    __finite
0x4713E3: add     esp, 8
0x4713E6: test    eax, eax
0x4713E8: jz      short loc_471424
0x4713EA: fld     dword ptr [esi+8]
0x4713ED: sub     esp, 8
0x4713F0: fstp    [esp+10h+X]; X
0x4713F3: call    __isnan
0x4713F8: add     esp, 8
0x4713FB: test    eax, eax
0x4713FD: jnz     short loc_471424
0x4713FF: fld     dword ptr [esi+8]
0x471402: sub     esp, 8
0x471405: fstp    [esp+10h+X]; X
0x471408: call    __finite
0x47140D: add     esp, 8
0x471410: test    eax, eax
0x471412: jz      short loc_471424
0x471414: mov     eax, [esi]
0x471416: mov     [edi], eax
0x471418: mov     ecx, [esi+4]
0x47141B: mov     [edi+4], ecx
0x47141E: mov     edx, [esi+8]
0x471421: mov     [edi+8], edx
0x471424: pop     edi
0x471425: pop     esi
0x471426: retn    4
