0x88F3D0: push    ebp
0x88F3D1: mov     ebp, esp
0x88F3D3: and     esp, 0FFFFFFF0h
0x88F3D6: sub     esp, 134h
0x88F3DC: mov     eax, ds:0B30AACh
0x88F3E1: xor     eax, esp
0x88F3E3: mov     [esp+134h+var_4], eax
0x88F3EA: fld     dword ptr ds:0B2E2E0h
0x88F3F0: push    ebx
0x88F3F1: push    esi
0x88F3F2: fstp    [esp+13Ch+var_120]
0x88F3F6: push    edi
0x88F3F7: mov     ebx, ecx
0x88F3F9: call    sub_452A60
0x88F3FE: fldz
0x88F400: fcom    dword ptr [ebx+14h]
0x88F403: mov     cl, [ebx+0Dh]
0x88F406: mov     edi, [ebx+10h]
0x88F409: mov     [esp+140h+var_11C], eax
0x88F40D: and     cl, 1
0x88F410: mov     [esp+140h+var_118], edi
0x88F414: fnstsw  ax
0x88F416: mov     [esp+140h+var_125], cl
0x88F41A: mov     esi, 1
0x88F41F: test    ah, 44h
0x88F422: jp      short loc_88F44E
0x88F424: cmp     ds:0BA7A8Ch, esi
0x88F42A: jz      loc_88F6DD
0x88F430: fcomp   dword ptr [ebx+18h]
0x88F433: fnstsw  ax
0x88F435: test    ah, 44h
0x88F438: jnp     short loc_88F448
0x88F43A: test    cl, cl
0x88F43C: jnz     short loc_88F448
0x88F43E: mov     [esp+140h+var_124], 0
0x88F446: jmp     short loc_88F484
0x88F448: mov     [esp+140h+var_124], esi
0x88F44C: jmp     short loc_88F484
0x88F44E: fstp    st
0x88F450: fld1
0x88F452: fcomp   dword ptr [ebx+14h]
0x88F455: fnstsw  ax
0x88F457: test    ah, 44h
0x88F45A: jp      short loc_88F474
0x88F45C: mov     eax, 2
0x88F461: cmp     ds:0BA7A8Ch, eax
0x88F467: jz      loc_88F6DF
0x88F46D: mov     esi, 6
0x88F472: jmp     short loc_88F480
0x88F474: xor     eax, eax
0x88F476: cmp     dword ptr ds:0BA7A8Ch, 2
0x88F47D: setz    al
0x88F480: mov     [esp+140h+var_124], eax
0x88F484: mov     eax, [ebx+1Ch]
0x88F487: cmp     eax, esi
0x88F489: mov     [esp+140h+var_126], 0
0x88F48E: jz      short loc_88F4CD
0x88F490: cmp     eax, 6
0x88F493: jnz     short loc_88F4A0
0x88F495: mov     edx, [ebx]
0x88F497: mov     eax, [edx+68h]
0x88F49A: mov     ecx, ebx
0x88F49C: call    eax
0x88F49E: jmp     short loc_88F4BC
0x88F4A0: test    edi, edi
0x88F4A2: jz      short loc_88F4BC
0x88F4A4: push    offset stru_BA7A40
0x88F4A9: mov     ecx, edi
0x88F4AB: call    sub_4D6AF0
0x88F4B0: push    offset stru_BA7A40
0x88F4B5: mov     ecx, edi
0x88F4B7: call    sub_4D6B30
0x88F4BC: push    edi
0x88F4BD: push    esi
0x88F4BE: mov     ecx, ebx
0x88F4C0: call    sub_89ED20
0x88F4C5: mov     [ebx+1Ch], esi
0x88F4C8: mov     [esp+140h+var_126], 1
0x88F4CD: mov     eax, [esp+140h+var_124]
0x88F4D1: sub     eax, 0
0x88F4D4: jz      short loc_88F4FE
0x88F4D6: sub     eax, 1
0x88F4D9: jz      short loc_88F4F2
0x88F4DB: sub     eax, 1
0x88F4DE: jnz     loc_88F6AD
0x88F4E4: mov     edx, [ebx]
0x88F4E6: mov     eax, [edx+68h]
0x88F4E9: mov     ecx, ebx
0x88F4EB: call    eax
0x88F4ED: jmp     loc_88F6AD
0x88F4F2: mov     ecx, ebx
0x88F4F4: call    sub_89EA70
0x88F4F9: jmp     loc_88F6AD
0x88F4FE: mov     esi, [esp+140h+var_11C]
0x88F502: add     esi, 64h ; 'd'
0x88F505: mov     ecx, 0Dh
0x88F50A: lea     edi, [esp+140h+var_114]
0x88F50E: rep movsd
0x88F510: fld     [esp+140h+var_F0]
0x88F514: fld     qword ptr ds:0A39088h
0x88F51A: fmul    st(1), st
0x88F51C: fxch    st(1)
0x88F51E: fstp    dword ptr [esp+140h+var_E8+8]
0x88F522: fld     [esp+140h+var_EC]
0x88F526: fmul    st, st(1)
0x88F528: fstp    dword ptr [esp+140h+var_E8+0Ch]
0x88F52C: lea     ecx, [esp+140h+var_114]
0x88F530: fmul    dword ptr [esp+140h+var_E8]
0x88F534: push    ecx
0x88F535: lea     edx, [esp+144h+var_40]
0x88F53C: push    edx
0x88F53D: fstp    [esp+148h+var_D8]
0x88F541: call    sub_539850
0x88F546: add     esp, 8
0x88F549: lea     eax, [esp+140h+var_40]
0x88F550: push    eax
0x88F551: lea     ecx, [esp+144h+var_90]
0x88F558: call    sub_8B1B40
0x88F55D: mov     esi, [esp+140h+var_118]
0x88F561: mov     edx, [esi]
0x88F563: mov     edx, [edx+8Ch]
0x88F569: lea     eax, [esp+140h+var_A0]
0x88F570: push    eax
0x88F571: mov     ecx, esi
0x88F573: call    edx
0x88F575: mov     eax, [esi]
0x88F577: mov     edx, [eax+90h]
0x88F57D: lea     ecx, [esp+140h+var_B0]
0x88F584: push    ecx
0x88F585: mov     ecx, esi
0x88F587: call    edx
0x88F589: fld     dword ptr [ebx+14h]
0x88F58C: movss   xmm1, dword ptr [ebx+14h]
0x88F591: movaps  xmm2, [esp+140h+var_A0]
0x88F599: push    ecx
0x88F59A: xorps   xmm0, xmm0
0x88F59D: fstp    [esp+144h+var_144]; float
0x88F5A0: movss   xmm0, xmm1
0x88F5A4: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x88F5AB: shufps  xmm0, xmm0, 0
0x88F5AF: subps   xmm1, xmm0
0x88F5B2: mulps   xmm1, xmm2
0x88F5B5: movaps  xmm2, [esp+144h+var_E8+8]
0x88F5BA: lea     eax, [esp+144h+var_90]
0x88F5C1: push    eax; int
0x88F5C2: lea     ecx, [esp+148h+var_B0]
0x88F5C9: mulps   xmm2, xmm0
0x88F5CC: push    ecx; int
0x88F5CD: addps   xmm1, xmm2
0x88F5D0: lea     ecx, [esp+14Ch+var_D0]
0x88F5D4: movaps  xmmword ptr [esp+14Ch+var_C8+8], xmm1
0x88F5DC: call    sub_8B1C60
0x88F5E1: lea     ecx, [esp+140h+var_D0]
0x88F5E5: call    sub_4D6830
0x88F5EA: cmp     [esp+140h+var_125], 0
0x88F5EF: lea     eax, [esp+140h+var_C8+8]
0x88F5F6: jnz     short loc_88F5FC
0x88F5F8: lea     eax, [esp+140h+var_E8+8]
0x88F5FC: movaps  xmm0, xmmword ptr [eax]
0x88F5FF: lea     edx, [esp+140h+var_D0]
0x88F603: push    edx
0x88F604: lea     ecx, [esp+144h+var_80]
0x88F60B: movaps  xmmword ptr [esp+144h+var_58+8], xmm0
0x88F613: call    sub_8B1DD0
0x88F618: lea     eax, [esp+140h+var_80]
0x88F61F: push    eax
0x88F620: lea     ecx, [esp+144h+var_114]
0x88F624: push    ecx
0x88F625: call    sub_607740
0x88F62A: lea     edx, [esp+148h+var_58+8]
0x88F631: push    edx
0x88F632: lea     eax, [esp+14Ch+var_F0]
0x88F636: push    eax
0x88F637: call    sub_43F3E0
0x88F63C: add     esp, 10h
0x88F63F: cmp     dword ptr ds:0BA7A8Ch, 0
0x88F646: jnz     short loc_88F656
0x88F648: mov     edx, [ebx]
0x88F64A: mov     edx, [edx+78h]
0x88F64D: lea     eax, [esp+140h+var_114]
0x88F651: push    eax
0x88F652: mov     ecx, ebx
0x88F654: call    edx
0x88F656: fldz
0x88F658: fld     [esp+140h+var_120]
0x88F65C: fucom   st(1)
0x88F65E: fnstsw  ax
0x88F660: fstp    st(1)
0x88F662: test    ah, 44h
0x88F665: jnp     short loc_88F66D
0x88F667: fld1
0x88F669: fdivrp  st(1), st
0x88F66B: jmp     short loc_88F671
0x88F66D: fstp    st
0x88F66F: fld1
0x88F671: cmp     [esp+140h+var_125], 0
0x88F676: fstp    [esp+140h+var_120]
0x88F67A: jz      short loc_88F680
0x88F67C: fld1
0x88F67E: jmp     short loc_88F683
0x88F680: fld     dword ptr [ebx+18h]
0x88F683: fstp    [esp+140h+var_124]
0x88F687: sub     esp, 8
0x88F68A: fld     [esp+148h+var_124]
0x88F68E: lea     eax, [esp+148h+var_D0]
0x88F692: fstp    [esp+148h+var_144]
0x88F696: lea     ecx, [esp+148h+var_C8+8]
0x88F69D: fld     [esp+148h+var_120]
0x88F6A1: fstp    [esp+148h+var_148]
0x88F6A4: push    eax
0x88F6A5: push    ecx
0x88F6A6: mov     ecx, esi
0x88F6A8: call    sub_8A34C0
0x88F6AD: cmp     [esp+140h+var_126], 0
0x88F6B2: jz      short loc_88F6DF
0x88F6B4: mov     eax, [ebx+20h]
0x88F6B7: test    eax, eax
0x88F6B9: jz      short loc_88F6DF
0x88F6BB: cmp     dword ptr [eax+1Ch], 0
0x88F6BF: ja      short loc_88F6DF
0x88F6C1: mov     ecx, ebx
0x88F6C3: call    sub_88F0A0
0x88F6C8: pop     edi
0x88F6C9: pop     esi
0x88F6CA: pop     ebx
0x88F6CB: mov     ecx, [esp+134h+var_4]
0x88F6D2: xor     ecx, esp
0x88F6D4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88F6D9: mov     esp, ebp
0x88F6DB: pop     ebp
0x88F6DC: retn
0x88F6DD: fstp    st
0x88F6DF: mov     ecx, [esp+140h+var_4]
0x88F6E6: pop     edi
0x88F6E7: pop     esi
0x88F6E8: pop     ebx
0x88F6E9: xor     ecx, esp
0x88F6EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88F6F0: mov     esp, ebp
0x88F6F2: pop     ebp
0x88F6F3: retn
