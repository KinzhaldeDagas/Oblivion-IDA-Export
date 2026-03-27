0x564730: push    0FFFFFFFFh
0x564732: push    offset SEH_5ACE20
0x564737: mov     eax, large fs:0
0x56473D: push    eax
0x56473E: sub     esp, 8
0x564741: push    ebx
0x564742: push    ebp
0x564743: push    esi
0x564744: push    edi
0x564745: mov     eax, ds:0B30AACh
0x56474A: xor     eax, esp
0x56474C: push    eax
0x56474D: lea     eax, [esp+28h+var_C]
0x564751: mov     large fs:0, eax
0x564757: mov     edi, ecx
0x564759: xor     ebx, ebx
0x56475B: mov     [esp+28h+var_14], ebx
0x56475F: mov     [esp+28h+var_10], bx
0x564764: mov     [esp+28h+var_E], bx
0x564769: mov     ecx, [edi+0DCh]
0x56476F: cmp     ecx, ebx
0x564771: mov     [esp+28h+var_4], ebx
0x564775: jz      loc_564831
0x56477B: cmp     [edi+0E0h], ebx
0x564781: jz      loc_564831
0x564787: mov     ebp, [esp+28h+a2]
0x56478B: cmp     ebp, ebx
0x56478D: jz      loc_564831
0x564793: call    sub_5601E0
0x564798: mov     si, [esp+28h+arg_0]
0x56479D: movzx   eax, ax
0x5647A0: cmp     si, ax
0x5647A3: jnb     loc_564831
0x5647A9: mov     eax, [edi]
0x5647AB: mov     edx, [eax+0A0h]
0x5647B1: mov     ecx, edi
0x5647B3: call    edx
0x5647B5: mov     ebx, eax
0x5647B7: test    ebx, ebx
0x5647B9: jnz     short loc_5647CE
0x5647BB: lea     ecx, [esp+28h+var_14]; void *
0x5647BF: mov     [esp+28h+var_4], 0FFFFFFFFh
0x5647C7: call    BSStringT_Clear
0x5647CC: jmp     short loc_56483A
0x5647CE: mov     eax, [edi+0E0h]
0x5647D4: movzx   esi, si
0x5647D7: add     esi, esi
0x5647D9: add     esi, esi
0x5647DB: add     eax, esi
0x5647DD: cmp     dword ptr [eax], 0
0x5647E0: jz      short loc_5647FF
0x5647E2: mov     eax, [eax]
0x5647E4: mov     edx, [ebx]
0x5647E6: mov     edx, [edx+88h]
0x5647EC: push    eax
0x5647ED: lea     eax, [esp+2Ch+arg_0]
0x5647F1: push    eax
0x5647F2: mov     ecx, ebx
0x5647F4: call    edx
0x5647F6: lea     ecx, [esp+28h+arg_0]; this
0x5647FA: call    sub_7016A0
0x5647FF: mov     eax, [ebx]
0x564801: mov     edx, [eax+84h]
0x564807: push    1
0x564809: push    ebp
0x56480A: mov     ecx, ebx
0x56480C: call    edx
0x56480E: mov     ecx, [edi+0E0h]
0x564814: push    ebp; a2
0x564815: add     ecx, esi; this
0x564817: call    NiSmartPointer_Set??
0x56481C: lea     ecx, [esp+28h+var_14]; void *
0x564820: mov     [esp+28h+var_4], 0FFFFFFFFh
0x564828: call    BSStringT_Clear
0x56482D: mov     al, 1
0x56482F: jmp     short loc_56483C
0x564831: push    ebx
0x564832: call    FormHeapFree
0x564837: add     esp, 4
0x56483A: xor     al, al
0x56483C: mov     ecx, [esp+28h+var_C]
0x564840: mov     large fs:0, ecx
0x564847: pop     ecx
0x564848: pop     edi
0x564849: pop     esi
0x56484A: pop     ebp
0x56484B: pop     ebx
0x56484C: add     esp, 14h
0x56484F: retn    8
