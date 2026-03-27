0x70EAF0: sub     esp, 0C4h
0x70EAF6: push    ebx
0x70EAF7: push    ebp
0x70EAF8: push    esi
0x70EAF9: mov     esi, [esp+0D0h+a2]
0x70EB00: push    edi
0x70EB01: push    esi; a2
0x70EB02: mov     edi, ecx
0x70EB04: call    sub_7008A0
0x70EB09: push    esi
0x70EB0A: lea     ecx, [edi+8]
0x70EB0D: call    sub_70F520
0x70EB12: mov     ecx, esi
0x70EB14: call    sub_712A20
0x70EB19: mov     eax, [esi+21Ch]
0x70EB1F: mov     edx, [eax+4]
0x70EB22: push    1
0x70EB24: lea     ecx, [esp+0D8h+var_C4]
0x70EB28: push    ecx
0x70EB29: mov     ebx, 4
0x70EB2E: push    ebx
0x70EB2F: lea     ebp, [edi+60h]
0x70EB32: push    ebp
0x70EB33: push    eax
0x70EB34: mov     [esp+0E8h+var_C4], ebx
0x70EB38: call    edx
0x70EB3A: mov     eax, [esi+21Ch]
0x70EB40: push    1
0x70EB42: lea     ecx, [esp+0ECh+var_C4]
0x70EB46: push    ecx
0x70EB47: push    ebx
0x70EB48: lea     edx, [edi+64h]
0x70EB4B: push    edx
0x70EB4C: push    eax
0x70EB4D: mov     eax, [eax+4]
0x70EB50: mov     [esp+0FCh+var_C4], ebx
0x70EB54: call    eax
0x70EB56: xor     ebx, ebx
0x70EB58: add     esp, 28h
0x70EB5B: cmp     [ebp+0], ebx
0x70EB5E: jbe     short loc_70EBD4
0x70EB60: mov     eax, [esi+21Ch]
0x70EB66: push    1
0x70EB68: lea     ecx, [esp+0D8h+var_C4]
0x70EB6C: push    ecx
0x70EB6D: push    4
0x70EB6F: lea     edx, [esp+ebx*4+0E0h+Src]
0x70EB73: push    edx
0x70EB74: push    eax
0x70EB75: mov     eax, [eax+4]
0x70EB78: mov     [esp+0E8h+var_C4], 4
0x70EB80: call    eax
0x70EB82: mov     eax, [esi+21Ch]
0x70EB88: push    1
0x70EB8A: lea     ecx, [esp+0ECh+var_C4]
0x70EB8E: push    ecx
0x70EB8F: push    4
0x70EB91: lea     edx, [esp+ebx*4+0F4h+var_40]
0x70EB98: push    edx
0x70EB99: push    eax
0x70EB9A: mov     eax, [eax+4]
0x70EB9D: mov     [esp+0FCh+var_C4], 4
0x70EBA5: call    eax
0x70EBA7: mov     eax, [esi+21Ch]
0x70EBAD: push    1
0x70EBAF: lea     ecx, [esp+100h+var_C4]
0x70EBB3: push    ecx
0x70EBB4: push    4
0x70EBB6: lea     edx, [esp+ebx*4+108h+var_C0]
0x70EBBA: push    edx
0x70EBBB: push    eax
0x70EBBC: mov     eax, [eax+4]
0x70EBBF: mov     [esp+110h+var_C4], 4
0x70EBC7: call    eax
0x70EBC9: add     ebx, 1
0x70EBCC: add     esp, 3Ch
0x70EBCF: cmp     ebx, [ebp+0]
0x70EBD2: jb      short loc_70EB60
0x70EBD4: mov     edx, [ebp+0]
0x70EBD7: mov     eax, [esi+21Ch]
0x70EBDD: push    1
0x70EBDF: lea     ecx, [esp+0D8h+var_C4]
0x70EBE3: push    ecx
0x70EBE4: mov     ebx, 4
0x70EBE9: lea     ecx, [esp+edx*4+0DCh+var_C0]
0x70EBED: mov     edx, [eax+4]
0x70EBF0: push    ebx
0x70EBF1: push    ecx
0x70EBF2: push    eax
0x70EBF3: mov     [esp+0E8h+var_C4], ebx
0x70EBF7: call    edx
0x70EBF9: add     esp, 14h
0x70EBFC: cmp     dword ptr [esi+0D8h], 0A030006h
0x70EC06: jnb     short loc_70EC11
0x70EC08: mov     dword ptr [edi+6Ch], 1
0x70EC0F: jmp     short loc_70EC30
0x70EC11: mov     eax, [esi+21Ch]
0x70EC17: push    1
0x70EC19: lea     edx, [esp+0D8h+var_C4]
0x70EC1D: push    edx
0x70EC1E: lea     ecx, [edi+6Ch]
0x70EC21: push    ebx
0x70EC22: push    ecx
0x70EC23: push    eax
0x70EC24: mov     eax, [eax+4]
0x70EC27: mov     [esp+0E8h+var_C4], ebx
0x70EC2B: call    eax
0x70EC2D: add     esp, 14h
0x70EC30: mov     eax, [ebp+0]
0x70EC33: mov     ecx, [esp+eax*4+0D4h+var_C0]
0x70EC37: mov     edx, [edi+6Ch]
0x70EC3A: push    ecx
0x70EC3B: push    edx
0x70EC3C: push    eax
0x70EC3D: mov     ecx, edi
0x70EC3F: call    sub_732280
0x70EC44: mov     ebx, [ebp+0]
0x70EC47: mov     ecx, [edi+54h]
0x70EC4A: add     ebx, ebx
0x70EC4C: add     ebx, ebx
0x70EC4E: push    ebx; Size
0x70EC4F: lea     eax, [esp+0D8h+Src]
0x70EC53: push    eax; Src
0x70EC54: push    ecx; Dst
0x70EC55: call    _memcpy
0x70EC5A: mov     eax, [edi+58h]
0x70EC5D: push    ebx; Size
0x70EC5E: lea     edx, [esp+0E4h+var_40]
0x70EC65: push    edx; Src
0x70EC66: push    eax; Dst
0x70EC67: call    _memcpy
0x70EC6C: mov     ecx, [ebp+0]
0x70EC6F: lea     edx, ds:4[ecx*4]
0x70EC76: mov     ecx, [edi+5Ch]
0x70EC79: push    edx; Size
0x70EC7A: lea     eax, [esp+0F0h+var_C0]
0x70EC7E: push    eax; Src
0x70EC7F: push    ecx; Dst
0x70EC80: call    _memcpy
0x70EC85: mov     eax, [ebp+0]
0x70EC88: mov     ecx, [edi+5Ch]
0x70EC8B: mov     esi, [esi+21Ch]
0x70EC91: push    1
0x70EC93: lea     edx, [esp+0FCh+var_C4]
0x70EC97: push    edx
0x70EC98: mov     edx, [ecx+eax*4]
0x70EC9B: imul    edx, [edi+6Ch]
0x70EC9F: mov     eax, [edi+50h]
0x70ECA2: mov     ecx, [esi+4]
0x70ECA5: push    edx
0x70ECA6: push    eax
0x70ECA7: push    esi
0x70ECA8: mov     [esp+10Ch+var_C4], 1
0x70ECB0: call    ecx
0x70ECB2: add     esp, 38h
0x70ECB5: pop     edi
0x70ECB6: pop     esi
0x70ECB7: pop     ebp
0x70ECB8: pop     ebx
0x70ECB9: add     esp, 0C4h
0x70ECBF: retn    4
