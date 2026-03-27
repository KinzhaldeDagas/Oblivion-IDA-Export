0x413390: mov     edx, [ecx+1Ch]
0x413393: mov     edx, [edx+58h]
0x413396: shr     edx, 9
0x413399: xor     al, al
0x41339B: test    dl, 1
0x41339E: jnz     short EffectItem_SetArea___Done
0x4133A0: cmp     dword ptr [ecx+10h], 0
0x4133A4: jz      short EffectItem_SetArea___Done
0x4133A6: mov     edx, [esp+arg_0]
0x4133AA: test    edx, edx
0x4133AC: jl      short EffectItem_SetArea___Done
0x4133AE: fld     ds:flt_A30634
0x4133B4: mov     [ecx+8], edx
0x4133B7: fstp    dword ptr [ecx+20h]
0x4133BA: mov     al, 1
0x4133BC: retn    4
