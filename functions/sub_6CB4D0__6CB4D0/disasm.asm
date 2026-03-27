0x6CB4D0: sub     esp, 54h
0x6CB4D3: fld1
0x6CB4D5: push    ebx
0x6CB4D6: fstp    [esp+58h+var_50]
0x6CB4DA: mov     ebx, ecx
0x6CB4DC: fld     dword ptr ds:0A7DEB4h
0x6CB4E2: push    ebp
0x6CB4E3: fchs
0x6CB4E5: fstp    [esp+5Ch+var_54]
0x6CB4E9: fld     dword ptr [ebx+1Ch]
0x6CB4EC: fld     [esp+5Ch+var_54]
0x6CB4F0: fld     st
0x6CB4F2: fucomp  st(2)
0x6CB4F4: fnstsw  ax
0x6CB4F6: fstp    st(1)
0x6CB4F8: test    ah, 44h
0x6CB4FB: jp      short loc_6CB506
0x6CB4FD: mov     ebp, [esp+5Ch+arg_0]
0x6CB501: fstp    dword ptr [ebp+1Ch]
0x6CB504: jmp     short loc_6CB551
0x6CB506: fstp    st
0x6CB508: sub     esp, 8
0x6CB50B: fld     dword ptr [ebx+1Ch]
0x6CB50E: fld1
0x6CB510: fdivrp  st(1), st
0x6CB512: fstp    [esp+64h+var_54]
0x6CB516: fld     [esp+64h+var_54]
0x6CB51A: fstp    [esp+64h+X]; X
0x6CB51D: call    __isnan
0x6CB522: mov     ebp, [esp+64h+arg_0]
0x6CB526: add     esp, 8
0x6CB529: test    eax, eax
0x6CB52B: jnz     short loc_6CB54A
0x6CB52D: fld     [esp+5Ch+var_54]
0x6CB531: sub     esp, 8
0x6CB534: fstp    [esp+64h+X]; X
0x6CB537: call    __finite
0x6CB53C: add     esp, 8
0x6CB53F: test    eax, eax
0x6CB541: jz      short loc_6CB54A
0x6CB543: fld     [esp+5Ch+var_54]
0x6CB547: fstp    dword ptr [ebp+1Ch]
0x6CB54A: fld     dword ptr [ebp+1Ch]
0x6CB54D: fstp    [esp+5Ch+var_50]
0x6CB551: fld     dword ptr ds:0A7DEB4h
0x6CB557: push    esi
0x6CB558: fchs
0x6CB55A: push    edi
0x6CB55B: fstp    [esp+64h+var_54]
0x6CB55F: mov     ecx, 9
0x6CB564: fld     dword ptr [ebx+10h]
0x6CB567: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x6CB56C: fld     [esp+64h+var_54]
0x6CB570: lea     edi, [esp+64h+var_24]
0x6CB574: fld     st
0x6CB576: rep movsd
0x6CB578: fucomp  st(2)
0x6CB57A: fnstsw  ax
0x6CB57C: fstp    st(1)
0x6CB57E: test    ah, 44h
0x6CB581: pop     edi
0x6CB582: pop     esi
0x6CB583: jp      short loc_6CB58A
0x6CB585: fstp    dword ptr [ebp+10h]
0x6CB588: jmp     short loc_6CB5B2
0x6CB58A: lea     eax, [ebx+0Ch]
0x6CB58D: fstp    st
0x6CB58F: push    eax
0x6CB590: lea     ecx, [esp+60h+var_34]
0x6CB594: push    ecx
0x6CB595: call    sub_714D80
0x6CB59A: add     esp, 8
0x6CB59D: push    eax
0x6CB59E: mov     ecx, ebp
0x6CB5A0: call    sub_471430
0x6CB5A5: lea     edx, [esp+5Ch+var_24]
0x6CB5A9: push    edx
0x6CB5AA: lea     ecx, [ebp+0Ch]
0x6CB5AD: call    sub_47C600
0x6CB5B2: fld     dword ptr ds:0A7DEB4h
0x6CB5B8: fchs
0x6CB5BA: fstp    [esp+5Ch+var_54]
0x6CB5BE: fld     dword ptr [ebx]
0x6CB5C0: fld     [esp+5Ch+var_54]
0x6CB5C4: fld     st
0x6CB5C6: fucomp  st(2)
0x6CB5C8: fnstsw  ax
0x6CB5CA: fstp    st(1)
0x6CB5CC: test    ah, 44h
0x6CB5CF: jp      short loc_6CB5DC
0x6CB5D1: fstp    dword ptr [ebp+0]
0x6CB5D4: pop     ebp
0x6CB5D5: pop     ebx
0x6CB5D6: add     esp, 54h
0x6CB5D9: retn    4
0x6CB5DC: fstp    st
0x6CB5DE: lea     eax, [esp+5Ch+var_4C]
0x6CB5E2: fld     dword ptr [ebx]
0x6CB5E4: push    eax
0x6CB5E5: fchs
0x6CB5E7: lea     ecx, [esp+60h+var_34]
0x6CB5EB: fstp    [esp+60h+var_4C]
0x6CB5EF: push    ecx
0x6CB5F0: fld     dword ptr [ebx+4]
0x6CB5F3: lea     ecx, [esp+64h+var_24]
0x6CB5F7: fchs
0x6CB5F9: fstp    [esp+64h+var_48]
0x6CB5FD: fld     dword ptr [ebx+8]
0x6CB600: fchs
0x6CB602: fstp    [esp+64h+var_44]
0x6CB606: call    sub_7101F0
0x6CB60B: fld     dword ptr [eax]
0x6CB60D: lea     edx, [esp+5Ch+var_40]
0x6CB611: fld     [esp+5Ch+var_50]
0x6CB615: push    edx
0x6CB616: fld     st
0x6CB618: mov     ecx, ebp
0x6CB61A: fmulp   st(2), st
0x6CB61C: fxch    st(1)
0x6CB61E: fstp    [esp+60h+var_40]
0x6CB622: fld     dword ptr [eax+4]
0x6CB625: fmul    st, st(1)
0x6CB627: fstp    [esp+60h+var_3C]
0x6CB62B: fmul    dword ptr [eax+8]
0x6CB62E: fstp    [esp+60h+var_38]
0x6CB632: call    sub_471390
0x6CB637: pop     ebp
0x6CB638: pop     ebx
0x6CB639: add     esp, 54h
0x6CB63C: retn    4
