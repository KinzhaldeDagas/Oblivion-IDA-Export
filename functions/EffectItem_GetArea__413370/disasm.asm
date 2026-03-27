0x413370: mov     eax, [ecx+1Ch]
0x413373: mov     edx, [eax+58h]
0x413376: shr     edx, 9
0x413379: test    dl, 1
0x41337C: jnz     short EffectItem_GetArea___return_0
0x41337E: cmp     dword ptr [ecx+10h], 0
0x413382: jz      short EffectItem_GetArea___return_0
0x413384: mov     eax, [ecx+8]
0x413387: retn
0x413388: xor     eax, eax
0x41338A: retn
