0x6D6230: push    esi
0x6D6231: mov     esi, ecx
0x6D6233: mov     ecx, [esp+4+arg_0]
0x6D6237: movzx   eax, cx
0x6D623A: sub     eax, 0
0x6D623D: jz      short loc_6D6281
0x6D623F: sub     eax, 1
0x6D6242: jz      short loc_6D6265
0x6D6244: sub     eax, 1
0x6D6247: jnz     short loc_6D6298
0x6D6249: cmp     dword ptr [esi+2Ch], 0
0x6D624D: jz      short loc_6D6260
0x6D624F: mov     eax, [esi]
0x6D6251: mov     edx, [eax+9Ch]
0x6D6257: push    ecx
0x6D6258: mov     ecx, esi
0x6D625A: call    edx
0x6D625C: test    eax, eax
0x6D625E: ja      short loc_6D6298
0x6D6260: fld     dword ptr [esi+28h]
0x6D6263: jmp     short loc_6D62A1
0x6D6265: cmp     dword ptr [esi+2Ch], 0
0x6D6269: jz      short loc_6D627C
0x6D626B: mov     eax, [esi]
0x6D626D: mov     edx, [eax+9Ch]
0x6D6273: push    ecx
0x6D6274: mov     ecx, esi
0x6D6276: call    edx
0x6D6278: test    eax, eax
0x6D627A: ja      short loc_6D6298
0x6D627C: fld     dword ptr [esi+1Ch]
0x6D627F: jmp     short loc_6D62A1
0x6D6281: cmp     dword ptr [esi+2Ch], 0
0x6D6285: jz      short loc_6D629E
0x6D6287: mov     eax, [esi]
0x6D6289: mov     edx, [eax+9Ch]
0x6D628F: push    ecx
0x6D6290: mov     ecx, esi
0x6D6292: call    edx
0x6D6294: test    eax, eax
0x6D6296: jbe     short loc_6D629E
0x6D6298: xor     al, al
0x6D629A: pop     esi
0x6D629B: retn    4
0x6D629E: fld     dword ptr [esi+0Ch]
0x6D62A1: fld     dword ptr ds:0A7DEB4h
0x6D62A7: fchs
0x6D62A9: fucompp
0x6D62AB: fnstsw  ax
0x6D62AD: test    ah, 44h
0x6D62B0: jnp     short loc_6D62BB
0x6D62B2: mov     eax, 1
0x6D62B7: pop     esi
0x6D62B8: retn    4
0x6D62BB: xor     eax, eax
0x6D62BD: pop     esi
0x6D62BE: retn    4
