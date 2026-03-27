0x719870: push    0FFFFFFFFh
0x719872: push    offset SEH_8C8970
0x719877: mov     eax, large fs:0
0x71987D: push    eax
0x71987E: push    ecx
0x71987F: push    esi
0x719880: push    edi
0x719881: mov     eax, ds:0B30AACh
0x719886: xor     eax, esp
0x719888: push    eax
0x719889: lea     eax, [esp+1Ch+var_C]
0x71988D: mov     large fs:0, eax
0x719893: mov     edi, ecx
0x719895: push    114h; Size
0x71989A: call    FormHeapAlloc
0x71989F: add     esp, 4
0x7198A2: mov     [esp+1Ch+var_10], eax
0x7198A6: xor     esi, esi
0x7198A8: cmp     eax, esi
0x7198AA: mov     [esp+1Ch+var_4], esi
0x7198AE: jz      short loc_7198B9
0x7198B0: mov     ecx, eax
0x7198B2: call    sub_719760
0x7198B7: mov     esi, eax
0x7198B9: mov     eax, [esp+1Ch+arg_0]
0x7198BD: push    eax
0x7198BE: push    esi
0x7198BF: mov     ecx, edi
0x7198C1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7198C9: call    sub_71A5A0
0x7198CE: mov     ecx, [edi+108h]
0x7198D4: lea     eax, [edi+108h]
0x7198DA: mov     [esi+108h], ecx
0x7198E0: mov     edx, [eax+4]
0x7198E3: mov     [esi+10Ch], edx
0x7198E9: mov     eax, [eax+8]
0x7198EC: mov     [esi+110h], eax
0x7198F2: mov     eax, esi
0x7198F4: mov     ecx, [esp+1Ch+var_C]
0x7198F8: mov     large fs:0, ecx
0x7198FF: pop     ecx
0x719900: pop     edi
0x719901: pop     esi
0x719902: add     esp, 10h
0x719905: retn    4
