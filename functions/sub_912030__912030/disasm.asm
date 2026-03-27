0x912030: push    ebp
0x912031: mov     ebp, esp
0x912033: and     esp, 0FFFFFFF0h
0x912036: sub     esp, 34h
0x912039: push    ebx
0x91203A: mov     ebx, [ebp+arg_10]
0x91203D: push    esi
0x91203E: mov     esi, [ebp+arg_C]
0x912041: movaps  xmm0, xmmword ptr [esi]
0x912044: push    edi
0x912045: mov     edi, [ebp+arg_14]
0x912048: movaps  [esp+40h+var_30], xmm0
0x91204D: movaps  xmm0, xmmword ptr [esi+10h]
0x912051: push    edi
0x912052: movaps  [esp+44h+var_20], xmm0
0x912057: lea     eax, [esp+44h+var_30]
0x91205B: xorps   xmm0, xmm0
0x91205E: push    ebx
0x91205F: movaps  [esp+48h+var_10], xmm0
0x912064: push    eax
0x912065: mov     dword ptr [esp+4Ch+var_10], 3F800000h
0x91206D: call    sub_8F1790
0x912072: push    edi
0x912073: lea     ecx, [esp+50h+var_30]
0x912077: push    ebx
0x912078: push    ecx
0x912079: mov     dword ptr [esp+58h+var_10], 0
0x912081: mov     dword ptr [esp+58h+var_10+4], 3F800000h
0x912089: call    sub_8F1790
0x91208E: push    edi
0x91208F: lea     edx, [esp+5Ch+var_30]
0x912093: push    ebx
0x912094: push    edx
0x912095: mov     dword ptr [esp+64h+var_10+4], 0
0x91209D: mov     dword ptr [esp+64h+var_10+8], 3F800000h
0x9120A5: call    sub_8F1790
0x9120AA: mov     eax, [esi+0B8h]
0x9120B0: add     esp, 24h
0x9120B3: add     eax, 3
0x9120B6: pop     edi
0x9120B7: mov     [esi+0B8h], eax
0x9120BD: pop     esi
0x9120BE: pop     ebx
0x9120BF: mov     esp, ebp
0x9120C1: pop     ebp
0x9120C2: retn    18h
