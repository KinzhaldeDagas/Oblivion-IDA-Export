0x8C35B0: push    esi
0x8C35B1: mov     esi, ecx
0x8C35B3: cmp     dword ptr [esi+0Ch], 0
0x8C35B7: jnz     short loc_8C3628
0x8C35B9: push    edi
0x8C35BA: push    10h; Size
0x8C35BC: call    FormHeapAlloc
0x8C35C1: add     esp, 4
0x8C35C4: test    eax, eax
0x8C35C6: jz      short loc_8C35E5
0x8C35C8: fld1
0x8C35CA: mov     dword ptr [eax], 0
0x8C35D0: fstp    dword ptr [eax+0Ch]
0x8C35D3: mov     dword ptr [eax+4], 0
0x8C35DA: mov     dword ptr [eax+8], 0
0x8C35E1: mov     edi, eax
0x8C35E3: jmp     short loc_8C35E7
0x8C35E5: xor     edi, edi
0x8C35E7: cmp     dword ptr [esi+8], 0
0x8C35EB: mov     [esi+0Ch], edi
0x8C35EE: jz      short loc_8C3619
0x8C35F0: push    edi
0x8C35F1: mov     ecx, esi
0x8C35F3: call    sub_8B0280
0x8C35F8: mov     eax, [esi+8]
0x8C35FB: test    eax, eax
0x8C35FD: jz      short loc_8C3614
0x8C35FF: mov     eax, [eax+10h]
0x8C3602: mov     [edi+8], eax
0x8C3605: mov     eax, [esp+8+arg_0]
0x8C3609: mov     byte ptr [eax], 1
0x8C360C: mov     eax, [esi+0Ch]
0x8C360F: pop     edi
0x8C3610: pop     esi
0x8C3611: retn    4
0x8C3614: xor     eax, eax
0x8C3616: mov     [edi+8], eax
0x8C3619: mov     eax, [esp+8+arg_0]
0x8C361D: mov     byte ptr [eax], 1
0x8C3620: mov     eax, [esi+0Ch]
0x8C3623: pop     edi
0x8C3624: pop     esi
0x8C3625: retn    4
0x8C3628: mov     ecx, [esp+4+arg_0]
0x8C362C: mov     byte ptr [ecx], 0
0x8C362F: mov     eax, [esi+0Ch]
0x8C3632: pop     esi
0x8C3633: retn    4
