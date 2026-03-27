0x9571B0: push    ebp
0x9571B1: mov     ebp, esp
0x9571B3: and     esp, 0FFFFFFF0h
0x9571B6: sub     esp, 24h
0x9571B9: mov     eax, [ebp+arg_0]
0x9571BC: cmp     eax, 3; switch 4 cases
0x9571BF: push    ebx
0x9571C0: push    esi
0x9571C1: push    edi
0x9571C2: mov     ebx, ecx
0x9571C4: ja      def_9571CA
0x9571CA: jmp     ds:jpt_9571CA[eax*4]; switch jump
0x9571D1: mov     eax, [ebp+arg_14]; jumptable 009571CA case 1
0x9571D4: add     dword ptr [eax], 10h
0x9571D7: pop     edi
0x9571D8: pop     esi
0x9571D9: pop     ebx
0x9571DA: mov     esp, ebp
0x9571DC: pop     ebp
0x9571DD: retn    24h ; '$'
0x9571E0: mov     ecx, [ebp+arg_1C]; jumptable 009571CA case 2
0x9571E3: mov     ebx, [ecx]
0x9571E5: mov     eax, [ebp+arg_18]
0x9571E8: add     ebx, 0FFFFFFF0h
0x9571EB: mov     [ecx], ebx
0x9571ED: mov     edi, [eax]
0x9571EF: add     edi, 0FFFFFFF0h
0x9571F2: mov     [eax], edi
0x9571F4: mov     eax, [ebp+arg_14]
0x9571F7: mov     eax, [eax]
0x9571F9: mov     ecx, [ecx]
0x9571FB: cmp     eax, ecx
0x9571FD: mov     edx, edi
0x9571FF: jz      def_9571CA
0x957205: mov     esi, [edx]
0x957207: mov     edi, [edx+4]
0x95720A: mov     ebx, [edx+8]
0x95720D: mov     edx, [edx+0Ch]
0x957210: mov     [esp+30h+var_4], edx
0x957214: mov     edx, [eax]
0x957216: mov     [ecx], edx
0x957218: mov     edx, [eax+4]
0x95721B: mov     [ecx+4], edx
0x95721E: mov     edx, [eax+8]
0x957221: mov     [ecx+8], edx
0x957224: mov     eax, [eax+0Ch]
0x957227: mov     [ecx+0Ch], eax
0x95722A: mov     ecx, [ebp+arg_14]
0x95722D: mov     edx, [ecx]
0x95722F: mov     eax, [esp+30h+var_4]
0x957233: mov     [edx], esi
0x957235: mov     [edx+4], edi
0x957238: mov     [edx+8], ebx
0x95723B: mov     [edx+0Ch], eax
0x95723E: pop     edi
0x95723F: pop     esi
0x957240: pop     ebx
0x957241: mov     esp, ebp
0x957243: pop     ebp
0x957244: retn    24h ; '$'
0x957247: mov     eax, [ebp+arg_C]; jumptable 009571CA case 3
0x95724A: dec     dword ptr [eax]
0x95724C: mov     eax, [ebp+arg_10]
0x95724F: mov     ecx, [eax]
0x957251: mov     esi, [ebp+arg_14]
0x957254: inc     ecx
0x957255: mov     [eax], ecx
0x957257: mov     eax, [ebp+arg_1C]
0x95725A: mov     edi, [eax]
0x95725C: mov     ecx, [ebp+arg_4]
0x95725F: add     edi, 0FFFFFFF0h
0x957262: mov     [eax], edi
0x957264: fld     dword ptr [ecx+0C0h]
0x95726A: fadd    dword ptr [ecx+0BCh]
0x957270: mov     eax, edi
0x957272: mov     edi, [ecx+0B8h]
0x957278: mov     ecx, [ebx+28h]
0x95727B: mov     edx, [ecx]
0x95727D: push    eax
0x95727E: mov     eax, [ebp+arg_8]
0x957281: fmul    dword ptr ds:0A3D65Ch
0x957287: push    eax
0x957288: fstp    dword ptr [esp+38h+var_24]
0x95728C: mov     eax, dword ptr [esp+38h+var_24]
0x957290: push    eax
0x957291: mov     eax, [esi]
0x957293: push    edi
0x957294: push    eax
0x957295: call    dword ptr [edx+18h]
0x957298: fld     [esp+44h+var_38]
0x95729C: movaps  xmm1, xmmword ptr [edi]
0x95729F: fchs
0x9572A1: mov     eax, [esi]
0x9572A3: mov     edi, [ebp+arg_8]
0x9572A6: mov     ecx, [ebx+28h]
0x9572A9: movaps  xmm0, xmmword ptr ds:0A965C0h
0x9572B0: push    eax
0x9572B1: push    edi
0x9572B2: push    ecx
0x9572B3: fstp    [esp+50h+var_50]
0x9572B6: lea     edi, [esp+50h+var_24]
0x9572BA: xorps   xmm1, xmm0
0x9572BD: push    edi
0x9572BE: movaps  [esp+54h+var_24], xmm1
0x9572C3: mov     edx, [ecx]
0x9572C5: push    eax
0x9572C6: call    dword ptr [edx+18h]
0x9572C9: add     dword ptr [esi], 10h
0x9572CC: pop     edi
0x9572CD: pop     esi
0x9572CE: pop     ebx
0x9572CF: mov     esp, ebp
0x9572D1: pop     ebp
0x9572D2: retn    24h ; '$'
0x9572D5: mov     esi, [ebp+arg_1C]; jumptable 009571CA case 0
0x9572D8: mov     eax, [esi]
0x9572DA: mov     ecx, [ebp+arg_20]
0x9572DD: mov     edx, [ebp+arg_18]
0x9572E0: add     eax, 0FFFFFFF0h
0x9572E3: mov     [esi], eax
0x9572E5: add     dword ptr [ecx], 0FFFFFFF0h
0x9572E8: mov     edi, [edx]
0x9572EA: add     edi, 0FFFFFFF0h
0x9572ED: mov     [edx], edi
0x9572EF: mov     esi, [esi]
0x9572F1: mov     eax, edi
0x9572F3: mov     edi, [ebp+arg_14]
0x9572F6: mov     ebx, [edi]
0x9572F8: mov     edi, [ebx]
0x9572FA: mov     [esp+30h+var_10], edi
0x9572FE: mov     edi, [ebx+4]
0x957301: mov     [esp+30h+var_C], edi
0x957305: mov     edi, [ebx+8]
0x957308: mov     ebx, [ebx+0Ch]
0x95730B: mov     [esp+30h+var_4], ebx
0x95730F: mov     ebx, [eax]
0x957311: mov     dword ptr [esp+30h+var_24+4], ebx
0x957315: mov     ebx, [eax+4]
0x957318: mov     dword ptr [esp+30h+var_24+8], ebx
0x95731C: mov     ebx, [eax+8]
0x95731F: mov     eax, [eax+0Ch]
0x957322: mov     [esp+30h+var_14], eax
0x957326: mov     eax, [ecx]
0x957328: mov     dword ptr [esp+30h+var_24+0Ch], ebx
0x95732C: mov     ebx, [eax]
0x95732E: mov     [esi], ebx
0x957330: mov     ebx, [eax+4]
0x957333: mov     [esi+4], ebx
0x957336: mov     ebx, [eax+8]
0x957339: mov     [esi+8], ebx
0x95733C: mov     eax, [eax+0Ch]
0x95733F: mov     [esi+0Ch], eax
0x957342: mov     ecx, [ecx]
0x957344: mov     eax, [esp+30h+var_10]
0x957348: mov     [ecx], eax
0x95734A: mov     eax, [esp+30h+var_C]
0x95734E: mov     [ecx+4], eax
0x957351: mov     eax, [esp+30h+var_4]
0x957355: mov     [ecx+8], edi
0x957358: mov     [ecx+0Ch], eax
0x95735B: mov     ecx, [ebp+arg_14]
0x95735E: mov     ecx, [ecx]
0x957360: cmp     ecx, [edx]
0x957362: jz      short def_9571CA
0x957364: mov     edx, dword ptr [esp+30h+var_24+4]
0x957368: mov     eax, dword ptr [esp+30h+var_24+8]
0x95736C: mov     [ecx], edx
0x95736E: mov     edx, dword ptr [esp+30h+var_24+0Ch]
0x957372: mov     [ecx+4], eax
0x957375: mov     eax, [esp+30h+var_14]
0x957379: mov     [ecx+8], edx
0x95737C: mov     [ecx+0Ch], eax
