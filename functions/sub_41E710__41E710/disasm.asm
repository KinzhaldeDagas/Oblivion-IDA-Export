0x41E710: push    0FFFFFFFFh
0x41E712: push    offset SEH_6E3250
0x41E717: mov     eax, large fs:0
0x41E71D: push    eax
0x41E71E: push    esi
0x41E71F: push    edi
0x41E720: mov     eax, ___security_cookie
0x41E725: xor     eax, esp
0x41E727: push    eax
0x41E728: lea     eax, [esp+18h+var_C]
0x41E72C: mov     large fs:0, eax
0x41E732: mov     esi, ecx
0x41E734: push    26h ; '&'; a2
0x41E736: call    BaseExtraList_GetExtraData
0x41E73B: test    eax, eax
0x41E73D: mov     edi, [esp+18h+arg_0]
0x41E741: jz      short loc_41E746
0x41E743: mov     [eax+0Ch], edi
0x41E746: push    10h; Size
0x41E748: call    FormHeapAlloc
0x41E74D: add     esp, 4
0x41E750: mov     [esp+18h+arg_0], eax
0x41E754: test    eax, eax
0x41E756: mov     [esp+18h+var_4], 0
0x41E75E: jz      short loc_41E76A
0x41E760: push    edi
0x41E761: mov     ecx, eax
0x41E763: call    sub_429DE0
0x41E768: jmp     short loc_41E76C
0x41E76A: xor     eax, eax
0x41E76C: push    eax; BSExtraData *
0x41E76D: mov     ecx, esi; ExtraDataList *
0x41E76F: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x41E777: call    BaseExtraList_AddExtra
0x41E77C: mov     ecx, [esp+18h+var_C]
0x41E780: mov     large fs:0, ecx
0x41E787: pop     ecx
0x41E788: pop     edi
0x41E789: pop     esi
0x41E78A: add     esp, 0Ch
0x41E78D: retn    4
