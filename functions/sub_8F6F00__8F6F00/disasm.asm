0x8F6F00: push    ebp
0x8F6F01: mov     ebp, esp
0x8F6F03: and     esp, 0FFFFFFF0h
0x8F6F06: sub     esp, 1Ch
0x8F6F09: mov     eax, [ebp+arg_0]
0x8F6F0C: xorps   xmm0, xmm0
0x8F6F0F: movaps  xmmword ptr [ecx+10h], xmm0
0x8F6F13: movaps  xmmword ptr [ecx+20h], xmm0
0x8F6F17: mov     edx, [eax]
0x8F6F19: mov     edx, [edx+0Ch]
0x8F6F1C: mov     [esp+1Ch+var_14], eax
0x8F6F20: mov     eax, [ebp+arg_8]
0x8F6F23: push    esi
0x8F6F24: mov     esi, [ebp+arg_4]
0x8F6F27: mov     [esp+20h+var_10], edx
0x8F6F2B: mov     [esp+20h+var_C], eax
0x8F6F2F: mov     eax, [ecx+8]
0x8F6F32: lea     edx, [esp+20h+var_18]
0x8F6F36: push    edx
0x8F6F37: add     ecx, 30h ; '0'
0x8F6F3A: push    ecx
0x8F6F3B: mov     [esp+28h+var_18], esi
0x8F6F3F: mov     [esp+28h+var_8], eax
0x8F6F43: call    sub_934DA0
0x8F6F48: add     esp, 8
0x8F6F4B: pop     esi
0x8F6F4C: mov     esp, ebp
0x8F6F4E: pop     ebp
0x8F6F4F: retn    0Ch
