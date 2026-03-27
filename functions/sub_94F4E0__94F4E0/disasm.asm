0x94F4E0: push    ebp
0x94F4E1: mov     ebp, esp
0x94F4E3: and     esp, 0FFFFFFF0h
0x94F4E6: sub     esp, 0B4h
0x94F4EC: mov     eax, [ebp+arg_0]
0x94F4EF: push    ebx
0x94F4F0: mov     ebx, [eax+0Ch]
0x94F4F3: push    esi
0x94F4F4: push    edi
0x94F4F5: mov     edi, [ebp+arg_4]
0x94F4F8: mov     esi, ecx
0x94F4FA: push    edi
0x94F4FB: lea     ecx, [esi+0C0h]
0x94F501: call    sub_958600
0x94F506: mov     eax, [ebp+arg_0]
0x94F509: lea     ecx, [esp+0C0h+var_40]
0x94F510: push    ecx
0x94F511: lea     edx, [esp+0C4h+var_80]
0x94F515: push    edx
0x94F516: push    eax
0x94F517: mov     ecx, esi
0x94F519: call    sub_94D100
0x94F51E: lea     edx, [ebx+40h]
0x94F521: push    edx
0x94F522: lea     eax, [esp+0C4h+var_80]
0x94F526: lea     ecx, [esi+50h]
0x94F529: push    eax
0x94F52A: call    sub_88FCC0
0x94F52F: lea     edx, [ebx+10h]
0x94F532: push    edx
0x94F533: lea     eax, [esp+0C4h+var_40]
0x94F53A: lea     ecx, [esi+40h]
0x94F53D: push    eax
0x94F53E: call    sub_88FCC0
0x94F543: mov     ecx, [ebp+arg_8]
0x94F546: push    ecx
0x94F547: mov     ecx, esi
0x94F549: call    sub_94CF80
0x94F54E: mov     edx, [ebp+arg_8]
0x94F551: push    edx
0x94F552: mov     ecx, esi
0x94F554: call    sub_94CF30
0x94F559: mov     eax, [ebp+arg_8]
0x94F55C: mov     edx, [edi]
0x94F55E: push    eax
0x94F55F: push    0FFFF0000h
0x94F564: lea     eax, [esi+50h]
0x94F567: push    eax
0x94F568: lea     eax, [esi+40h]
0x94F56B: push    eax
0x94F56C: mov     ecx, edi
0x94F56E: call    dword ptr [edx+1Ch]
0x94F571: add     ebx, 50h ; 'P'
0x94F574: push    ebx
0x94F575: lea     ecx, [esi+90h]
0x94F57B: push    ecx
0x94F57C: lea     ecx, [esp+0C8h+var_90]
0x94F580: call    sub_88FE00
0x94F585: fld     dword ptr [esi]
0x94F587: fmul    dword ptr ds:0A3D65Ch
0x94F58D: mov     edx, [ebp+arg_8]
0x94F590: movaps  xmm1, xmmword ptr [esi+50h]
0x94F594: movaps  xmm2, [esp+0C0h+var_90]
0x94F599: fstp    dword ptr [esp+0C0h+var_C0+0Ch]
0x94F59D: push    edx
0x94F59E: fld     dword ptr [esi]
0x94F5A0: movss   xmm0, dword ptr [esp+0C4h+var_C0+0Ch]
0x94F5A6: fmul    dword ptr ds:0A45E4Ch
0x94F5AC: mov     esi, [edi]
0x94F5AE: movaps  xmm3, xmm0
0x94F5B1: shufps  xmm3, xmm0, 0
0x94F5B5: mulps   xmm3, xmm2
0x94F5B8: fstp    dword ptr [esp+0C4h+var_C0+0Ch]
0x94F5BC: movss   xmm0, dword ptr [esp+0C4h+var_C0+0Ch]
0x94F5C2: addps   xmm3, xmm1
0x94F5C5: movaps  [esp+0C4h+var_B0], xmm3
0x94F5CA: push    3F800000h; float
0x94F5CF: push    3F800000h; float
0x94F5D4: movaps  xmm3, xmm0
0x94F5D7: shufps  xmm3, xmm0, 0
0x94F5DB: mulps   xmm3, xmm2
0x94F5DE: push    3F000000h; float
0x94F5E3: addps   xmm3, xmm1
0x94F5E6: movaps  [esp+0D0h+var_A0], xmm3
0x94F5EB: push    0; float
0x94F5ED: call    sub_8AEBB0
0x94F5F2: add     esp, 10h
0x94F5F5: push    eax
0x94F5F6: lea     eax, [esp+0C8h+var_B0]
0x94F5FA: push    eax
0x94F5FB: lea     ecx, [esp+0CCh+var_A0]
0x94F5FF: push    ecx
0x94F600: mov     ecx, edi
0x94F602: call    dword ptr [esi+1Ch]
0x94F605: pop     edi
0x94F606: pop     esi
0x94F607: pop     ebx
0x94F608: mov     esp, ebp
0x94F60A: pop     ebp
0x94F60B: retn    0Ch
