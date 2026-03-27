0x570B40: push    ebp
0x570B41: mov     ebp, esp
0x570B43: and     esp, 0FFFFFFF8h
0x570B46: sub     esp, 14h
0x570B49: fld     dword ptr ds:0A30634h
0x570B4F: mov     [esp+14h+var_10], ecx
0x570B53: mov     ecx, [ebp+8]
0x570B56: fstp    [esp+14h+var_14]
0x570B59: mov     edx, [ecx+0Ch]
0x570B5C: test    edx, edx
0x570B5E: push    ebx
0x570B5F: push    esi
0x570B60: push    edi
0x570B61: jz      short loc_570B87
0x570B63: fld     dword ptr [edx+18h]
0x570B66: fsub    dword ptr [edx+14h]
0x570B69: fld     [esp+20h+var_14]
0x570B6D: fcom    st(1)
0x570B6F: fnstsw  ax
0x570B71: test    ah, 41h
0x570B74: jnz     short loc_570B7A
0x570B76: fstp    st(1)
0x570B78: jmp     short loc_570B7C
0x570B7A: fstp    st
0x570B7C: mov     edx, [edx+34h]
0x570B7F: fstp    [esp+20h+var_14]
0x570B83: test    edx, edx
0x570B85: jnz     short loc_570B63
0x570B87: mov     eax, [ecx]
0x570B89: mov     edx, [eax+8]
0x570B8C: call    edx
0x570B8E: mov     ebx, eax
0x570B90: test    ebx, ebx
0x570B92: jz      short loc_570BF1
0x570B94: movzx   eax, word ptr [ebx+0B8h]
0x570B9B: xor     edi, edi
0x570B9D: test    eax, eax
0x570B9F: mov     [esp+14h+var_s0], eax
0x570BA3: jle     short loc_570BF1
0x570BA5: movzx   eax, word ptr [ebx+0B6h]
0x570BAC: cmp     eax, edi
0x570BAE: jbe     short loc_570BE8
0x570BB0: mov     ecx, [ebx+0B0h]
0x570BB6: mov     esi, [ecx+edi*4]
0x570BB9: test    esi, esi
0x570BBB: jz      short loc_570BE8
0x570BBD: fld     dword ptr [esp+14h+var_8]
0x570BC1: mov     ecx, dword ptr [esp+14h+var_8+4]
0x570BC5: push    esi
0x570BC6: fstp    qword ptr [esp+1Ch]
0x570BCA: call    sub_570B40
0x570BCF: fcomp   qword ptr [esp+18h]
0x570BD3: fnstsw  ax
0x570BD5: test    ah, 5
0x570BD8: jnp     short loc_570BE8
0x570BDA: mov     ecx, dword ptr [esp+14h+var_8+4]
0x570BDE: push    esi
0x570BDF: call    sub_570B40
0x570BE4: fstp    dword ptr [esp+14h+var_8]
0x570BE8: add     edi, 1
0x570BEB: cmp     edi, [esp+14h+var_s0]
0x570BEF: jl      short loc_570BA5
0x570BF1: fld     dword ptr [esp+14h+var_8]
0x570BF5: pop     edi
0x570BF6: pop     esi
0x570BF7: pop     ebx
0x570BF8: mov     esp, ebp
0x570BFA: pop     ebp
0x570BFB: retn    4
