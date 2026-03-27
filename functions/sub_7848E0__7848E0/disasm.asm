0x7848E0: mov     edx, [esp+arg_4]
0x7848E4: test    edx, edx
0x7848E6: jbe     short locret_784922
0x7848E8: mov     ecx, [esp+arg_8]
0x7848EC: mov     eax, [esp+arg_0]
0x7848F0: push    esi
0x7848F1: test    eax, eax
0x7848F3: jz      short loc_784917
0x7848F5: mov     esi, [ecx]
0x7848F7: mov     [eax], esi
0x7848F9: mov     esi, [ecx+4]
0x7848FC: mov     [eax+4], esi
0x7848FF: mov     esi, [ecx+8]
0x784902: mov     [eax+8], esi
0x784905: mov     esi, [ecx+0Ch]
0x784908: mov     [eax+0Ch], esi
0x78490B: mov     esi, [ecx+10h]
0x78490E: mov     [eax+10h], esi
0x784911: mov     esi, [ecx+14h]
0x784914: mov     [eax+14h], esi
0x784917: sub     edx, 1
0x78491A: add     eax, 18h
0x78491D: test    edx, edx
0x78491F: ja      short loc_7848F1
0x784921: pop     esi
0x784922: retn
