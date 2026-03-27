0x8BF910: push    ebx
0x8BF911: mov     ebx, [esp+4+arg_0]
0x8BF915: push    esi
0x8BF916: push    edi
0x8BF917: push    ebx
0x8BF918: mov     esi, ecx
0x8BF91A: call    sub_8A0C30
0x8BF91F: mov     edi, [esi+4]
0x8BF922: push    ebx
0x8BF923: call    sub_8E8040
0x8BF928: mov     esi, eax
0x8BF92A: add     esp, 4
0x8BF92D: test    esi, esi
0x8BF92F: jz      short loc_8BF93D
0x8BF931: cmp     word ptr [esi+4], 0
0x8BF936: jz      short loc_8BF93D
0x8BF938: add     word ptr [esi+6], 1
0x8BF93D: mov     ecx, [edi+0Ch]
0x8BF940: test    ecx, ecx
0x8BF942: jz      short loc_8BF961
0x8BF944: cmp     word ptr [ecx+4], 0
0x8BF949: jz      short loc_8BF961
0x8BF94B: add     word ptr [ecx+6], 0FFFFh
0x8BF950: movzx   eax, word ptr [ecx+6]
0x8BF954: test    ax, ax
0x8BF957: jnz     short loc_8BF961
0x8BF959: mov     eax, [ecx]
0x8BF95B: mov     edx, [eax]
0x8BF95D: push    1
0x8BF95F: call    edx
0x8BF961: mov     [edi+0Ch], esi
0x8BF964: cmp     word ptr [esi+4], 0
0x8BF969: jz      short loc_8BF983
0x8BF96B: add     word ptr [esi+6], 0FFFFh
0x8BF970: movzx   eax, word ptr [esi+6]
0x8BF974: test    ax, ax
0x8BF977: jnz     short loc_8BF983
0x8BF979: mov     eax, [esi]
0x8BF97B: mov     edx, [eax]
0x8BF97D: push    1
0x8BF97F: mov     ecx, esi
0x8BF981: call    edx
0x8BF983: mov     eax, [ebx+21Ch]
0x8BF989: push    1
0x8BF98B: lea     ecx, [esp+10h+arg_0]
0x8BF98F: push    ecx
0x8BF990: push    4
0x8BF992: lea     edx, [edi+14h]
0x8BF995: push    edx
0x8BF996: push    eax
0x8BF997: mov     eax, [eax+4]
0x8BF99A: mov     [esp+20h+arg_0], 4
0x8BF9A2: call    eax
0x8BF9A4: mov     eax, [ebx+21Ch]
0x8BF9AA: mov     esi, 1
0x8BF9AF: push    esi
0x8BF9B0: lea     ecx, [esp+24h+arg_0]
0x8BF9B4: push    ecx
0x8BF9B5: push    esi
0x8BF9B6: lea     edx, [edi+19h]
0x8BF9B9: push    edx
0x8BF9BA: push    eax
0x8BF9BB: mov     eax, [eax+4]
0x8BF9BE: mov     [esp+34h+arg_0], esi
0x8BF9C2: call    eax
0x8BF9C4: mov     eax, [ebx+21Ch]
0x8BF9CA: mov     edx, [eax+4]
0x8BF9CD: push    esi
0x8BF9CE: lea     ecx, [esp+38h+arg_0]
0x8BF9D2: push    ecx
0x8BF9D3: push    esi
0x8BF9D4: add     edi, 1Ah
0x8BF9D7: push    edi
0x8BF9D8: push    eax
0x8BF9D9: mov     [esp+48h+arg_0], esi
0x8BF9DD: call    edx
0x8BF9DF: add     esp, 3Ch
0x8BF9E2: pop     edi
0x8BF9E3: pop     esi
0x8BF9E4: pop     ebx
0x8BF9E5: retn    4
