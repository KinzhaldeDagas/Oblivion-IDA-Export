0x58CC60: push    ecx
0x58CC61: push    ebp
0x58CC62: mov     ebp, [esp+8+arg_4]
0x58CC66: cmp     ebp, 0FA1h
0x58CC6C: mov     [esp+8+var_4], ecx
0x58CC70: jl      loc_58CD24
0x58CC76: cmp     ebp, ds:0B13BC0h
0x58CC7C: jl      short loc_58CC8A
0x58CC7E: cmp     ebp, 2710h
0x58CC84: jl      loc_58CD24
0x58CC8A: push    ebx
0x58CC8B: push    esi
0x58CC8C: push    edi
0x58CC8D: mov     edi, [ecx+10h]
0x58CC90: mov     dword ptr [edi+0Ch], 65h ; 'e'
0x58CC97: cmp     dword ptr [edi+4], 0
0x58CC9B: jz      short loc_58CCA9
0x58CC9D: lea     ecx, [ecx+0]
0x58CCA0: mov     edi, [edi+4]
0x58CCA3: cmp     dword ptr [edi+4], 0
0x58CCA7: jnz     short loc_58CCA0
0x58CCA9: push    18h; Size
0x58CCAB: call    FormHeapAlloc
0x58CCB0: mov     ebx, [esp+18h+arg_0]
0x58CCB4: mov     esi, eax
0x58CCB6: add     esp, 4
0x58CCB9: test    esi, esi
0x58CCBB: jz      short loc_58CCE6
0x58CCBD: push    ebp
0x58CCBE: mov     ecx, ebx
0x58CCC0: call    Tile_GetFloat
0x58CCC5: fstp    [esp+14h+arg_4]
0x58CCC9: fld     [esp+14h+arg_4]
0x58CCCD: mov     ecx, [esp+14h+arg_8]
0x58CCD1: xor     eax, eax
0x58CCD3: fstp    dword ptr [esi+8]
0x58CCD6: mov     [esi], edi
0x58CCD8: mov     [esi+4], eax
0x58CCDB: mov     [esi+0Ch], ecx
0x58CCDE: mov     [esi+10h], eax
0x58CCE1: mov     [esi+14h], eax
0x58CCE4: jmp     short loc_58CCE8
0x58CCE6: xor     esi, esi
0x58CCE8: push    ebp
0x58CCE9: mov     ecx, ebx
0x58CCEB: mov     [edi+4], esi
0x58CCEE: call    Tile_GetPropertyByCode?
0x58CCF3: mov     eax, [eax+14h]
0x58CCF6: cmp     dword ptr [eax+14h], 0
0x58CCFA: jz      short loc_58CD09
0x58CCFC: lea     esp, [esp+0]
0x58CD00: mov     eax, [eax+14h]
0x58CD03: cmp     dword ptr [eax+14h], 0
0x58CD07: jnz     short loc_58CD00
0x58CD09: mov     ecx, [esp+14h+var_4]
0x58CD0D: mov     [eax+14h], esi
0x58CD10: push    0
0x58CD12: mov     [esi+10h], eax
0x58CD15: call    DoActionEnumeration
0x58CD1A: pop     edi
0x58CD1B: mov     eax, esi
0x58CD1D: pop     esi
0x58CD1E: pop     ebx
0x58CD1F: pop     ebp
0x58CD20: pop     ecx
0x58CD21: retn    0Ch
0x58CD24: xor     eax, eax
0x58CD26: pop     ebp
0x58CD27: pop     ecx
0x58CD28: retn    0Ch
