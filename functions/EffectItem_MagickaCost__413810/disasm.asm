0x413810: push    ecx
0x413811: fldz
0x413813: push    esi
0x413814: mov     esi, ecx
0x413816: fcomp   dword ptr [esi+20h]
0x413819: fnstsw  ax
0x41381B: test    ah, 41h
0x41381E: jnz     short EffectItem_MagickaCost___Return
0x413820: mov     ecx, [esi+1Ch]
0x413823: mov     eax, [ecx+58h]
0x413826: mov     edx, eax
0x413828: push    ebp
0x413829: shr     edx, 8
0x41382C: test    dl, 1
0x41382F: push    edi
0x413830: mov     edi, [esi+10h]
0x413833: jz      short loc_413839
0x413835: xor     ebp, ebp
0x413837: jmp     short loc_41383C
0x413839: mov     ebp, [esi+4]
0x41383C: mov     edx, eax
0x41383E: shr     edx, 7
0x413841: test    dl, 1
0x413844: jz      short loc_41384A
0x413846: xor     edx, edx
0x413848: jmp     short loc_41384D
0x41384A: mov     edx, [esi+0Ch]
0x41384D: shr     eax, 9
0x413850: test    al, 1
0x413852: jnz     short loc_41385D
0x413854: test    edi, edi
0x413856: jz      short loc_41385D
0x413858: mov     eax, [esi+8]
0x41385B: jmp     short loc_41385F
0x41385D: xor     eax, eax
0x41385F: fld     dword ptr [ecx+5Ch]
0x413862: cmp     edi, 2
0x413865: setz    cl
0x413868: fstp    [esp+10h+var_4]
0x41386C: fld     [esp+10h+var_4]
0x413870: push    ecx; float
0x413871: push    ebp; int
0x413872: push    edx; int
0x413873: push    eax; int
0x413874: push    ecx
0x413875: fstp    [esp+24h+var_24]; float
0x413878: call    Calc_BaseMagickaCost
0x41387D: add     esp, 14h
0x413880: fstp    dword ptr [esi+20h]
0x413883: pop     edi
0x413884: pop     ebp
