0x79B700: push    ebx
0x79B701: mov     ebx, [esp+4+arg_4]
0x79B705: push    esi
0x79B706: mov     esi, [esp+8+arg_0]
0x79B70A: cmp     esi, ebx
0x79B70C: jz      short loc_79B75B
0x79B70E: push    edi
0x79B70F: mov     edi, [esp+0Ch+arg_8]
0x79B713: push    esi
0x79B714: mov     ecx, edi
0x79B716: call    sub_79B160
0x79B71B: fld     dword ptr [esi+10h]
0x79B71E: fstp    dword ptr [edi+10h]
0x79B721: add     esi, 30h ; '0'
0x79B724: fld     dword ptr [esi-1Ch]
0x79B727: add     edi, 30h ; '0'
0x79B72A: cmp     esi, ebx
0x79B72C: fstp    dword ptr [edi-1Ch]
0x79B72F: mov     al, [esi-18h]
0x79B732: mov     [edi-18h], al
0x79B735: fld     dword ptr [esi-14h]
0x79B738: fstp    dword ptr [edi-14h]
0x79B73B: fld     dword ptr [esi-10h]
0x79B73E: fstp    dword ptr [edi-10h]
0x79B741: fld     dword ptr [esi-0Ch]
0x79B744: fstp    dword ptr [edi-0Ch]
0x79B747: mov     ecx, [esi-8]
0x79B74A: mov     [edi-8], ecx
0x79B74D: mov     edx, [esi-4]
0x79B750: mov     [edi-4], edx
0x79B753: jnz     short loc_79B713
0x79B755: mov     eax, edi
0x79B757: pop     edi
0x79B758: pop     esi
0x79B759: pop     ebx
0x79B75A: retn
0x79B75B: mov     eax, [esp+8+arg_8]
0x79B75F: pop     esi
0x79B760: pop     ebx
0x79B761: retn
