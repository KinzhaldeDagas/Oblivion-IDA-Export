0x8AC0F0: push    esi
0x8AC0F1: mov     esi, ecx
0x8AC0F3: mov     eax, [esi+30h]
0x8AC0F6: mov     ecx, [eax+1Ch]
0x8AC0F9: movaps  xmm0, xmmword ptr [ecx+30h]
0x8AC0FD: push    edi
0x8AC0FE: mov     edi, [esp+8+arg_0]
0x8AC102: movaps  xmmword ptr [edi], xmm0
0x8AC105: movaps  xmm0, xmmword ptr [esi+10h]
0x8AC109: movaps  xmmword ptr [edi+10h], xmm0
0x8AC10D: mov     edx, [esi+30h]
0x8AC110: mov     [edi+48h], edx
0x8AC113: mov     eax, [esi+34h]
0x8AC116: mov     [edi+20h], eax
0x8AC119: mov     ecx, [esi+38h]
0x8AC11C: mov     [edi+24h], ecx
0x8AC11F: mov     edx, [esi+5Ch]
0x8AC122: mov     [edi+28h], edx
0x8AC125: movaps  xmm0, xmmword ptr [esi+40h]
0x8AC129: movaps  xmmword ptr [edi+30h], xmm0
0x8AC12D: mov     eax, [esi+50h]
0x8AC130: mov     [edi+40h], eax
0x8AC133: mov     ecx, [esi+54h]
0x8AC136: mov     [edi+44h], ecx
0x8AC139: mov     edx, [esi+58h]
0x8AC13C: mov     [edi+4Ch], edx
0x8AC13F: mov     eax, [esi+60h]
0x8AC142: mov     [edi+50h], eax
0x8AC145: mov     ecx, [esi+64h]
0x8AC148: mov     [edi+54h], ecx
0x8AC14B: mov     edx, [esi+68h]
0x8AC14E: mov     [edi+58h], edx
0x8AC151: mov     eax, [esi+6Ch]
0x8AC154: mov     [edi+5Ch], eax
0x8AC157: mov     ecx, [esi+70h]
0x8AC15A: mov     [edi+60h], ecx
0x8AC15D: mov     edx, [esi+0A4h]
0x8AC163: mov     [esp+8+arg_0], edx
0x8AC167: fld     [esp+8+arg_0]
0x8AC16B: fabs
0x8AC16D: fcomp   dword ptr ds:0A2F948h
0x8AC173: fnstsw  ax
0x8AC175: test    ah, 1
0x8AC178: jnz     short loc_8AC1B9
0x8AC17A: fld     [esp+8+arg_0]
0x8AC17E: fcomp   dword ptr ds:0A2FAA8h
0x8AC184: fnstsw  ax
0x8AC186: test    ah, 41h
0x8AC189: jnz     short loc_8AC1A2
0x8AC18B: fld     dword ptr ds:0A2FAA8h
0x8AC191: fstp    dword ptr [edi+64h]
0x8AC194: mov     eax, [esi+0A8h]
0x8AC19A: mov     [edi+68h], eax
0x8AC19D: pop     edi
0x8AC19E: pop     esi
0x8AC19F: retn    4
0x8AC1A2: fld     dword ptr ds:0A97BD4h
0x8AC1A8: fstp    dword ptr [edi+64h]
0x8AC1AB: mov     eax, [esi+0A8h]
0x8AC1B1: mov     [edi+68h], eax
0x8AC1B4: pop     edi
0x8AC1B5: pop     esi
0x8AC1B6: retn    4
0x8AC1B9: fld     [esp+8+arg_0]
0x8AC1BD: call    __CIacos
0x8AC1C2: fstp    dword ptr [edi+64h]
0x8AC1C5: mov     eax, [esi+0A8h]
0x8AC1CB: mov     [edi+68h], eax
0x8AC1CE: pop     edi
0x8AC1CF: pop     esi
0x8AC1D0: retn    4
