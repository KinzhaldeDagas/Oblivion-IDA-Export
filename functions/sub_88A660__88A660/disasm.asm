0x88A660: push    edi
0x88A661: mov     edi, ecx
0x88A663: cmp     dword ptr [edi+8], 0
0x88A667: jz      short loc_88A6A4
0x88A669: push    esi
0x88A66A: xor     esi, esi
0x88A66C: cmp     [edi+64h], esi
0x88A66F: jle     short loc_88A6A3
0x88A671: fld     [esp+8+arg_0]
0x88A675: mov     eax, [edi+60h]
0x88A678: mov     ecx, [eax+esi*4]
0x88A67B: test    ecx, ecx
0x88A67D: jz      short loc_88A699
0x88A67F: fldz
0x88A681: fucomp  st(1)
0x88A683: fnstsw  ax
0x88A685: test    ah, 44h
0x88A688: jnp     short loc_88A699
0x88A68A: mov     edx, [ecx]
0x88A68C: mov     eax, [edx+14h]
0x88A68F: push    ecx
0x88A690: fstp    [esp+0Ch+var_C]
0x88A693: call    eax
0x88A695: fld     [esp+8+arg_0]
0x88A699: add     esi, 1
0x88A69C: cmp     esi, [edi+64h]
0x88A69F: jl      short loc_88A675
0x88A6A1: fstp    st
0x88A6A3: pop     esi
0x88A6A4: pop     edi
0x88A6A5: retn    4
