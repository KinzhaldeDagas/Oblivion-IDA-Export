0x4324D0: push    esi
0x4324D1: push    14h; Size
0x4324D3: mov     esi, ecx
0x4324D5: call    FormHeapAlloc
0x4324DA: add     esp, 4
0x4324DD: test    eax, eax
0x4324DF: jz      short loc_432513
0x4324E1: mov     ecx, [esi+10h]
0x4324E4: mov     edx, [esp+4+arg_0]
0x4324E8: add     edx, edx
0x4324EA: add     edx, edx
0x4324EC: push    edi
0x4324ED: add     edx, edx
0x4324EF: lea     edi, [ecx+edx+4]
0x4324F3: mov     ecx, [esi+10h]
0x4324F6: mov     [eax+8], edi
0x4324F9: add     ecx, edx
0x4324FB: pop     edi
0x4324FC: mov     [eax], esi
0x4324FE: mov     [eax+4], ecx
0x432501: mov     dword ptr [eax+0Ch], 0
0x432508: mov     dword ptr [eax+10h], 0
0x43250F: pop     esi
0x432510: retn    4
0x432513: xor     eax, eax
0x432515: pop     esi
0x432516: retn    4
