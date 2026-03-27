0x89A230: push    ebp
0x89A231: mov     ebp, esp
0x89A233: and     esp, 0FFFFFFF0h
0x89A236: sub     esp, 304h
0x89A23C: mov     eax, ds:0B30AACh
0x89A241: push    ebx
0x89A242: xor     ebx, ebx
0x89A244: push    esi
0x89A245: mov     esi, ecx
0x89A247: mov     dword ptr [esi], offset off_A96D6C
0x89A24D: mov     [esi+10h], ebx
0x89A250: mov     [esi+14h], ebx
0x89A253: mov     [esi+18h], ebx
0x89A256: push    edi
0x89A257: mov     [esp+310h+var_4], eax
0x89A25E: mov     eax, 80000000h
0x89A263: mov     edi, 1
0x89A268: mov     [esi+6], di
0x89A26C: mov     [esi+38h], ebx
0x89A26F: mov     [esi+3Ch], ebx
0x89A272: mov     [esi+40h], eax
0x89A275: mov     [esi+44h], ebx
0x89A278: mov     [esi+48h], ebx
0x89A27B: mov     [esi+4Ch], eax
0x89A27E: mov     [esi+50h], ebx
0x89A281: mov     [esi+54h], ebx
0x89A284: mov     [esi+58h], eax
0x89A287: mov     byte ptr [esi+9Ch], 0FDh ; 'ý'
0x89A28E: mov     [esi+9Dh], bl
0x89A294: mov     [esi+0B8h], ebx
0x89A29A: mov     [esi+0BCh], ebx
0x89A2A0: mov     [esi+0C0h], eax
0x89A2A6: mov     [esi+0C4h], ebx
0x89A2AC: mov     [esi+0C8h], ebx
0x89A2B2: mov     [esi+0CCh], eax
0x89A2B8: mov     [esi+0D0h], ebx
0x89A2BE: mov     [esi+0D4h], ebx
0x89A2C4: mov     [esi+0D8h], eax
0x89A2CA: mov     [esi+0DCh], ebx
0x89A2D0: mov     [esi+0E0h], ebx
0x89A2D6: mov     [esi+0E4h], eax
0x89A2DC: mov     [esi+0E8h], ebx
0x89A2E2: mov     [esi+0ECh], ebx
0x89A2E8: mov     [esi+0F0h], eax
0x89A2EE: mov     [esi+0F4h], ebx
0x89A2F4: mov     [esi+0F8h], ebx
0x89A2FA: mov     [esi+0FCh], eax
0x89A300: mov     [esi+100h], ebx
0x89A306: mov     [esi+104h], ebx
0x89A30C: mov     [esi+108h], eax
0x89A312: mov     [esi+10Ch], ebx
0x89A318: mov     [esi+110h], ebx
0x89A31E: mov     [esi+114h], eax
0x89A324: mov     [esi+118h], ebx
0x89A32A: mov     [esi+11Ch], ebx
0x89A330: mov     [esi+120h], eax
0x89A336: mov     [esi+124h], ebx
0x89A33C: mov     [esi+128h], ebx
0x89A342: mov     [esi+12Ch], eax
0x89A348: mov     [esi+130h], ebx
0x89A34E: mov     [esi+134h], ebx
0x89A354: mov     [esi+138h], eax
0x89A35A: mov     [esi+13Ch], ebx
0x89A360: mov     [esi+140h], ebx
0x89A366: mov     [esi+144h], eax
0x89A36C: mov     [esi+148h], ebx
0x89A372: mov     [esi+14Ch], ebx
0x89A378: mov     [esi+150h], eax
0x89A37E: mov     ecx, ds:0BA7D98h
0x89A384: mov     eax, [ecx]
0x89A386: push    2Ch ; ','
0x89A388: push    28h ; '('
0x89A38A: call    dword ptr [eax+10h]
0x89A38D: cmp     eax, ebx
0x89A38F: jz      short loc_89A39B
0x89A391: push    esi
0x89A392: mov     ecx, eax
0x89A394: call    sub_8D87A0
0x89A399: jmp     short loc_89A39D
0x89A39B: xor     eax, eax
0x89A39D: mov     [esi+80h], eax
0x89A3A3: mov     [esi+94h], ebx
0x89A3A9: mov     [esi+84h], ebx
0x89A3AF: mov     [esi+88h], ebx
0x89A3B5: mov     [esi+8Ch], ebx
0x89A3BB: mov     [esi+90h], bl
0x89A3C1: mov     byte ptr [esi+91h], 1
0x89A3C8: mov     [esi+98h], edi
0x89A3CE: mov     edi, dword ptr [ebp+Args]
0x89A3D1: cmp     edi, 7595h
0x89A3D7: mov     [esi+0A0h], ebx
0x89A3DD: jz      loc_89A466
0x89A3E3: push    ecx
0x89A3E4: mov     eax, esp
0x89A3E6: push    200h
0x89A3EB: lea     ecx, [esp+318h+var_208]
0x89A3F2: push    ecx
0x89A3F3: lea     ecx, [esp+31Ch+var_2F0]
0x89A3F7: mov     byte ptr [eax], 1
0x89A3FA: call    sub_8BBFB0
0x89A3FF: push    offset a_; "]. **"
0x89A404: push    edi; Args
0x89A405: push    offset aUsedWithCodeBu; "], used with code built with ["
0x89A40A: push    7595h; Args
0x89A40F: push    offset aHavokLibsBuilt; "** Havok libs built with version ["
0x89A414: lea     ecx, [esp+324h+var_2F0]
0x89A418: call    sub_8BBDB0
0x89A41D: mov     ecx, eax
0x89A41F: call    sub_8BBE00
0x89A424: mov     ecx, eax
0x89A426: call    sub_8BBDB0
0x89A42B: mov     ecx, eax
0x89A42D: call    sub_8BBE70
0x89A432: mov     ecx, eax
0x89A434: call    sub_8BBDB0
0x89A439: mov     ecx, ds:0BA7FB0h
0x89A43F: mov     edx, [ecx]
0x89A441: push    859h
0x89A446: push    offset a_WorldHkworld_; ".\\world\\hkWorld.cpp"
0x89A44B: lea     eax, [esp+318h+var_208]
0x89A452: push    eax
0x89A453: push    53C94B42h
0x89A458: push    3
0x89A45A: call    dword ptr [edx+8]
0x89A45D: lea     ecx, [esp+310h+var_2F0]
0x89A461: call    sub_8BC000
0x89A466: mov     edi, [ebp+arg_0]
0x89A469: mov     [esi+0B4h], ebx
0x89A46F: mov     [esi+8], ebx
0x89A472: movaps  xmm0, xmmword ptr [edi+10h]
0x89A476: movaps  xmmword ptr [esi+20h], xmm0
0x89A47A: mov     cl, [edi+8Ch]
0x89A480: mov     [esi+0A6h], cl
0x89A486: mov     edx, [edi+90h]
0x89A48C: mov     [esi+0B0h], edx
0x89A492: mov     eax, [edi+84h]
0x89A498: mov     [esi+0A8h], eax
0x89A49E: mov     ecx, [edi+88h]
0x89A4A4: mov     [esi+0ACh], ecx
0x89A4AA: mov     dword ptr [esi+170h], 3F800000h
0x89A4B4: mov     edx, [edi+6Ch]
0x89A4B7: mov     [esi+174h], edx
0x89A4BD: mov     eax, [edi+70h]
0x89A4C0: mov     [esi+178h], eax
0x89A4C6: fld     dword ptr [edi+6Ch]
0x89A4C9: fmul    dword ptr ds:0A3D65Ch
0x89A4CF: lea     eax, [esp+310h+var_2FC]
0x89A4D3: fstp    dword ptr [esi+17Ch]
0x89A4D9: mov     ecx, [edi+24h]
0x89A4DC: mov     [esi+1A0h], ecx
0x89A4E2: mov     edx, [edi+74h]
0x89A4E5: mov     [esi+26Ch], edx
0x89A4EB: fild    dword ptr [edi+74h]
0x89A4EE: fdivr   dword ptr ds:0A2F948h
0x89A4F4: fstp    dword ptr [esi+270h]
0x89A4FA: movaps  xmm0, xmmword ptr [edi+10h]
0x89A4FE: mulps   xmm0, xmm0
0x89A501: movaps  xmm1, xmm0
0x89A504: shufps  xmm1, xmm0, 55h ; 'U'
0x89A508: addss   xmm1, xmm0
0x89A50C: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x89A510: addss   xmm0, xmm1
0x89A514: movaps  [esp+310h+var_2F0], xmm0
0x89A519: sqrtss  xmm0, xmm0
0x89A51D: movss   dword ptr [esp+310h+var_2F0], xmm0
0x89A523: movaps  xmm0, [esp+310h+var_2F0]
0x89A528: movss   dword ptr [eax], xmm0
0x89A52C: fld     [esp+310h+var_2FC]
0x89A530: fld     dword ptr ds:0A2FAA8h
0x89A536: fld     [esp+310h+var_2FC]
0x89A53A: fucompp
0x89A53C: fnstsw  ax
0x89A53E: test    ah, 44h
0x89A541: jp      short loc_89A54B
0x89A543: fstp    st
0x89A545: fld     dword ptr ds:0A96D08h
0x89A54B: fld     dword ptr ds:0A2FAACh
0x89A551: xor     eax, eax
0x89A553: fmul    st, st(1)
0x89A555: mov     [esp+310h+var_2FC], eax
0x89A559: jmp     short loc_89A560
0x89A55B: mov     eax, [esp+310h+var_2FC]
0x89A55F: nop
0x89A560: cmp     eax, 4; switch 5 cases
0x89A563: ja      short def_89A565
0x89A565: jmp     ds:jpt_89A565[eax*4]; switch jump
0x89A56C: fld     dword ptr ds:0A96A68h; jumptable 0089A565 cases 0,1
0x89A572: mov     [esp+310h+var_2F4], 0
0x89A57A: fld     dword ptr ds:0A342A4h
0x89A580: jmp     short loc_89A5D8
0x89A582: fld     dword ptr ds:0A34BA0h; jumptable 0089A565 case 2
0x89A588: mov     [esp+310h+var_2F4], 3DA3D70Ah
0x89A590: fld     dword ptr ds:0A2FAACh
0x89A596: jmp     short loc_89A5D8
0x89A598: fld     dword ptr ds:0A96D04h; jumptable 0089A565 case 3
0x89A59E: mov     [esp+310h+var_2F4], 3E4CCCCDh
0x89A5A6: fld     dword ptr ds:0A2FAACh
0x89A5AC: jmp     short loc_89A5D8
0x89A5AE: fld     dword ptr ds:0A57604h; jumptable 0089A565 case 4
0x89A5B4: mov     [esp+310h+var_2F4], 3E99999Ah
0x89A5BC: fld     dword ptr ds:0A2FAACh
0x89A5C2: jmp     short loc_89A5D8
