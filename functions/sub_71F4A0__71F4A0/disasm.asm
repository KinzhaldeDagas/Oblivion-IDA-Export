0x71F4A0: push    0FFFFFFFFh
0x71F4A2: push    offset SEH_71F4A0
0x71F4A7: mov     eax, large fs:0
0x71F4AD: push    eax
0x71F4AE: sub     esp, 5Ch
0x71F4B1: push    ebx
0x71F4B2: push    esi
0x71F4B3: push    edi
0x71F4B4: mov     eax, ds:0B30AACh
0x71F4B9: xor     eax, esp
0x71F4BB: push    eax
0x71F4BC: lea     eax, [esp+78h+var_C]
0x71F4C0: mov     large fs:0, eax
0x71F4C6: mov     esi, ecx
0x71F4C8: mov     [esp+78h+var_54], esi
0x71F4CC: mov     ebx, [esp+78h+arg_0]
0x71F4D0: cmp     dword ptr [ebx], 0
0x71F4D3: jz      loc_71F665
0x71F4D9: lea     ecx, [esp+78h+var_50]
0x71F4DD: call    InitSurfacEData
0x71F4E2: mov     eax, [esi]
0x71F4E4: mov     eax, [eax+4]
0x71F4E7: lea     ecx, [esp+78h+var_60]
0x71F4EB: push    ecx
0x71F4EC: lea     edx, [esp+7Ch+var_5C]
0x71F4F0: push    edx
0x71F4F1: lea     ecx, [esp+80h+var_58]
0x71F4F5: push    ecx
0x71F4F6: lea     edx, [esp+84h+var_65]
0x71F4FA: push    edx
0x71F4FB: mov     edx, [ebx]
0x71F4FD: lea     ecx, [esp+88h+var_50]
0x71F501: push    ecx
0x71F502: push    edx
0x71F503: mov     ecx, esi
0x71F505: call    eax
0x71F507: test    al, al
0x71F509: jz      loc_71F665
0x71F50F: cmp     dword ptr [esp+78h+var_60], 1
0x71F514: jnz     loc_71F665
0x71F51A: push    70h ; 'p'; Size
0x71F51C: call    FormHeapAlloc
0x71F521: add     esp, 4
0x71F524: mov     [esp+78h+var_64], eax
0x71F528: test    eax, eax
0x71F52A: mov     [esp+78h+var_4], 0
0x71F532: jz      short loc_71F558
0x71F534: mov     ecx, [esp+78h+arg_4]
0x71F53B: push    1
0x71F53D: push    ecx
0x71F53E: mov     ecx, [esp+80h+var_5C]
0x71F542: lea     edx, [esp+80h+var_50]
0x71F546: push    edx
0x71F547: mov     edx, [esp+84h+var_58]
0x71F54B: push    ecx
0x71F54C: push    edx
0x71F54D: mov     ecx, eax
0x71F54F: call    NiPixelData__NiPixelData
0x71F554: mov     edi, eax
0x71F556: jmp     short loc_71F55A
0x71F558: xor     edi, edi
0x71F55A: test    edi, edi
0x71F55C: mov     [esp+78h+var_4], 0FFFFFFFFh
0x71F564: jz      loc_71F665
0x71F56A: xor     esi, esi
0x71F56C: cmp     [esp+78h+arg_4], esi
0x71F573: ja      short loc_71F594
0x71F575: mov     eax, edi
0x71F577: mov     ecx, [esp+78h+var_C]
0x71F57B: mov     large fs:0, ecx
0x71F582: pop     ecx
0x71F583: pop     edi
0x71F584: pop     esi
0x71F585: pop     ebx
0x71F586: add     esp, 68h
0x71F589: retn    0Ch
0x71F58C: align 10h
0x71F590: mov     ebx, [esp+78h+arg_0]
0x71F594: mov     eax, [ebx+esi*4]
0x71F597: test    eax, eax
0x71F599: jz      loc_71F65B
0x71F59F: mov     [esp+78h+var_64], 0
0x71F5A7: test    esi, esi
0x71F5A9: mov     [esp+78h+var_4], 1
0x71F5B1: jnz     short loc_71F5C1
0x71F5B3: mov     ecx, [esp+78h+arg_8]
0x71F5BA: test    ecx, ecx
0x71F5BC: jz      short loc_71F5C1
0x71F5BE: push    ecx
0x71F5BF: jmp     short loc_71F5D0
0x71F5C1: mov     ecx, [esp+78h+var_54]
0x71F5C5: mov     edx, [ecx]
0x71F5C7: push    0
0x71F5C9: push    eax
0x71F5CA: mov     eax, [edx+8]
0x71F5CD: call    eax
0x71F5CF: push    eax; a2
0x71F5D0: lea     ecx, [esp+7Ch+var_64]; this
0x71F5D4: call    NiSmartPointer_Set??
0x71F5D9: mov     ebx, [esp+78h+var_64]
0x71F5DD: test    ebx, ebx
0x71F5DF: jz      loc_71F67C
0x71F5E5: mov     ecx, [edi+5Ch]
0x71F5E8: mov     eax, [ecx+esi*4+4]
0x71F5EC: sub     eax, [ecx+esi*4]
0x71F5EF: lea     ecx, [ecx+esi*4]
0x71F5F2: mov     ecx, [ebx+5Ch]
0x71F5F5: mov     edx, [ecx+4]
0x71F5F8: sub     edx, [ecx]
0x71F5FA: cmp     eax, edx
0x71F5FC: jnz     short loc_71F67C
0x71F5FE: mov     edx, ecx
0x71F600: mov     ecx, [ebx+50h]
0x71F603: add     ecx, [edx]
0x71F605: mov     edx, [edi+5Ch]
0x71F608: mov     edx, [edx+esi*4]
0x71F60B: add     edx, [edi+50h]
0x71F60E: push    eax; Size
0x71F60F: push    ecx; Src
0x71F610: push    edx; Dst
0x71F611: call    _memcpy
0x71F616: add     esp, 0Ch
0x71F619: test    esi, esi
0x71F61B: jnz     short loc_71F635
0x71F61D: lea     ecx, [esp+78h+var_50]
0x71F621: call    sub_71B480
0x71F626: test    al, al
0x71F628: jz      short loc_71F635
0x71F62A: mov     ebx, [ebx+4Ch]
0x71F62D: push    ebx
0x71F62E: mov     ecx, edi
0x71F630: call    sub_71B140
0x71F635: lea     ecx, [esp+78h+var_64]; this
0x71F639: mov     [esp+78h+var_4], 0FFFFFFFFh
0x71F641: call    sub_7016A0
0x71F646: add     esi, 1
0x71F649: cmp     esi, [esp+78h+arg_4]
0x71F650: jb      loc_71F590
0x71F656: jmp     loc_71F575
0x71F65B: mov     eax, [edi]
0x71F65D: mov     edx, [eax]
0x71F65F: push    1
0x71F661: mov     ecx, edi
0x71F663: call    edx
0x71F665: xor     eax, eax
0x71F667: mov     ecx, [esp+78h+var_C]
0x71F66B: mov     large fs:0, ecx
0x71F672: pop     ecx
0x71F673: pop     edi
0x71F674: pop     esi
0x71F675: pop     ebx
0x71F676: add     esp, 68h
0x71F679: retn    0Ch
0x71F67C: mov     eax, [edi]
0x71F67E: mov     edx, [eax]
0x71F680: push    1
0x71F682: mov     ecx, edi
0x71F684: call    edx
0x71F686: lea     ecx, [esp+78h+var_64]; this
0x71F68A: mov     [esp+78h+var_4], 0FFFFFFFFh
0x71F692: call    sub_7016A0
0x71F697: jmp     short loc_71F665
