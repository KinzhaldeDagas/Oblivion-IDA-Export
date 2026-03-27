0x79B6B0: push    ebx
0x79B6B1: mov     ebx, [esp+4+arg_4]
0x79B6B5: push    esi
0x79B6B6: mov     esi, [esp+8+arg_0]
0x79B6BA: cmp     esi, ebx
0x79B6BC: jz      short loc_79B6EF
0x79B6BE: push    edi
0x79B6BF: mov     edi, [esp+0Ch+arg_8]
0x79B6C3: push    0FFFFFFFFh
0x79B6C5: push    0
0x79B6C7: push    edi
0x79B6C8: mov     ecx, esi
0x79B6CA: call    sub_414420
0x79B6CF: fld     dword ptr [edi+1Ch]
0x79B6D2: fstp    dword ptr [esi+1Ch]
0x79B6D5: add     esi, 2Ch ; ','
0x79B6D8: cmp     esi, ebx
0x79B6DA: fld     dword ptr [edi+20h]
0x79B6DD: fstp    dword ptr [esi-0Ch]
0x79B6E0: fld     dword ptr [edi+24h]
0x79B6E3: fstp    dword ptr [esi-8]
0x79B6E6: fld     dword ptr [edi+28h]
0x79B6E9: fstp    dword ptr [esi-4]
0x79B6EC: jnz     short loc_79B6C3
0x79B6EE: pop     edi
0x79B6EF: pop     esi
0x79B6F0: pop     ebx
0x79B6F1: retn
