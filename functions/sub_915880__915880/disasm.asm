0x915880: push    ebp
0x915881: mov     ebp, esp
0x915883: and     esp, 0FFFFFFF0h
0x915886: sub     esp, 234h
0x91588C: mov     eax, ds:0B30AACh
0x915891: mov     edx, ds:0BA9DE4h
0x915897: push    ebx
0x915898: push    esi
0x915899: mov     esi, ecx
0x91589B: mov     ecx, large fs:2Ch
0x9158A2: mov     [esp+23Ch+var_4], eax
0x9158A9: mov     eax, [ecx+edx*4]
0x9158AC: mov     ebx, [eax+1A8h]
0x9158B2: push    edi
0x9158B3: mov     edi, [eax+1A4h]
0x9158B9: cmp     edi, ebx
0x9158BB: jnb     short loc_9158E1
0x9158BD: mov     edi, eax
0x9158BF: mov     ecx, [edi+1A4h]
0x9158C5: mov     dword ptr [ecx], offset aTthkshapecolle; "TthkShapeCollection::getAabb"
0x9158CB: rdtsc
0x9158CD: mov     [esp+240h+var_234], eax
0x9158D1: mov     eax, [esp+240h+var_234]
0x9158D5: mov     [ecx+4], eax
0x9158D8: add     ecx, 0Ch
0x9158DB: mov     [edi+1A4h], ecx
0x9158E1: mov     ebx, [ebp+arg_8]
0x9158E4: xorps   xmm0, xmm0
0x9158E7: movaps  xmmword ptr [ebx], xmm0
0x9158EA: movaps  xmmword ptr [ebx+10h], xmm0
0x9158EE: mov     edx, [esi]
0x9158F0: mov     ecx, esi
0x9158F2: call    dword ptr [edx+20h]
0x9158F5: mov     edi, eax
0x9158F7: cmp     edi, 0FFFFFFFFh
0x9158FA: jz      short loc_91596E
0x9158FC: mov     eax, [esi]
0x9158FE: lea     ecx, [esp+240h+var_210]
0x915902: push    ecx
0x915903: push    edi
0x915904: mov     ecx, esi
0x915906: call    dword ptr [eax+28h]
0x915909: mov     ecx, [ebp+arg_4]
0x91590C: mov     edx, [eax]
0x91590E: push    ebx
0x91590F: push    ecx
0x915910: mov     ecx, [ebp+arg_0]
0x915913: push    ecx
0x915914: mov     ecx, eax
0x915916: call    dword ptr [edx+0Ch]
0x915919: lea     esp, [esp+0]
0x915920: mov     edx, [esi]
0x915922: lea     eax, [esp+240h+var_210]
0x915926: push    eax
0x915927: push    edi
0x915928: mov     ecx, esi
0x91592A: call    dword ptr [edx+28h]
0x91592D: mov     edx, [eax]
0x91592F: lea     ecx, [esp+240h+var_230]
0x915933: push    ecx
0x915934: mov     ecx, [ebp+arg_4]
0x915937: push    ecx
0x915938: mov     ecx, [ebp+arg_0]
0x91593B: push    ecx
0x91593C: mov     ecx, eax
0x91593E: call    dword ptr [edx+0Ch]
0x915941: movaps  xmm1, xmmword ptr [ebx]
0x915944: movaps  xmm0, [esp+240h+var_230]
0x915949: minps   xmm1, xmm0
0x91594C: movaps  xmm0, [esp+240h+var_220]
0x915951: movaps  xmmword ptr [ebx], xmm1
0x915954: movaps  xmm1, xmmword ptr [ebx+10h]
0x915958: maxps   xmm1, xmm0
0x91595B: movaps  xmmword ptr [ebx+10h], xmm1
0x91595F: mov     edx, [esi]
0x915961: push    edi
0x915962: mov     ecx, esi
0x915964: call    dword ptr [edx+24h]
0x915967: mov     edi, eax
0x915969: cmp     edi, 0FFFFFFFFh
0x91596C: jnz     short loc_915920
0x91596E: mov     ecx, large fs:2Ch
0x915975: mov     edx, ds:0BA9DE4h
0x91597B: mov     eax, [ecx+edx*4]
0x91597E: mov     esi, [eax+1A4h]
0x915984: cmp     esi, [eax+1A8h]
0x91598A: jnb     short loc_9159B0
0x91598C: mov     esi, eax
0x91598E: mov     ecx, [esi+1A4h]
0x915994: mov     dword ptr [ecx], offset aEt; "Et"
0x91599A: rdtsc
0x91599C: mov     [esp+240h+var_234], eax
0x9159A0: mov     eax, [esp+240h+var_234]
0x9159A4: mov     [ecx+4], eax
0x9159A7: add     ecx, 0Ch
0x9159AA: mov     [esi+1A4h], ecx
0x9159B0: mov     ecx, [esp+240h+var_4]
0x9159B7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9159BC: pop     edi
0x9159BD: pop     esi
0x9159BE: pop     ebx
0x9159BF: mov     esp, ebp
0x9159C1: pop     ebp
0x9159C2: retn    0Ch
