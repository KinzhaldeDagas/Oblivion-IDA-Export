0x7A0E60: push    0FFFFFFFFh
0x7A0E62: push    offset SEH_7A0E60
0x7A0E67: mov     eax, large fs:0
0x7A0E6D: push    eax
0x7A0E6E: push    esi
0x7A0E6F: push    edi
0x7A0E70: mov     eax, ds:0B30AACh
0x7A0E75: xor     eax, esp
0x7A0E77: push    eax
0x7A0E78: lea     eax, [esp+18h+var_C]
0x7A0E7C: mov     large fs:0, eax
0x7A0E82: mov     esi, [esp+18h+arg_0]
0x7A0E86: mov     ecx, [esp+18h+arg_4]
0x7A0E8A: cmp     esi, ecx
0x7A0E8C: mov     eax, [esp+18h+arg_8]
0x7A0E90: jz      short loc_7A0EC0
0x7A0E92: mov     edi, [ecx-0Ch]
0x7A0E95: mov     edx, [eax-0Ch]
0x7A0E98: sub     ecx, 10h
0x7A0E9B: sub     eax, 10h
0x7A0E9E: cmp     ecx, esi
0x7A0EA0: mov     [eax+4], edi
0x7A0EA3: mov     [ecx+4], edx
0x7A0EA6: mov     edi, [ecx+8]
0x7A0EA9: mov     edx, [eax+8]
0x7A0EAC: mov     [eax+8], edi
0x7A0EAF: mov     [ecx+8], edx
0x7A0EB2: mov     edi, [ecx+0Ch]
0x7A0EB5: mov     edx, [eax+0Ch]
0x7A0EB8: mov     [eax+0Ch], edi
0x7A0EBB: mov     [ecx+0Ch], edx
0x7A0EBE: jnz     short loc_7A0E92
0x7A0EC0: mov     ecx, [esp+18h+var_C]
0x7A0EC4: mov     large fs:0, ecx
0x7A0ECB: pop     ecx
0x7A0ECC: pop     edi
0x7A0ECD: pop     esi
0x7A0ECE: add     esp, 0Ch
0x7A0ED1: retn
