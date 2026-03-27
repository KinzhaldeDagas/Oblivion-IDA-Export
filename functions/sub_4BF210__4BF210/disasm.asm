0x4BF210: push    ecx
0x4BF211: fldz
0x4BF213: mov     dl, [esp+4+arg_0]
0x4BF217: cmp     dl, 4
0x4BF21A: fstp    [esp+4+var_4]
0x4BF21D: jnb     short loc_4BF261
0x4BF21F: push    edi
0x4BF220: mov     di, [esp+8+arg_4]
0x4BF225: cmp     di, 121h
0x4BF22A: jnb     short loc_4BF260
0x4BF22C: push    esi
0x4BF22D: mov     si, [esp+0Ch+arg_8]
0x4BF232: cmp     si, 8
0x4BF236: jnb     short loc_4BF25F
0x4BF238: mov     eax, [ecx+24h]
0x4BF23B: test    eax, eax
0x4BF23D: jz      short loc_4BF25F
0x4BF23F: movzx   ecx, dl
0x4BF242: cmp     dword ptr [eax+ecx*4+40h], 0
0x4BF247: lea     eax, [eax+ecx*4+40h]
0x4BF24B: jz      short loc_4BF25F
0x4BF24D: mov     eax, [eax]
0x4BF24F: movzx   edx, di
0x4BF252: mov     edx, [eax+edx*4]
0x4BF255: movzx   ecx, si
0x4BF258: fld     dword ptr [edx+ecx*4]
0x4BF25B: fstp    [esp+0Ch+var_4]
0x4BF25F: pop     esi
0x4BF260: pop     edi
0x4BF261: fld     [esp+4+var_4]
0x4BF264: pop     ecx
0x4BF265: retn    0Ch
