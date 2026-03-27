0x79B510: push    ebx
0x79B511: mov     ebx, [esp+4+arg_0]
0x79B515: push    esi
0x79B516: mov     esi, [esp+8+arg_4]
0x79B51A: cmp     ebx, esi
0x79B51C: jz      short loc_79B557
0x79B51E: push    edi
0x79B51F: mov     edi, [esp+0Ch+arg_8]
0x79B523: push    0FFFFFFFFh
0x79B525: push    0
0x79B527: sub     esi, 2Ch ; ','
0x79B52A: sub     edi, 2Ch ; ','
0x79B52D: push    esi
0x79B52E: mov     ecx, edi
0x79B530: call    sub_414420
0x79B535: fld     dword ptr [esi+1Ch]
0x79B538: cmp     esi, ebx
0x79B53A: fstp    dword ptr [edi+1Ch]
0x79B53D: fld     dword ptr [esi+20h]
0x79B540: fstp    dword ptr [edi+20h]
0x79B543: fld     dword ptr [esi+24h]
0x79B546: fstp    dword ptr [edi+24h]
0x79B549: fld     dword ptr [esi+28h]
0x79B54C: fstp    dword ptr [edi+28h]
0x79B54F: jnz     short loc_79B523
0x79B551: mov     eax, edi
0x79B553: pop     edi
0x79B554: pop     esi
0x79B555: pop     ebx
0x79B556: retn
0x79B557: mov     eax, [esp+8+arg_8]
0x79B55B: pop     esi
0x79B55C: pop     ebx
0x79B55D: retn
