0x724B30: sub     esp, 18h
0x724B33: mov     eax, [esp+18h+arg_0]
0x724B37: fld     dword ptr [ecx+14h]
0x724B3A: fsub    dword ptr [eax+88h]
0x724B40: push    esi
0x724B41: mov     esi, [ecx+20h]
0x724B44: xor     edx, edx
0x724B46: test    esi, esi
0x724B48: fstp    [esp+1Ch+var_C]
0x724B4C: fld     dword ptr [ecx+18h]
0x724B4F: fsub    dword ptr [eax+8Ch]
0x724B55: fstp    [esp+1Ch+var_8]
0x724B59: fld     dword ptr [ecx+1Ch]
0x724B5C: fsub    dword ptr [eax+90h]
0x724B62: fstp    [esp+1Ch+var_4]
0x724B66: fld     dword ptr [eax+64h]
0x724B69: fstp    [esp+1Ch+var_18]
0x724B6D: fld     dword ptr [eax+70h]
0x724B70: fstp    [esp+1Ch+var_14]
0x724B74: fld     dword ptr [eax+7Ch]
0x724B77: fstp    [esp+1Ch+var_10]
0x724B7B: fld     [esp+1Ch+var_14]
0x724B7F: fmul    [esp+1Ch+var_8]
0x724B83: fld     [esp+1Ch+var_18]
0x724B87: fmul    [esp+1Ch+var_C]
0x724B8B: faddp   st(1), st
0x724B8D: fld     [esp+1Ch+var_10]
0x724B91: fmul    [esp+1Ch+var_4]
0x724B95: faddp   st(1), st
0x724B97: fstp    [esp+1Ch+arg_0]
0x724B9B: fld     [esp+1Ch+arg_0]
0x724B9F: fmul    dword ptr [eax+120h]
0x724BA5: fstp    [esp+1Ch+arg_0]
0x724BA9: fld     [esp+1Ch+arg_0]
0x724BAD: fabs
0x724BAF: fstp    [esp+1Ch+arg_0]
0x724BB3: fld     [esp+1Ch+arg_0]
0x724BB7: fstp    [esp+1Ch+arg_0]
0x724BBB: jbe     short loc_724BEA
0x724BBD: mov     ecx, [ecx+24h]
0x724BC0: fld     [esp+1Ch+arg_0]
0x724BC4: add     ecx, 0Ch
0x724BC7: fld     dword ptr [ecx-4]
0x724BCA: fcomp   st(1)
0x724BCC: fnstsw  ax
0x724BCE: test    ah, 41h
0x724BD1: jp      short loc_724BDE
0x724BD3: fld     dword ptr [ecx]
0x724BD5: fcomp   st(1)
0x724BD7: fnstsw  ax
0x724BD9: test    ah, 41h
0x724BDC: jz      short loc_724BF4
0x724BDE: add     edx, 1
0x724BE1: add     ecx, 10h
0x724BE4: cmp     edx, esi
0x724BE6: jb      short loc_724BC7
0x724BE8: fstp    st
0x724BEA: or      eax, 0FFFFFFFFh
0x724BED: pop     esi
0x724BEE: add     esp, 18h
0x724BF1: retn    8
0x724BF4: fstp    st
0x724BF6: mov     eax, edx
0x724BF8: pop     esi
0x724BF9: add     esp, 18h
0x724BFC: retn    8
