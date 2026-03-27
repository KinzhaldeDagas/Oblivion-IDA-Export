0x96EF70: fld     dword ptr [ecx]
0x96EF72: push    edi
0x96EF73: mov     edi, [esp+4+arg_0]
0x96EF77: fld     dword ptr [edi]
0x96EF79: fucompp
0x96EF7B: fnstsw  ax
0x96EF7D: test    ah, 44h
0x96EF80: jp      short loc_96EFA0
0x96EF82: fld     dword ptr [ecx+4]
0x96EF85: fld     dword ptr [edi+4]
0x96EF88: fucompp
0x96EF8A: fnstsw  ax
0x96EF8C: test    ah, 44h
0x96EF8F: jp      short loc_96EFA0
0x96EF91: fld     dword ptr [ecx+8]
0x96EF94: fld     dword ptr [edi+8]
0x96EF97: fucompp
0x96EF99: fnstsw  ax
0x96EF9B: test    ah, 44h
0x96EF9E: jnp     short loc_96EFA6
0x96EFA0: xor     al, al
0x96EFA2: pop     edi
0x96EFA3: retn    4
0x96EFA6: push    ebx
0x96EFA7: push    ebp
0x96EFA8: push    esi
0x96EFA9: xor     esi, esi
0x96EFAB: lea     ebx, [ecx+0Ch]
0x96EFAE: lea     ebp, [edi+30h]
0x96EFB1: lea     edx, [edi+10h]
0x96EFB4: sub     ecx, edi
0x96EFB6: fld     dword ptr [ebx]
0x96EFB8: fld     dword ptr [edx-4]
0x96EFBB: fucompp
0x96EFBD: fnstsw  ax
0x96EFBF: test    ah, 44h
0x96EFC2: jp      short loc_96F00A
0x96EFC4: fld     dword ptr [ecx+edx]
0x96EFC7: fld     dword ptr [edx]
0x96EFC9: fucompp
0x96EFCB: fnstsw  ax
0x96EFCD: test    ah, 44h
0x96EFD0: jp      short loc_96F00A
0x96EFD2: fld     dword ptr [ebx+8]
0x96EFD5: fld     dword ptr [edx+4]
0x96EFD8: fucompp
0x96EFDA: fnstsw  ax
0x96EFDC: test    ah, 44h
0x96EFDF: jp      short loc_96F00A
0x96EFE1: fld     dword ptr [ecx+ebp]
0x96EFE4: fld     dword ptr [ebp+0]
0x96EFE7: fucompp
0x96EFE9: fnstsw  ax
0x96EFEB: test    ah, 44h
0x96EFEE: jp      short loc_96F00A
0x96EFF0: add     esi, 1
0x96EFF3: add     ebp, 4
0x96EFF6: add     edx, 0Ch
0x96EFF9: add     ebx, 0Ch
0x96EFFC: cmp     esi, 3
0x96EFFF: jl      short loc_96EFB6
0x96F001: pop     esi
0x96F002: pop     ebp
0x96F003: pop     ebx
0x96F004: mov     al, 1
0x96F006: pop     edi
0x96F007: retn    4
0x96F00A: pop     esi
0x96F00B: pop     ebp
0x96F00C: pop     ebx
0x96F00D: xor     al, al
0x96F00F: pop     edi
0x96F010: retn    4
