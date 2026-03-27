0x62EAA0: sub     esp, 8
0x62EAA3: push    ebx
0x62EAA4: mov     ebx, [esp+0Ch+arg_0]
0x62EAA8: test    ebx, ebx
0x62EAAA: jz      loc_62EBE9
0x62EAB0: mov     eax, [ebx+8]
0x62EAB3: mov     ecx, eax
0x62EAB5: shr     ecx, 5
0x62EAB8: test    cl, 1
0x62EABB: jnz     loc_62EBE9
0x62EAC1: mov     edx, eax
0x62EAC3: shr     edx, 0Eh
0x62EAC6: test    dl, 1
0x62EAC9: jnz     loc_62EBE9
0x62EACF: shr     eax, 0Bh
0x62EAD2: test    al, 1
0x62EAD4: jnz     loc_62EBE9
0x62EADA: push    ebp
0x62EADB: mov     ebp, [esp+10h+arg_4]
0x62EADF: test    ebp, ebp
0x62EAE1: jz      short loc_62EAF2
0x62EAE3: push    ebx
0x62EAE4: mov     ecx, offset unk_B3B94C
0x62EAE9: call    sub_446C30
0x62EAEE: test    al, al
0x62EAF0: jz      short loc_62EAFA
0x62EAF2: pop     ebp
0x62EAF3: xor     al, al
0x62EAF5: pop     ebx
0x62EAF6: add     esp, 8
0x62EAF9: retn
0x62EAFA: push    esi
0x62EAFB: mov     esi, [ebp+58h]
0x62EAFE: mov     eax, [esi]
0x62EB00: mov     edx, [eax+174h]
0x62EB06: mov     ecx, esi
0x62EB08: call    edx
0x62EB0A: test    eax, eax
0x62EB0C: jz      short loc_62EB1C
0x62EB0E: mov     eax, [esi]
0x62EB10: mov     edx, [eax+174h]
0x62EB16: mov     ecx, esi
0x62EB18: call    edx
0x62EB1A: jmp     short loc_62EB22
0x62EB1C: mov     eax, [ebp+58h]
0x62EB1F: mov     eax, [eax+8]
0x62EB22: test    eax, eax
0x62EB24: jz      loc_62EBE0
0x62EB2A: mov     edx, [esi]
0x62EB2C: push    edi
0x62EB2D: mov     edi, [eax+18h]
0x62EB30: mov     eax, [edx+180h]
0x62EB36: mov     ecx, esi
0x62EB38: call    eax
0x62EB3A: mov     ecx, ds:0B152B0h[edi*4]
0x62EB41: cmp     dword ptr [ecx+eax*4], 1
0x62EB45: pop     edi
0x62EB46: jnz     loc_62EBE0
0x62EB4C: mov     ecx, ebp; this
0x62EB4E: call    TESObjectREFR_GetParentCell
0x62EB53: test    eax, eax
0x62EB55: jz      short loc_62EBAF
0x62EB57: mov     ecx, ebp; this
0x62EB59: call    TESObjectREFR_GetParentCell
0x62EB5E: mov     ecx, eax; this
0x62EB60: call    TESObjectCELL_IsInterior
0x62EB65: test    al, al
0x62EB67: jz      short loc_62EBAF
0x62EB69: mov     edx, [ebx]
0x62EB6B: mov     eax, [edx+174h]
0x62EB71: mov     ecx, ebx
0x62EB73: call    eax
0x62EB75: fld     dword ptr [eax+8]
0x62EB78: mov     edx, [ebp+0]
0x62EB7B: fstp    [esp+14h+var_8]
0x62EB7F: mov     eax, [edx+174h]
0x62EB85: mov     ecx, ebp
0x62EB87: call    eax
0x62EB89: fld     dword ptr [eax+8]
0x62EB8C: fsubr   [esp+14h+var_8]
0x62EB90: fstp    [esp+14h+arg_0]
0x62EB94: fld     [esp+14h+arg_0]
0x62EB98: fabs
0x62EB9A: fstp    [esp+14h+arg_0]
0x62EB9E: fld     [esp+14h+arg_0]
0x62EBA2: fcomp   dword ptr ds:0A6B324h
0x62EBA8: fnstsw  ax
0x62EBAA: test    ah, 41h
0x62EBAD: jz      short loc_62EBE0
0x62EBAF: mov     edx, [ebx]
0x62EBB1: mov     eax, [edx+190h]
0x62EBB7: mov     ecx, ebx
0x62EBB9: call    eax
0x62EBBB: test    al, al
0x62EBBD: jnz     short loc_62EBE0
0x62EBBF: mov     edx, [ebx]
0x62EBC1: mov     eax, [edx+170h]
0x62EBC7: mov     ecx, ebx
0x62EBC9: call    eax
0x62EBCB: cmp     dword ptr [eax+0Ch], 20h ; ' '
0x62EBCF: jnz     short loc_62EBE0
0x62EBD1: pop     esi
0x62EBD2: pop     ebp
0x62EBD3: mov     ds:0B3B928h, ebx
0x62EBD9: mov     al, 1
0x62EBDB: pop     ebx
0x62EBDC: add     esp, 8
0x62EBDF: retn
0x62EBE0: pop     esi
0x62EBE1: pop     ebp
0x62EBE2: xor     al, al
0x62EBE4: pop     ebx
0x62EBE5: add     esp, 8
0x62EBE8: retn
0x62EBE9: xor     al, al
0x62EBEB: pop     ebx
0x62EBEC: add     esp, 8
0x62EBEF: retn
