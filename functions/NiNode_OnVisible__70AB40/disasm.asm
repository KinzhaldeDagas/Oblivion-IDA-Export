0x70AB40: fldz
0x70AB42: push    edi
0x70AB43: mov     edi, ecx
0x70AB45: fcomp   dword ptr [edi+2Ch]
0x70AB48: fnstsw  ax
0x70AB4A: test    ah, 44h
0x70AB4D: jnp     short loc_70AB83
0x70AB4F: push    esi
0x70AB50: xor     esi, esi
0x70AB52: cmp     [edi+0B6h], si
0x70AB59: jbe     short loc_70AB82
0x70AB5B: push    ebx
0x70AB5C: mov     ebx, [esp+0Ch+a2]
0x70AB60: mov     eax, [edi+0B0h]
0x70AB66: mov     ecx, [eax+esi*4]; this
0x70AB69: test    ecx, ecx
0x70AB6B: jz      short loc_70AB73
0x70AB6D: push    ebx; a2
0x70AB6E: call    NiAVObject_Render
0x70AB73: movzx   ecx, word ptr [edi+0B6h]
0x70AB7A: add     esi, 1
0x70AB7D: cmp     esi, ecx
0x70AB7F: jb      short loc_70AB60
0x70AB81: pop     ebx
0x70AB82: pop     esi
0x70AB83: pop     edi
0x70AB84: retn    4
