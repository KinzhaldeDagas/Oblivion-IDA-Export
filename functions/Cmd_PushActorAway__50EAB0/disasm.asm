0x50EAB0: sub     esp, 0Ch
0x50EAB3: mov     edx, [esp+0Ch+l]
0x50EAB7: push    ebx
0x50EAB8: push    ebp
0x50EAB9: mov     ebp, [esp+14h+a4]
0x50EABD: push    esi
0x50EABE: push    edi
0x50EABF: lea     eax, [esp+1Ch+var_8]
0x50EAC3: push    eax
0x50EAC4: mov     eax, [esp+20h+arg_10]
0x50EAC8: lea     ecx, [esp+20h+var_C]
0x50EACC: push    ecx; UInt16
0x50EACD: mov     ecx, [esp+24h+arg_C]
0x50EAD1: push    edx; l
0x50EAD2: mov     edx, [esp+28h+a3]
0x50EAD6: push    eax; a6
0x50EAD7: mov     eax, [esp+2Ch+arg_4]
0x50EADB: push    ecx; a5
0x50EADC: mov     ecx, [esp+30h+a1]
0x50EAE0: push    ebp; a4
0x50EAE1: push    edx; a3
0x50EAE2: push    eax; a2
0x50EAE3: xor     edi, edi
0x50EAE5: push    ecx; a1
0x50EAE6: mov     dword ptr [esp+40h+var_C], edi
0x50EAEA: mov     [esp+40h+var_8], edi
0x50EAEE: call    Script_ExtractArgs
0x50EAF3: add     esp, 24h
0x50EAF6: test    al, al
0x50EAF8: jnz     short loc_50EB02
0x50EAFA: pop     edi
0x50EAFB: pop     esi
0x50EAFC: pop     ebp
0x50EAFD: pop     ebx
0x50EAFE: add     esp, 0Ch
0x50EB01: retn
0x50EB02: mov     edx, [ebp+0]
0x50EB05: mov     eax, [edx+190h]
0x50EB0B: mov     ecx, ebp
0x50EB0D: call    eax
0x50EB0F: test    al, al
0x50EB11: jz      loc_50EBB8
0x50EB17: mov     ecx, dword ptr [esp+1Ch+var_C]
0x50EB1B: mov     edx, [ecx]
0x50EB1D: mov     eax, [edx+190h]
0x50EB23: call    eax
0x50EB25: test    al, al
0x50EB27: jz      loc_50EBB8
0x50EB2D: mov     edx, [esp+1Ch+var_8]
0x50EB31: mov     ecx, dword ptr [esp+1Ch+var_C]; this
0x50EB35: push    edx; int
0x50EB36: mov     esi, ecx
0x50EB38: call    Actor_GetFatigueFraction
0x50EB3D: mov     eax, [esi]
0x50EB3F: mov     edx, [eax+284h]
0x50EB45: push    ecx
0x50EB46: fstp    [esp+24h+var_24]
0x50EB49: push    7
0x50EB4B: mov     ecx, esi
0x50EB4D: call    edx
0x50EB4F: push    eax; float
0x50EB50: mov     eax, [esi]
0x50EB52: mov     edx, [eax+284h]
0x50EB58: push    3; int
0x50EB5A: mov     ecx, esi
0x50EB5C: call    edx
0x50EB5E: push    eax; int
0x50EB5F: call    Calc_KnockbackFactor
0x50EB64: fstp    [esp+2Ch+var_4]
0x50EB68: mov     ebx, [esi+58h]
0x50EB6B: add     esp, 10h
0x50EB6E: cmp     ebx, edi
0x50EB70: jz      short loc_50EBB8
0x50EB72: mov     eax, [ebx]
0x50EB74: mov     edx, [eax+8]
0x50EB77: mov     ecx, ebx
0x50EB79: call    edx
0x50EB7B: test    eax, eax
0x50EB7D: jnz     short loc_50EBB8
0x50EB7F: mov     eax, [ebp+0]
0x50EB82: mov     edi, [ebx]
0x50EB84: mov     edx, [eax+174h]
0x50EB8A: mov     ecx, ebp
0x50EB8C: add     edi, 2F0h
0x50EB92: call    edx
0x50EB94: fld     [esp+1Ch+var_4]
0x50EB98: mov     edx, [eax]
0x50EB9A: sub     esp, 10h
0x50EB9D: mov     ecx, esp
0x50EB9F: fstp    [esp+2Ch+var_20]
0x50EBA3: mov     [ecx], edx
0x50EBA5: mov     edx, [eax+4]
0x50EBA8: mov     eax, [eax+8]
0x50EBAB: mov     [ecx+4], edx
0x50EBAE: mov     edx, [edi]
0x50EBB0: mov     [ecx+8], eax
0x50EBB3: push    esi
0x50EBB4: mov     ecx, ebx
0x50EBB6: call    edx
0x50EBB8: pop     edi
0x50EBB9: pop     esi
0x50EBBA: pop     ebp
0x50EBBB: mov     al, 1
0x50EBBD: pop     ebx
0x50EBBE: add     esp, 0Ch
0x50EBC1: retn
