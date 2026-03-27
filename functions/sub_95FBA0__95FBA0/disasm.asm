0x95FBA0: mov     eax, [esp+arg_4]
0x95FBA4: push    ebx
0x95FBA5: push    ebp
0x95FBA6: xor     ebp, ebp
0x95FBA8: cmp     [eax+0Eh], bp
0x95FBAC: push    esi
0x95FBAD: push    edi
0x95FBAE: jbe     short loc_95FC02
0x95FBB0: mov     edi, [esp+10h+arg_C]
0x95FBB4: mov     ecx, [eax+8]
0x95FBB7: mov     ebx, [ecx+ebp*4]
0x95FBBA: xor     esi, esi
0x95FBBC: cmp     [edi+0Eh], si
0x95FBC0: jbe     short loc_95FBF7
0x95FBC2: mov     edx, [edi+8]
0x95FBC5: fld     [esp+10h+arg_0]
0x95FBC9: mov     ecx, [esp+10h+arg_10]
0x95FBCD: mov     eax, [edx+esi*4]
0x95FBD0: mov     edx, [esp+10h+arg_8]
0x95FBD4: push    ecx; int
0x95FBD5: push    eax; int
0x95FBD6: push    edx; int
0x95FBD7: push    ebx; int
0x95FBD8: push    ecx
0x95FBD9: fstp    [esp+24h+var_24]; float
0x95FBDC: call    sub_95D920
0x95FBE1: add     esp, 14h
0x95FBE4: test    al, al
0x95FBE6: jnz     short loc_95FC09
0x95FBE8: movzx   eax, word ptr [edi+0Eh]
0x95FBEC: add     esi, 1
0x95FBEF: cmp     esi, eax
0x95FBF1: jb      short loc_95FBC2
0x95FBF3: mov     eax, [esp+10h+arg_4]
0x95FBF7: movzx   ecx, word ptr [eax+0Eh]
0x95FBFB: add     ebp, 1
0x95FBFE: cmp     ebp, ecx
0x95FC00: jb      short loc_95FBB4
0x95FC02: pop     edi
0x95FC03: pop     esi
0x95FC04: pop     ebp
0x95FC05: xor     al, al
0x95FC07: pop     ebx
0x95FC08: retn
0x95FC09: mov     edx, [esp+10h+arg_4]
0x95FC0D: mov     [edx+14h], ebp
0x95FC10: mov     [edi+14h], esi
0x95FC13: pop     edi
0x95FC14: pop     esi
0x95FC15: pop     ebp
0x95FC16: mov     al, 1
0x95FC18: pop     ebx
0x95FC19: retn
