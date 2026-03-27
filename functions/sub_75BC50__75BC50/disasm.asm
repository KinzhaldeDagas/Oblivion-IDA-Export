0x75BC50: push    ecx
0x75BC51: push    ebx
0x75BC52: mov     ebx, ecx
0x75BC54: cmp     byte ptr [ebx+18h], 0
0x75BC58: push    esi
0x75BC59: push    edi
0x75BC5A: jz      loc_75BD1C
0x75BC60: cmp     dword ptr [ebx+1Ch], 0
0x75BC64: jz      loc_75BD1C
0x75BC6A: mov     edi, [esp+10h+arg_4]
0x75BC6E: movzx   ecx, word ptr [edi+48h]
0x75BC72: test    cx, cx
0x75BC75: mov     [esp+10h+arg_4], ecx
0x75BC79: jbe     loc_75BD7E
0x75BC7F: fld     [esp+10h+arg_0]
0x75BC83: lea     eax, [ecx-1]
0x75BC86: movzx   esi, ax
0x75BC89: push    ebp
0x75BC8A: movzx   eax, si
0x75BC8D: fld     st
0x75BC8F: lea     edx, ds:0[eax*8]
0x75BC96: sub     edx, eax
0x75BC98: mov     eax, [edi+5Ch]
0x75BC9B: lea     edx, [eax+edx*4]
0x75BC9E: fsub    dword ptr [edx+14h]
0x75BCA1: fadd    dword ptr [edx+0Ch]
0x75BCA4: fstp    [esp+14h+var_4]
0x75BCA8: fld     [esp+14h+var_4]
0x75BCAC: fst     dword ptr [edx+0Ch]
0x75BCAF: fld     dword ptr [edx+10h]
0x75BCB2: fcomp   st(1)
0x75BCB4: fnstsw  ax
0x75BCB6: test    ah, 5
0x75BCB9: jp      short loc_75BCF7
0x75BCBB: fld     dword ptr [edx+10h]
0x75BCBE: mov     ebp, [ebx+10h]
0x75BCC1: mov     ecx, [ebx+1Ch]
0x75BCC4: fadd    st, st(2)
0x75BCC6: mov     eax, [ecx]
0x75BCC8: mov     edx, [eax+5Ch]
0x75BCCB: fsubrp  st(1), st
0x75BCCD: push    ebp
0x75BCCE: push    esi
0x75BCCF: sub     esp, 8
0x75BCD2: fstp    [esp+24h+var_4]
0x75BCD6: fld     [esp+24h+var_4]
0x75BCDA: fstp    [esp+24h+var_20]
0x75BCDE: fstp    [esp+24h+var_24]
0x75BCE1: call    edx
0x75BCE3: mov     eax, [edi]
0x75BCE5: mov     edx, [eax+58h]
0x75BCE8: push    esi
0x75BCE9: mov     ecx, edi
0x75BCEB: call    edx
0x75BCED: fld     [esp+14h+arg_0]
0x75BCF1: mov     ecx, [esp+14h+arg_4]
0x75BCF5: jmp     short loc_75BCF9
0x75BCF7: fstp    st
0x75BCF9: add     ecx, 0FFFFh
0x75BCFF: add     esi, 0FFFFh
0x75BD05: test    cx, cx
0x75BD08: mov     [esp+14h+arg_4], ecx
0x75BD0C: ja      loc_75BC8A
0x75BD12: pop     ebp
0x75BD13: fstp    st
0x75BD15: pop     edi
0x75BD16: pop     esi
0x75BD17: pop     ebx
0x75BD18: pop     ecx
0x75BD19: retn    8
0x75BD1C: mov     ebx, [esp+10h+arg_4]
0x75BD20: movzx   edi, word ptr [ebx+48h]
0x75BD24: test    di, di
0x75BD27: jbe     short loc_75BD7E
0x75BD29: lea     eax, [edi-1]
0x75BD2C: movzx   esi, ax
0x75BD2F: nop
0x75BD30: mov     edx, [ebx+5Ch]
0x75BD33: fld     [esp+10h+arg_0]
0x75BD37: movzx   eax, si
0x75BD3A: lea     ecx, ds:0[eax*8]
0x75BD41: sub     ecx, eax
0x75BD43: lea     eax, [edx+ecx*4]
0x75BD46: fsub    dword ptr [eax+14h]
0x75BD49: fadd    dword ptr [eax+0Ch]
0x75BD4C: fstp    [esp+10h+arg_4]
0x75BD50: fld     [esp+10h+arg_4]
0x75BD54: fst     dword ptr [eax+0Ch]
0x75BD57: fld     dword ptr [eax+10h]
0x75BD5A: fcompp
0x75BD5C: fnstsw  ax
0x75BD5E: test    ah, 5
0x75BD61: jp      short loc_75BD6D
0x75BD63: mov     eax, [ebx]
0x75BD65: mov     edx, [eax+58h]
0x75BD68: push    esi
0x75BD69: mov     ecx, ebx
0x75BD6B: call    edx
0x75BD6D: add     edi, 0FFFFh
0x75BD73: add     esi, 0FFFFh
0x75BD79: test    di, di
0x75BD7C: ja      short loc_75BD30
0x75BD7E: pop     edi
0x75BD7F: pop     esi
0x75BD80: pop     ebx
0x75BD81: pop     ecx
0x75BD82: retn    8
