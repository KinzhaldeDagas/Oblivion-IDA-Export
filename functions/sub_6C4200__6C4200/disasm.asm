0x6C4200: push    esi
0x6C4201: mov     esi, ecx
0x6C4203: mov     al, [esi+8]
0x6C4206: shr     al, 3
0x6C4209: test    al, 1
0x6C420B: jz      short loc_6C4250
0x6C420D: push    edi
0x6C420E: xor     edi, edi
0x6C4210: cmp     [esi+54h], edi
0x6C4213: jbe     short loc_6C424F
0x6C4215: push    ebx
0x6C4216: mov     ecx, [esi+4Ch]
0x6C4219: fld     [esp+0Ch+arg_0]
0x6C421D: mov     ebx, [ecx+edi*4]
0x6C4220: push    1; int
0x6C4222: push    ecx
0x6C4223: mov     ecx, ebx; int
0x6C4225: fstp    [esp+14h+var_14]; float
0x6C4228: call    sub_6CA950
0x6C422D: cmp     dword ptr [ebx+44h], 0
0x6C4231: jnz     short loc_6C4246
0x6C4233: add     dword ptr [esi+54h], 0FFFFFFFFh
0x6C4237: mov     ecx, [esi+54h]
0x6C423A: mov     eax, [esi+4Ch]
0x6C423D: mov     edx, [eax+ecx*4]
0x6C4240: mov     [eax+edi*4], edx
0x6C4243: sub     edi, 1
0x6C4246: add     edi, 1
0x6C4249: cmp     edi, [esi+54h]
0x6C424C: jb      short loc_6C4216
0x6C424E: pop     ebx
0x6C424F: pop     edi
0x6C4250: pop     esi
0x6C4251: retn    4
