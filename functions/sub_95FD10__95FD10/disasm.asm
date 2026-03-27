0x95FD10: push    ecx
0x95FD11: mov     ecx, [esp+4+arg_4]
0x95FD15: push    ebx
0x95FD16: push    ebp
0x95FD17: xor     eax, eax
0x95FD19: cmp     [ecx+0Eh], ax
0x95FD1D: push    esi
0x95FD1E: push    edi
0x95FD1F: mov     [esp+14h+var_4], eax
0x95FD23: jbe     short loc_95FD9D
0x95FD25: mov     edi, [esp+14h+arg_C]
0x95FD29: mov     ebp, [esp+14h+arg_24]
0x95FD2D: lea     ecx, [ecx+0]
0x95FD30: mov     edx, [ecx+8]
0x95FD33: mov     ebx, [edx+eax*4]
0x95FD36: xor     esi, esi
0x95FD38: cmp     [edi+0Eh], si
0x95FD3C: jbe     short loc_95FD8E
0x95FD3E: mov     edi, edi
0x95FD40: mov     ecx, [esp+14h+arg_20]
0x95FD44: fld     [esp+14h+arg_0]
0x95FD48: mov     edx, [esp+14h+arg_1C]
0x95FD4C: mov     eax, [edi+8]
0x95FD4F: mov     eax, [eax+esi*4]
0x95FD52: push    ebp; int
0x95FD53: push    ecx; int
0x95FD54: mov     ecx, [esp+1Ch+arg_18]
0x95FD58: push    edx; int
0x95FD59: mov     edx, [esp+20h+arg_14]
0x95FD5D: push    ecx; int
0x95FD5E: mov     ecx, [esp+24h+arg_10]
0x95FD62: push    edx; int
0x95FD63: mov     edx, [esp+28h+arg_8]
0x95FD67: push    ecx; int
0x95FD68: push    eax; int
0x95FD69: push    edx; int
0x95FD6A: push    ebx; int
0x95FD6B: push    ecx
0x95FD6C: fstp    [esp+3Ch+var_3C]; float
0x95FD6F: call    sub_95D9B0
0x95FD74: add     esp, 28h
0x95FD77: test    al, al
0x95FD79: jnz     short loc_95FDA5
0x95FD7B: movzx   eax, word ptr [edi+0Eh]
0x95FD7F: add     esi, 1
0x95FD82: cmp     esi, eax
0x95FD84: jb      short loc_95FD40
0x95FD86: mov     eax, [esp+14h+var_4]
0x95FD8A: mov     ecx, [esp+14h+arg_4]
0x95FD8E: movzx   edx, word ptr [ecx+0Eh]
0x95FD92: add     eax, 1
0x95FD95: cmp     eax, edx
0x95FD97: mov     [esp+14h+var_4], eax
0x95FD9B: jb      short loc_95FD30
0x95FD9D: pop     edi
0x95FD9E: pop     esi
0x95FD9F: pop     ebp
0x95FDA0: xor     al, al
0x95FDA2: pop     ebx
0x95FDA3: pop     ecx
0x95FDA4: retn
0x95FDA5: mov     eax, [esp+14h+var_4]
0x95FDA9: mov     ecx, [esp+14h+arg_4]
0x95FDAD: mov     [ecx+14h], eax
0x95FDB0: mov     [edi+14h], esi
0x95FDB3: pop     edi
0x95FDB4: pop     esi
0x95FDB5: pop     ebp
0x95FDB6: mov     al, 1
0x95FDB8: pop     ebx
0x95FDB9: pop     ecx
0x95FDBA: retn
