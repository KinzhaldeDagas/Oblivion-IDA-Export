0x536BC0: push    esi
0x536BC1: mov     esi, [esp+4+arg_4]
0x536BC5: push    edi
0x536BC6: mov     edi, ecx
0x536BC8: mov     eax, [edi+18h]
0x536BCB: test    eax, eax
0x536BCD: jz      short loc_536BE0
0x536BCF: nop
0x536BD0: cmp     [eax+8], esi
0x536BD3: jz      short loc_536BDC
0x536BD5: mov     eax, [eax+4]
0x536BD8: test    eax, eax
0x536BDA: jnz     short loc_536BD0
0x536BDC: test    eax, eax
0x536BDE: jnz     short loc_536C25
0x536BE0: push    14h; Size
0x536BE2: call    FormHeapAlloc
0x536BE7: add     esp, 4
0x536BEA: test    eax, eax
0x536BEC: jz      short loc_536C1A
0x536BEE: mov     ecx, [esp+8+arg_0]
0x536BF2: mov     [eax+8], esi
0x536BF5: mov     dword ptr [eax], 0
0x536BFB: mov     dword ptr [eax+4], 0
0x536C02: mov     [eax+0Ch], ecx
0x536C05: mov     dword ptr [eax+10h], 0
0x536C0C: mov     edx, [edi+18h]
0x536C0F: mov     [eax+4], edx
0x536C12: mov     [edi+18h], eax
0x536C15: pop     edi
0x536C16: pop     esi
0x536C17: retn    8
0x536C1A: mov     edx, [edi+18h]
0x536C1D: xor     eax, eax
0x536C1F: mov     [eax+4], edx
0x536C22: mov     [edi+18h], eax
0x536C25: pop     edi
0x536C26: pop     esi
0x536C27: retn    8
