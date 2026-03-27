0x88DC10: push    ebp
0x88DC11: mov     ebp, esp
0x88DC13: and     esp, 0FFFFFFF0h
0x88DC16: push    0FFFFFFFFh
0x88DC18: push    offset SEH_88DC10
0x88DC1D: mov     eax, large fs:0
0x88DC23: push    eax
0x88DC24: sub     esp, 498h
0x88DC2A: mov     eax, ds:0B30AACh
0x88DC2F: xor     eax, esp
0x88DC31: mov     [esp+4A4h+var_14], eax
0x88DC38: push    ebx
0x88DC39: push    esi
0x88DC3A: push    edi
0x88DC3B: mov     eax, ds:0B30AACh
0x88DC40: xor     eax, esp
0x88DC42: push    eax
0x88DC43: lea     eax, [esp+4B4h+var_C]
0x88DC4A: mov     large fs:0, eax
0x88DC50: mov     eax, ecx
0x88DC52: mov     ecx, [eax+8]
0x88DC55: xor     esi, esi
0x88DC57: cmp     ecx, esi
0x88DC59: mov     [esp+4B4h+var_49C], eax
0x88DC5D: jz      short loc_88DC67
0x88DC5F: mov     ebx, [ecx+2B0h]
0x88DC65: jmp     short loc_88DC69
0x88DC67: xor     ebx, ebx
0x88DC69: cmp     ebx, esi
0x88DC6B: jz      loc_88DEFD
0x88DC71: movaps  xmm0, xmmword ptr [eax+70h]
0x88DC75: movaps  xmm1, xmmword ptr [eax+80h]
0x88DC7C: mov     ecx, [eax+30h]
0x88DC7F: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x88DC83: shufps  xmm1, xmm1, 0AAh ; 'ª'
0x88DC87: subss   xmm1, xmm0
0x88DC8B: movss   dword ptr [esp+4B4h+var_480], xmm1
0x88DC91: fld     dword ptr [esp+4B4h+var_480]
0x88DC95: fst     [esp+4B4h+var_498]
0x88DC99: and     ecx, 0FFFFFFDBh
0x88DC9C: fld     dword ptr ds:0A96318h
0x88DCA2: or      ecx, 1Bh
0x88DCA5: fcom    st(1)
0x88DCA7: mov     [esp+4B4h+var_494], ecx
0x88DCAB: fnstsw  ax
0x88DCAD: fstp    st(1)
0x88DCAF: test    ah, 41h
0x88DCB2: jnz     short loc_88DCBA
0x88DCB4: fstp    [esp+4B4h+var_498]
0x88DCB8: jmp     short loc_88DCBC
0x88DCBA: fstp    st
0x88DCBC: fldz
0x88DCBE: push    offset sub_4F5E90; a5
0x88DCC3: fst     dword ptr [esp+4B8h+var_480]
0x88DCC7: push    offset sub_535980; a4
0x88DCCC: fst     dword ptr [esp+4BCh+var_480+4]
0x88DCD0: push    9; size
0x88DCD2: fld     [esp+4C0h+var_498]
0x88DCD6: push    40h ; '@'; a2
0x88DCD8: fmul    qword ptr ds:0A3F400h
0x88DCDE: lea     eax, [esp+4C4h+a1]
0x88DCE5: push    eax; a1
0x88DCE6: fstp    dword ptr [esp+4C8h+var_480+8]
0x88DCEA: fstp    dword ptr [esp+4C8h+var_480+0Ch]
0x88DCEE: call    ArrayConstructor
0x88DCF3: movaps  xmm2, [esp+4B4h+var_480]
0x88DCF8: mov     [esp+4B4h+var_4], esi
0x88DCFF: mov     [esp+4B4h+var_3EC], esi
0x88DD06: mov     [esp+4B4h+var_3BC], esi
0x88DD0D: mov     [esp+4B4h+var_38C], esi
0x88DD14: mov     [esp+4B4h+var_35C], esi
0x88DD1B: mov     [esp+4B4h+var_32C], esi
0x88DD22: mov     [esp+4B4h+var_2FC], esi
0x88DD29: mov     [esp+4B4h+var_2CC], esi
0x88DD30: mov     [esp+4B4h+var_29C], esi
0x88DD37: mov     [esp+4B4h+var_26C], esi
0x88DD3E: mov     [esp+4B4h+var_3F0], 0
0x88DD46: mov     [esp+4B4h+var_3C0], 0
0x88DD4E: mov     [esp+4B4h+var_390], 0
0x88DD56: mov     [esp+4B4h+var_360], 0
0x88DD5E: mov     [esp+4B4h+var_330], 0
0x88DD66: mov     [esp+4B4h+var_300], 0
0x88DD6E: mov     [esp+4B4h+var_2D0], 0
0x88DD76: mov     [esp+4B4h+var_2A0], 0
0x88DD7E: mov     [esp+4B4h+var_270], 0
0x88DD86: lea     edi, [esp+4B4h+var_410]
0x88DD8D: mov     esi, offset unk_B2E555
0x88DD92: movzx   ecx, byte ptr [esi]
0x88DD95: mov     al, [esi-1]
0x88DD98: push    ecx
0x88DD99: movzx   eax, al
0x88DD9C: push    0
0x88DD9E: push    eax
0x88DD9F: lea     ecx, [esp+4C0h+var_470]
0x88DDA3: push    ecx
0x88DDA4: mov     ecx, [esp+4C4h+var_49C]
0x88DDA8: call    sub_88D5E0
0x88DDAD: movaps  xmm0, [esp+4B4h+var_470]
0x88DDB2: mov     edx, [esp+4B4h+var_494]
0x88DDB6: movaps  xmm1, xmm2
0x88DDB9: addps   xmm1, xmm0
0x88DDBC: mov     [edi+24h], edx
0x88DDBF: movaps  xmmword ptr [edi], xmm0
0x88DDC2: movaps  xmmword ptr [edi+10h], xmm1
0x88DDC6: add     esi, 2
0x88DDC9: add     edi, 30h ; '0'
0x88DDCC: cmp     esi, offset unk_B2E567
0x88DDD2: jl      short loc_88DD92
0x88DDD4: xor     eax, eax
0x88DDD6: mov     [esp+4B4h+var_460], offset ??_7hkWorldRayCaster@@6B@; const hkWorldRayCaster::`vftable'
0x88DDDE: mov     [esp+4B4h+var_420], eax
0x88DDE5: mov     [esp+4B4h+var_41C], eax
0x88DDEC: mov     eax, [ebx]
0x88DDEE: mov     edx, [eax+58h]
0x88DDF1: mov     ecx, ebx
0x88DDF3: mov     byte ptr [esp+4B4h+var_4], 1
0x88DDFB: call    edx
0x88DDFD: mov     eax, [ebx]
0x88DDFF: mov     edx, [eax+58h]
0x88DE02: mov     ecx, ebx
0x88DE04: call    edx
0x88DE06: mov     esi, [eax+78h]
0x88DE09: mov     eax, [ebx]
0x88DE0B: mov     edx, [eax+58h]
0x88DE0E: mov     ecx, ebx
0x88DE10: call    edx
0x88DE12: mov     eax, [eax+64h]
0x88DE15: push    40h ; '@'
0x88DE17: lea     ecx, [esp+4B8h+a1]
0x88DE1E: push    ecx
0x88DE1F: push    esi
0x88DE20: push    9
0x88DE22: lea     edx, [esp+4C4h+var_410]
0x88DE29: push    edx
0x88DE2A: push    eax
0x88DE2B: lea     ecx, [esp+4CCh+var_460]
0x88DE2F: call    sub_8BA2C0
0x88DE34: mov     eax, [ebx]
0x88DE36: mov     edx, [eax+58h]
0x88DE39: mov     ecx, ebx
0x88DE3B: call    edx
0x88DE3D: mov     ebx, [esp+4B4h+var_49C]
0x88DE41: lea     esi, [esp+4B4h+var_410]
0x88DE48: lea     edi, [esp+4B4h+var_230]
0x88DE4F: add     ebx, 0B8h ; '¸'
0x88DE55: mov     [esp+4B4h+var_49C], 9
0x88DE5D: mov     ecx, [edi]
0x88DE5F: test    ecx, ecx
0x88DE61: setnz   al
0x88DE64: test    al, al
0x88DE66: jz      short loc_88DE94
0x88DE68: movaps  xmm0, xmmword ptr [esi]
0x88DE6B: fld     dword ptr [edi-0Ch]
0x88DE6E: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x88DE72: movss   [esp+4B4h+var_490], xmm0
0x88DE78: movaps  xmm0, [esp+4B4h+var_480]
0x88DE7D: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x88DE81: movss   dword ptr [esp+4B4h+var_470], xmm0
0x88DE87: fmul    dword ptr [esp+4B4h+var_470]
0x88DE8B: mov     [ebx-4], ecx
0x88DE8E: fadd    [esp+4B4h+var_490]
0x88DE92: jmp     short loc_88DEA1
0x88DE94: fld     dword ptr ds:0A6D2D8h
0x88DE9A: mov     dword ptr [ebx-4], 0
0x88DEA1: neg     al
0x88DEA3: fstp    dword ptr [ebx]
0x88DEA5: mov     ecx, ds:0BA7DA0h
0x88DEAB: push    0
0x88DEAD: sbb     eax, eax
0x88DEAF: and     eax, 7E7F80h
0x88DEB4: add     eax, 0FF808080h
0x88DEB9: push    eax
0x88DEBA: lea     eax, [esi+10h]
0x88DEBD: push    eax
0x88DEBE: push    esi
0x88DEBF: call    sub_8A78E0
0x88DEC4: add     ebx, 8
0x88DEC7: add     edi, 40h ; '@'
0x88DECA: add     esi, 30h ; '0'
0x88DECD: sub     [esp+4B4h+var_49C], 1
0x88DED2: jnz     short loc_88DE5D
0x88DED4: push    offset sub_4F5E90; void (__thiscall *)(void *)
0x88DED9: push    9; int
0x88DEDB: push    40h ; '@'; unsigned int
0x88DEDD: lea     ecx, [esp+4C0h+a1]
0x88DEE4: push    ecx; void *
0x88DEE5: mov     [esp+4C4h+var_460], offset ??_7hkBroadPhaseCastCollector@@6B@; const hkBroadPhaseCastCollector::`vftable'
0x88DEED: mov     [esp+4C4h+var_4], 0FFFFFFFFh
0x88DEF8: call    $LN21
0x88DEFD: mov     ecx, [esp+4B4h+var_C]
0x88DF04: mov     large fs:0, ecx
0x88DF0B: pop     ecx
0x88DF0C: pop     edi
0x88DF0D: pop     esi
0x88DF0E: pop     ebx
0x88DF0F: mov     ecx, [esp+4A4h+var_14]
0x88DF16: xor     ecx, esp
0x88DF18: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88DF1D: mov     esp, ebp
0x88DF1F: pop     ebp
0x88DF20: retn
