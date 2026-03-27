0x88E6F0: push    ebp
0x88E6F1: mov     ebp, esp
0x88E6F3: and     esp, 0FFFFFFF0h
0x88E6F6: push    0FFFFFFFFh
0x88E6F8: push    offset SEH_88E6F0
0x88E6FD: mov     eax, large fs:0
0x88E703: push    eax
0x88E704: sub     esp, 8
0x88E707: push    ebx
0x88E708: push    esi
0x88E709: push    edi
0x88E70A: mov     eax, ds:0B30AACh
0x88E70F: xor     eax, esp
0x88E711: push    eax
0x88E712: lea     eax, [esp+24h+var_C]
0x88E716: mov     large fs:0, eax
0x88E71C: mov     esi, ecx
0x88E71E: fldz
0x88E720: mov     edi, [ebp+arg_0]
0x88E723: fst     dword ptr [esi+64h]
0x88E726: xor     ebx, ebx
0x88E728: cmp     edi, ebx
0x88E72A: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x88E731: movaps  xmmword ptr [esi+40h], xmm0
0x88E735: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x88E73C: fstp    dword ptr [esi+60h]
0x88E73F: movaps  xmmword ptr [esi+50h], xmm0
0x88E743: mov     [esi+68h], bl
0x88E746: mov     [esi+69h], bl
0x88E749: jz      short loc_88E7AA
0x88E74B: movaps  xmm0, xmmword ptr [edi+20h]
0x88E74F: movaps  xmmword ptr [esi+20h], xmm0
0x88E753: movaps  xmm0, xmmword ptr [edi+30h]
0x88E757: movaps  xmmword ptr [esi+30h], xmm0
0x88E75B: mov     ecx, ds:0BA7D98h
0x88E761: mov     eax, [ecx]
0x88E763: mov     edx, [eax+10h]
0x88E766: push    2Eh ; '.'
0x88E768: push    100h
0x88E76D: call    edx
0x88E76F: mov     word ptr [eax+4], 100h
0x88E775: mov     [esp+24h+var_14], eax
0x88E779: push    edi
0x88E77A: mov     ecx, eax
0x88E77C: mov     [esp+28h+var_4], ebx
0x88E780: call    sub_88E560
0x88E785: mov     ebx, eax
0x88E787: mov     eax, [esi]
0x88E789: mov     edx, [eax+4Ch]
0x88E78C: push    ebx
0x88E78D: mov     ecx, esi
0x88E78F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x88E797: call    edx
0x88E799: mov     ecx, ebx
0x88E79B: call    sub_8BC730
0x88E7A0: mov     eax, [esi]
0x88E7A2: mov     edx, [eax+7Ch]
0x88E7A5: push    edi
0x88E7A6: mov     ecx, esi
0x88E7A8: call    edx
0x88E7AA: mov     ecx, [esp+24h+var_C]
0x88E7AE: mov     large fs:0, ecx
0x88E7B5: pop     ecx
0x88E7B6: pop     edi
0x88E7B7: pop     esi
0x88E7B8: pop     ebx
0x88E7B9: mov     esp, ebp
0x88E7BB: pop     ebp
0x88E7BC: retn    4
