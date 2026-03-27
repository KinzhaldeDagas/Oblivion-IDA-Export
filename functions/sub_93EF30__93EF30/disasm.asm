0x93EF30: push    ebp
0x93EF31: mov     ebp, esp
0x93EF33: and     esp, 0FFFFFFF0h
0x93EF36: sub     esp, 68h
0x93EF39: mov     eax, [ebp+arg_4]
0x93EF3C: push    esi
0x93EF3D: mov     esi, ecx
0x93EF3F: mov     ecx, [ebp+arg_8]
0x93EF42: mov     word ptr [esi+2], 0
0x93EF48: mov     word ptr [esi+4], 10h
0x93EF4E: mov     word ptr [esi+6], 20h ; ' '
0x93EF54: movaps  xmm1, xmmword ptr [ecx]
0x93EF57: movaps  xmm2, xmmword ptr [ecx+10h]
0x93EF5B: movaps  xmm3, xmmword ptr [ecx+20h]
0x93EF5F: movaps  xmm4, xmmword ptr [ecx+30h]
0x93EF63: add     eax, 10h
0x93EF66: lea     ecx, [esp+6Ch+var_30]
0x93EF6A: push    edi
0x93EF6B: sub     ecx, eax
0x93EF6D: mov     edx, 3
0x93EF72: movaps  xmm0, xmmword ptr [eax]
0x93EF75: movaps  xmm5, xmm0
0x93EF78: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93EF7C: movaps  xmm6, xmm3
0x93EF7F: mulps   xmm6, xmm5
0x93EF82: movaps  xmm5, xmm0
0x93EF85: shufps  xmm5, xmm0, 55h ; 'U'
0x93EF89: movaps  xmm7, xmm2
0x93EF8C: mulps   xmm7, xmm5
0x93EF8F: movaps  xmm5, xmm0
0x93EF92: shufps  xmm5, xmm0, 0
0x93EF96: movaps  xmm0, xmm1
0x93EF99: mulps   xmm0, xmm5
0x93EF9C: addps   xmm6, xmm4
0x93EF9F: addps   xmm0, xmm7
0x93EFA2: addps   xmm0, xmm6
0x93EFA5: movaps  xmmword ptr [ecx+eax], xmm0
0x93EFA9: add     eax, 10h
0x93EFAC: dec     edx
0x93EFAD: jnz     short loc_93EF72
0x93EFAF: movaps  xmm2, [esp+70h+var_20]
0x93EFB4: movaps  xmm1, [esp+70h+var_10]
0x93EFB9: mov     edi, [ebp+arg_0]
0x93EFBC: mov     eax, [edi]
0x93EFBE: subps   xmm1, xmm2
0x93EFC1: movaps  xmm0, xmm2
0x93EFC4: subps   xmm0, [esp+70h+var_30]
0x93EFC9: movaps  xmm2, xmm1
0x93EFCC: shufps  xmm2, xmm1, 0C9h ; 'É'
0x93EFD0: movaps  xmm3, xmm0
0x93EFD3: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x93EFD7: mulps   xmm3, xmm2
0x93EFDA: movaps  xmm2, xmm1
0x93EFDD: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x93EFE1: movaps  xmm1, xmm0
0x93EFE4: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93EFE8: lea     ecx, [esp+70h+var_50]
0x93EFEC: mulps   xmm1, xmm2
0x93EFEF: push    ecx
0x93EFF0: subps   xmm1, xmm3
0x93EFF3: mov     ecx, edi
0x93EFF5: movaps  [esp+74h+var_60], xmm1
0x93EFFA: call    dword ptr [eax+2Ch]
0x93EFFD: movaps  xmm0, [esp+6Ch+var_4C]
0x93F002: movaps  xmm1, [esp+6Ch+var_60+4]
0x93F007: subps   xmm0, [esp+6Ch+var_30+4]
0x93F00C: mulps   xmm0, xmm1
0x93F00F: movaps  xmm2, xmm0
0x93F012: shufps  xmm2, xmm0, 55h ; 'U'
0x93F016: movaps  xmm3, xmm0
0x93F019: addss   xmm2, xmm0
0x93F01D: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93F021: addss   xmm3, xmm2
0x93F025: movmskps edx, xmm3
0x93F028: test    dl, 1
0x93F02B: jz      short loc_93F03C
0x93F02D: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93F034: xorps   xmm1, xmm0
0x93F037: movaps  [esp+6Ch+var_60+4], xmm1
0x93F03C: mov     eax, [edi]
0x93F03E: lea     ecx, [esp+6Ch+var_3C]
0x93F042: push    ecx
0x93F043: lea     edx, [esp+70h+var_60+4]
0x93F047: push    edx
0x93F048: mov     ecx, edi
0x93F04A: call    dword ptr [eax+24h]
0x93F04D: mov     ax, [esp+70h+var_34]
0x93F052: mov     [esi], ax
0x93F055: mov     byte ptr [esi+8], 1
0x93F059: mov     byte ptr [esi+9], 3
0x93F05D: mov     edx, [edi]
0x93F05F: mov     ecx, edi
0x93F061: call    dword ptr [edx+30h]
0x93F064: pop     edi
0x93F065: mov     [esi+0Ah], al
0x93F068: mov     byte ptr [esi+0Bh], 3
0x93F06C: pop     esi
0x93F06D: mov     esp, ebp
0x93F06F: pop     ebp
0x93F070: retn    0Ch
