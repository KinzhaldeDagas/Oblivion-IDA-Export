0x7EB3D0: sub     esp, 34h
0x7EB3D3: mov     eax, ds:0B43104h
0x7EB3D8: push    ebx
0x7EB3D9: push    ebp
0x7EB3DA: push    esi
0x7EB3DB: push    edi; _DWORD
0x7EB3DC: push    13h; a3
0x7EB3DE: mov     [esp+48h+var_30], ecx
0x7EB3E2: mov     ecx, ds:0B42F50h; this
0x7EB3E8: push    eax; a2
0x7EB3E9: mov     [esp+4Ch+var_34], 0
0x7EB3F1: call    BSTextureManager_GetDefaultRenderTarget
0x7EB3F6: mov     ecx, ds:0B43104h
0x7EB3FC: push    13h; a3
0x7EB3FE: push    ecx; a2
0x7EB3FF: mov     ecx, ds:0B42F50h; this
0x7EB405: mov     [esp+4Ch+a2], eax
0x7EB409: call    BSTextureManager_GetDefaultRenderTarget
0x7EB40E: fldz
0x7EB410: mov     dl, ds:0B43075h
0x7EB416: fst     [esp+44h+var_10]
0x7EB41A: fld1
0x7EB41C: mov     ebx, [esp+44h+arg_4]
0x7EB420: neg     dl
0x7EB422: fst     [esp+44h+var_C]
0x7EB426: fst     [esp+44h+var_8]
0x7EB42A: mov     [esp+44h+var_20], eax
0x7EB42E: fxch    st(1)
0x7EB430: fstp    [esp+44h+var_4]
0x7EB434: sbb     edx, edx
0x7EB436: and     edx, 7
0x7EB439: cmp     byte ptr ds:0B42E96h, 0
0x7EB440: mov     [esp+44h+a1], edx
0x7EB444: jz      short loc_7EB44F
0x7EB446: fst     [esp+44h+arg_4]
0x7EB44A: jmp     loc_7EB501
0x7EB44F: mov     ecx, ds:0B3F928h
0x7EB455: fstp    st
0x7EB457: mov     eax, [ecx]
0x7EB459: mov     edx, [eax+7Ch]
0x7EB45C: call    edx
0x7EB45E: mov     esi, eax
0x7EB460: mov     eax, [ebx]
0x7EB462: mov     ecx, [eax+20h]
0x7EB465: test    ecx, ecx
0x7EB467: jz      short loc_7EB474
0x7EB469: mov     eax, [ecx]
0x7EB46B: mov     edx, [eax+4Ch]
0x7EB46E: call    edx
0x7EB470: mov     edi, eax
0x7EB472: jmp     short loc_7EB476
0x7EB474: xor     edi, edi
0x7EB476: mov     eax, [esi]
0x7EB478: mov     edx, [eax+4Ch]
0x7EB47B: push    0
0x7EB47D: mov     ecx, esi
0x7EB47F: call    edx
0x7EB481: test    eax, eax
0x7EB483: mov     [esp+48h+arg_0], eax
0x7EB487: fild    [esp+48h+arg_0]
0x7EB48B: jge     short loc_7EB493
0x7EB48D: fadd    dword ptr ds:0A2FC78h
0x7EB493: test    edi, edi
0x7EB495: mov     [esp+48h+arg_0], edi
0x7EB499: fild    [esp+48h+arg_0]
0x7EB49D: jge     short loc_7EB4A5
0x7EB49F: fadd    dword ptr ds:0A2FC78h
0x7EB4A5: fdivp   st(1), st
0x7EB4A7: mov     ecx, ds:0B3F928h
0x7EB4AD: mov     eax, [ecx]
0x7EB4AF: mov     edx, [eax+7Ch]
0x7EB4B2: fstp    [esp+48h+arg_0]
0x7EB4B6: call    edx
0x7EB4B8: mov     esi, eax
0x7EB4BA: mov     eax, [ebx]
0x7EB4BC: mov     ecx, [eax+20h]
0x7EB4BF: test    ecx, ecx
0x7EB4C1: jz      short loc_7EB4CE
0x7EB4C3: mov     eax, [ecx]
0x7EB4C5: mov     edx, [eax+50h]
0x7EB4C8: call    edx
0x7EB4CA: mov     edi, eax
0x7EB4CC: jmp     short loc_7EB4D0
0x7EB4CE: xor     edi, edi
0x7EB4D0: mov     eax, [esi]
0x7EB4D2: mov     edx, [eax+50h]
0x7EB4D5: push    0
0x7EB4D7: mov     ecx, esi
0x7EB4D9: call    edx
0x7EB4DB: test    eax, eax
0x7EB4DD: mov     [esp+4Ch+a1], eax
0x7EB4E1: fild    [esp+4Ch+a1]
0x7EB4E5: jge     short loc_7EB4ED
0x7EB4E7: fadd    dword ptr ds:0A2FC78h
0x7EB4ED: test    edi, edi
0x7EB4EF: mov     [esp+4Ch+a1], edi
0x7EB4F3: fild    [esp+4Ch+a1]
0x7EB4F7: jge     short loc_7EB4FF
0x7EB4F9: fadd    dword ptr ds:0A2FC78h
0x7EB4FF: fdivp   st(1), st
0x7EB501: mov     eax, [ebx]
0x7EB503: fstp    [esp+44h+var_2C]
0x7EB507: mov     ecx, [eax+20h]
0x7EB50A: test    ecx, ecx
0x7EB50C: jz      short loc_7EB517
0x7EB50E: mov     eax, [ecx]
0x7EB510: mov     edx, [eax+4Ch]
0x7EB513: call    edx
0x7EB515: jmp     short loc_7EB519
0x7EB517: xor     eax, eax
0x7EB519: test    eax, eax
0x7EB51B: mov     [esp+44h+var_14], eax
0x7EB51F: fild    [esp+44h+var_14]
0x7EB523: jge     short loc_7EB52B
0x7EB525: fadd    dword ptr ds:0A2FC78h
0x7EB52B: fdivr   qword ptr ds:0A2FAA0h
0x7EB531: mov     eax, [ebx]
0x7EB533: mov     ecx, [eax+20h]
0x7EB536: test    ecx, ecx
0x7EB538: fstp    [esp+44h+var_14]
0x7EB53C: jz      short loc_7EB547
0x7EB53E: mov     eax, [ecx]
0x7EB540: mov     edx, [eax+50h]
0x7EB543: call    edx
0x7EB545: jmp     short loc_7EB549
0x7EB547: xor     eax, eax
0x7EB549: test    eax, eax
0x7EB54B: mov     [esp+44h+var_18], eax
0x7EB54F: fild    [esp+44h+var_18]
0x7EB553: jge     short loc_7EB55B
0x7EB555: fadd    dword ptr ds:0A2FC78h
0x7EB55B: fdivr   qword ptr ds:0A2FAA0h
0x7EB561: mov     eax, [esp+44h+var_30]
0x7EB565: fstp    [esp+44h+var_24]
0x7EB569: fld     [esp+44h+arg_4]
0x7EB56D: fstp    dword ptr ds:0B2D8ECh
0x7EB573: fld     [esp+44h+var_2C]
0x7EB577: fstp    dword ptr ds:0B2D8F0h
0x7EB57D: fld     [esp+44h+var_14]
0x7EB581: fldz
0x7EB583: fadd    st(1), st
0x7EB585: fxch    st(1)
0x7EB587: fstp    [esp+44h+var_18]
0x7EB58B: fld     [esp+44h+var_18]
0x7EB58F: fstp    dword ptr ds:0B2D8F4h
0x7EB595: fadd    [esp+44h+var_24]
0x7EB599: fstp    [esp+44h+var_14]
0x7EB59D: fld     [esp+44h+var_14]
0x7EB5A1: fstp    dword ptr ds:0B2D8F8h
0x7EB5A7: mov     dword ptr [eax+90h], 0
0x7EB5B1: mov     eax, [eax+0B0h]
0x7EB5B7: mov     ecx, [eax+24h]
0x7EB5BA: mov     ebp, [ecx]
0x7EB5BC: mov     ecx, [ebx]; this
0x7EB5BE: call    BSRenderedTexture__GetInnerTexture
0x7EB5C3: mov     esi, [ebp+4]
0x7EB5C6: mov     edi, eax
0x7EB5C8: cmp     esi, edi
0x7EB5CA: jz      short loc_7EB5FD
0x7EB5CC: test    esi, esi
0x7EB5CE: jz      short loc_7EB5EC
0x7EB5D0: lea     edx, [esi+4]
0x7EB5D3: push    edx; lpAddend
0x7EB5D4: call    dword ptr ds:0A2807Ch
0x7EB5DA: test    eax, eax
0x7EB5DC: jnz     short loc_7EB5EC
0x7EB5DE: test    esi, esi
0x7EB5E0: jz      short loc_7EB5EC
0x7EB5E2: mov     eax, [esi]
0x7EB5E4: mov     edx, [eax]
0x7EB5E6: push    1
0x7EB5E8: mov     ecx, esi
0x7EB5EA: call    edx
0x7EB5EC: test    edi, edi
0x7EB5EE: mov     [ebp+4], edi
0x7EB5F1: jz      short loc_7EB5FD
0x7EB5F3: add     edi, 4
0x7EB5F6: push    edi; lpAddend
0x7EB5F7: call    dword ptr ds:0A28078h
0x7EB5FD: mov     esi, [esp+50h+var_34]
0x7EB601: mov     ecx, esi
0x7EB603: call    BSRenderedTexture__UseTextureToRender
0x7EB608: push    eax; a2
0x7EB609: mov     edi, 1
0x7EB60E: push    edi; a1
0x7EB60F: call    NiRenderer_BeginScene
0x7EB614: mov     ecx, ds:0B3F928h
0x7EB61A: add     esp, 8
0x7EB61D: cmp     [ecx+200h], edi
0x7EB623: jz      short loc_7EB62D
0x7EB625: cmp     [ecx+204h], edi
0x7EB62B: jnz     short loc_7EB648
0x7EB62D: cmp     byte ptr [ecx+20Ch], 1
0x7EB634: jnz     short loc_7EB648
0x7EB636: mov     eax, [ecx]
0x7EB638: mov     edx, [eax+144h]
0x7EB63E: push    0
0x7EB640: call    edx
0x7EB642: mov     ecx, ds:0B3F928h
0x7EB648: push    ecx
0x7EB649: mov     ecx, [esp+58h+var_C]; this
0x7EB64D: call    sub_709C60
0x7EB652: call    NiRenderer_EndScene
0x7EB657: fld1
0x7EB659: mov     eax, [esp+58h+var_44]
0x7EB65D: fst     dword ptr ds:0B2D8ECh
0x7EB663: mov     ecx, [esp+58h+var_34]
0x7EB667: fstp    dword ptr ds:0B2D8F0h
0x7EB66D: fldz
0x7EB66F: fst     dword ptr ds:0B2D8F4h
0x7EB675: fst     dword ptr ds:0B2D8F8h
0x7EB67B: mov     [eax+90h], edi
0x7EB681: fstp    dword ptr ds:0B46114h
0x7EB687: fld     dword ptr ds:0A92380h
0x7EB68D: fstp    dword ptr ds:0B46118h
0x7EB693: call    BSRenderedTexture__UseTextureToRender
0x7EB698: mov     ecx, [esp+58h+var_30]
0x7EB69C: push    eax; a2
0x7EB69D: push    ecx; a1
0x7EB69E: call    NiRenderer_BeginScene
0x7EB6A3: add     esp, 8
0x7EB6A6: test    esi, esi
0x7EB6A8: jz      short loc_7EB6B3
0x7EB6AA: lea     eax, [esi+20h]
0x7EB6AD: mov     esi, [esp+58h+var_38]
0x7EB6B1: jmp     short loc_7EB6C1
0x7EB6B3: xor     esi, esi
0x7EB6B5: mov     [esp+58h+var_38], esi
0x7EB6B9: lea     eax, [esp+58h+var_38]
0x7EB6BD: mov     [esp+58h+var_48], edi
0x7EB6C1: test    byte ptr [esp+58h+var_48], 1
0x7EB6C6: mov     ebp, [eax]
0x7EB6C8: jz      short loc_7EB6EB
0x7EB6CA: and     [esp+58h+var_48], 0FFFFFFFEh
0x7EB6CF: test    esi, esi
0x7EB6D1: jz      short loc_7EB6EB
0x7EB6D3: lea     edx, [esi+4]
0x7EB6D6: push    edx; lpAddend
0x7EB6D7: call    dword ptr ds:0A2807Ch
0x7EB6DD: test    eax, eax
0x7EB6DF: jnz     short loc_7EB6EB
0x7EB6E1: mov     eax, [esi]
0x7EB6E3: mov     edx, [eax]
0x7EB6E5: push    1
0x7EB6E7: mov     ecx, esi
0x7EB6E9: call    edx
0x7EB6EB: mov     eax, [esp+60h+var_4C]
0x7EB6EF: mov     ecx, [eax+0ACh]
0x7EB6F5: mov     edx, [ecx+24h]
0x7EB6F8: mov     edi, [edx]
0x7EB6FA: mov     esi, [edi+4]
0x7EB6FD: add     edi, 4
0x7EB700: cmp     esi, ebp
0x7EB702: jz      short loc_7EB734
0x7EB704: test    esi, esi
0x7EB706: jz      short loc_7EB724
0x7EB708: lea     eax, [esi+4]
0x7EB70B: push    eax; lpAddend
0x7EB70C: call    dword ptr ds:0A2807Ch
0x7EB712: test    eax, eax
0x7EB714: jnz     short loc_7EB724
0x7EB716: test    esi, esi
0x7EB718: jz      short loc_7EB724
0x7EB71A: mov     edx, [esi]
0x7EB71C: mov     eax, [edx]
0x7EB71E: push    1
0x7EB720: mov     ecx, esi
0x7EB722: call    eax
0x7EB724: test    ebp, ebp
0x7EB726: mov     [edi], ebp
0x7EB728: jz      short loc_7EB734
0x7EB72A: add     ebp, 4
0x7EB72D: push    ebp; lpAddend
0x7EB72E: call    dword ptr ds:0A28078h
0x7EB734: mov     ecx, ds:0B3F928h
0x7EB73A: mov     eax, 1
0x7EB73F: cmp     [ecx+200h], eax
0x7EB745: jz      short loc_7EB74F
0x7EB747: cmp     [ecx+204h], eax
0x7EB74D: jnz     short loc_7EB769
0x7EB74F: cmp     [ecx+20Ch], al
0x7EB755: jnz     short loc_7EB769
0x7EB757: mov     edx, [ecx]
0x7EB759: mov     eax, [edx+144h]
0x7EB75F: push    0
0x7EB761: call    eax
0x7EB763: mov     ecx, ds:0B3F928h
0x7EB769: push    ecx
0x7EB76A: mov     ecx, [esp+74h+a2]; this
0x7EB76E: call    sub_709C60
0x7EB773: call    NiRenderer_EndScene
0x7EB778: fld     dword ptr ds:0A92380h
0x7EB77E: mov     eax, [esp+74h+var_50]
0x7EB782: fstp    dword ptr ds:0B46114h
0x7EB788: test    eax, eax
0x7EB78A: fldz
0x7EB78C: fstp    dword ptr ds:0B46118h
0x7EB792: jz      short loc_7EB79D
0x7EB794: mov     esi, [esp+74h+var_54]
0x7EB798: add     eax, 20h ; ' '
0x7EB79B: jmp     short loc_7EB7AC
0x7EB79D: xor     esi, esi
0x7EB79F: or      [esp+74h+var_64], 2
0x7EB7A4: mov     [esp+74h+var_54], esi
0x7EB7A8: lea     eax, [esp+74h+var_54]
0x7EB7AC: test    byte ptr [esp+74h+var_64], 2
0x7EB7B1: mov     ebp, [eax]
0x7EB7B3: jz      short loc_7EB7D6
0x7EB7B5: and     [esp+74h+var_64], 0FFFFFFFDh
0x7EB7BA: test    esi, esi
0x7EB7BC: jz      short loc_7EB7D6
0x7EB7BE: lea     ecx, [esi+4]
0x7EB7C1: push    ecx; lpAddend
0x7EB7C2: call    dword ptr ds:0A2807Ch
0x7EB7C8: test    eax, eax
0x7EB7CA: jnz     short loc_7EB7D6
0x7EB7CC: mov     edx, [esi]
0x7EB7CE: mov     eax, [edx]
0x7EB7D0: push    1
0x7EB7D2: mov     ecx, esi
0x7EB7D4: call    eax
0x7EB7D6: mov     ecx, [esp+7Ch+var_68]
0x7EB7DA: mov     edx, [ecx+0ACh]
0x7EB7E0: mov     eax, [edx+24h]
0x7EB7E3: mov     edi, [eax]
0x7EB7E5: mov     esi, [edi+4]
0x7EB7E8: add     edi, 4
0x7EB7EB: cmp     esi, ebp
0x7EB7ED: jz      short loc_7EB81F
0x7EB7EF: test    esi, esi
0x7EB7F1: jz      short loc_7EB80F
0x7EB7F3: lea     ecx, [esi+4]
0x7EB7F6: push    ecx; lpAddend
0x7EB7F7: call    dword ptr ds:0A2807Ch
0x7EB7FD: test    eax, eax
0x7EB7FF: jnz     short loc_7EB80F
0x7EB801: test    esi, esi
0x7EB803: jz      short loc_7EB80F
0x7EB805: mov     edx, [esi]
0x7EB807: mov     eax, [edx]
0x7EB809: push    1
0x7EB80B: mov     ecx, esi
0x7EB80D: call    eax
0x7EB80F: test    ebp, ebp
0x7EB811: mov     [edi], ebp
0x7EB813: jz      short loc_7EB81F
0x7EB815: add     ebp, 4
0x7EB818: push    ebp; lpAddend
0x7EB819: call    dword ptr ds:0A28078h
0x7EB81F: mov     ecx, [esp+88h+var_6C]
0x7EB823: call    BSRenderedTexture__UseTextureToRender
0x7EB828: mov     ecx, [esp+88h+var_60]
0x7EB82C: push    eax; a2
0x7EB82D: push    ecx; a1
0x7EB82E: call    NiRenderer_BeginScene
0x7EB833: mov     ecx, ds:0B3F928h
0x7EB839: mov     edi, 1
0x7EB83E: add     esp, 8
0x7EB841: cmp     [ecx+200h], edi
0x7EB847: jz      short loc_7EB851
0x7EB849: cmp     [ecx+204h], edi
0x7EB84F: jnz     short loc_7EB86C
0x7EB851: cmp     byte ptr [ecx+20Ch], 1
0x7EB858: jnz     short loc_7EB86C
0x7EB85A: mov     edx, [ecx]
0x7EB85C: mov     eax, [edx+144h]
0x7EB862: push    0
0x7EB864: call    eax
0x7EB866: mov     ecx, ds:0B3F928h
0x7EB86C: push    ecx
0x7EB86D: mov     ecx, [esp+90h+var_44]; this
0x7EB871: call    sub_709C60
0x7EB876: call    NiRenderer_EndScene
0x7EB87B: fld     [esp+90h+var_44]
0x7EB87F: cmp     dword ptr ds:0B42D78h, 0
0x7EB886: fstp    dword ptr ds:0B2D8ECh
0x7EB88C: fld     [esp+90h+var_78]
0x7EB890: fstp    dword ptr ds:0B2D8F0h
0x7EB896: fld     [esp+90h+var_64]
0x7EB89A: fstp    dword ptr ds:0B2D8F4h
0x7EB8A0: fld     [esp+90h+var_60]
0x7EB8A4: fstp    dword ptr ds:0B2D8F8h
0x7EB8AA: fld1
0x7EB8AC: fst     dword ptr ds:0B2D8FCh
0x7EB8B2: fstp    dword ptr ds:0B2D900h
0x7EB8B8: fldz
0x7EB8BA: fst     dword ptr ds:0B2D904h
0x7EB8C0: fst     dword ptr ds:0B2D908h
0x7EB8C6: jz      short loc_7EB8DE
0x7EB8C8: push    edi; _DWORD
0x7EB8C9: fstp    st
0x7EB8CB: push    0; _DWORD
0x7EB8CD: call    dword ptr ds:0B42D78h
0x7EB8D3: fstp    [esp+98h+var_60]
0x7EB8D7: fldz
0x7EB8D9: add     esp, 8
0x7EB8DC: jmp     short loc_7EB8E2
0x7EB8DE: fst     [esp+90h+var_60]
0x7EB8E2: cmp     dword ptr ds:0B42D78h, 0
0x7EB8E9: fld     [esp+90h+var_60]
0x7EB8ED: fdiv    qword ptr ds:0A2F938h
0x7EB8F3: fmul    qword ptr ds:0A56E20h
0x7EB8F9: fstp    [esp+90h+var_60]
0x7EB8FD: jz      short loc_7EB914
0x7EB8FF: push    edi; _DWORD
0x7EB900: fstp    st
0x7EB902: push    edi; _DWORD
0x7EB903: call    dword ptr ds:0B42D78h
0x7EB909: fstp    [esp+98h+var_70]
0x7EB90D: fldz
0x7EB90F: add     esp, 8
0x7EB912: jmp     short loc_7EB918
0x7EB914: fst     [esp+90h+var_70]
0x7EB918: fld     dword ptr ds:0B46124h
0x7EB91E: fld     [esp+90h+var_70]
0x7EB922: fmul    qword ptr ds:0A73E80h
0x7EB928: fsubp   st(1), st
0x7EB92A: fstp    dword ptr ds:0B46124h
0x7EB930: fcom    dword ptr ds:0B46124h
0x7EB936: fnstsw  ax
0x7EB938: test    ah, 5
0x7EB93B: jnp     short loc_7EB945
0x7EB93D: fstp    dword ptr ds:0B46124h
0x7EB943: jmp     short loc_7EB947
0x7EB945: fstp    st
0x7EB947: fld     [esp+90h+var_60]
0x7EB94B: call    __CIsin
0x7EB950: fstp    [esp+90h+var_64]
0x7EB954: fld     [esp+90h+var_64]
0x7EB958: fmul    dword ptr ds:0B46124h
0x7EB95E: fstp    dword ptr ds:0B2D90Ch
0x7EB964: fld     [esp+90h+var_60]
0x7EB968: call    __CIcos
0x7EB96D: fstp    [esp+90h+var_60]
0x7EB971: fld     [esp+90h+var_60]
0x7EB975: fmul    dword ptr ds:0B46124h
0x7EB97B: fstp    dword ptr ds:0B2D910h
0x7EB981: fld     [esp+90h+var_44]
0x7EB985: fstp    dword ptr ds:0B2D914h
0x7EB98B: fld     [esp+90h+var_78]
0x7EB98F: fstp    dword ptr ds:0B2D918h
0x7EB995: fld     dword ptr ds:0B46120h
0x7EB99B: fld     [esp+90h+var_70]
0x7EB99F: fmul    qword ptr ds:0A2FAA0h
0x7EB9A5: fsubp   st(1), st
0x7EB9A7: fldz
0x7EB9A9: fcom    st(1)
0x7EB9AB: fnstsw  ax
0x7EB9AD: test    ah, 5
0x7EB9B0: jp      short loc_7EB9B6
0x7EB9B2: fstp    st
0x7EB9B4: jmp     short loc_7EB9B8
0x7EB9B6: fstp    st(1)
0x7EB9B8: mov     ecx, [esp+90h+var_7C]
0x7EB9BC: fstp    dword ptr ds:0B46120h
0x7EB9C2: fld     dword ptr ds:0B46130h
0x7EB9C8: fmul    dword ptr ds:0B46120h
0x7EB9CE: fstp    dword ptr ds:0B4611Ch
0x7EB9D4: mov     dword ptr [ecx+90h], 2
0x7EB9DE: mov     eax, [ebx]
0x7EB9E0: test    eax, eax
0x7EB9E2: mov     ebx, [esp+90h+var_80]
0x7EB9E6: jz      short loc_7EB9F1
0x7EB9E8: mov     esi, [esp+90h+var_60]
0x7EB9EC: add     eax, 20h ; ' '
0x7EB9EF: jmp     short loc_7EB9FE
0x7EB9F1: xor     esi, esi
0x7EB9F3: mov     [esp+90h+var_60], esi
0x7EB9F7: lea     eax, [esp+90h+var_60]
0x7EB9FB: or      ebx, 4
0x7EB9FE: test    bl, 4
0x7EBA01: mov     ebp, [eax]
0x7EBA03: jz      short loc_7EBA23
0x7EBA05: and     ebx, 0FFFFFFFBh
0x7EBA08: test    esi, esi
0x7EBA0A: jz      short loc_7EBA23
0x7EBA0C: lea     edx, [esi+4]
0x7EBA0F: push    edx; lpAddend
0x7EBA10: call    dword ptr ds:0A2807Ch
0x7EBA16: test    eax, eax
0x7EBA18: jnz     short loc_7EBA23
0x7EBA1A: mov     eax, [esi]
0x7EBA1C: mov     edx, [eax]
0x7EBA1E: push    edi
0x7EBA1F: mov     ecx, esi
0x7EBA21: call    edx
0x7EBA23: mov     eax, [esp+98h+var_84]
0x7EBA27: mov     ecx, [eax+70h]
0x7EBA2A: mov     edx, [ecx+24h]
0x7EBA2D: mov     edi, [edx]
0x7EBA2F: mov     esi, [edi+4]
0x7EBA32: add     edi, 4
0x7EBA35: cmp     esi, ebp
0x7EBA37: jz      short loc_7EBA69
0x7EBA39: test    esi, esi
0x7EBA3B: jz      short loc_7EBA59
0x7EBA3D: lea     eax, [esi+4]
0x7EBA40: push    eax; lpAddend
0x7EBA41: call    dword ptr ds:0A2807Ch
0x7EBA47: test    eax, eax
0x7EBA49: jnz     short loc_7EBA59
0x7EBA4B: test    esi, esi
0x7EBA4D: jz      short loc_7EBA59
0x7EBA4F: mov     edx, [esi]
0x7EBA51: mov     eax, [edx]
0x7EBA53: push    1
0x7EBA55: mov     ecx, esi
0x7EBA57: call    eax
0x7EBA59: test    ebp, ebp
0x7EBA5B: mov     [edi], ebp
0x7EBA5D: jz      short loc_7EBA69
0x7EBA5F: add     ebp, 4
0x7EBA62: push    ebp; lpAddend
0x7EBA63: call    dword ptr ds:0A28078h
0x7EBA69: mov     eax, [esp+0A4h+var_88]
0x7EBA6D: test    eax, eax
0x7EBA6F: jz      short loc_7EBA7A
0x7EBA71: mov     esi, [esp+0A4h+var_74]
0x7EBA75: add     eax, 20h ; ' '
0x7EBA78: jmp     short loc_7EBA87
0x7EBA7A: xor     esi, esi
0x7EBA7C: mov     [esp+0A4h+var_74], esi
0x7EBA80: lea     eax, [esp+0A4h+var_74]
0x7EBA84: or      ebx, 8
0x7EBA87: test    bl, 8
0x7EBA8A: mov     ebp, [eax]
0x7EBA8C: jz      short loc_7EBAAA
0x7EBA8E: test    esi, esi
0x7EBA90: jz      short loc_7EBAAA
0x7EBA92: lea     ecx, [esi+4]
0x7EBA95: push    ecx; lpAddend
0x7EBA96: call    dword ptr ds:0A2807Ch
0x7EBA9C: test    eax, eax
0x7EBA9E: jnz     short loc_7EBAAA
0x7EBAA0: mov     edx, [esi]
0x7EBAA2: mov     eax, [edx]
0x7EBAA4: push    1
0x7EBAA6: mov     ecx, esi
0x7EBAA8: call    eax
0x7EBAAA: mov     ebx, [esp+0ACh+var_98]
0x7EBAAE: mov     ecx, [ebx+70h]
0x7EBAB1: mov     edx, [ecx+24h]
0x7EBAB4: mov     edi, [edx+4]
0x7EBAB7: mov     esi, [edi+4]
0x7EBABA: add     edi, 4
0x7EBABD: cmp     esi, ebp
0x7EBABF: jz      short loc_7EBAF1
0x7EBAC1: test    esi, esi
0x7EBAC3: jz      short loc_7EBAE1
0x7EBAC5: lea     eax, [esi+4]
0x7EBAC8: push    eax; lpAddend
0x7EBAC9: call    dword ptr ds:0A2807Ch
0x7EBACF: test    eax, eax
0x7EBAD1: jnz     short loc_7EBAE1
0x7EBAD3: test    esi, esi
0x7EBAD5: jz      short loc_7EBAE1
0x7EBAD7: mov     edx, [esi]
0x7EBAD9: mov     eax, [edx]
0x7EBADB: push    1
0x7EBADD: mov     ecx, esi
0x7EBADF: call    eax
0x7EBAE1: test    ebp, ebp
0x7EBAE3: mov     [edi], ebp
0x7EBAE5: jz      short loc_7EBAF1
0x7EBAE7: add     ebp, 4
0x7EBAEA: push    ebp; lpAddend
0x7EBAEB: call    dword ptr ds:0A28078h
0x7EBAF1: cmp     byte ptr [esp+0B8h+var_64], 0
0x7EBAF6: jz      short loc_7EBB00
0x7EBAF8: fld1
0x7EBAFA: fst     [esp+0B8h+var_80]
0x7EBAFE: jmp     short loc_7EBB0C
0x7EBB00: fld     [esp+0B8h+var_6C]
0x7EBB04: fstp    [esp+0B8h+var_80]
0x7EBB08: fld     [esp+0B8h+var_A0]
0x7EBB0C: mov     esi, [esp+0B8h+var_68]
0x7EBB10: fstp    [esp+0B8h+var_7C]
0x7EBB14: mov     ecx, [esi]
0x7EBB16: test    ecx, ecx
0x7EBB18: jz      short loc_7EBB29
0x7EBB1A: call    BSRenderedTexture__UseTextureToRender
0x7EBB1F: push    eax; a2
0x7EBB20: push    1; a1
0x7EBB22: call    NiRenderer_BeginScene
0x7EBB27: jmp     short loc_7EBB32
0x7EBB29: push    0; a2
0x7EBB2B: push    1; a1
0x7EBB2D: call    NiRenderer_BeginScene1
0x7EBB32: mov     ecx, ds:0B3F928h
0x7EBB38: mov     eax, 1
0x7EBB3D: add     esp, 8
0x7EBB40: cmp     [ecx+200h], eax
0x7EBB46: jz      short loc_7EBB50
0x7EBB48: cmp     [ecx+204h], eax
0x7EBB4E: jnz     short loc_7EBB6D
0x7EBB50: cmp     [ecx+20Ch], al
0x7EBB56: jnz     short loc_7EBB6D
0x7EBB58: mov     edx, [ecx]
0x7EBB5A: mov     edx, [edx+144h]
0x7EBB60: lea     eax, [esp+0B8h+var_84]
0x7EBB64: push    eax
0x7EBB65: call    edx
0x7EBB67: mov     ecx, ds:0B3F928h
0x7EBB6D: push    ecx
0x7EBB6E: mov     ecx, [esp+0C0h+var_74]; this
0x7EBB72: call    sub_709C60
0x7EBB77: cmp     dword ptr [esi], 0
0x7EBB7A: jz      short loc_7EBB81
0x7EBB7C: call    NiRenderer_EndScene
0x7EBB81: mov     eax, [ebx+70h]
0x7EBB84: mov     ecx, [eax+24h]
0x7EBB87: mov     esi, [ecx]
0x7EBB89: mov     edi, [esi+4]
0x7EBB8C: mov     ebp, ds:0A2807Ch
0x7EBB92: add     esi, 4
0x7EBB95: test    edi, edi
0x7EBB97: jz      short loc_7EBBB7
0x7EBB99: lea     edx, [edi+4]
0x7EBB9C: push    edx; lpAddend
0x7EBB9D: call    ebp ; InterlockedDecrement
0x7EBB9F: test    eax, eax
0x7EBBA1: jnz     short loc_7EBBB1
0x7EBBA3: test    edi, edi
0x7EBBA5: jz      short loc_7EBBB1
0x7EBBA7: mov     eax, [edi]
0x7EBBA9: mov     edx, [eax]
0x7EBBAB: push    1
0x7EBBAD: mov     ecx, edi
0x7EBBAF: call    edx
0x7EBBB1: mov     dword ptr [esi], 0
0x7EBBB7: mov     eax, [ebx+70h]
0x7EBBBA: mov     ecx, [eax+24h]
0x7EBBBD: mov     esi, [ecx+4]
0x7EBBC0: mov     edi, [esi+4]
0x7EBBC3: add     esi, 4
0x7EBBC6: test    edi, edi
0x7EBBC8: jz      short loc_7EBBE8
0x7EBBCA: lea     edx, [edi+4]
0x7EBBCD: push    edx; lpAddend
0x7EBBCE: call    ebp ; InterlockedDecrement
0x7EBBD0: test    eax, eax
0x7EBBD2: jnz     short loc_7EBBE2
0x7EBBD4: test    edi, edi
0x7EBBD6: jz      short loc_7EBBE2
0x7EBBD8: mov     eax, [edi]
0x7EBBDA: mov     edx, [eax]
0x7EBBDC: push    1
0x7EBBDE: mov     ecx, edi
0x7EBBE0: call    edx
0x7EBBE2: mov     dword ptr [esi], 0
0x7EBBE8: mov     eax, [ebx+0ACh]
0x7EBBEE: mov     ecx, [eax+24h]
0x7EBBF1: mov     esi, [ecx]
0x7EBBF3: mov     edi, [esi+4]
0x7EBBF6: add     esi, 4
0x7EBBF9: test    edi, edi
0x7EBBFB: jz      short loc_7EBC1B
0x7EBBFD: lea     edx, [edi+4]
0x7EBC00: push    edx; lpAddend
0x7EBC01: call    ebp ; InterlockedDecrement
0x7EBC03: test    eax, eax
0x7EBC05: jnz     short loc_7EBC15
0x7EBC07: test    edi, edi
0x7EBC09: jz      short loc_7EBC15
0x7EBC0B: mov     eax, [edi]
0x7EBC0D: mov     edx, [eax]
0x7EBC0F: push    1
0x7EBC11: mov     ecx, edi
0x7EBC13: call    edx
0x7EBC15: mov     dword ptr [esi], 0
0x7EBC1B: mov     eax, [ebx+0B0h]
0x7EBC21: mov     ecx, [eax+24h]
0x7EBC24: mov     esi, [ecx]
0x7EBC26: mov     edi, [esi+4]
0x7EBC29: add     esi, 4
0x7EBC2C: test    edi, edi
0x7EBC2E: jz      short loc_7EBC4E
0x7EBC30: lea     edx, [edi+4]
0x7EBC33: push    edx; lpAddend
0x7EBC34: call    ebp ; InterlockedDecrement
0x7EBC36: test    eax, eax
0x7EBC38: jnz     short loc_7EBC48
0x7EBC3A: test    edi, edi
0x7EBC3C: jz      short loc_7EBC48
0x7EBC3E: mov     eax, [edi]
0x7EBC40: mov     edx, [eax]
0x7EBC42: push    1
0x7EBC44: mov     ecx, edi
0x7EBC46: call    edx
0x7EBC48: mov     dword ptr [esi], 0
0x7EBC4E: mov     eax, [esp+0D0h+var_B4]
0x7EBC52: mov     ecx, ds:0B42F50h; this
0x7EBC58: push    eax; a2
0x7EBC59: call    sub_7C1EE0
0x7EBC5E: mov     ecx, [esp+0D0h+var_AC]
0x7EBC62: push    ecx; a2
0x7EBC63: mov     ecx, ds:0B42F50h; this
0x7EBC69: call    sub_7C1EE0
0x7EBC6E: pop     edi
0x7EBC6F: pop     esi
0x7EBC70: pop     ebp
0x7EBC71: pop     ebx
0x7EBC72: add     esp, 34h
0x7EBC75: retn    10h
