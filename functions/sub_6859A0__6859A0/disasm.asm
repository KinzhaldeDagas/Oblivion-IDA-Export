0x6859A0: push    ebp
0x6859A1: mov     ebp, esp
0x6859A3: and     esp, 0FFFFFFF0h
0x6859A6: push    0FFFFFFFFh
0x6859A8: push    offset SEH_6859A0
0x6859AD: mov     eax, large fs:0
0x6859B3: push    eax
0x6859B4: sub     esp, 0F8h
0x6859BA: mov     eax, ds:0B30AACh
0x6859BF: xor     eax, esp
0x6859C1: mov     [esp+104h+var_14], eax
0x6859C8: push    ebx
0x6859C9: push    esi
0x6859CA: push    edi
0x6859CB: mov     eax, ds:0B30AACh
0x6859D0: xor     eax, esp
0x6859D2: push    eax
0x6859D3: lea     eax, [esp+114h+var_C]
0x6859DA: mov     large fs:0, eax
0x6859E0: mov     esi, [ebp+arg_0]
0x6859E3: mov     edi, [ebp+arg_4]
0x6859E6: xor     ebx, ebx
0x6859E8: cmp     ds:0B3C089h, bl
0x6859EE: jz      short loc_6859F7
0x6859F0: mov     al, 1
0x6859F2: jmp     loc_685BB2
0x6859F7: cmp     ds:0B33A1Ch, ebx
0x6859FD: jz      short loc_685A72
0x6859FF: mov     ecx, ds:0B333A0h
0x685A05: cmp     [ecx+34h], ebx
0x685A08: jnz     short loc_685A78
0x685A0A: call    TES__GetCurrentWorldspace
0x685A0F: test    eax, eax
0x685A11: jz      short loc_685A72
0x685A13: mov     ecx, ds:0B333A0h
0x685A19: push    esi; float *
0x685A1A: call    TES__GetCurrentWorldspace
0x685A1F: mov     ecx, eax; this
0x685A21: call    TESWorldSpace__GetCellAtPos
0x685A26: cmp     eax, ebx
0x685A28: mov     [esp+114h+var_100], eax
0x685A2C: jz      short loc_685A6B
0x685A2E: mov     ecx, ds:0B33A1Ch
0x685A34: push    eax
0x685A35: call    sub_43E000
0x685A3A: test    al, al
0x685A3C: jnz     short loc_685A6B
0x685A3E: mov     ecx, ds:0B333A0h
0x685A44: push    edi; float *
0x685A45: call    TES__GetCurrentWorldspace
0x685A4A: mov     ecx, eax; this
0x685A4C: call    TESWorldSpace__GetCellAtPos
0x685A51: cmp     eax, [esp+114h+var_100]
0x685A55: jz      short loc_685A72
0x685A57: cmp     eax, ebx
0x685A59: jz      short loc_685A6B
0x685A5B: mov     ecx, ds:0B33A1Ch
0x685A61: push    eax
0x685A62: call    sub_43E000
0x685A67: test    al, al
0x685A69: jz      short loc_685A72
0x685A6B: xor     al, al
0x685A6D: jmp     loc_685BB2
0x685A72: mov     ecx, ds:0B333A0h; this
0x685A78: fld1
0x685A7A: mov     [esp+114h+var_60], offset ??_7hkClosestRayHitCollector@@6B@; const hkClosestRayHitCollector::`vftable'
0x685A85: fst     [esp+114h+var_3C]
0x685A8C: mov     [esp+114h+var_30], ebx
0x685A93: fst     [esp+114h+var_5C]
0x685A9A: fstp    [esp+114h+a2.WorldRayCastOutput.HitFraction]
0x685A9E: fld     dword ptr [edi]
0x685AA0: lea     edx, [esp+114h+a2]
0x685AA4: fsub    dword ptr [esi]
0x685AA6: lea     eax, [esp+114h+var_60]
0x685AAD: push    edx; a2
0x685AAE: mov     [esp+118h+var_4], ebx
0x685AB5: mov     [esp+118h+a2.WorldRayCastInput.EnableShapeCollectionFilter], bl
0x685AB9: fstp    [esp+118h+var_FC]
0x685ABD: mov     [esp+118h+a2.WorldRayCastOutput.RootCollidable], ebx
0x685AC4: fld     dword ptr [edi+4]
0x685AC7: mov     [esp+118h+a2.BroadPhaseAabbCache], ebx
0x685ACE: fsub    dword ptr [esi+4]
0x685AD1: mov     [esp+118h+a2.WorldRayCastInput.FilterInfo], 0FFFF001Bh
0x685AD9: mov     [esp+118h+a2.RayHitCollector1], eax
0x685AE0: mov     [esp+118h+a2.RayHitCollector2], ebx
0x685AE7: fstp    [esp+118h+var_F8]
0x685AEB: fld     dword ptr [edi+8]
0x685AEE: fsub    dword ptr [esi+8]
0x685AF1: fstp    [esp+118h+var_F4]
0x685AF5: fld     dword ptr [esi]
0x685AF7: fld     qword ptr ds:0A39088h
0x685AFD: fmul    st(1), st
0x685AFF: fxch    st(1)
0x685B01: fstp    dword ptr [esp+118h+var_F0]
0x685B05: fld     dword ptr [esi+4]
0x685B08: fmul    st, st(1)
0x685B0A: fstp    dword ptr [esp+118h+var_F0+4]
0x685B0E: fld     dword ptr [esi+8]
0x685B11: fmul    st, st(1)
0x685B13: fstp    dword ptr [esp+118h+var_F0+8]
0x685B17: movaps  xmm0, [esp+118h+var_F0]
0x685B1C: fld     [esp+118h+var_FC]
0x685B20: movaps  xmmword ptr [esp+118h+a2.WorldRayCastInput.From.x], xmm0
0x685B25: fmul    st, st(1)
0x685B27: fstp    dword ptr [esp+118h+var_F0]
0x685B2B: fld     [esp+118h+var_F8]
0x685B2F: fmul    st, st(1)
0x685B31: fstp    dword ptr [esp+118h+var_F0+4]
0x685B35: fmul    [esp+118h+var_F4]
0x685B39: fstp    dword ptr [esp+118h+var_F0+8]
0x685B3D: movaps  xmm0, [esp+118h+var_F0]
0x685B42: movaps  xmmword ptr [esp+118h+a2.unk60.x], xmm0
0x685B4A: call    TES__CastRay
0x685B4F: cmp     [esp+114h+a2.WorldRayCastOutput.RootCollidable], ebx
0x685B56: jz      short loc_685BAE
0x685B58: fld     [esp+114h+var_F8]
0x685B5C: fld     [esp+114h+var_FC]
0x685B60: fld     [esp+114h+var_F4]
0x685B64: fld     st(2)
0x685B66: fmulp   st(3), st
0x685B68: fld     st(1)
0x685B6A: fmulp   st(2), st
0x685B6C: fxch    st(2)
0x685B6E: faddp   st(1), st
0x685B70: fld     st(1)
0x685B72: fmulp   st(2), st
0x685B74: faddp   st(1), st
0x685B76: fstp    [esp+114h+var_100]
0x685B7A: fld     [esp+114h+var_100]
0x685B7E: call    __CIsqrt
0x685B83: fstp    [esp+114h+var_100]
0x685B87: fld     [esp+114h+var_100]
0x685B8B: fstp    [esp+114h+var_100]
0x685B8F: fld     [esp+114h+var_100]
0x685B93: fld     [esp+114h+a2.WorldRayCastOutput.HitFraction]
0x685B97: fmul    st, st(1)
0x685B99: fstp    [esp+114h+var_100]
0x685B9D: fsub    [esp+114h+var_100]
0x685BA1: fcomp   qword ptr ds:0A3F3E8h
0x685BA7: fnstsw  ax
0x685BA9: test    ah, 5
0x685BAC: jp      short loc_685BB0
0x685BAE: mov     bl, 1
0x685BB0: mov     al, bl
0x685BB2: mov     ecx, [esp+114h+var_C]
0x685BB9: mov     large fs:0, ecx
0x685BC0: pop     ecx
0x685BC1: pop     edi
0x685BC2: pop     esi
0x685BC3: pop     ebx
0x685BC4: mov     ecx, [esp+104h+var_14]
0x685BCB: xor     ecx, esp
0x685BCD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x685BD2: mov     esp, ebp
0x685BD4: pop     ebp
0x685BD5: retn
