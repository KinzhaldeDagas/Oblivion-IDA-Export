0x756160: push    esi
0x756161: push    edi
0x756162: mov     edi, [esp+8+arg_0]
0x756166: push    edi
0x756167: mov     esi, ecx
0x756169: call    sub_75EED0
0x75616E: test    al, al
0x756170: jz      short loc_7561E8
0x756172: mov     eax, [esi+2Ch]
0x756175: test    eax, eax
0x756177: jz      short loc_756183
0x756179: cmp     dword ptr [edi+2Ch], 0
0x75617D: jz      short loc_7561E8
0x75617F: test    eax, eax
0x756181: jnz     short loc_75618D
0x756183: cmp     dword ptr [edi+2Ch], 0
0x756187: jnz     short loc_7561E8
0x756189: test    eax, eax
0x75618B: jz      short loc_7561A3
0x75618D: mov     eax, [edi+2Ch]
0x756190: test    eax, eax
0x756192: jz      short loc_7561A3
0x756194: mov     ecx, [esi+2Ch]
0x756197: mov     edx, [ecx]
0x756199: push    eax
0x75619A: mov     eax, [edx+2Ch]
0x75619D: call    eax
0x75619F: test    al, al
0x7561A1: jz      short loc_7561E8
0x7561A3: fld     dword ptr [esi+30h]
0x7561A6: fld     dword ptr [edi+30h]
0x7561A9: fucompp
0x7561AB: fnstsw  ax
0x7561AD: test    ah, 44h
0x7561B0: jp      short loc_7561E8
0x7561B2: fld     dword ptr [esi+34h]
0x7561B5: fld     dword ptr [edi+34h]
0x7561B8: fucompp
0x7561BA: fnstsw  ax
0x7561BC: test    ah, 44h
0x7561BF: jp      short loc_7561E8
0x7561C1: lea     ecx, [edi+38h]
0x7561C4: push    ecx
0x7561C5: lea     ecx, [esi+38h]
0x7561C8: call    sub_8AA390
0x7561CD: test    al, al
0x7561CF: jnz     short loc_7561E8
0x7561D1: add     edi, 44h ; 'D'
0x7561D4: push    edi
0x7561D5: lea     ecx, [esi+44h]
0x7561D8: call    sub_8AA390
0x7561DD: test    al, al
0x7561DF: jnz     short loc_7561E8
0x7561E1: pop     edi
0x7561E2: mov     al, 1
0x7561E4: pop     esi
0x7561E5: retn    4
0x7561E8: pop     edi
0x7561E9: xor     al, al
0x7561EB: pop     esi
0x7561EC: retn    4
