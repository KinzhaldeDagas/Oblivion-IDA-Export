0x8F3230: mov     eax, [esp+arg_C]
0x8F3234: mov     [ecx+0Ch], eax
0x8F3237: mov     word ptr [ecx+6], 1
0x8F323D: mov     dword ptr [ecx+8], 0
0x8F3244: mov     dword ptr [ecx], offset off_A9B230
0x8F324A: fld     dword ptr ds:0B2FDC4h
0x8F3250: fcomp   dword ptr ds:0A2FAA8h
0x8F3256: fnstsw  ax
0x8F3258: test    ah, 5
0x8F325B: jp      short loc_8F326E
0x8F325D: call    sub_8F22B0
0x8F3262: fsubr   dword ptr ds:0A2F948h
0x8F3268: fstp    dword ptr ds:0B2FDC4h
0x8F326E: mov     edx, [esp+arg_C]
0x8F3272: fld     [esp+arg_8]
0x8F3276: fadd    [esp+arg_C]
0x8F327A: mov     eax, [esp+arg_0]
0x8F327E: mov     [ecx+0Ch], edx
0x8F3281: movaps  xmm0, xmmword ptr [eax]
0x8F3284: mov     edx, [esp+arg_4]
0x8F3288: mov     eax, [esp+arg_8]
0x8F328C: movaps  xmmword ptr [ecx+20h], xmm0
0x8F3290: movaps  xmm0, xmmword ptr [edx]
0x8F3293: movaps  xmmword ptr [ecx+30h], xmm0
0x8F3297: mov     [ecx+10h], eax
0x8F329A: fstp    dword ptr [ecx+2Ch]
0x8F329D: fld     [esp+arg_8]
0x8F32A1: fadd    dword ptr [ecx+0Ch]
0x8F32A4: fstp    dword ptr [ecx+3Ch]
0x8F32A7: call    sub_8F2300
0x8F32AC: mov     eax, ecx
0x8F32AE: retn    10h
