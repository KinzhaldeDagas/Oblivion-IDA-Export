0x719AF0: mov     ecx, [ecx+0B4h]
0x719AF6: mov     eax, [ecx]
0x719AF8: mov     eax, [eax+60h]
0x719AFB: sub     esp, 8
0x719AFE: push    esi
0x719AFF: mov     esi, [ecx+1Ch]
0x719B02: lea     edx, [esp+0Ch+var_4]
0x719B06: push    edx
0x719B07: lea     edx, [esp+10h+var_8]
0x719B0B: push    edx
0x719B0C: lea     edx, [esp+14h+arg_0]
0x719B10: push    edx
0x719B11: mov     edx, [esp+18h+arg_0]
0x719B15: push    edx
0x719B16: call    eax
0x719B18: movzx   eax, word ptr [esp+0Ch+arg_0]
0x719B1D: lea     ecx, [eax+eax*2]
0x719B20: mov     eax, [esp+0Ch+arg_4]
0x719B24: lea     edx, [esi+ecx*4]
0x719B27: mov     [eax], edx
0x719B29: movzx   eax, word ptr [esp+0Ch+var_8]
0x719B2E: lea     ecx, [eax+eax*2]
0x719B31: mov     eax, [esp+0Ch+arg_8]
0x719B35: lea     edx, [esi+ecx*4]
0x719B38: mov     [eax], edx
0x719B3A: movzx   eax, word ptr [esp+0Ch+var_4]
0x719B3F: lea     ecx, [eax+eax*2]
0x719B42: mov     eax, [esp+0Ch+arg_C]
0x719B46: lea     edx, [esi+ecx*4]
0x719B49: mov     [eax], edx
0x719B4B: pop     esi
0x719B4C: add     esp, 8
0x719B4F: retn    10h
