0x47C740: push    0FFFFFFFFh
0x47C742: push    offset SEH_47C740
0x47C747: mov     eax, large fs:0
0x47C74D: push    eax
0x47C74E: sub     esp, 24h
0x47C751: push    ebx
0x47C752: push    ebp
0x47C753: push    esi
0x47C754: push    edi
0x47C755: mov     eax, ds:0B30AACh
0x47C75A: xor     eax, esp
0x47C75C: push    eax
0x47C75D: lea     eax, [esp+44h+var_C]
0x47C761: mov     large fs:0, eax
0x47C767: mov     edi, ecx
0x47C769: mov     al, [edi+8]
0x47C76C: shr     al, 3
0x47C76F: test    al, 1
0x47C771: jz      loc_47C90B
0x47C777: mov     ecx, ds:0B24260h
0x47C77D: fld     dword ptr ds:0A79E10h
0x47C783: mov     edx, ds:0B24264h
0x47C789: fstp    [esp+44h+var_10]
0x47C78D: mov     eax, ds:0B24268h
0x47C792: mov     [esp+44h+var_2C], ecx
0x47C796: mov     ecx, ds:0B3CBA4h
0x47C79C: mov     [esp+44h+var_28], edx
0x47C7A0: mov     edx, ds:0B3CBA8h
0x47C7A6: mov     [esp+44h+var_24], eax
0x47C7AA: mov     eax, ds:0B3CBACh
0x47C7AF: mov     [esp+44h+var_20], ecx
0x47C7B3: mov     ecx, ds:0B3CBB0h
0x47C7B9: xor     ebx, ebx
0x47C7BB: cmp     [edi+44h], bx
0x47C7BF: mov     [esp+44h+var_1C], edx
0x47C7C3: mov     [esp+44h+var_18], eax
0x47C7C7: mov     [esp+44h+var_14], ecx
0x47C7CB: jbe     loc_47C90B
0x47C7D1: xor     ebp, ebp
0x47C7D3: mov     edx, [edi+40h]
0x47C7D6: mov     esi, [edx+ebx*4]
0x47C7D9: test    esi, esi
0x47C7DB: mov     [esp+44h+var_30], esi
0x47C7DF: jz      short loc_47C7EB
0x47C7E1: lea     eax, [esi+4]
0x47C7E4: push    eax; lpAddend
0x47C7E5: call    dword ptr ds:0A28078h
0x47C7EB: test    esi, esi
0x47C7ED: mov     [esp+44h+var_4], 0
0x47C7F5: jz      loc_47C8D5
0x47C7FB: mov     cl, [esi+18h]
0x47C7FE: shr     cl, 1
0x47C800: test    cl, 1
0x47C803: jz      loc_47C8D5
0x47C809: mov     edx, [edi+3Ch]
0x47C80C: fld     [esp+44h+arg_0]
0x47C810: mov     eax, [edx+ebp]
0x47C813: mov     eax, [eax+4Ch]
0x47C816: lea     ecx, [edx+ebp]
0x47C819: lea     edx, [esp+44h+var_2C]
0x47C81D: push    edx
0x47C81E: push    esi
0x47C81F: push    ecx
0x47C820: fstp    [esp+50h+var_50]
0x47C823: call    eax
0x47C825: test    al, al
0x47C827: jz      loc_47C8C7
0x47C82D: fld     [esp+44h+var_2C]
0x47C831: fld     dword ptr ds:0A7DEB4h
0x47C837: fchs
0x47C839: fucompp
0x47C83B: fnstsw  ax
0x47C83D: test    ah, 44h
0x47C840: jnp     short loc_47C857
0x47C842: mov     ecx, [esp+44h+var_2C]
0x47C846: mov     [esi+54h], ecx
0x47C849: mov     edx, [esp+44h+var_28]
0x47C84D: mov     [esi+58h], edx
0x47C850: mov     eax, [esp+44h+var_24]
0x47C854: mov     [esi+5Ch], eax
0x47C857: fld     [esp+44h+var_1C]
0x47C85B: fld     dword ptr ds:0A7DEB4h
0x47C861: fchs
0x47C863: fucompp
0x47C865: fnstsw  ax
0x47C867: test    ah, 44h
0x47C86A: jnp     short loc_47C879
0x47C86C: lea     ecx, [esi+30h]
0x47C86F: push    ecx
0x47C870: lea     ecx, [esp+48h+var_20]
0x47C874: call    sub_47C600
0x47C879: fld     [esp+44h+var_10]
0x47C87D: fld     st
0x47C87F: fld     dword ptr ds:0A7DEB4h
0x47C885: fchs
0x47C887: fucompp
0x47C889: fnstsw  ax
0x47C88B: test    ah, 44h
0x47C88E: jnp     short loc_47C8AB
0x47C890: fabs
0x47C892: lea     eax, [esi+4]
0x47C895: fstp    [esp+44h+var_30]
0x47C899: mov     [esp+44h+var_4], 0FFFFFFFFh
0x47C8A1: fld     [esp+44h+var_30]
0x47C8A5: push    eax
0x47C8A6: fstp    dword ptr [esi+60h]
0x47C8A9: jmp     short loc_47C8E5
0x47C8AB: mov     dl, [edi+8]
0x47C8AE: fstp    st
0x47C8B0: shr     dl, 6
0x47C8B3: test    dl, 1
0x47C8B6: jz      short loc_47C8C7
0x47C8B8: fld1
0x47C8BA: fabs
0x47C8BC: fstp    [esp+44h+var_30]
0x47C8C0: fld     [esp+44h+var_30]
0x47C8C4: fstp    dword ptr [esi+60h]
0x47C8C7: lea     eax, [esi+4]
0x47C8CA: mov     [esp+44h+var_4], 0FFFFFFFFh
0x47C8D2: push    eax
0x47C8D3: jmp     short loc_47C8E5
0x47C8D5: test    esi, esi
0x47C8D7: mov     [esp+44h+var_4], 0FFFFFFFFh
0x47C8DF: jz      short loc_47C8F9
0x47C8E1: lea     ecx, [esi+4]
0x47C8E4: push    ecx; lpAddend
0x47C8E5: call    dword ptr ds:0A2807Ch
0x47C8EB: test    eax, eax
0x47C8ED: jnz     short loc_47C8F9
0x47C8EF: mov     edx, [esi]
0x47C8F1: mov     eax, [edx]
0x47C8F3: push    1
0x47C8F5: mov     ecx, esi
0x47C8F7: call    eax
0x47C8F9: movzx   ecx, word ptr [edi+44h]
0x47C8FD: add     ebx, 1
0x47C900: add     ebp, 30h ; '0'
0x47C903: cmp     ebx, ecx
0x47C905: jl      loc_47C7D3
0x47C90B: mov     ecx, dword ptr [esp+44h+var_C]
0x47C90F: mov     large fs:0, ecx
0x47C916: pop     ecx
0x47C917: pop     edi
0x47C918: pop     esi
0x47C919: pop     ebp
0x47C91A: pop     ebx
0x47C91B: add     esp, 30h
0x47C91E: retn    8
