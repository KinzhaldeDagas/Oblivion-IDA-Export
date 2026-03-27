0x47F7B0: push    0FFFFFFFFh
0x47F7B2: push    offset SEH_47F7B0
0x47F7B7: mov     eax, large fs:0
0x47F7BD: push    eax
0x47F7BE: sub     esp, 20h
0x47F7C1: push    esi
0x47F7C2: push    edi
0x47F7C3: mov     eax, ds:0B30AACh
0x47F7C8: xor     eax, esp
0x47F7CA: push    eax
0x47F7CB: lea     eax, [esp+38h+var_C]
0x47F7CF: mov     large fs:0, eax
0x47F7D5: mov     esi, [esp+38h+arg_0]
0x47F7D9: test    esi, esi
0x47F7DB: jz      loc_47F8AD
0x47F7E1: mov     edi, [esp+38h+arg_4]
0x47F7E5: test    edi, edi
0x47F7E7: jz      loc_47F8AD
0x47F7ED: test    byte ptr ds:0B343FCh, 1
0x47F7F4: jnz     short loc_47F817
0x47F7F6: or      dword ptr ds:0B343FCh, 1
0x47F7FD: mov     ecx, offset flt_B34398
0x47F802: mov     [esp+38h+var_4], 0
0x47F80A: call    sub_47DCA0
0x47F80F: mov     [esp+38h+var_4], 0FFFFFFFFh
0x47F817: mov     eax, ds:0B069C4h
0x47F81C: cmp     eax, ds:0B33EA0h
0x47F822: jz      short loc_47F83B
0x47F824: push    edi
0x47F825: mov     ecx, offset flt_B34398
0x47F82A: call    sub_718200
0x47F82F: mov     ecx, ds:0B33EA0h
0x47F835: mov     ds:0B069C4h, ecx
0x47F83B: mov     edx, [esi+20h]
0x47F83E: mov     eax, [esi+24h]
0x47F841: mov     ecx, [esi+28h]
0x47F844: mov     [esp+38h+var_1C.Center.x], edx
0x47F848: mov     edx, [esi+2Ch]
0x47F84B: mov     [esp+38h+var_1C.Center.y], eax
0x47F84F: mov     [esp+38h+var_1C.Center.z], ecx
0x47F853: mov     [esp+38h+var_1C.Radius], edx
0x47F857: mov     esi, offset flt_B34398
0x47F85C: xor     edi, edi
0x47F85E: mov     edi, edi
0x47F860: mov     ecx, [esi+4]
0x47F863: mov     eax, [esi]
0x47F865: mov     edx, [esi+8]
0x47F868: mov     [esp+38h+var_28], ecx
0x47F86C: lea     ecx, [esp+38h+a2]
0x47F870: mov     [esp+38h+a2], eax
0x47F874: mov     eax, [esi+0Ch]
0x47F877: push    ecx; a2
0x47F878: lea     ecx, [esp+3Ch+var_1C]; this
0x47F87C: mov     [esp+3Ch+var_24], edx
0x47F880: mov     [esp+3Ch+var_20], eax
0x47F884: call    sub_47DA70
0x47F889: cmp     eax, 2
0x47F88C: jz      short loc_47F8AD
0x47F88E: add     edi, 10h
0x47F891: add     esi, 10h
0x47F894: cmp     edi, 60h ; '`'
0x47F897: jb      short loc_47F860
0x47F899: mov     al, 1
0x47F89B: mov     ecx, [esp+38h+var_C]
0x47F89F: mov     large fs:0, ecx
0x47F8A6: pop     ecx
0x47F8A7: pop     edi
0x47F8A8: pop     esi
0x47F8A9: add     esp, 2Ch
0x47F8AC: retn
0x47F8AD: xor     al, al
0x47F8AF: mov     ecx, [esp+38h+var_C]
0x47F8B3: mov     large fs:0, ecx
0x47F8BA: pop     ecx
0x47F8BB: pop     edi
0x47F8BC: pop     esi
0x47F8BD: add     esp, 2Ch
0x47F8C0: retn
