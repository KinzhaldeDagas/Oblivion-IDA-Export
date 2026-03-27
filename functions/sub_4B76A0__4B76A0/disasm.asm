0x4B76A0: mov     eax, [esp+arg_0]
0x4B76A4: push    esi
0x4B76A5: push    eax
0x4B76A6: call    sub_4DC270
0x4B76AB: mov     esi, eax
0x4B76AD: add     esp, 4
0x4B76B0: test    esi, esi
0x4B76B2: jz      short loc_4B7712
0x4B76B4: mov     edx, [esi]
0x4B76B6: mov     eax, [edx+170h]
0x4B76BC: mov     ecx, esi
0x4B76BE: call    eax
0x4B76C0: cmp     byte ptr [eax+4], 18h
0x4B76C4: jnz     short loc_4B7712
0x4B76C6: mov     ecx, [esi+8]
0x4B76C9: shr     ecx, 0Dh
0x4B76CC: test    cl, 1
0x4B76CF: jnz     short loc_4B7712
0x4B76D1: mov     edx, ds:0B333C4h
0x4B76D7: mov     eax, [edx+58h]
0x4B76DA: push    0; int
0x4B76DC: push    offset ??_R0?AVHighProcess@@@8; struct TypeDescriptor *
0x4B76E1: push    offset ??_R0?AVBaseProcess@@@8; struct _s_RTTICompleteObjectLocator *
0x4B76E6: push    0; int
0x4B76E8: push    eax; void *
0x4B76E9: call    OblivionDynamicCast
0x4B76EE: add     esp, 14h
0x4B76F1: test    eax, eax
0x4B76F3: jz      short loc_4B7712
0x4B76F5: mov     edx, [eax]
0x4B76F7: mov     ecx, eax
0x4B76F9: mov     eax, [edx+47Ch]
0x4B76FF: call    eax
0x4B7701: cmp     eax, 4
0x4B7704: jz      short loc_4B7712
0x4B7706: mov     ecx, ds:0B333C4h
0x4B770C: mov     [ecx+5C4h], esi
0x4B7712: pop     esi
0x4B7713: retn
