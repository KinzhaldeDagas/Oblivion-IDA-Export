0x7AF5B0: sub     esp, 18h
0x7AF5B3: push    ebx
0x7AF5B4: push    ebp
0x7AF5B5: mov     ebx, ecx
0x7AF5B7: mov     ecx, ds:0B3F928h
0x7AF5BD: mov     eax, [ecx]
0x7AF5BF: mov     edx, [eax+7Ch]
0x7AF5C2: push    esi
0x7AF5C3: push    edi
0x7AF5C4: call    edx
0x7AF5C6: mov     edi, [esp+28h+arg_4]
0x7AF5CA: mov     esi, eax
0x7AF5CC: mov     eax, [edi]
0x7AF5CE: mov     ecx, [eax+20h]
0x7AF5D1: test    ecx, ecx
0x7AF5D3: jz      short loc_7AF5E0
0x7AF5D5: mov     eax, [ecx]
0x7AF5D7: mov     edx, [eax+4Ch]
0x7AF5DA: call    edx
0x7AF5DC: mov     ebp, eax
0x7AF5DE: jmp     short loc_7AF5E2
0x7AF5E0: xor     ebp, ebp
0x7AF5E2: mov     eax, [esi]
0x7AF5E4: mov     edx, [eax+4Ch]
0x7AF5E7: push    0
0x7AF5E9: mov     ecx, esi
0x7AF5EB: call    edx
0x7AF5ED: test    eax, eax
0x7AF5EF: mov     [esp+28h+arg_4], eax
0x7AF5F3: fild    [esp+28h+arg_4]
0x7AF5F7: jge     short loc_7AF5FF
0x7AF5F9: fadd    dword ptr ds:0A2FC78h
0x7AF5FF: test    ebp, ebp
0x7AF601: mov     [esp+28h+arg_4], ebp
0x7AF605: fild    [esp+28h+arg_4]
0x7AF609: jge     short loc_7AF611
0x7AF60B: fadd    dword ptr ds:0A2FC78h
0x7AF611: fdivp   st(1), st
0x7AF613: mov     ecx, ds:0B3F928h
0x7AF619: mov     eax, [ecx]
0x7AF61B: mov     edx, [eax+7Ch]
0x7AF61E: fstp    [esp+28h+arg_4]
0x7AF622: call    edx
0x7AF624: mov     esi, eax
0x7AF626: mov     eax, [edi]
0x7AF628: mov     ecx, [eax+20h]
0x7AF62B: test    ecx, ecx
0x7AF62D: jz      short loc_7AF63A
0x7AF62F: mov     eax, [ecx]
0x7AF631: mov     edx, [eax+50h]
0x7AF634: call    edx
0x7AF636: mov     ebp, eax
0x7AF638: jmp     short loc_7AF63C
0x7AF63A: xor     ebp, ebp
0x7AF63C: mov     eax, [esi]
0x7AF63E: mov     edx, [eax+50h]
0x7AF641: push    0
0x7AF643: mov     ecx, esi
0x7AF645: call    edx
0x7AF647: test    eax, eax
0x7AF649: mov     [esp+28h+var_14], eax
0x7AF64D: fild    [esp+28h+var_14]
0x7AF651: jge     short loc_7AF659
0x7AF653: fadd    dword ptr ds:0A2FC78h
0x7AF659: test    ebp, ebp
0x7AF65B: mov     [esp+28h+var_14], ebp
0x7AF65F: fild    [esp+28h+var_14]
0x7AF663: jge     short loc_7AF66B
0x7AF665: fadd    dword ptr ds:0A2FC78h
0x7AF66B: cmp     byte ptr ds:0B42E96h, 0
0x7AF672: fdivp   st(1), st
0x7AF674: fstp    [esp+28h+var_18]
0x7AF678: fldz
0x7AF67A: fst     [esp+28h+var_10]
0x7AF67E: fld1
0x7AF680: fst     [esp+28h+var_C]
0x7AF684: fst     [esp+28h+var_8]
0x7AF688: fxch    st(1)
0x7AF68A: fstp    [esp+28h+var_4]
0x7AF68E: jz      short loc_7AF698
0x7AF690: fst     [esp+28h+arg_4]
0x7AF694: fst     [esp+28h+var_18]
0x7AF698: mov     eax, [edi]
0x7AF69A: mov     ecx, [eax+20h]
0x7AF69D: xor     ebp, ebp
0x7AF69F: cmp     ecx, ebp
0x7AF6A1: jz      short loc_7AF6B0
0x7AF6A3: mov     eax, [ecx]
0x7AF6A5: fstp    st
0x7AF6A7: mov     edx, [eax+4Ch]
0x7AF6AA: call    edx
0x7AF6AC: fld1
0x7AF6AE: jmp     short loc_7AF6B2
0x7AF6B0: xor     eax, eax
0x7AF6B2: test    eax, eax
0x7AF6B4: mov     [esp+28h+var_14], eax
0x7AF6B8: fild    [esp+28h+var_14]
0x7AF6BC: jge     short loc_7AF6C4
0x7AF6BE: fadd    dword ptr ds:0A2FC78h
0x7AF6C4: fdivr   qword ptr ds:0A2FAA0h
0x7AF6CA: mov     eax, [edi]
0x7AF6CC: mov     ecx, [eax+20h]
0x7AF6CF: cmp     ecx, ebp
0x7AF6D1: fstp    [esp+28h+var_14]
0x7AF6D5: jz      short loc_7AF6E4
0x7AF6D7: mov     eax, [ecx]
0x7AF6D9: fstp    st
0x7AF6DB: mov     edx, [eax+50h]
0x7AF6DE: call    edx
0x7AF6E0: fld1
0x7AF6E2: jmp     short loc_7AF6E6
0x7AF6E4: xor     eax, eax
0x7AF6E6: test    eax, eax
0x7AF6E8: fld     [esp+28h+arg_4]
0x7AF6EC: fst     dword ptr [ebx+0A0h]
0x7AF6F2: mov     [esp+28h+arg_4], eax
0x7AF6F6: fld     [esp+28h+var_18]
0x7AF6FA: fst     dword ptr [ebx+0A4h]
0x7AF700: fld     [esp+28h+var_14]
0x7AF704: fldz
0x7AF706: fadd    st(1), st
0x7AF708: fxch    st(1)
0x7AF70A: fstp    dword ptr [ebx+0A8h]
0x7AF710: fild    [esp+28h+arg_4]
0x7AF714: jge     short loc_7AF71C
0x7AF716: fadd    dword ptr ds:0A2FC78h
0x7AF71C: cmp     [esp+28h+arg_C], 0
0x7AF721: fdivr   qword ptr ds:0A2FAA0h
0x7AF727: mov     [ebx+90h], ebp
0x7AF72D: fstp    [esp+28h+arg_4]
0x7AF731: fadd    [esp+28h+arg_4]
0x7AF735: fstp    dword ptr [ebx+0ACh]
0x7AF73B: jz      short loc_7AF747
0x7AF73D: fstp    st(1)
0x7AF73F: fstp    st
0x7AF741: fst     [esp+28h+var_C]
0x7AF745: jmp     short loc_7AF74D
0x7AF747: fstp    st(2)
0x7AF749: fstp    [esp+28h+var_C]
0x7AF74D: mov     eax, [edi]
0x7AF74F: fstp    [esp+28h+var_8]
0x7AF753: push    eax; a2
0x7AF754: mov     ecx, ebx; this
0x7AF756: call    sub_802890
0x7AF75B: mov     ecx, [esp+28h+arg_8]
0x7AF75F: mov     ecx, [ecx]
0x7AF761: cmp     ecx, ebp
0x7AF763: jz      short loc_7AF76C
0x7AF765: call    BSRenderedTexture__UseTextureToRender
0x7AF76A: jmp     short loc_7AF779
0x7AF76C: mov     ecx, ds:0B3F928h
0x7AF772: mov     edx, [ecx]
0x7AF774: mov     eax, [edx+7Ch]
0x7AF777: call    eax
0x7AF779: mov     edi, 1
0x7AF77E: push    edi; clearFlags
0x7AF77F: push    eax; a1
0x7AF780: call    StartUsingRenderTarget
0x7AF785: mov     ecx, ds:0B3F928h
0x7AF78B: add     esp, 8
0x7AF78E: cmp     [ecx+200h], edi
0x7AF794: jz      short loc_7AF79E
0x7AF796: cmp     [ecx+204h], edi
0x7AF79C: jnz     short loc_7AF7BC
0x7AF79E: cmp     byte ptr [ecx+20Ch], 1
0x7AF7A5: jnz     short loc_7AF7BC
0x7AF7A7: mov     edx, [ecx]
0x7AF7A9: mov     edx, [edx+144h]
0x7AF7AF: lea     eax, [esp+28h+var_10]
0x7AF7B3: push    eax
0x7AF7B4: call    edx
0x7AF7B6: mov     ecx, ds:0B3F928h
0x7AF7BC: push    ecx
0x7AF7BD: mov     ecx, [esp+2Ch+arg_0]; this
0x7AF7C1: call    sub_709C60
0x7AF7C6: call    sub_7D7110
0x7AF7CB: mov     esi, [ebx+0C0h]
0x7AF7D1: cmp     esi, ebp
0x7AF7D3: jz      short loc_7AF7F6
0x7AF7D5: lea     eax, [esi+4]
0x7AF7D8: push    eax; lpAddend
0x7AF7D9: call    dword ptr ds:0A2807Ch
0x7AF7DF: test    eax, eax
0x7AF7E1: jnz     short loc_7AF7F0
0x7AF7E3: cmp     esi, ebp
0x7AF7E5: jz      short loc_7AF7F0
0x7AF7E7: mov     edx, [esi]
0x7AF7E9: mov     eax, [edx]
0x7AF7EB: push    edi
0x7AF7EC: mov     ecx, esi
0x7AF7EE: call    eax
0x7AF7F0: mov     [ebx+0C0h], ebp
0x7AF7F6: pop     edi
0x7AF7F7: pop     esi
0x7AF7F8: pop     ebp
0x7AF7F9: pop     ebx
0x7AF7FA: add     esp, 18h
0x7AF7FD: retn    10h
