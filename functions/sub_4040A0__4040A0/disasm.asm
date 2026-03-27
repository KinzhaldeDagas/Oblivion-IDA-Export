0x4040A0: mov     eax, [esp+arg_0]
0x4040A4: test    eax, eax
0x4040A6: jz      short loc_4040CC
0x4040A8: push    esi
0x4040A9: lea     esi, [ecx+4]
0x4040AC: sub     esi, eax
0x4040AE: mov     edi, edi
0x4040B0: mov     dl, [eax]
0x4040B2: mov     [esi+eax], dl
0x4040B5: add     eax, 1
0x4040B8: test    dl, dl
0x4040BA: jnz     short loc_4040B0
0x4040BC: mov     eax, [ecx]
0x4040BE: mov     edx, [esp+4+arg_4]
0x4040C2: mov     eax, [eax+14h]
0x4040C5: pop     esi
0x4040C6: push    edx
0x4040C7: call    eax
0x4040C9: retn    8
0x4040CC: mov     eax, [ecx]
0x4040CE: mov     edx, [esp+arg_4]
0x4040D2: mov     eax, [eax+14h]
0x4040D5: push    edx
0x4040D6: mov     byte ptr [ecx+4], 0
0x4040DA: call    eax
0x4040DC: retn    8
