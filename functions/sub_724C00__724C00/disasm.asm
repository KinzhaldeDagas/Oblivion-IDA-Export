0x724C00: mov     eax, [esp+arg_0]
0x724C04: sub     esp, 0Ch
0x724C07: test    eax, eax
0x724C09: jg      short loc_724C0D
0x724C0B: xor     eax, eax
0x724C0D: push    ebx
0x724C0E: push    esi
0x724C0F: mov     esi, [ecx+20h]
0x724C12: lea     edx, [esi-1]
0x724C15: cmp     eax, edx
0x724C17: mov     [esp+14h+var_8], esi
0x724C1B: jl      short loc_724C1F
0x724C1D: mov     eax, edx
0x724C1F: fld     dword ptr ds:0A7DEB4h
0x724C25: or      ebx, 0FFFFFFFFh
0x724C28: test    eax, eax
0x724C2A: fld     st
0x724C2C: fchs
0x724C2E: fstp    [esp+14h+arg_0]
0x724C32: jl      loc_724DBB
0x724C38: add     eax, 1
0x724C3B: push    ebp
0x724C3C: mov     [esp+18h+var_4], eax
0x724C40: push    edi
0x724C41: xor     edx, edx
0x724C43: fst     [esp+1Ch+var_C]
0x724C47: cmp     esi, 4
0x724C4A: jl      loc_724D5E
0x724C50: mov     edi, [ecx+24h]
0x724C53: lea     esi, [edi+20h]
0x724C56: mov     ebp, 20h ; ' '
0x724C5B: neg     edi
0x724C5D: fld     dword ptr [esi-20h]
0x724C60: fld     [esp+1Ch+arg_0]
0x724C64: fcomp   st(1)
0x724C66: fnstsw  ax
0x724C68: test    ah, 5
0x724C6B: jp      short loc_724C94
0x724C6D: fld     [esp+1Ch+var_C]
0x724C71: fcompp
0x724C73: fnstsw  ax
0x724C75: test    ah, 1
0x724C78: jnz     short loc_724C96
0x724C7A: mov     ebx, [ecx+24h]
0x724C7D: lea     eax, [edi+esi-20h]
0x724C81: fld     dword ptr [eax+ebx]
0x724C84: add     eax, ebx
0x724C86: fstp    [esp+1Ch+arg_0]
0x724C8A: mov     ebx, edx
0x724C8C: fld     dword ptr [eax]
0x724C8E: fstp    [esp+1Ch+var_C]
0x724C92: jmp     short loc_724C96
0x724C94: fstp    st
0x724C96: fld     dword ptr [esi-10h]
0x724C99: fld     [esp+1Ch+arg_0]
0x724C9D: fcomp   st(1)
0x724C9F: fnstsw  ax
0x724CA1: test    ah, 5
0x724CA4: jp      short loc_724CD1
0x724CA6: fld     [esp+1Ch+var_C]
0x724CAA: fcompp
0x724CAC: fnstsw  ax
0x724CAE: test    ah, 1
0x724CB1: jnz     short loc_724CD3
0x724CB3: mov     ebx, [ecx+24h]
0x724CB6: lea     eax, [edi+esi-20h]
0x724CBA: fld     dword ptr [eax+ebx+10h]
0x724CBE: lea     eax, [eax+ebx+10h]
0x724CC2: fstp    [esp+1Ch+arg_0]
0x724CC6: lea     ebx, [edx+1]
0x724CC9: fld     dword ptr [eax]
0x724CCB: fstp    [esp+1Ch+var_C]
0x724CCF: jmp     short loc_724CD3
0x724CD1: fstp    st
0x724CD3: fld     dword ptr [esi]
0x724CD5: fld     [esp+1Ch+arg_0]
0x724CD9: fcomp   st(1)
0x724CDB: fnstsw  ax
0x724CDD: test    ah, 5
0x724CE0: jp      short loc_724D06
0x724CE2: fld     [esp+1Ch+var_C]
0x724CE6: fcompp
0x724CE8: fnstsw  ax
0x724CEA: test    ah, 1
0x724CED: jnz     short loc_724D08
0x724CEF: mov     eax, [ecx+24h]
0x724CF2: fld     dword ptr [eax+ebp]
0x724CF5: add     eax, ebp
0x724CF7: fstp    [esp+1Ch+arg_0]
0x724CFB: lea     ebx, [edx+2]
0x724CFE: fld     dword ptr [eax]
0x724D00: fstp    [esp+1Ch+var_C]
0x724D04: jmp     short loc_724D08
0x724D06: fstp    st
0x724D08: fld     dword ptr [esi+10h]
0x724D0B: fld     [esp+1Ch+arg_0]
0x724D0F: fcomp   st(1)
0x724D11: fnstsw  ax
0x724D13: test    ah, 5
0x724D16: jp      short loc_724D40
0x724D18: fld     [esp+1Ch+var_C]
0x724D1C: fcompp
0x724D1E: fnstsw  ax
0x724D20: test    ah, 1
0x724D23: jnz     short loc_724D42
0x724D25: mov     ebx, [ecx+24h]
0x724D28: lea     eax, [edi+esi+10h]
0x724D2C: fld     dword ptr [eax+ebx]
0x724D2F: add     eax, ebx
0x724D31: fstp    [esp+1Ch+arg_0]
0x724D35: lea     ebx, [edx+3]
0x724D38: fld     dword ptr [eax]
0x724D3A: fstp    [esp+1Ch+var_C]
0x724D3E: jmp     short loc_724D42
0x724D40: fstp    st
0x724D42: mov     eax, [esp+1Ch+var_8]
0x724D46: add     edx, 4
0x724D49: add     eax, 0FFFFFFFDh
0x724D4C: add     ebp, 40h ; '@'
0x724D4F: add     esi, 40h ; '@'
0x724D52: cmp     edx, eax
0x724D54: jl      loc_724C5D
0x724D5A: mov     esi, [esp+1Ch+var_8]
0x724D5E: cmp     edx, esi
0x724D60: jge     short loc_724DAE
0x724D62: mov     edi, [ecx+24h]
0x724D65: mov     esi, edx
0x724D67: shl     esi, 4
0x724D6A: fld     dword ptr [esi+edi]
0x724D6D: fld     [esp+1Ch+arg_0]
0x724D71: fcomp   st(1)
0x724D73: fnstsw  ax
0x724D75: test    ah, 5
0x724D78: jp      short loc_724D9C
0x724D7A: fld     [esp+1Ch+var_C]
0x724D7E: fcompp
0x724D80: fnstsw  ax
0x724D82: test    ah, 1
0x724D85: jnz     short loc_724D9E
0x724D87: mov     eax, edi
0x724D89: fld     dword ptr [eax+esi]
0x724D8C: add     eax, esi
0x724D8E: fstp    [esp+1Ch+arg_0]
0x724D92: mov     ebx, edx
0x724D94: fld     dword ptr [eax]
0x724D96: fstp    [esp+1Ch+var_C]
0x724D9A: jmp     short loc_724D9E
0x724D9C: fstp    st
0x724D9E: add     edx, 1
0x724DA1: add     esi, 10h
0x724DA4: cmp     edx, [esp+1Ch+var_8]
0x724DA8: jl      short loc_724D6A
0x724DAA: mov     esi, [esp+1Ch+var_8]
0x724DAE: sub     [esp+1Ch+var_4], 1
0x724DB3: jnz     loc_724C41
0x724DB9: pop     edi
0x724DBA: pop     ebp
0x724DBB: pop     esi
0x724DBC: fstp    st
0x724DBE: mov     eax, ebx
0x724DC0: pop     ebx
0x724DC1: add     esp, 0Ch
0x724DC4: retn    4
