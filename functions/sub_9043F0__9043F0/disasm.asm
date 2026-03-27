0x9043F0: push    ebp
0x9043F1: mov     ebp, esp
0x9043F3: and     esp, 0FFFFFFF0h
0x9043F6: sub     esp, 54h
0x9043F9: mov     ecx, ds:0BA9DE4h
0x9043FF: push    ebx
0x904400: mov     ebx, large fs:2Ch
0x904407: mov     eax, [ebx+ecx*4]
0x90440A: mov     edx, [eax+1A4h]
0x904410: push    esi
0x904411: cmp     edx, [eax+1A8h]
0x904417: push    edi
0x904418: jnb     short loc_90443E
0x90441A: mov     esi, eax
0x90441C: mov     ecx, [esi+1A4h]
0x904422: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x904428: rdtsc
0x90442A: mov     [esp+60h+var_54], eax
0x90442E: mov     eax, [esp+60h+var_54]
0x904432: mov     [ecx+4], eax
0x904435: add     ecx, 0Ch
0x904438: mov     [esi+1A4h], ecx
0x90443E: mov     esi, [ebp+arg_0]
0x904441: mov     edi, [esi]
0x904443: mov     edx, [esi+8]
0x904446: lea     ecx, [edi+20h]
0x904449: push    ecx
0x90444A: push    edx
0x90444B: lea     ecx, [esp+68h+var_40]
0x90444F: call    sub_8B1F70
0x904454: mov     [esp+60h+var_44], esi
0x904458: lea     eax, [esp+60h+var_40]
0x90445C: mov     [esp+60h+var_48], eax
0x904460: mov     ecx, [edi+0Ch]
0x904463: mov     edx, [esi+4]
0x904466: mov     [esp+60h+var_4C], edx
0x90446A: mov     [esp+60h+var_50], ecx
0x90446E: mov     eax, [ecx]
0x904470: call    dword ptr [eax+8]
0x904473: mov     edi, [ebp+arg_4]
0x904476: mov     ecx, [edi]
0x904478: mov     edx, [ecx]
0x90447A: mov     esi, eax
0x90447C: call    dword ptr [edx+8]
0x90447F: mov     edx, [ebp+arg_8]
0x904482: mov     ecx, [edx]
0x904484: shl     esi, 5
0x904487: add     esi, ecx
0x904489: movzx   eax, byte ptr [esi+eax+190h]
0x904491: mov     esi, [ebp+arg_10]
0x904494: push    esi
0x904495: mov     esi, [ebp+arg_C]
0x904498: push    esi
0x904499: push    edx
0x90449A: add     eax, 7Bh ; '{'
0x90449D: lea     edx, [esp+6Ch+var_50]
0x9044A1: push    edi
0x9044A2: lea     eax, [eax+eax*4]
0x9044A5: push    edx
0x9044A6: call    dword ptr [ecx+eax*4]
0x9044A9: mov     ecx, ds:0BA9DE4h
0x9044AF: mov     eax, [ebx+ecx*4]
0x9044B2: mov     edx, [eax+1A4h]
0x9044B8: mov     esi, [eax+1A8h]
0x9044BE: add     esp, 14h
0x9044C1: cmp     edx, esi
0x9044C3: jnb     short loc_9044E9
0x9044C5: mov     ebx, eax
0x9044C7: mov     esi, [ebx+1A4h]
0x9044CD: mov     dword ptr [esi], offset aEt; "Et"
0x9044D3: rdtsc
0x9044D5: mov     [esp+60h+var_54], eax
0x9044D9: mov     eax, [esp+60h+var_54]
0x9044DD: mov     [esi+4], eax
0x9044E0: add     esi, 0Ch
0x9044E3: mov     [ebx+1A4h], esi
0x9044E9: pop     edi
0x9044EA: pop     esi
0x9044EB: pop     ebx
0x9044EC: mov     esp, ebp
0x9044EE: pop     ebp
0x9044EF: retn
