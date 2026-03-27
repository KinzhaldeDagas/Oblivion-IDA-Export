0x91A910: push    ebp
0x91A911: mov     ebp, esp
0x91A913: and     esp, 0FFFFFFF0h
0x91A916: sub     esp, 44h
0x91A919: push    ebx
0x91A91A: push    esi
0x91A91B: push    edi
0x91A91C: mov     edi, [ebp+arg_0]
0x91A91F: mov     esi, [edi+50h]
0x91A922: add     esi, 50h ; 'P'
0x91A925: lea     eax, [esi+20h]
0x91A928: mov     ebx, ecx
0x91A92A: push    eax
0x91A92B: lea     ecx, [esp+54h+var_4C+0Ch]
0x91A92F: call    sub_8B1DD0
0x91A934: movaps  xmm0, xmmword ptr [esi+40h]
0x91A938: movaps  xmm2, [esp+50h+var_20]
0x91A93D: movaps  xmm3, [esp+50h+var_30]
0x91A942: mov     eax, ds:0BA8420h
0x91A947: mov     ecx, [ebx-14h]
0x91A94A: movaps  xmm1, xmm0
0x91A94D: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91A951: mulps   xmm2, xmm1
0x91A954: movaps  xmm1, xmm0
0x91A957: shufps  xmm1, xmm0, 55h ; 'U'
0x91A95B: mulps   xmm3, xmm1
0x91A95E: movaps  xmm1, xmm0
0x91A961: shufps  xmm1, xmm0, 0
0x91A965: movaps  xmm0, xmmword ptr [esp+50h+var_4C+0Ch]
0x91A96A: push    eax
0x91A96B: mulps   xmm0, xmm1
0x91A96E: movaps  xmm1, xmmword ptr [esi]
0x91A971: lea     eax, [edi+15h]
0x91A974: addps   xmm0, xmm3
0x91A977: push    eax
0x91A978: addps   xmm0, xmm2
0x91A97B: subps   xmm1, xmm0
0x91A97E: lea     eax, [esp+58h+var_4C+0Ch]
0x91A982: movaps  [esp+58h+var_10], xmm1
0x91A987: mov     edx, [ecx]
0x91A989: push    eax
0x91A98A: call    dword ptr [edx+0Ch]
0x91A98D: mov     esi, [edi+50h]
0x91A990: add     esi, 50h ; 'P'
0x91A993: lea     ecx, [esi+30h]
0x91A996: push    ecx
0x91A997: lea     ecx, [esp+54h+var_4C+0Ch]
0x91A99B: call    sub_8B1DD0
0x91A9A0: movaps  xmm0, xmmword ptr [esi+40h]
0x91A9A4: movaps  xmm2, [esp+50h+var_20]
0x91A9A9: movaps  xmm3, [esp+50h+var_30]
0x91A9AE: mov     eax, ds:0BA8420h
0x91A9B3: mov     ecx, [ebx-14h]
0x91A9B6: movaps  xmm1, xmm0
0x91A9B9: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x91A9BD: mulps   xmm2, xmm1
0x91A9C0: movaps  xmm1, xmm0
0x91A9C3: shufps  xmm1, xmm0, 55h ; 'U'
0x91A9C7: mulps   xmm3, xmm1
0x91A9CA: movaps  xmm1, xmm0
0x91A9CD: shufps  xmm1, xmm0, 0
0x91A9D1: movaps  xmm0, xmmword ptr [esp+50h+var_4C+0Ch]
0x91A9D6: mulps   xmm0, xmm1
0x91A9D9: movaps  xmm1, xmmword ptr [esi+10h]
0x91A9DD: push    eax
0x91A9DE: addps   xmm0, xmm3
0x91A9E1: add     edi, 16h
0x91A9E4: addps   xmm0, xmm2
0x91A9E7: subps   xmm1, xmm0
0x91A9EA: push    edi
0x91A9EB: lea     eax, [esp+58h+var_4C+0Ch]
0x91A9EF: movaps  [esp+58h+var_10], xmm1
0x91A9F4: mov     edx, [ecx]
0x91A9F6: push    eax
0x91A9F7: call    dword ptr [edx+0Ch]
0x91A9FA: pop     edi
0x91A9FB: pop     esi
0x91A9FC: pop     ebx
0x91A9FD: mov     esp, ebp
0x91A9FF: pop     ebp
0x91AA00: retn    4
