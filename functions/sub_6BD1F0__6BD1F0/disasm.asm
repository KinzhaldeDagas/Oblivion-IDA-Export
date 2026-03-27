0x6BD1F0: mov     edx, [esp+arg_10]
0x6BD1F4: test    edx, edx
0x6BD1F6: jz      loc_6BD29C
0x6BD1FC: fld     [esp+arg_4]
0x6BD200: mov     ecx, [esp+arg_8]
0x6BD204: fld     dword ptr [ecx]
0x6BD206: fcomp   st(1)
0x6BD208: fnstsw  ax
0x6BD20A: test    ah, 41h
0x6BD20D: jnz     short loc_6BD22D
0x6BD20F: mov     edx, [ecx+4]
0x6BD212: fstp    st
0x6BD214: mov     eax, [esp+arg_0]
0x6BD218: mov     [eax], edx
0x6BD21A: mov     edx, [ecx+8]
0x6BD21D: mov     [eax+4], edx
0x6BD220: mov     edx, [ecx+0Ch]
0x6BD223: mov     [eax+8], edx
0x6BD226: mov     ecx, [ecx+10h]
0x6BD229: mov     [eax+0Ch], ecx
0x6BD22C: retn
0x6BD22D: push    ebx
0x6BD22E: mov     ebx, dword ptr [esp+4+arg_14]
0x6BD232: push    esi
0x6BD233: movzx   esi, bl
0x6BD236: lea     eax, [edx-1]
0x6BD239: imul    eax, esi
0x6BD23C: fld     dword ptr [eax+ecx]
0x6BD23F: fcomp   st(1)
0x6BD241: fnstsw  ax
0x6BD243: test    ah, 5
0x6BD246: jp      short loc_6BD271
0x6BD248: mov     eax, [esp+8+arg_0]
0x6BD24C: fstp    st
0x6BD24E: add     edx, 0FFFFFFFFh
0x6BD251: imul    edx, esi
0x6BD254: lea     ecx, [edx+ecx+4]
0x6BD258: mov     edx, [ecx]
0x6BD25A: mov     [eax], edx
0x6BD25C: mov     edx, [ecx+4]
0x6BD25F: mov     [eax+4], edx
0x6BD262: mov     edx, [ecx+8]
0x6BD265: mov     [eax+8], edx
0x6BD268: mov     ecx, [ecx+0Ch]
0x6BD26B: pop     esi
0x6BD26C: mov     [eax+0Ch], ecx
0x6BD26F: pop     ebx
0x6BD270: retn
0x6BD271: mov     esi, [esp+8+arg_0]
0x6BD275: push    ebx; char
0x6BD276: lea     eax, [esp+0Ch+arg_10]
0x6BD27A: push    eax; int
0x6BD27B: push    edx; int
0x6BD27C: mov     edx, [esp+14h+arg_C]
0x6BD280: push    edx; int
0x6BD281: push    ecx; int
0x6BD282: push    ecx
0x6BD283: fstp    [esp+20h+var_20]; float
0x6BD286: push    esi; int
0x6BD287: mov     [esp+24h+arg_10], 0
0x6BD28F: call    sub_6BCF70
0x6BD294: add     esp, 1Ch
0x6BD297: mov     eax, esi
0x6BD299: pop     esi
0x6BD29A: pop     ebx
0x6BD29B: retn
0x6BD29C: mov     ecx, ds:0B3C3A4h
0x6BD2A2: mov     eax, [esp+arg_0]
0x6BD2A6: mov     [eax], ecx
0x6BD2A8: mov     edx, ds:0B3C3A8h
0x6BD2AE: mov     [eax+4], edx
0x6BD2B1: mov     ecx, ds:0B3C3ACh
0x6BD2B7: mov     [eax+8], ecx
0x6BD2BA: mov     edx, ds:0B3C3B0h
0x6BD2C0: mov     [eax+0Ch], edx
0x6BD2C3: retn
