0x557770: mov     eax, [esp+arg_0]
0x557774: fld     dword ptr [eax]
0x557776: push    ebx
0x557777: push    ebp
0x557778: push    esi
0x557779: push    edi
0x55777A: mov     edi, ecx
0x55777C: fstp    dword ptr [edi]
0x55777E: mov     ecx, [eax+4]
0x557781: mov     [edi+4], ecx
0x557784: mov     edx, [eax+8]
0x557787: mov     [edi+8], edx
0x55778A: mov     ecx, [eax+0Ch]
0x55778D: mov     ebx, eax
0x55778F: mov     [edi+0Ch], ecx
0x557792: lea     esi, [edi+10h]
0x557795: sub     ebx, edi
0x557797: mov     ebp, 3
0x55779C: lea     esp, [esp+0]
0x5577A0: lea     edx, [ebx+esi]
0x5577A3: push    edx
0x5577A4: mov     ecx, esi
0x5577A6: call    sub_5575C0
0x5577AB: add     esi, 10h
0x5577AE: sub     ebp, 1
0x5577B1: jnz     short loc_5577A0
0x5577B3: mov     eax, edi
0x5577B5: pop     edi
0x5577B6: pop     esi
0x5577B7: pop     ebp
0x5577B8: pop     ebx
0x5577B9: retn    4
