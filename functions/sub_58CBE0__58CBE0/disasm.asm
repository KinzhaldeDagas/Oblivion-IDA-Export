0x58CBE0: push    ebp
0x58CBE1: push    esi
0x58CBE2: mov     ebp, ecx
0x58CBE4: mov     esi, [ebp+10h]
0x58CBE7: cmp     dword ptr [esi+4], 0
0x58CBEB: push    edi
0x58CBEC: jz      short loc_58CBF9
0x58CBEE: mov     edi, edi
0x58CBF0: mov     esi, [esi+4]
0x58CBF3: cmp     dword ptr [esi+4], 0
0x58CBF7: jnz     short loc_58CBF0
0x58CBF9: push    18h; Size
0x58CBFB: call    FormHeapAlloc
0x58CC00: add     esp, 4
0x58CC03: test    eax, eax
0x58CC05: jz      short loc_58CC42
0x58CC07: mov     ecx, [esp+0Ch+arg_4]
0x58CC0B: fld     [esp+0Ch+arg_0]
0x58CC0F: mov     [eax+0Ch], ecx
0x58CC12: fstp    dword ptr [eax+8]
0x58CC15: mov     edi, eax
0x58CC17: mov     [eax], esi
0x58CC19: mov     dword ptr [eax+4], 0
0x58CC20: mov     dword ptr [eax+10h], 0
0x58CC27: mov     dword ptr [eax+14h], 0
0x58CC2E: push    0
0x58CC30: mov     ecx, ebp
0x58CC32: mov     [esi+4], edi
0x58CC35: call    DoActionEnumeration
0x58CC3A: mov     eax, edi
0x58CC3C: pop     edi
0x58CC3D: pop     esi
0x58CC3E: pop     ebp
0x58CC3F: retn    8
0x58CC42: xor     edi, edi
0x58CC44: push    edi
0x58CC45: mov     ecx, ebp
0x58CC47: mov     [esi+4], edi
0x58CC4A: call    DoActionEnumeration
0x58CC4F: mov     eax, edi
0x58CC51: pop     edi
0x58CC52: pop     esi
0x58CC53: pop     ebp
0x58CC54: retn    8
