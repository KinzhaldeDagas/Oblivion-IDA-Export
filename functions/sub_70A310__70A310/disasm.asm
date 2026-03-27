0x70A310: fld     [esp+arg_0]
0x70A314: push    esi
0x70A315: push    edi
0x70A316: push    1; char
0x70A318: push    ecx
0x70A319: fstp    [esp+10h+var_10]; float
0x70A31C: mov     esi, ecx
0x70A31E: call    sub_47C930
0x70A323: xor     edi, edi
0x70A325: cmp     [esi+0B6h], di
0x70A32C: jbe     short loc_70A35A
0x70A32E: mov     edi, edi
0x70A330: mov     eax, [esi+0B0h]
0x70A336: mov     ecx, [eax+edi*4]
0x70A339: test    ecx, ecx
0x70A33B: jz      short loc_70A34C
0x70A33D: mov     edx, [ecx]
0x70A33F: fld     [esp+8+arg_0]
0x70A343: mov     eax, [edx+4Ch]
0x70A346: push    ecx
0x70A347: fstp    [esp+0Ch+var_C]
0x70A34A: call    eax
0x70A34C: movzx   ecx, word ptr [esi+0B6h]
0x70A353: add     edi, 1
0x70A356: cmp     edi, ecx
0x70A358: jb      short loc_70A330
0x70A35A: pop     edi
0x70A35B: pop     esi
0x70A35C: retn    4
