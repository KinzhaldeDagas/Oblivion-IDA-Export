0x7573E0: sub     esp, 0ECh
0x7573E6: push    ebx
0x7573E7: push    esi
0x7573E8: mov     ebx, ecx
0x7573EA: mov     esi, [ebx+18h]
0x7573ED: push    edi
0x7573EE: add     esi, 64h ; 'd'
0x7573F1: mov     ecx, 0Dh
0x7573F6: lea     edi, [esp+0F8h+var_68]
0x7573FD: rep movsd
0x7573FF: mov     esi, [ebx+10h]
0x757402: add     esi, 64h ; 'd'
0x757405: mov     ecx, 0Dh
0x75740A: lea     edi, [esp+0F8h+var_D0]
0x75740E: lea     eax, [esp+0F8h+var_9C]
0x757412: rep movsd
0x757414: push    eax
0x757415: lea     ecx, [esp+0FCh+var_D0]
0x757419: call    sub_718A80
0x75741E: lea     ecx, [esp+0F8h+var_68]
0x757425: push    ecx
0x757426: lea     edx, [esp+0FCh+var_34]
0x75742D: push    edx
0x75742E: lea     ecx, [esp+100h+var_9C]
0x757432: call    sub_53D7A0
0x757437: lea     eax, [ebx+30h]
0x75743A: push    eax
0x75743B: lea     ecx, [esp+0FCh+var_E8]
0x75743F: push    ecx
0x757440: lea     ecx, [esp+100h+var_34]
0x757447: call    sub_7101F0
0x75744C: lea     ecx, [esp+0F8h+var_E8]
0x757450: call    sub_43F350
0x757455: fstp    st
0x757457: fld     dword ptr [ebx+1Ch]
0x75745A: mov     esi, [esp+0F8h+arg_4]
0x757461: fstp    [esp+0F8h+var_EC]
0x757465: xor     edx, edx
0x757467: cmp     [esi+48h], dx
0x75746B: fld     [esp+0F8h+var_E8]
0x75746F: fld     [esp+0F8h+var_EC]
0x757473: fld     st
0x757475: fmulp   st(2), st
0x757477: fxch    st(1)
0x757479: fstp    [esp+0F8h+var_E8]
0x75747D: fld     [esp+0F8h+var_E4]
0x757481: fmul    st, st(1)
0x757483: fstp    [esp+0F8h+var_E4]
0x757487: fmul    [esp+0F8h+var_E0]
0x75748B: fstp    [esp+0F8h+var_E0]
0x75748F: jbe     short loc_75750F
0x757491: fld     [esp+0F8h+arg_0]
0x757498: fldz
0x75749A: movzx   eax, dx
0x75749D: fld     st(1)
0x75749F: lea     ecx, ds:0[eax*8]
0x7574A6: sub     ecx, eax
0x7574A8: mov     eax, [esi+5Ch]
0x7574AB: lea     ecx, [eax+ecx*4]
0x7574AE: fsub    dword ptr [ecx+14h]
0x7574B1: fstp    [esp+0F8h+var_EC]
0x7574B5: fld     st
0x7574B7: fld     [esp+0F8h+var_EC]
0x7574BB: fucom   st(1)
0x7574BD: fnstsw  ax
0x7574BF: fstp    st(1)
0x7574C1: test    ah, 44h
0x7574C4: jnp     short loc_757500
0x7574C6: fld     [esp+0F8h+var_E8]
0x7574CA: fmul    st, st(1)
0x7574CC: fstp    [esp+0F8h+var_DC]
0x7574D0: fld     [esp+0F8h+var_E4]
0x7574D4: fmul    st, st(1)
0x7574D6: fstp    [esp+0F8h+var_D8]
0x7574DA: fmul    [esp+0F8h+var_E0]
0x7574DE: fstp    [esp+0F8h+var_D4]
0x7574E2: fld     dword ptr [ecx]
0x7574E4: fadd    [esp+0F8h+var_DC]
0x7574E8: fstp    dword ptr [ecx]
0x7574EA: fld     [esp+0F8h+var_D8]
0x7574EE: fadd    dword ptr [ecx+4]
0x7574F1: fstp    dword ptr [ecx+4]
0x7574F4: fld     dword ptr [ecx+8]
0x7574F7: fadd    [esp+0F8h+var_D4]
0x7574FB: fstp    dword ptr [ecx+8]
0x7574FE: jmp     short loc_757502
0x757500: fstp    st
0x757502: add     edx, 1
0x757505: cmp     dx, [esi+48h]
0x757509: jb      short loc_75749A
0x75750B: fstp    st(1)
0x75750D: fstp    st
0x75750F: pop     edi
0x757510: pop     esi
0x757511: pop     ebx
0x757512: add     esp, 0ECh
0x757518: retn    8
