0x9120D0: push    ebp
0x9120D1: mov     ebp, esp
0x9120D3: and     esp, 0FFFFFFF0h
0x9120D6: sub     esp, 3Ch
0x9120D9: mov     eax, [ebp+arg_0]
0x9120DC: mov     edx, [eax]
0x9120DE: mov     ecx, [ebp+arg_14]
0x9120E1: add     edx, 4
0x9120E4: mov     [eax], edx
0x9120E6: mov     eax, edx
0x9120E8: mov     eax, [eax]
0x9120EA: mov     edx, [ebp+arg_10]
0x9120ED: push    esi
0x9120EE: mov     esi, [ebp+arg_C]
0x9120F1: add     eax, 2
0x9120F4: shl     eax, 4
0x9120F7: movaps  xmm0, xmmword ptr [eax+esi]
0x9120FB: push    ecx
0x9120FC: movaps  [esp+44h+var_10], xmm0
0x912101: movaps  xmm0, xmmword ptr [esi]
0x912104: push    edx
0x912105: lea     eax, [esp+48h+var_30]
0x912109: movaps  [esp+48h+var_30], xmm0
0x91210E: movaps  xmm0, xmmword ptr [esi+10h]
0x912112: push    eax
0x912113: movaps  [esp+4Ch+var_20], xmm0
0x912118: call    sub_8F1790
0x91211D: mov     eax, [esi+0B8h]
0x912123: add     esp, 0Ch
0x912126: inc     eax
0x912127: mov     [esi+0B8h], eax
0x91212D: pop     esi
0x91212E: mov     esp, ebp
0x912130: pop     ebp
0x912131: retn    18h
