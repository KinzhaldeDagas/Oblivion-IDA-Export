0x6D7290: push    0FFFFFFFFh
0x6D7292: push    offset SEH_8C8970
0x6D7297: mov     eax, large fs:0
0x6D729D: push    eax
0x6D729E: push    ecx
0x6D729F: push    esi
0x6D72A0: push    edi
0x6D72A1: mov     eax, ds:0B30AACh
0x6D72A6: xor     eax, esp
0x6D72A8: push    eax
0x6D72A9: lea     eax, [esp+1Ch+var_C]
0x6D72AD: mov     large fs:0, eax
0x6D72B3: mov     edi, ecx
0x6D72B5: push    58h ; 'X'; Size
0x6D72B7: call    FormHeapAlloc
0x6D72BC: add     esp, 4
0x6D72BF: mov     [esp+1Ch+var_10], eax
0x6D72C3: xor     esi, esi
0x6D72C5: cmp     eax, esi
0x6D72C7: mov     [esp+1Ch+var_4], esi
0x6D72CB: jz      short loc_6D72D9
0x6D72CD: push    esi
0x6D72CE: push    esi
0x6D72CF: push    esi
0x6D72D0: mov     ecx, eax
0x6D72D2: call    sub_6D7120
0x6D72D7: mov     esi, eax
0x6D72D9: mov     eax, [esp+1Ch+arg_0]
0x6D72DD: push    eax
0x6D72DE: push    esi
0x6D72DF: mov     ecx, edi
0x6D72E1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D72E9: call    sub_6ECB60
0x6D72EE: mov     ecx, [edi+40h]
0x6D72F1: mov     [esi+40h], ecx
0x6D72F4: mov     dl, [edi+48h]
0x6D72F7: mov     [esi+48h], dl
0x6D72FA: mov     eax, [edi+4Ch]
0x6D72FD: mov     [esi+4Ch], eax
0x6D7300: mov     ecx, [edi+50h]
0x6D7303: mov     [esi+50h], ecx
0x6D7306: mov     eax, esi
0x6D7308: mov     ecx, [esp+1Ch+var_C]
0x6D730C: mov     large fs:0, ecx
0x6D7313: pop     ecx
0x6D7314: pop     edi
0x6D7315: pop     esi
0x6D7316: add     esp, 10h
0x6D7319: retn    4
