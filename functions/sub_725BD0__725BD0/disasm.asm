0x725BD0: fld     [esp+arg_4]
0x725BD4: sub     esp, 0Ch
0x725BD7: push    ebx
0x725BD8: mov     ebx, [esp+10h+arg_C]
0x725BDC: push    ebp
0x725BDD: mov     ebp, [esp+14h+arg_8]
0x725BE1: push    esi
0x725BE2: push    edi
0x725BE3: xor     edi, edi
0x725BE5: cmp     ebx, 4
0x725BE8: jl      loc_725D05
0x725BEE: mov     edx, [esp+1Ch+arg_0]
0x725BF2: fld     st
0x725BF4: lea     eax, [edx+14h]
0x725BF7: mov     esi, ebp
0x725BF9: sub     esi, edx
0x725BFB: lea     edx, [ebx-4]
0x725BFE: shr     edx, 2
0x725C01: add     edx, 1
0x725C04: lea     ecx, [ebp+20h]
0x725C07: lea     edi, ds:0[edx*4]
0x725C0E: fld     dword ptr [ecx-20h]
0x725C11: add     eax, 30h ; '0'
0x725C14: fmul    st, st(1)
0x725C16: add     ecx, 30h ; '0'
0x725C19: sub     edx, 1
0x725C1C: fstp    [esp+1Ch+var_C]
0x725C20: fld     dword ptr [ecx-4Ch]
0x725C23: fmul    st, st(1)
0x725C25: fstp    [esp+1Ch+var_8]
0x725C29: fld     dword ptr [ecx-48h]
0x725C2C: fmul    st, st(1)
0x725C2E: fstp    [esp+1Ch+var_4]
0x725C32: fld     dword ptr [eax-44h]
0x725C35: fadd    [esp+1Ch+var_C]
0x725C39: fstp    dword ptr [eax-44h]
0x725C3C: fld     dword ptr [eax-40h]
0x725C3F: fadd    [esp+1Ch+var_8]
0x725C43: fstp    dword ptr [eax-40h]
0x725C46: fld     dword ptr [eax-3Ch]
0x725C49: fadd    [esp+1Ch+var_4]
0x725C4D: fstp    dword ptr [eax-3Ch]
0x725C50: fld     dword ptr [ecx-44h]
0x725C53: fmul    st, st(1)
0x725C55: fstp    [esp+1Ch+var_C]
0x725C59: fld     dword ptr [eax+esi-34h]
0x725C5D: fmul    st, st(1)
0x725C5F: fstp    [esp+1Ch+var_8]
0x725C63: fld     dword ptr [eax+esi-30h]
0x725C67: fmul    st, st(1)
0x725C69: fstp    [esp+1Ch+var_4]
0x725C6D: fld     dword ptr [eax-38h]
0x725C70: fadd    [esp+1Ch+var_C]
0x725C74: fstp    dword ptr [eax-38h]
0x725C77: fld     [esp+1Ch+var_8]
0x725C7B: fadd    dword ptr [eax-34h]
0x725C7E: fstp    dword ptr [eax-34h]
0x725C81: fld     dword ptr [eax-30h]
0x725C84: fadd    [esp+1Ch+var_4]
0x725C88: fstp    dword ptr [eax-30h]
0x725C8B: fld     dword ptr [ecx-38h]
0x725C8E: fmul    st, st(1)
0x725C90: fstp    [esp+1Ch+var_C]
0x725C94: fld     dword ptr [ecx-34h]
0x725C97: fmul    st, st(1)
0x725C99: fstp    [esp+1Ch+var_8]
0x725C9D: fld     dword ptr [ecx-30h]
0x725CA0: fmul    st, st(1)
0x725CA2: fstp    [esp+1Ch+var_4]
0x725CA6: fld     [esp+1Ch+var_C]
0x725CAA: fadd    dword ptr [eax-2Ch]
0x725CAD: fstp    dword ptr [eax-2Ch]
0x725CB0: fld     dword ptr [eax-28h]
0x725CB3: fadd    [esp+1Ch+var_8]
0x725CB7: fstp    dword ptr [eax-28h]
0x725CBA: fld     dword ptr [eax-24h]
0x725CBD: fadd    [esp+1Ch+var_4]
0x725CC1: fstp    dword ptr [eax-24h]
0x725CC4: fld     dword ptr [ecx-2Ch]
0x725CC7: fmul    st, st(1)
0x725CC9: fstp    [esp+1Ch+var_C]
0x725CCD: fld     dword ptr [ecx-28h]
0x725CD0: fmul    st, st(1)
0x725CD2: fstp    [esp+1Ch+var_8]
0x725CD6: fld     dword ptr [ecx-24h]
0x725CD9: fmul    st, st(1)
0x725CDB: fstp    [esp+1Ch+var_4]
0x725CDF: fld     dword ptr [eax-20h]
0x725CE2: fadd    [esp+1Ch+var_C]
0x725CE6: fstp    dword ptr [eax-20h]
0x725CE9: fld     dword ptr [eax-1Ch]
0x725CEC: fadd    [esp+1Ch+var_8]
0x725CF0: fstp    dword ptr [eax-1Ch]
0x725CF3: fld     [esp+1Ch+var_4]
0x725CF7: fadd    dword ptr [eax-18h]
0x725CFA: fstp    dword ptr [eax-18h]
0x725CFD: jnz     loc_725C0E
0x725D03: fstp    st
0x725D05: cmp     edi, ebx
0x725D07: jnb     short loc_725D66
0x725D09: mov     esi, [esp+1Ch+arg_0]
0x725D0D: lea     eax, [edi+edi*2]
0x725D10: add     eax, eax
0x725D12: add     eax, eax
0x725D14: mov     ecx, ebp
0x725D16: lea     edx, [eax+ebp]
0x725D19: sub     ecx, esi
0x725D1B: lea     eax, [eax+esi+8]
0x725D1F: sub     ebx, edi
0x725D21: fld     dword ptr [edx]
0x725D23: add     edx, 0Ch
0x725D26: fmul    st, st(1)
0x725D28: add     eax, 0Ch
0x725D2B: sub     ebx, 1
0x725D2E: fstp    [esp+1Ch+var_C]
0x725D32: fld     dword ptr [eax+ecx-10h]
0x725D36: fmul    st, st(1)
0x725D38: fstp    [esp+1Ch+var_8]
0x725D3C: fld     dword ptr [eax+ecx-0Ch]
0x725D40: fmul    st, st(1)
0x725D42: fstp    [esp+1Ch+var_4]
0x725D46: fld     [esp+1Ch+var_C]
0x725D4A: fadd    dword ptr [eax-14h]
0x725D4D: fstp    dword ptr [eax-14h]
0x725D50: fld     dword ptr [eax-10h]
0x725D53: fadd    [esp+1Ch+var_8]
0x725D57: fstp    dword ptr [eax-10h]
0x725D5A: fld     dword ptr [eax-0Ch]
0x725D5D: fadd    [esp+1Ch+var_4]
0x725D61: fstp    dword ptr [eax-0Ch]
0x725D64: jnz     short loc_725D21
0x725D66: pop     edi
0x725D67: fstp    st
0x725D69: pop     esi
0x725D6A: pop     ebp
0x725D6B: pop     ebx
0x725D6C: add     esp, 0Ch
0x725D6F: retn
