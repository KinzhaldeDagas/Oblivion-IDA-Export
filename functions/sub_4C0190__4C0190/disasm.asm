0x4C0190: sub     esp, 8
0x4C0193: push    ebx
0x4C0194: mov     bl, byte ptr [esp+0Ch+arg_0]
0x4C0198: xor     eax, eax
0x4C019A: cmp     bl, 4
0x4C019D: push    edi
0x4C019E: mov     edi, ecx
0x4C01A0: jnb     loc_4C0284
0x4C01A6: cmp     [esp+10h+arg_4], 121h
0x4C01AD: jnb     loc_4C0284
0x4C01B3: fld     dword ptr ds:0A3B888h
0x4C01B9: push    ebp
0x4C01BA: fstp    [esp+14h+arg_0]
0x4C01BE: xor     ebp, ebp
0x4C01C0: fldz
0x4C01C2: xor     edx, edx
0x4C01C4: fst     [esp+14h+var_8]
0x4C01C8: push    esi
0x4C01C9: movzx   esi, dx
0x4C01CC: fst     [esp+18h+var_4]
0x4C01D0: cmp     si, 8
0x4C01D4: jnb     short loc_4C01FF
0x4C01D6: mov     eax, [edi+24h]
0x4C01D9: test    eax, eax
0x4C01DB: jz      short loc_4C01FF
0x4C01DD: movzx   ecx, bl
0x4C01E0: cmp     dword ptr [eax+ecx*4+40h], 0
0x4C01E5: lea     eax, [eax+ecx*4+40h]
0x4C01E9: jz      short loc_4C01FF
0x4C01EB: movzx   ecx, [esp+18h+arg_4]
0x4C01F0: mov     eax, [eax]
0x4C01F2: mov     ecx, [eax+ecx*4]
0x4C01F5: movzx   esi, si
0x4C01F8: fld     dword ptr [ecx+esi*4]
0x4C01FB: fstp    [esp+18h+var_4]
0x4C01FF: fld     [esp+18h+var_4]
0x4C0203: fld     [esp+18h+arg_0]
0x4C0207: fcomp   st(1)
0x4C0209: fnstsw  ax
0x4C020B: test    ah, 5
0x4C020E: jp      short loc_4C0216
0x4C0210: fst     [esp+18h+arg_0]
0x4C0214: mov     ebp, edx
0x4C0216: fadd    [esp+18h+var_8]
0x4C021A: add     edx, 1
0x4C021D: cmp     edx, 8
0x4C0220: fstp    [esp+18h+var_8]
0x4C0224: jb      short loc_4C01C9
0x4C0226: fstp    st
0x4C0228: pop     esi
0x4C0229: fld     [esp+14h+arg_0]
0x4C022D: fld     [esp+14h+var_8]
0x4C0231: fld1
0x4C0233: fsubrp  st(1), st
0x4C0235: fstp    [esp+14h+arg_0]
0x4C0239: fld     [esp+14h+arg_0]
0x4C023D: fcompp
0x4C023F: fnstsw  ax
0x4C0241: test    ah, 5
0x4C0244: jp      short loc_4C0273
0x4C0246: xor     eax, eax
0x4C0248: cmp     bp, 8
0x4C024C: jnb     short loc_4C0283
0x4C024E: mov     ecx, [edi+24h]
0x4C0251: test    ecx, ecx
0x4C0253: jz      short loc_4C0283
0x4C0255: movzx   edx, bl
0x4C0258: cmp     [ecx+edx*4+30h], eax
0x4C025C: lea     ecx, [ecx+edx*4+30h]
0x4C0260: jz      short loc_4C0283
0x4C0262: mov     ecx, [ecx]
0x4C0264: movzx   eax, bp
0x4C0267: mov     eax, [ecx+eax*4]
0x4C026A: pop     ebp
0x4C026B: pop     edi
0x4C026C: pop     ebx
0x4C026D: add     esp, 8
0x4C0270: retn    8
0x4C0273: mov     ecx, [edi+24h]
0x4C0276: xor     eax, eax
0x4C0278: test    ecx, ecx
0x4C027A: jz      short loc_4C0283
0x4C027C: movzx   edx, bl
0x4C027F: mov     eax, [ecx+edx*4+20h]
0x4C0283: pop     ebp
0x4C0284: pop     edi
0x4C0285: pop     ebx
0x4C0286: add     esp, 8
0x4C0289: retn    8
