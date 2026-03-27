0x72C400: mov     eax, [esp+arg_0]
0x72C404: mov     ecx, [esp+arg_4]
0x72C408: movzx   eax, word ptr [eax]
0x72C40B: movzx   ecx, word ptr [ecx]
0x72C40E: cmp     cx, ax
0x72C411: jbe     short loc_72C417
0x72C413: or      eax, 0FFFFFFFFh
0x72C416: retn
0x72C417: sbb     eax, eax
0x72C419: neg     eax
0x72C41B: retn
