0x6D9800: sub     esp, 14h
0x6D9803: push    esi
0x6D9804: mov     esi, ecx
0x6D9806: fld     dword ptr [esi+8]
0x6D9809: fld     [esp+18h+arg_0]
0x6D980D: fld     st
0x6D980F: fucomp  st(2)
0x6D9811: fnstsw  ax
0x6D9813: fstp    st(1)
0x6D9815: test    ah, 44h
0x6D9818: jp      short loc_6D9850
0x6D981A: mov     edx, [esi+0Ch]
0x6D981D: fstp    st
0x6D981F: mov     eax, [esp+18h+arg_8]
0x6D9823: lea     ecx, [esi+0Ch]
0x6D9826: mov     [eax], edx
0x6D9828: mov     edx, [ecx+4]
0x6D982B: mov     [eax+4], edx
0x6D982E: mov     edx, [ecx+8]
0x6D9831: mov     [eax+8], edx
0x6D9834: mov     edx, [ecx+0Ch]
0x6D9837: push    offset dword_B3EBA0
0x6D983C: mov     [eax+0Ch], edx
0x6D983F: call    sub_73B770
0x6D9844: test    al, al
0x6D9846: setz    al
0x6D9849: pop     esi
0x6D984A: add     esp, 14h
0x6D984D: retn    0Ch
0x6D9850: mov     eax, [esi+1Ch]
0x6D9853: test    eax, eax
0x6D9855: push    edi
0x6D9856: jz      short loc_6D98A2
0x6D9858: mov     ecx, [eax+8]
0x6D985B: test    ecx, ecx
0x6D985D: mov     dl, [eax+14h]
0x6D9860: mov     edi, [eax+10h]
0x6D9863: mov     eax, [eax+0Ch]
0x6D9866: mov     [esp+1Ch+var_14], dl
0x6D986A: jbe     short loc_6D98A2
0x6D986C: mov     edx, dword ptr [esp+1Ch+var_14]
0x6D9870: push    edx; char
0x6D9871: lea     edx, [esi+20h]
0x6D9874: push    edx; int
0x6D9875: push    ecx; int
0x6D9876: push    edi; int
0x6D9877: push    eax; int
0x6D9878: push    ecx
0x6D9879: lea     eax, [esp+34h+var_10]
0x6D987D: fstp    [esp+34h+var_34]; float
0x6D9880: push    eax; int
0x6D9881: call    sub_6BCF70
0x6D9886: mov     ecx, [eax]
0x6D9888: mov     [esi+0Ch], ecx
0x6D988B: mov     edx, [eax+4]
0x6D988E: mov     [esi+10h], edx
0x6D9891: mov     ecx, [eax+8]
0x6D9894: mov     [esi+14h], ecx
0x6D9897: mov     edx, [eax+0Ch]
0x6D989A: add     esp, 1Ch
0x6D989D: mov     [esi+18h], edx
0x6D98A0: jmp     short loc_6D98A4
0x6D98A2: fstp    st
0x6D98A4: lea     edi, [esi+0Ch]
0x6D98A7: push    offset dword_B3EBA0
0x6D98AC: mov     ecx, edi
0x6D98AE: call    sub_73B770
0x6D98B3: test    al, al
0x6D98B5: jz      short loc_6D98C1
0x6D98B7: pop     edi
0x6D98B8: xor     al, al
0x6D98BA: pop     esi
0x6D98BB: add     esp, 14h
0x6D98BE: retn    0Ch
0x6D98C1: mov     ecx, [edi]
0x6D98C3: fld     [esp+1Ch+arg_0]
0x6D98C7: mov     eax, [esp+1Ch+arg_8]
0x6D98CB: mov     [eax], ecx
0x6D98CD: mov     edx, [edi+4]
0x6D98D0: mov     [eax+4], edx
0x6D98D3: mov     ecx, [edi+8]
0x6D98D6: mov     [eax+8], ecx
0x6D98D9: mov     edx, [edi+0Ch]
0x6D98DC: mov     [eax+0Ch], edx
0x6D98DF: fstp    dword ptr [esi+8]
0x6D98E2: pop     edi
0x6D98E3: mov     al, 1
0x6D98E5: pop     esi
0x6D98E6: add     esp, 14h
0x6D98E9: retn    0Ch
