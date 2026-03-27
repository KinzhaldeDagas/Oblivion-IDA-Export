0x47CA90: push    esi
0x47CA91: push    edi
0x47CA92: mov     edi, ecx
0x47CA94: xor     esi, esi
0x47CA96: cmp     [edi+0B8h], si
0x47CA9D: jbe     short loc_47CAEA
0x47CA9F: push    ebx
0x47CAA0: mov     ebx, [esp+0Ch+arg_8]
0x47CAA4: push    ebp
0x47CAA5: mov     ebp, [esp+10h+a3]
0x47CAA9: lea     esp, [esp+0]
0x47CAB0: movzx   eax, word ptr [edi+0B6h]
0x47CAB7: cmp     eax, esi
0x47CAB9: jbe     short loc_47CADA
0x47CABB: mov     ecx, [edi+0B0h]
0x47CAC1: mov     ecx, [ecx+esi*4]; this
0x47CAC4: test    ecx, ecx
0x47CAC6: jz      short loc_47CADA
0x47CAC8: cmp     ecx, ebx
0x47CACA: jz      short loc_47CADA
0x47CACC: fld     [esp+10h+arg_0]
0x47CAD0: push    ebp; a3
0x47CAD1: push    ecx
0x47CAD2: fstp    [esp+18h+a2]; a2
0x47CAD5: call    NiAVObject_UpdateNiAVObject
0x47CADA: movzx   edx, word ptr [edi+0B8h]
0x47CAE1: add     esi, 1
0x47CAE4: cmp     esi, edx
0x47CAE6: jb      short loc_47CAB0
0x47CAE8: pop     ebp
0x47CAE9: pop     ebx
0x47CAEA: pop     edi
0x47CAEB: pop     esi
0x47CAEC: retn    0Ch
