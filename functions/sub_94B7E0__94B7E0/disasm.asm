0x94B7E0: push    ebp
0x94B7E1: mov     ebp, esp
0x94B7E3: and     esp, 0FFFFFFF0h
0x94B7E6: sub     esp, 40h
0x94B7E9: mov     eax, [ebp+arg_4]
0x94B7EC: xor     edx, edx
0x94B7EE: mov     [ecx+10h], edx
0x94B7F1: push    eax
0x94B7F2: mov     [eax+4], edx
0x94B7F5: mov     edx, [ebp+arg_0]
0x94B7F8: xorps   xmm0, xmm0
0x94B7FB: lea     eax, [esp+44h+var_40]
0x94B7FF: push    eax
0x94B800: movaps  [esp+48h+var_40], xmm0
0x94B805: movaps  [esp+48h+var_30], xmm0
0x94B80A: movaps  [esp+48h+var_20], xmm0
0x94B80F: push    edx
0x94B810: mov     dword ptr [esp+4Ch+var_40], 3F800000h
0x94B818: mov     dword ptr [esp+4Ch+var_30+4], 3F800000h
0x94B820: mov     dword ptr [esp+4Ch+var_20+8], 3F800000h
0x94B828: movaps  [esp+4Ch+var_10], xmm0
0x94B82D: call    sub_94A630
0x94B832: mov     esp, ebp
0x94B834: pop     ebp
0x94B835: retn    8
