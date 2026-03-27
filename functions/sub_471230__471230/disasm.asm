0x471230: push    esi
0x471231: mov     esi, ecx
0x471233: mov     eax, [esi+8]
0x471236: test    eax, eax
0x471238: jz      short loc_47124E
0x47123A: mov     ecx, [esi+18h]
0x47123D: add     eax, 54h ; 'T'
0x471240: mov     [eax], ecx
0x471242: mov     edx, [esi+1Ch]
0x471245: mov     [eax+4], edx
0x471248: mov     ecx, [esi+20h]
0x47124B: mov     [eax+8], ecx
0x47124E: mov     edx, [esi+8]
0x471251: fld     [esp+4+arg_0]
0x471255: push    edx; int
0x471256: push    ecx
0x471257: mov     ecx, [esi+4]
0x47125A: fstp    [esp+0Ch+var_C]; float
0x47125D: call    sub_47C990
0x471262: mov     eax, [esi+8]
0x471265: test    eax, eax
0x471267: jz      short loc_4712A1
0x471269: mov     ecx, [esp+4+arg_4]
0x47126D: test    ecx, ecx
0x47126F: jz      short loc_471282
0x471271: mov     edx, [eax+54h]
0x471274: mov     [ecx], edx
0x471276: mov     edx, [eax+58h]
0x471279: mov     [ecx+4], edx
0x47127C: mov     eax, [eax+5Ch]
0x47127F: mov     [ecx+8], eax
0x471282: mov     esi, [esi+8]
0x471285: mov     ecx, ds:0B3F9A8h
0x47128B: add     esi, 54h ; 'T'
0x47128E: mov     [esi], ecx
0x471290: mov     edx, ds:0B3F9ACh
0x471296: mov     [esi+4], edx
0x471299: mov     eax, ds:0B3F9B0h
0x47129E: mov     [esi+8], eax
0x4712A1: pop     esi
0x4712A2: retn    0Ch
