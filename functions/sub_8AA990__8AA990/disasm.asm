0x8AA990: sub     esp, 0Ch
0x8AA993: push    esi
0x8AA994: mov     esi, ecx
0x8AA996: mov     eax, [esi+50h]
0x8AA999: test    eax, eax
0x8AA99B: jz      loc_8AABD2
0x8AA9A1: push    ebx
0x8AA9A2: mov     ebx, 1
0x8AA9A7: cmp     eax, ebx
0x8AA9A9: jnz     short loc_8AA9CD
0x8AA9AB: mov     eax, [esi+44h]
0x8AA9AE: fld     dword ptr [eax+4]
0x8AA9B1: mov     ecx, [esp+14h+arg_4]
0x8AA9B5: mov     eax, [esp+14h+arg_8]
0x8AA9B9: fstp    dword ptr [ecx]
0x8AA9BB: mov     edx, [esi+44h]
0x8AA9BE: fld     dword ptr [edx+8]
0x8AA9C1: fstp    dword ptr [eax]
0x8AA9C3: mov     al, bl
0x8AA9C5: pop     ebx
0x8AA9C6: pop     esi
0x8AA9C7: add     esp, 0Ch
0x8AA9CA: retn    0Ch
0x8AA9CD: mov     edx, [esi+44h]
0x8AA9D0: push    ebp
0x8AA9D1: lea     ebp, [eax-1]
0x8AA9D4: mov     eax, [esi+3Ch]
0x8AA9D7: lea     ecx, [eax+eax*2]
0x8AA9DA: fld     dword ptr [edx+ecx*4]
0x8AA9DD: push    edi
0x8AA9DE: fstp    [esp+1Ch+var_C]
0x8AA9E2: fld     [esp+1Ch+arg_0]
0x8AA9E6: fld     [esp+1Ch+var_C]
0x8AA9EA: fcomp   st(1)
0x8AA9EC: fnstsw  ax
0x8AA9EE: test    ah, 41h
0x8AA9F1: jnz     short loc_8AAA00
0x8AA9F3: mov     dword ptr [esi+3Ch], 0
0x8AA9FA: fld     dword ptr [edx]
0x8AA9FC: fstp    [esp+1Ch+var_C]
0x8AAA00: mov     eax, [esi+3Ch]
0x8AAA03: fld     [esp+1Ch+var_C]
0x8AAA07: lea     ecx, [eax+1]
0x8AAA0A: fstp    [esp+1Ch+arg_0]
0x8AAA0E: mov     eax, ebp
0x8AAA10: sub     eax, ecx
0x8AAA12: add     eax, ebx
0x8AAA14: cmp     eax, 4
0x8AAA17: jl      loc_8AAAB7
0x8AAA1D: lea     eax, [ecx+ecx*2+6]
0x8AAA21: lea     edx, [edx+eax*4]
0x8AAA24: jmp     short loc_8AAA28
0x8AAA26: fstp    st
0x8AAA28: fld     dword ptr [edx-18h]
0x8AAA2B: fstp    [esp+1Ch+arg_0]
0x8AAA2F: fld     [esp+1Ch+arg_0]
0x8AAA33: fcom    st(1)
0x8AAA35: fnstsw  ax
0x8AAA37: test    ah, 1
0x8AAA3A: jz      loc_8AAAFB
0x8AAA40: add     [esi+3Ch], ebx
0x8AAA43: fstp    [esp+1Ch+var_C]
0x8AAA47: fld     dword ptr [edx-0Ch]
0x8AAA4A: mov     edi, [esi+3Ch]
0x8AAA4D: fstp    [esp+1Ch+arg_0]
0x8AAA51: fld     [esp+1Ch+arg_0]
0x8AAA55: fcom    st(1)
0x8AAA57: fnstsw  ax
0x8AAA59: test    ah, 1
0x8AAA5C: jz      loc_8AAAEF
0x8AAA62: add     edi, ebx
0x8AAA64: fstp    [esp+1Ch+var_C]
0x8AAA68: mov     [esi+3Ch], edi
0x8AAA6B: fld     dword ptr [edx]
0x8AAA6D: fstp    [esp+1Ch+arg_0]
0x8AAA71: fld     [esp+1Ch+arg_0]
0x8AAA75: fcom    st(1)
0x8AAA77: fnstsw  ax
0x8AAA79: test    ah, 1
0x8AAA7C: jz      short loc_8AAAF3
0x8AAA7E: add     edi, ebx
0x8AAA80: fstp    [esp+1Ch+var_C]
0x8AAA84: mov     [esi+3Ch], edi
0x8AAA87: fld     dword ptr [edx+0Ch]
0x8AAA8A: fstp    [esp+1Ch+arg_0]
0x8AAA8E: fld     [esp+1Ch+arg_0]
0x8AAA92: fcom    st(1)
0x8AAA94: fnstsw  ax
0x8AAA96: test    ah, 1
0x8AAA99: jz      short loc_8AAAF8
0x8AAA9B: add     edi, ebx
0x8AAA9D: fst     [esp+1Ch+var_C]
0x8AAAA1: add     ecx, 4
0x8AAAA4: lea     eax, [ebp-3]
0x8AAAA7: add     edx, 30h ; '0'
0x8AAAAA: cmp     ecx, eax
0x8AAAAC: mov     [esi+3Ch], edi
0x8AAAAF: jbe     loc_8AAA26
0x8AAAB5: jmp     short loc_8AAABB
0x8AAAB7: fld     [esp+1Ch+arg_0]
0x8AAABB: cmp     ecx, ebp
0x8AAABD: ja      short loc_8AAAFB
0x8AAABF: mov     eax, [esi+44h]
0x8AAAC2: lea     edx, [ecx+ecx*2]
0x8AAAC5: lea     edx, [eax+edx*4]
0x8AAAC8: fstp    st
0x8AAACA: fld     dword ptr [edx]
0x8AAACC: fstp    [esp+1Ch+arg_0]
0x8AAAD0: fld     [esp+1Ch+arg_0]
0x8AAAD4: fcom    st(1)
0x8AAAD6: fnstsw  ax
0x8AAAD8: test    ah, 1
0x8AAADB: jz      short loc_8AAAFB
0x8AAADD: add     [esi+3Ch], ebx
0x8AAAE0: fst     [esp+1Ch+var_C]
0x8AAAE4: add     ecx, ebx
0x8AAAE6: add     edx, 0Ch
0x8AAAE9: cmp     ecx, ebp
0x8AAAEB: jbe     short loc_8AAAC8
0x8AAAED: jmp     short loc_8AAAFB
0x8AAAEF: add     ecx, ebx
0x8AAAF1: jmp     short loc_8AAAFB
0x8AAAF3: add     ecx, 2
0x8AAAF6: jmp     short loc_8AAAFB
0x8AAAF8: add     ecx, 3
0x8AAAFB: fld     [esp+1Ch+var_C]
0x8AAAFF: mov     eax, [esi+3Ch]
0x8AAB02: mov     edx, [esi+44h]
0x8AAB05: fsub    st(1), st
0x8AAB07: lea     eax, [eax+eax*2]
0x8AAB0A: fxch    st(1)
0x8AAB0C: lea     eax, [edx+eax*4]
0x8AAB0F: fstp    [esp+1Ch+arg_0]
0x8AAB13: fld     dword ptr [eax+4]
0x8AAB16: fstp    [esp+1Ch+var_C]
0x8AAB1A: fld     dword ptr [eax+8]
0x8AAB1D: fstp    [esp+1Ch+var_8]
0x8AAB21: fldz
0x8AAB23: fld     [esp+1Ch+arg_0]
0x8AAB27: fucom   st(1)
0x8AAB29: fnstsw  ax
0x8AAB2B: fstp    st(1)
0x8AAB2D: test    ah, 44h
0x8AAB30: jnp     short loc_8AABAC
0x8AAB32: fxch    st(2)
0x8AAB34: lea     edi, [ecx+ecx*2]
0x8AAB37: fsubrp  st(1), st
0x8AAB39: add     edi, edi
0x8AAB3B: add     edi, edi
0x8AAB3D: sub     esp, 0Ch
0x8AAB40: fdivrp  st(1), st
0x8AAB42: fstp    [esp+28h+arg_0]
0x8AAB46: fld     dword ptr [edi+edx+4]
0x8AAB4A: fstp    [esp+28h+var_4]
0x8AAB4E: fld     [esp+28h+var_4]
0x8AAB52: fstp    [esp+28h+var_20]; float
0x8AAB56: fld     [esp+28h+var_C]
0x8AAB5A: fstp    [esp+28h+var_24]; float
0x8AAB5E: fld     [esp+28h+arg_0]
0x8AAB62: fstp    [esp+28h+var_28]; float
0x8AAB65: call    sub_6D3690
0x8AAB6A: mov     ecx, [esp+28h+arg_4]
0x8AAB6E: fstp    dword ptr [ecx]
0x8AAB70: mov     edx, [esi+44h]
0x8AAB73: fld     dword ptr [edi+edx+8]
0x8AAB77: fstp    [esp+28h+arg_4]
0x8AAB7B: fld     [esp+28h+arg_4]
0x8AAB7F: fstp    [esp+28h+var_20]; float
0x8AAB83: fld     [esp+28h+var_8]
0x8AAB87: fstp    [esp+28h+var_24]; float
0x8AAB8B: fld     [esp+28h+arg_0]
0x8AAB8F: fstp    [esp+28h+var_28]; float
0x8AAB92: call    sub_6D3690
0x8AAB97: mov     eax, [esp+28h+arg_8]
0x8AAB9B: add     esp, 0Ch
0x8AAB9E: fstp    dword ptr [eax]
0x8AABA0: pop     edi
0x8AABA1: pop     ebp
0x8AABA2: mov     al, bl
0x8AABA4: pop     ebx
0x8AABA5: pop     esi
0x8AABA6: add     esp, 0Ch
0x8AABA9: retn    0Ch
0x8AABAC: mov     ecx, [esp+1Ch+arg_4]
0x8AABB0: fstp    st
0x8AABB2: mov     edx, [esp+1Ch+arg_8]
0x8AABB6: fstp    st(1)
0x8AABB8: fstp    st
0x8AABBA: pop     edi
0x8AABBB: fld     [esp+18h+var_C]
0x8AABBF: pop     ebp
0x8AABC0: fstp    dword ptr [ecx]
0x8AABC2: mov     al, bl
0x8AABC4: fld     [esp+14h+var_8]
0x8AABC8: pop     ebx
0x8AABC9: fstp    dword ptr [edx]
0x8AABCB: pop     esi
0x8AABCC: add     esp, 0Ch
0x8AABCF: retn    0Ch
0x8AABD2: xor     al, al
0x8AABD4: pop     esi
0x8AABD5: add     esp, 0Ch
0x8AABD8: retn    0Ch
