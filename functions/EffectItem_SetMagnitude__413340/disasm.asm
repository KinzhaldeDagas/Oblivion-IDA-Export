0x413340: mov     edx, [ecx+1Ch]
0x413343: mov     edx, [edx+58h]
0x413346: shr     edx, 8
0x413349: xor     al, al
0x41334B: test    dl, 1
0x41334E: jnz     short EffectItem_SetMagnitude___Done
0x413350: mov     edx, [esp+arg_0]
0x413354: test    edx, edx
0x413356: jl      short EffectItem_SetMagnitude___Done
0x413358: fld     ds:flt_A30634
0x41335E: mov     [ecx+4], edx
0x413361: fstp    dword ptr [ecx+20h]
0x413364: mov     al, 1
0x413366: retn    4
