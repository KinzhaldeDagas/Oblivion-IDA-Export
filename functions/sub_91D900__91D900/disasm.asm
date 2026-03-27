0x91D900: push    ebp
0x91D901: mov     ebp, esp
0x91D903: and     esp, 0FFFFFFF0h
0x91D906: sub     esp, 34h
0x91D909: mov     eax, [ebp+arg_0]
0x91D90C: push    ebx
0x91D90D: push    esi
0x91D90E: xor     esi, esi
0x91D910: push    edi
0x91D911: mov     edi, [eax+0Ch]
0x91D914: mov     ebx, ecx
0x91D916: mov     [esp+40h+var_34], esi
0x91D91A: mov     dword ptr [esp+40h+var_30+0Ch], esi
0x91D91E: mov     edi, edi
0x91D920: fild    [esp+40h+var_34]
0x91D924: mov     eax, ds:0BA8454h
0x91D929: movaps  xmm1, xmmword ptr [edi]
0x91D92C: mov     ecx, [ebx-10h]
0x91D92F: fld     st
0x91D931: push    eax
0x91D932: fsin
0x91D934: push    0FF008000h
0x91D939: lea     eax, [esp+48h+var_20]
0x91D93D: push    eax
0x91D93E: push    edi
0x91D93F: fstp    dword ptr [esp+50h+var_30]
0x91D943: fld     st
0x91D945: fcos
0x91D947: fstp    dword ptr [esp+50h+var_30+4]
0x91D94B: fmul    dword ptr ds:0A31E2Ch
0x91D951: fsin
0x91D953: fstp    dword ptr [esp+50h+var_30+8]
0x91D957: movaps  xmm0, [esp+50h+var_30]
0x91D95C: addps   xmm1, xmm0
0x91D95F: movaps  [esp+50h+var_20], xmm1
0x91D964: mov     edx, [ecx]
0x91D966: call    dword ptr [edx+1Ch]
0x91D969: inc     esi
0x91D96A: cmp     esi, 14h
0x91D96D: mov     [esp+40h+var_34], esi
0x91D971: jl      short loc_91D920
0x91D973: mov     edx, [ebp+arg_0]
0x91D976: mov     ecx, [edx]
0x91D978: cmp     byte ptr [ecx+18h], 1
0x91D97C: jnz     short loc_91D98E
0x91D97E: mov     eax, [ecx+10h]
0x91D981: add     eax, ecx
0x91D983: jz      short loc_91D98E
0x91D985: mov     word ptr [eax+8Eh], 0
0x91D98E: mov     ecx, ds:0BA8454h
0x91D994: mov     eax, [edx+0Ch]
0x91D997: movaps  xmm0, xmmword ptr [eax+10h]
0x91D99B: movaps  xmm1, xmmword ptr [eax]
0x91D99E: mov     ebx, [ebx-10h]
0x91D9A1: mov     edx, [edx+0Ch]
0x91D9A4: push    ecx
0x91D9A5: push    0FFFF0000h
0x91D9AA: lea     ecx, [esp+48h+var_10]
0x91D9AE: push    ecx
0x91D9AF: addps   xmm1, xmm0
0x91D9B2: movaps  [esp+4Ch+var_10], xmm1
0x91D9B7: mov     eax, [ebx]
0x91D9B9: push    edx
0x91D9BA: mov     ecx, ebx
0x91D9BC: call    dword ptr [eax+1Ch]
0x91D9BF: pop     edi
0x91D9C0: pop     esi
0x91D9C1: pop     ebx
0x91D9C2: mov     esp, ebp
0x91D9C4: pop     ebp
0x91D9C5: retn    4
