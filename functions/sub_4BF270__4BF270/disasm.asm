0x4BF270: mov     dl, [esp+arg_0]
0x4BF274: cmp     dl, 4
0x4BF277: jnb     short locret_4BF2E6
0x4BF279: push    edi
0x4BF27A: mov     di, [esp+4+arg_4]
0x4BF27F: cmp     di, 121h
0x4BF284: jnb     short loc_4BF2E5
0x4BF286: push    esi
0x4BF287: mov     si, [esp+8+arg_8]
0x4BF28C: cmp     si, 8
0x4BF290: jnb     short loc_4BF2E4
0x4BF292: mov     ecx, [ecx+24h]
0x4BF295: test    ecx, ecx
0x4BF297: jz      short loc_4BF2E4
0x4BF299: fldz
0x4BF29B: fld     [esp+8+arg_C]
0x4BF29F: fcom    st(1)
0x4BF2A1: fnstsw  ax
0x4BF2A3: test    ah, 41h
0x4BF2A6: movzx   eax, dl
0x4BF2A9: jnz     short loc_4BF2C2
0x4BF2AB: mov     eax, [ecx+eax*4+40h]
0x4BF2AF: fstp    st(1)
0x4BF2B1: movzx   edx, di
0x4BF2B4: mov     edx, [eax+edx*4]
0x4BF2B7: movzx   ecx, si
0x4BF2BA: pop     esi
0x4BF2BB: pop     edi
0x4BF2BC: fstp    dword ptr [edx+ecx*4]
0x4BF2BF: retn    10h
0x4BF2C2: cmp     dword ptr [ecx+eax*4+40h], 0
0x4BF2C7: fstp    st
0x4BF2C9: lea     eax, [ecx+eax*4+40h]
0x4BF2CD: jz      short loc_4BF2E2
0x4BF2CF: mov     edx, [eax]
0x4BF2D1: movzx   ecx, di
0x4BF2D4: mov     ecx, [edx+ecx*4]
0x4BF2D7: movzx   eax, si
0x4BF2DA: pop     esi
0x4BF2DB: pop     edi
0x4BF2DC: fstp    dword ptr [ecx+eax*4]
0x4BF2DF: retn    10h
0x4BF2E2: fstp    st
0x4BF2E4: pop     esi
0x4BF2E5: pop     edi
0x4BF2E6: retn    10h
