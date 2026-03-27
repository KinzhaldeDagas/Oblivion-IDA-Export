0x71DF10: mov     eax, [esp+arg_1C]
0x71DF14: cmp     dword ptr [eax+4], 0FF00h
0x71DF1B: jnz     locret_71DFD6
0x71DF21: cmp     dword ptr [eax], 0FF0000h
0x71DF27: mov     eax, [esp+arg_4]
0x71DF2B: push    ebp
0x71DF2C: push    esi
0x71DF2D: push    edi
0x71DF2E: jnz     short loc_71DF81
0x71DF30: test    eax, eax
0x71DF32: jbe     loc_71DFD3
0x71DF38: mov     edi, [esp+0Ch+arg_0]
0x71DF3C: mov     ecx, [esp+0Ch+arg_18]
0x71DF40: mov     ebp, eax
0x71DF42: mov     eax, [esp+0Ch+arg_C]
0x71DF46: test    edi, edi
0x71DF48: jbe     short loc_71DF78
0x71DF4A: mov     esi, edi
0x71DF4C: lea     esp, [esp+0]
0x71DF50: movzx   edx, byte ptr [ecx+2]
0x71DF54: mov     [eax], dl
0x71DF56: movzx   edx, byte ptr [ecx+1]
0x71DF5A: add     eax, 1
0x71DF5D: mov     [eax], dl
0x71DF5F: movzx   edx, byte ptr [ecx]
0x71DF62: add     eax, 1
0x71DF65: mov     [eax], dl
0x71DF67: add     eax, 1
0x71DF6A: mov     byte ptr [eax], 0FFh
0x71DF6D: add     eax, 1
0x71DF70: add     ecx, 3
0x71DF73: sub     esi, 1
0x71DF76: jnz     short loc_71DF50
0x71DF78: sub     ebp, 1
0x71DF7B: jnz     short loc_71DF46
0x71DF7D: pop     edi
0x71DF7E: pop     esi
0x71DF7F: pop     ebp
0x71DF80: retn
0x71DF81: test    eax, eax
0x71DF83: jbe     short loc_71DFD3
0x71DF85: mov     edi, [esp+0Ch+arg_0]
0x71DF89: mov     ecx, [esp+0Ch+arg_18]
0x71DF8D: mov     ebp, eax
0x71DF8F: mov     eax, [esp+0Ch+arg_C]
0x71DF93: test    edi, edi
0x71DF95: jbe     short loc_71DFCE
0x71DF97: mov     esi, edi
0x71DF99: lea     esp, [esp+0]
0x71DFA0: movzx   edx, byte ptr [ecx]
0x71DFA3: mov     [eax], dl
0x71DFA5: movzx   edx, byte ptr [ecx+1]
0x71DFA9: add     ecx, 1
0x71DFAC: add     eax, 1
0x71DFAF: mov     [eax], dl
0x71DFB1: movzx   edx, byte ptr [ecx+1]
0x71DFB5: add     ecx, 1
0x71DFB8: add     eax, 1
0x71DFBB: mov     [eax], dl
0x71DFBD: add     eax, 1
0x71DFC0: mov     byte ptr [eax], 0FFh
0x71DFC3: add     ecx, 1
0x71DFC6: add     eax, 1
0x71DFC9: sub     esi, 1
0x71DFCC: jnz     short loc_71DFA0
0x71DFCE: sub     ebp, 1
0x71DFD1: jnz     short loc_71DF93
0x71DFD3: pop     edi
0x71DFD4: pop     esi
0x71DFD5: pop     ebp
0x71DFD6: retn
