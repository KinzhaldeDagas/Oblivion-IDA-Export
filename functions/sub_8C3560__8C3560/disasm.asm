0x8C3560: push    ecx
0x8C3561: push    esi
0x8C3562: mov     esi, ecx
0x8C3564: mov     eax, [esi]
0x8C3566: mov     edx, [eax+74h]
0x8C3569: lea     ecx, [esp+8+var_1]
0x8C356D: push    ecx
0x8C356E: mov     ecx, esi
0x8C3570: call    edx
0x8C3572: test    eax, eax
0x8C3574: mov     ecx, [esp+8+arg_4]
0x8C3578: jz      short loc_8C3593
0x8C357A: fld     dword ptr [ecx+10h]
0x8C357D: fstp    dword ptr [eax+0Ch]
0x8C3580: mov     eax, [eax+8]
0x8C3583: test    eax, eax
0x8C3585: jz      short loc_8C3593
0x8C3587: cmp     word ptr [eax+4], 0
0x8C358C: jz      short loc_8C3593
0x8C358E: add     word ptr [eax+6], 1
0x8C3593: mov     eax, [esp+8+arg_0]
0x8C3597: push    ecx
0x8C3598: push    eax
0x8C3599: mov     ecx, esi
0x8C359B: call    sub_8B02B0
0x8C35A0: pop     esi
0x8C35A1: pop     ecx
0x8C35A2: retn    8
