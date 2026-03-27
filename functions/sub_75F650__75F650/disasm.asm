0x75F650: push    esi
0x75F651: mov     esi, ecx
0x75F653: mov     al, [esi+8]
0x75F656: shr     al, 5
0x75F659: test    al, 1
0x75F65B: jz      short loc_75F668
0x75F65D: fld     dword ptr ds:0A7A164h
0x75F663: fstp    dword ptr [esi+28h]
0x75F666: jmp     short loc_75F68E
0x75F668: fld     [esp+4+arg_0]
0x75F66C: push    ecx
0x75F66D: fstp    [esp+8+var_8]; float
0x75F670: call    sub_6C36B0
0x75F675: test    al, al
0x75F677: jz      short loc_75F68E
0x75F679: mov     ecx, [esi+3Ch]
0x75F67C: test    ecx, ecx
0x75F67E: jz      short loc_75F6C4
0x75F680: mov     edx, [ecx]
0x75F682: mov     eax, [edx+94h]
0x75F688: call    eax
0x75F68A: test    al, al
0x75F68C: jz      short loc_75F6C4
0x75F68E: mov     ecx, [esi+3Ch]
0x75F691: test    ecx, ecx
0x75F693: jz      short loc_75F6C4
0x75F695: mov     edx, [ecx]
0x75F697: fld     dword ptr [esi+28h]
0x75F69A: mov     edx, [edx+5Ch]
0x75F69D: lea     eax, [esp+4+arg_0]
0x75F6A1: push    eax
0x75F6A2: mov     eax, [esi+30h]
0x75F6A5: push    eax
0x75F6A6: push    ecx
0x75F6A7: fstp    [esp+10h+var_10]
0x75F6AA: call    edx
0x75F6AC: test    al, al
0x75F6AE: jz      short loc_75F6C4
0x75F6B0: mov     eax, [esi]
0x75F6B2: fld     [esp+4+arg_0]
0x75F6B6: mov     edx, [eax+0B0h]
0x75F6BC: push    ecx
0x75F6BD: mov     ecx, esi
0x75F6BF: fstp    [esp+8+var_8]
0x75F6C2: call    edx
0x75F6C4: pop     esi
0x75F6C5: retn    4
