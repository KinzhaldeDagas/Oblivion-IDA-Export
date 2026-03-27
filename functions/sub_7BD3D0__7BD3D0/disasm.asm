0x7BD3D0: push    0FFFFFFFFh
0x7BD3D2: push    offset SEH_7BD3D0
0x7BD3D7: mov     eax, large fs:0
0x7BD3DD: push    eax
0x7BD3DE: sub     esp, 28h
0x7BD3E1: push    ebx
0x7BD3E2: push    ebp
0x7BD3E3: push    esi
0x7BD3E4: push    edi
0x7BD3E5: mov     eax, ds:0B30AACh
0x7BD3EA: xor     eax, esp
0x7BD3EC: push    eax
0x7BD3ED: lea     eax, [esp+48h+var_C]
0x7BD3F1: mov     large fs:0, eax
0x7BD3F7: mov     edi, ecx
0x7BD3F9: mov     eax, [edi]
0x7BD3FB: mov     edx, [eax+80h]
0x7BD401: call    edx
0x7BD403: mov     eax, ds:0B46658h
0x7BD408: mov     ecx, ds:0B4665Ch
0x7BD40E: mov     edx, ds:0B46660h
0x7BD414: mov     [esp+48h+var_1C], eax
0x7BD418: fld     [esp+48h+var_1C]
0x7BD41C: fsub    dword ptr ds:0B3F92Ch
0x7BD422: mov     eax, ds:0B46664h
0x7BD427: mov     [esp+48h+var_18], ecx
0x7BD42B: mov     [esp+48h+var_14], edx
0x7BD42F: fstp    [esp+48h+var_28]
0x7BD433: mov     [esp+48h+var_10], eax
0x7BD437: fld     [esp+48h+var_18]
0x7BD43B: fsub    dword ptr ds:0B3F930h
0x7BD441: fstp    [esp+48h+var_24]
0x7BD445: fld     [esp+48h+var_14]
0x7BD449: fsub    dword ptr ds:0B3F934h
0x7BD44F: fstp    [esp+48h+var_20]
0x7BD453: fld     [esp+48h+var_28]
0x7BD457: fstp    [esp+48h+var_1C]
0x7BD45B: mov     ecx, [esp+48h+var_1C]
0x7BD45F: fld     [esp+48h+var_24]
0x7BD463: mov     ds:0B43168h, ecx
0x7BD469: fstp    [esp+48h+var_18]
0x7BD46D: mov     edx, [esp+48h+var_18]
0x7BD471: fld     [esp+48h+var_20]
0x7BD475: mov     ds:0B4316Ch, edx
0x7BD47B: fstp    [esp+48h+var_14]
0x7BD47F: mov     eax, [esp+48h+var_14]
0x7BD483: fldz
0x7BD485: mov     ds:0B43170h, eax
0x7BD48A: mov     eax, [esp+48h+arg_C]
0x7BD48E: fst     [esp+48h+var_10]
0x7BD492: mov     ecx, [esp+48h+var_10]
0x7BD496: mov     ds:0B43174h, ecx
0x7BD49C: mov     ebx, [eax+18h]
0x7BD49F: mov     ecx, [ebx+88h]
0x7BD4A5: cmp     ecx, 2
0x7BD4A8: mov     edx, [eax+20h]
0x7BD4AB: jz      short loc_7BD4B2
0x7BD4AD: cmp     ecx, 4
0x7BD4B0: jnz     short loc_7BD4B6
0x7BD4B2: xor     ebp, ebp
0x7BD4B4: jmp     short loc_7BD4BB
0x7BD4B6: mov     edx, [edx+20h]
0x7BD4B9: mov     ebp, [edx]
0x7BD4BB: mov     eax, [eax+8]
0x7BD4BE: mov     [esp+48h+var_2C], eax
0x7BD4C2: mov     eax, ds:0B42E90h
0x7BD4C7: xor     esi, esi
0x7BD4C9: cmp     eax, 17Dh
0x7BD4CE: jz      short loc_7BD4DC
0x7BD4D0: cmp     eax, 19Ch
0x7BD4D5: mov     [esp+48h+var_31], 0
0x7BD4DA: jnz     short loc_7BD4E1
0x7BD4DC: mov     [esp+48h+var_31], 1
0x7BD4E1: cmp     eax, 19Dh
0x7BD4E6: jnz     short loc_7BD50F
0x7BD4E8: cmp     ecx, 2
0x7BD4EB: jz      short loc_7BD50F
0x7BD4ED: sub     ecx, esi
0x7BD4EF: mov     byte ptr [esp+48h+arg_C], 1
0x7BD4F4: jz      short loc_7BD52F
0x7BD4F6: sub     ecx, 3
0x7BD4F9: jz      short loc_7BD524
0x7BD4FB: sub     ecx, 1
0x7BD4FE: jnz     loc_7BD691
0x7BD504: mov     esi, [edi+0B8h]
0x7BD50A: jmp     loc_7BD691
0x7BD50F: cmp     eax, 3
0x7BD512: mov     byte ptr [esp+48h+arg_C], 0
0x7BD517: jnz     short loc_7BD53A
0x7BD519: mov     esi, [edi+0B4h]
0x7BD51F: jmp     loc_7BD691
0x7BD524: mov     esi, [edi+0C0h]
0x7BD52A: jmp     loc_7BD691
0x7BD52F: mov     esi, [edi+0BCh]
0x7BD535: jmp     loc_7BD691
0x7BD53A: cmp     ecx, 1
0x7BD53D: jnz     short loc_7BD54A
0x7BD53F: mov     esi, [edi+0ACh]
0x7BD545: jmp     loc_7BD691
0x7BD54A: cmp     ecx, 5
0x7BD54D: fstp    st
0x7BD54F: mov     esi, [edi+70h]
0x7BD552: jnz     short loc_7BD56D
0x7BD554: mov     eax, [edi+88h]
0x7BD55A: push    eax; a2
0x7BD55B: mov     ecx, esi; this
0x7BD55D: call    sub_7AECB0
0x7BD562: mov     eax, [edi+0A8h]
0x7BD568: jmp     loc_7BD602
0x7BD56D: cmp     ecx, 3
0x7BD570: jnz     short loc_7BD5D9
0x7BD572: movzx   eax, word ptr [ebx+84h]
0x7BD579: movzx   ecx, ax
0x7BD57C: fld     dword ptr ds:0B4315Ch[ecx*4]
0x7BD583: mov     ecx, esi; this
0x7BD585: fstp    dword ptr [edi+0DCh]
0x7BD58B: cmp     byte ptr ds:0B43164h, 0
0x7BD592: jz      short loc_7BD5C5
0x7BD594: mov     eax, [edi+94h]
0x7BD59A: push    eax; a2
0x7BD59B: call    sub_7AECB0
0x7BD5A0: mov     eax, [edi+9Ch]
0x7BD5A6: mov     ecx, [edi+70h]; this
0x7BD5A9: push    eax; a2
0x7BD5AA: call    sub_7AEC60
0x7BD5AF: fld     dword ptr ds:0B4314Ch
0x7BD5B5: fchs
0x7BD5B7: fdiv    qword ptr ds:0A49318h
0x7BD5BD: fstp    dword ptr ds:0B43170h
0x7BD5C3: jmp     short loc_7BD60B
0x7BD5C5: mov     eax, [edi+90h]
0x7BD5CB: push    eax; a2
0x7BD5CC: call    sub_7AECB0
0x7BD5D1: mov     eax, [edi+98h]
0x7BD5D7: jmp     short loc_7BD602
0x7BD5D9: test    ebp, ebp
0x7BD5DB: mov     ecx, esi; this
0x7BD5DD: jz      short loc_7BD5F3
0x7BD5DF: mov     eax, [edi+80h]
0x7BD5E5: push    eax; a2
0x7BD5E6: call    sub_7AECB0
0x7BD5EB: mov     eax, [edi+98h]
0x7BD5F1: jmp     short loc_7BD602
0x7BD5F3: mov     eax, [edi+7Ch]
0x7BD5F6: push    eax; a2
0x7BD5F7: call    sub_7AECB0
0x7BD5FC: mov     eax, [edi+0A0h]
0x7BD602: mov     ecx, [edi+70h]; this
0x7BD605: push    eax; a2
0x7BD606: call    sub_7AEC60
0x7BD60B: cmp     dword ptr [esi+30h], 0
0x7BD60F: jnz     short loc_7BD619
0x7BD611: call    sub_772DF0
0x7BD616: mov     [esi+30h], eax
0x7BD619: mov     ecx, [esi+30h]
0x7BD61C: push    0
0x7BD61E: push    1
0x7BD620: push    1Bh
0x7BD622: call    sub_772CD0
0x7BD627: mov     eax, [ebx+88h]
0x7BD62D: cmp     eax, 5
0x7BD630: jz      short loc_7BD657
0x7BD632: test    eax, eax
0x7BD634: jz      short loc_7BD657
0x7BD636: cmp     eax, 6
0x7BD639: jz      short loc_7BD657
0x7BD63B: push    0
0x7BD63D: push    5
0x7BD63F: push    13h
0x7BD641: mov     ecx, esi
0x7BD643: call    sub_76C730
0x7BD648: push    0
0x7BD64A: push    6
0x7BD64C: push    14h
0x7BD64E: mov     ecx, esi
0x7BD650: call    sub_76C730
0x7BD655: jmp     short loc_7BD68F
0x7BD657: cmp     dword ptr [esi+30h], 0
0x7BD65B: jnz     short loc_7BD665
0x7BD65D: call    sub_772DF0
0x7BD662: mov     [esi+30h], eax
0x7BD665: mov     ecx, [esi+30h]
0x7BD668: push    0
0x7BD66A: push    5
0x7BD66C: push    13h
0x7BD66E: call    sub_772CD0
0x7BD673: cmp     dword ptr [esi+30h], 0
0x7BD677: jnz     short loc_7BD681
0x7BD679: call    sub_772DF0
0x7BD67E: mov     [esi+30h], eax
0x7BD681: mov     ecx, [esi+30h]
0x7BD684: push    0
0x7BD686: push    2
0x7BD688: push    14h
0x7BD68A: call    sub_772CD0
0x7BD68F: fldz
0x7BD691: cmp     dword ptr [ebx+88h], 3
0x7BD698: jnz     short loc_7BD6B0
0x7BD69A: fld     dword ptr [ebx+80h]
0x7BD6A0: fstp    [esp+48h+var_30]
0x7BD6A4: fld     [esp+48h+var_30]
0x7BD6A8: fstp    dword ptr [edi+0E0h]
0x7BD6AE: jmp     short loc_7BD6B6
0x7BD6B0: fst     dword ptr [edi+0E0h]
0x7BD6B6: cmp     byte ptr ds:0B43070h, 0
0x7BD6BD: jz      short loc_7BD6F3
0x7BD6BF: fld     dword ptr [ebx+80h]
0x7BD6C5: fstp    [esp+48h+var_30]
0x7BD6C9: fld     [esp+48h+var_30]
0x7BD6CD: fldz
0x7BD6CF: fsub    st(1), st
0x7BD6D1: fld1
0x7BD6D3: fsubrp  st(1), st
0x7BD6D5: fdivp   st(1), st
0x7BD6D7: fld     dword ptr ds:0B2C740h
0x7BD6DD: fld     dword ptr ds:0B2C73Ch
0x7BD6E3: fld     st
0x7BD6E5: fsubp   st(2), st
0x7BD6E7: fxch    st(2)
0x7BD6E9: fmulp   st(1), st
0x7BD6EB: faddp   st(1), st
0x7BD6ED: fstp    dword ptr [edi+0E4h]
0x7BD6F3: mov     eax, [ebx+88h]
0x7BD6F9: cmp     eax, 7; switch 8 cases
0x7BD6FC: ja      def_7BD709; jumptable 007BD709 default case, case 4
0x7BD702: movzx   edx, ds:byte_7BD914[eax]
0x7BD709: jmp     ds:jpt_7BD709[edx*4]; switch jump
0x7BD710: mov     eax, [ebx+6Ch]; jumptable 007BD709 cases 0,1,3,5-7
0x7BD713: fstp    st
0x7BD715: mov     ds:0B43178h, eax
0x7BD71A: mov     ecx, [ebx+70h]
0x7BD71D: mov     ds:0B4317Ch, ecx
0x7BD723: mov     edx, [ebx+74h]
0x7BD726: mov     ds:0B43180h, edx
0x7BD72C: mov     eax, [ebx+78h]
0x7BD72F: mov     ds:0B43184h, eax
0x7BD734: jmp     loc_7BD803
0x7BD739: mov     ecx, ds:0B431A8h; jumptable 007BD709 case 2
0x7BD73F: fstp    st
0x7BD741: mov     edx, ds:0B431ACh
0x7BD747: mov     eax, ds:0B431B0h
0x7BD74C: mov     ds:0B43178h, ecx
0x7BD752: mov     ecx, ds:0B431B4h
0x7BD758: mov     ds:0B4317Ch, edx
0x7BD75E: mov     edx, ds:0B431B8h
0x7BD764: mov     ds:0B43180h, eax
0x7BD769: mov     eax, ds:0B431BCh
0x7BD76E: mov     ds:0B43184h, ecx
0x7BD774: mov     ecx, ds:0B431C0h
0x7BD77A: mov     ds:0B43188h, edx
0x7BD780: mov     edx, ds:0B431C4h
0x7BD786: mov     ds:0B4318Ch, eax
0x7BD78B: mov     eax, ds:0B431C8h
0x7BD790: mov     ds:0B43190h, ecx
0x7BD796: mov     ecx, ds:0B431CCh
0x7BD79C: mov     ds:0B43194h, edx
0x7BD7A2: mov     edx, ds:0B431D0h
0x7BD7A8: mov     ds:0B43198h, eax
0x7BD7AD: mov     eax, ds:0B431D4h
0x7BD7B2: mov     ds:0B4319Ch, ecx
0x7BD7B8: mov     ds:0B431A0h, edx
0x7BD7BE: mov     ds:0B431A4h, eax
0x7BD7C3: jmp     short loc_7BD803
0x7BD7C5: fst     dword ptr ds:0B43178h; jumptable 007BD709 default case, case 4
0x7BD7CB: fst     dword ptr ds:0B4317Ch
0x7BD7D1: fst     dword ptr ds:0B43180h
0x7BD7D7: fld1
0x7BD7D9: fstp    dword ptr ds:0B43184h
0x7BD7DF: fst     dword ptr ds:0B43188h
0x7BD7E5: fst     dword ptr ds:0B4318Ch
0x7BD7EB: fst     dword ptr ds:0B43190h
0x7BD7F1: fst     dword ptr ds:0B43198h
0x7BD7F7: fst     dword ptr ds:0B4319Ch
0x7BD7FD: fstp    dword ptr ds:0B431A0h
0x7BD803: mov     edx, [edi]
0x7BD805: mov     eax, [edx+94h]
0x7BD80B: push    esi
0x7BD80C: mov     ecx, edi
0x7BD80E: call    eax
0x7BD810: test    ebp, ebp
0x7BD812: jz      short loc_7BD891
0x7BD814: mov     eax, [ebp+8]
0x7BD817: mov     ecx, [esi+24h]
0x7BD81A: mov     ecx, [ecx]; this
0x7BD81C: push    eax; a2
0x7BD81D: call    sub_76C910
0x7BD822: movzx   eax, byte ptr [ebp+5]
0x7BD826: mov     edx, [esi+24h]
0x7BD829: mov     ecx, [edx]
0x7BD82B: and     eax, 0Fh
0x7BD82E: push    eax
0x7BD82F: call    sub_771640
0x7BD834: movzx   edx, word ptr [ebp+4]
0x7BD838: mov     ecx, [esi+24h]
0x7BD83B: mov     ecx, [ecx]
0x7BD83D: shr     edx, 0Ch
0x7BD840: and     edx, 3
0x7BD843: push    edx
0x7BD844: call    sub_7715E0
0x7BD849: cmp     byte ptr [esp+48h+arg_C], 0
0x7BD84E: jnz     short loc_7BD891
0x7BD850: cmp     dword ptr [ebx+88h], 3
0x7BD857: jnz     short loc_7BD891
0x7BD859: mov     eax, [ebx+7Ch]
0x7BD85C: mov     ecx, [esi+24h]
0x7BD85F: mov     ecx, [ecx+4]; this
0x7BD862: push    eax; a2
0x7BD863: call    sub_76C910
0x7BD868: movzx   eax, byte ptr [ebp+5]
0x7BD86C: mov     edx, [esi+24h]
0x7BD86F: mov     ecx, [edx+4]
0x7BD872: and     eax, 0Fh
0x7BD875: push    eax
0x7BD876: call    sub_771640
0x7BD87B: movzx   edx, word ptr [ebp+4]
0x7BD87F: mov     ecx, [esi+24h]
0x7BD882: mov     ecx, [ecx+4]
0x7BD885: shr     edx, 0Ch
0x7BD888: and     edx, 3
0x7BD88B: push    edx
0x7BD88C: call    sub_7715E0
0x7BD891: cmp     [esp+48h+var_31], 0
0x7BD896: jz      short loc_7BD8AD
0x7BD898: mov     ecx, esi
0x7BD89A: call    sub_75F9D0
0x7BD89F: mov     ecx, [esp+48h+var_2C]
0x7BD8A3: mov     edx, [eax]
0x7BD8A5: mov     edx, [edx+8]
0x7BD8A8: push    ecx
0x7BD8A9: mov     ecx, eax
0x7BD8AB: call    edx
0x7BD8AD: test    esi, esi
0x7BD8AF: mov     [esp+48h+arg_C], esi
0x7BD8B3: mov     ebx, 1
0x7BD8B8: jz      short loc_7BD8BD
0x7BD8BA: add     [esi+60h], ebx
0x7BD8BD: mov     ecx, [edi+38h]
0x7BD8C0: lea     eax, [esp+48h+arg_C]
0x7BD8C4: push    eax
0x7BD8C5: push    ecx
0x7BD8C6: lea     ecx, [edi+40h]
0x7BD8C9: mov     [esp+50h+var_4], 0
0x7BD8D1: call    sub_76CE40
0x7BD8D6: or      eax, 0FFFFFFFFh
0x7BD8D9: test    esi, esi
0x7BD8DB: mov     [esp+48h+var_4], eax
0x7BD8DF: jz      short loc_7BD8ED
0x7BD8E1: add     [esi+60h], eax
0x7BD8E4: jnz     short loc_7BD8ED
0x7BD8E6: mov     ecx, esi
0x7BD8E8: call    sub_7604D0
0x7BD8ED: add     [edi+38h], ebx
0x7BD8F0: xor     eax, eax
0x7BD8F2: mov     ecx, [esp+48h+var_C]
0x7BD8F6: mov     large fs:0, ecx
0x7BD8FD: pop     ecx
0x7BD8FE: pop     edi
0x7BD8FF: pop     esi
0x7BD900: pop     ebp
0x7BD901: pop     ebx
0x7BD902: add     esp, 34h
0x7BD905: retn    1Ch
