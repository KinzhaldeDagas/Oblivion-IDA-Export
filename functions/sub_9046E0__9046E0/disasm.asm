0x9046E0: push    ebp
0x9046E1: mov     ebp, esp
0x9046E3: and     esp, 0FFFFFFF0h
0x9046E6: sub     esp, 64h
0x9046E9: push    ebx
0x9046EA: mov     ebx, large fs:2Ch
0x9046F1: mov     [esp+68h+var_54], ecx
0x9046F5: mov     ecx, ds:0BA9DE4h
0x9046FB: mov     eax, [ebx+ecx*4]
0x9046FE: mov     edx, [eax+1A4h]
0x904704: push    esi
0x904705: cmp     edx, [eax+1A8h]
0x90470B: push    edi
0x90470C: jnb     short loc_904732
0x90470E: mov     esi, eax
0x904710: mov     ecx, [esi+1A4h]
0x904716: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x90471C: rdtsc
0x90471E: mov     [esp+70h+var_58], eax
0x904722: mov     eax, [esp+70h+var_58]
0x904726: mov     [ecx+4], eax
0x904729: add     ecx, 0Ch
0x90472C: mov     [esi+1A4h], ecx
0x904732: mov     esi, [ebp+arg_0]
0x904735: mov     edi, [esi]
0x904737: mov     edx, [esi+8]
0x90473A: lea     ecx, [edi+20h]
0x90473D: push    ecx
0x90473E: push    edx
0x90473F: lea     ecx, [esp+78h+var_40]
0x904743: call    sub_8B1F70
0x904748: lea     eax, [esp+70h+var_40]
0x90474C: mov     [esp+70h+var_44], esi
0x904750: mov     [esp+70h+var_48], eax
0x904754: mov     ecx, [esi+4]
0x904757: mov     edi, [edi+0Ch]
0x90475A: mov     [esp+70h+var_4C], ecx
0x90475E: mov     ecx, ds:0BA9DE4h
0x904764: mov     eax, [ebx+ecx*4]
0x904767: mov     edx, [eax+1A4h]
0x90476D: cmp     edx, [eax+1A8h]
0x904773: mov     [esp+70h+var_50], edi
0x904777: jnb     short loc_90479D
0x904779: mov     ebx, eax
0x90477B: mov     ecx, [ebx+1A4h]
0x904781: mov     dword ptr [ecx], offset aEt; "Et"
0x904787: rdtsc
0x904789: mov     [esp+70h+var_58], eax
0x90478D: mov     eax, [esp+70h+var_58]
0x904791: mov     [ecx+4], eax
0x904794: add     ecx, 0Ch
0x904797: mov     [ebx+1A4h], ecx
0x90479D: mov     eax, [ebp+arg_C]
0x9047A0: mov     ecx, [esp+70h+var_54]
0x9047A4: mov     ecx, [ecx+0Ch]
0x9047A7: mov     edx, [ecx]
0x9047A9: push    eax
0x9047AA: mov     eax, [ebp+arg_8]
0x9047AD: push    eax
0x9047AE: mov     eax, [ebp+arg_4]
0x9047B1: push    eax
0x9047B2: lea     eax, [esp+7Ch+var_50]
0x9047B6: push    eax
0x9047B7: call    dword ptr [edx+8]
0x9047BA: pop     edi
0x9047BB: pop     esi
0x9047BC: pop     ebx
0x9047BD: mov     esp, ebp
0x9047BF: pop     ebp
0x9047C0: retn    10h
