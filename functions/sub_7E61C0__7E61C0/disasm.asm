0x7E61C0: sub     esp, 34h
0x7E61C3: push    esi
0x7E61C4: push    edi
0x7E61C5: mov     edi, ecx
0x7E61C7: mov     ecx, [esp+3Ch+arg_0]
0x7E61CB: call    sub_7ED2A0
0x7E61D0: lea     ecx, [esp+3Ch+arg_0]
0x7E61D4: push    ecx
0x7E61D5: mov     ecx, eax
0x7E61D7: call    sub_405AD0
0x7E61DC: mov     esi, [eax]
0x7E61DE: mov     eax, [esp+3Ch+arg_0]
0x7E61E2: test    eax, eax
0x7E61E4: jz      short loc_7E6206
0x7E61E6: push    ebx
0x7E61E7: mov     ebx, eax
0x7E61E9: add     eax, 4
0x7E61EC: push    eax; lpAddend
0x7E61ED: call    dword ptr ds:0A2807Ch
0x7E61F3: test    eax, eax
0x7E61F5: jnz     short loc_7E6205
0x7E61F7: test    ebx, ebx
0x7E61F9: jz      short loc_7E6205
0x7E61FB: mov     edx, [ebx]
0x7E61FD: mov     eax, [edx]
0x7E61FF: push    1
0x7E6201: mov     ecx, ebx
0x7E6203: call    eax
0x7E6205: pop     ebx
0x7E6206: mov     ecx, [esi+0ECh]
0x7E620C: mov     edx, [esi+0F0h]
0x7E6212: mov     eax, [esi+0F4h]
0x7E6218: mov     [esp+40h+var_38], ecx
0x7E621C: fld     [esp+40h+var_38]
0x7E6220: fstp    [esp+40h+var_14]
0x7E6224: mov     ecx, [esp+40h+var_14]
0x7E6228: mov     [esp+40h+var_34], edx
0x7E622C: fld     [esp+40h+var_34]
0x7E6230: fstp    [esp+40h+var_10]
0x7E6234: mov     edx, [esp+40h+var_10]
0x7E6238: mov     [esp+40h+var_30], eax
0x7E623C: fld     [esp+40h+var_30]
0x7E6240: fstp    [esp+40h+var_C]
0x7E6244: mov     eax, [esp+40h+var_C]
0x7E6248: fld1
0x7E624A: mov     [edi+164h], ecx
0x7E6250: fstp    [esp+40h+var_8]
0x7E6254: mov     [edi+168h], edx
0x7E625A: mov     ecx, [esp+40h+var_8]
0x7E625E: mov     [edi+16Ch], eax
0x7E6264: mov     [edi+170h], ecx
0x7E626A: mov     edx, [esi+88h]
0x7E6270: mov     eax, [esi+8Ch]
0x7E6276: mov     ecx, [esi+90h]
0x7E627C: mov     [esp+40h+var_38], edx
0x7E6280: fld     [esp+40h+var_38]
0x7E6284: mov     edx, [esp+40h+arg_0]
0x7E6288: fstp    [esp+40h+var_2C]
0x7E628C: mov     [esp+40h+var_34], eax
0x7E6290: fld     [esp+40h+var_34]
0x7E6294: push    edx
0x7E6295: fstp    [esp+44h+var_28]
0x7E6299: mov     [esp+44h+var_30], ecx
0x7E629D: fld     [esp+44h+var_30]
0x7E62A1: lea     eax, [esp+44h+var_2C]
0x7E62A5: fstp    [esp+44h+var_24]
0x7E62A9: push    eax
0x7E62AA: lea     ecx, [esp+48h+var_20]
0x7E62AE: push    ecx
0x7E62AF: call    D3DXVec3TransformCoord_0
0x7E62B4: fld     dword ptr [esi+0F8h]
0x7E62BA: cmp     dword ptr [esp+4Ch], 197h
0x7E62C2: fstp    [esp+4Ch+var_C]
0x7E62C6: pop     edi
0x7E62C7: pop     esi
0x7E62C8: jz      short loc_7E62D6
0x7E62CA: fld     [esp+44h+var_C]
0x7E62CE: fdiv    [esp+44h+var_4]
0x7E62D2: fstp    [esp+44h+var_C]
0x7E62D6: fld     [esp+44h+var_2C]
0x7E62DA: fstp    dword ptr ds:0B460A0h
0x7E62E0: fld     [esp+44h+var_28]
0x7E62E4: fstp    dword ptr ds:0B460A4h
0x7E62EA: fld     [esp+44h+var_24]
0x7E62EE: fstp    dword ptr ds:0B460A8h
0x7E62F4: fld     [esp+44h+var_C]
0x7E62F8: fstp    dword ptr ds:0B460ACh
0x7E62FE: add     esp, 34h
0x7E6301: retn    10h
