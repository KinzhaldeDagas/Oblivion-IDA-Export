0x94D2E0: push    ebp
0x94D2E1: mov     ebp, esp
0x94D2E3: and     esp, 0FFFFFFF0h
0x94D2E6: sub     esp, 64h
0x94D2E9: push    ebx
0x94D2EA: push    esi
0x94D2EB: mov     esi, ecx
0x94D2ED: fld     dword ptr [esi+94h]
0x94D2F3: mov     eax, [esi+90h]
0x94D2F9: fsub    dword ptr [esi+90h]
0x94D2FF: push    edi
0x94D300: fidiv   dword ptr [esi+9Ch]
0x94D306: push    eax; float
0x94D307: lea     edi, [esi+60h]
0x94D30A: push    edi; int
0x94D30B: lea     ecx, [esp+78h+var_30]
0x94D30F: fstp    [esp+78h+var_54]
0x94D313: call    sub_8B1EB0
0x94D318: mov     ecx, [esi+98h]
0x94D31E: movaps  xmm1, xmmword ptr [esi+70h]
0x94D322: mov     [esp+70h+var_58], ecx
0x94D326: movss   xmm0, [esp+70h+var_58]
0x94D32C: lea     edx, [esp+70h+var_50]
0x94D330: movaps  xmm2, xmm0
0x94D333: push    edx
0x94D334: lea     eax, [esp+74h+var_30]
0x94D338: shufps  xmm2, xmm0, 0
0x94D33C: mulps   xmm2, xmm1
0x94D33F: push    eax
0x94D340: lea     ecx, [esp+78h+var_50]
0x94D344: movaps  [esp+78h+var_50], xmm2
0x94D349: call    sub_88FE00
0x94D34E: mov     ecx, [esp+70h+var_54]
0x94D352: movaps  xmm1, [esp+70h+var_50]
0x94D357: movaps  xmm0, xmmword ptr [esi+80h]
0x94D35E: push    ecx; float
0x94D35F: addps   xmm1, xmm0
0x94D362: push    edi; int
0x94D363: lea     ecx, [esp+78h+var_30]
0x94D367: movaps  [esp+78h+var_50], xmm1
0x94D36C: call    sub_8B1EB0
0x94D371: mov     ebx, [ebp+arg_0]
0x94D374: mov     edi, [esi+9Ch]
0x94D37A: mov     eax, [ebx+8]
0x94D37D: add     edi, 2
0x94D380: and     eax, 3FFFFFFFh
0x94D385: cmp     eax, edi
0x94D387: jge     short loc_94D39D
0x94D389: add     eax, eax
0x94D38B: cmp     edi, eax
0x94D38D: jl      short loc_94D391
0x94D38F: mov     eax, edi
0x94D391: push    10h
0x94D393: push    eax
0x94D394: push    ebx
0x94D395: call    sub_8A6E40
0x94D39A: add     esp, 0Ch
0x94D39D: mov     edx, [ebx]
0x94D39F: movaps  xmm0, [esp+70h+var_50]
0x94D3A4: mov     [ebx+4], edi
0x94D3A7: movaps  xmmword ptr [edx], xmm0
0x94D3AA: mov     eax, [esi+9Ch]
0x94D3B0: xor     edi, edi
0x94D3B2: cmp     eax, edi
0x94D3B4: jl      short loc_94D41D
0x94D3B6: movaps  xmm0, [esp+70h+var_50]
0x94D3BB: mov     [esp+70h+var_58], edi
0x94D3BF: nop
0x94D3C0: movaps  xmm1, xmmword ptr [esi+80h]
0x94D3C7: lea     eax, [esp+70h+var_40]
0x94D3CB: push    eax
0x94D3CC: lea     ecx, [esp+74h+var_30]
0x94D3D0: push    ecx
0x94D3D1: subps   xmm0, xmm1
0x94D3D4: lea     ecx, [esp+78h+var_40]
0x94D3D8: movaps  [esp+78h+var_40], xmm0
0x94D3DD: call    sub_88FE00
0x94D3E2: movaps  xmm0, [esp+70h+var_40]
0x94D3E7: movaps  xmm1, xmmword ptr [esi+80h]
0x94D3EE: mov     eax, [esp+70h+var_58]
0x94D3F2: mov     edx, [ebx]
0x94D3F4: addps   xmm0, xmm1
0x94D3F7: movaps  [esp+70h+var_40], xmm0
0x94D3FC: movaps  xmmword ptr [eax+edx+10h], xmm0
0x94D401: movaps  xmm0, [esp+70h+var_40]
0x94D406: add     eax, 10h
0x94D409: mov     [esp+70h+var_58], eax
0x94D40D: mov     eax, [esi+9Ch]
0x94D413: inc     edi
0x94D414: cmp     edi, eax
0x94D416: movaps  [esp+70h+var_50], xmm0
0x94D41B: jle     short loc_94D3C0
0x94D41D: pop     edi
0x94D41E: pop     esi
0x94D41F: pop     ebx
0x94D420: mov     esp, ebp
0x94D422: pop     ebp
0x94D423: retn    4
