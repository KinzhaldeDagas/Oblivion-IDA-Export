0x521730: push    0FFFFFFFFh
0x521732: push    offset SEH_5ACE20
0x521737: mov     eax, large fs:0
0x52173D: push    eax
0x52173E: sub     esp, 8
0x521741: push    ebx
0x521742: push    ebp
0x521743: push    esi
0x521744: push    edi
0x521745: mov     eax, ds:0B30AACh
0x52174A: xor     eax, esp
0x52174C: push    eax
0x52174D: lea     eax, [esp+28h+var_C]
0x521751: mov     large fs:0, eax
0x521757: mov     ebp, ecx
0x521759: mov     ecx, [esp+28h+arg_0]
0x52175D: xor     ebx, ebx
0x52175F: xor     eax, eax
0x521761: cmp     ecx, ebx
0x521763: jz      short loc_5217C6
0x521765: mov     [esp+28h+var_14], ebx
0x521769: mov     [esp+28h+var_10], bx
0x52176E: mov     [esp+28h+var_E], bx
0x521773: lea     eax, [esp+28h+var_14]
0x521777: push    eax
0x521778: push    ecx
0x521779: mov     [esp+30h+var_4], ebx
0x52177D: call    GetFormModelPAth
0x521782: add     esp, 4
0x521785: push    eax
0x521786: call    sub_521370
0x52178B: mov     esi, [esp+30h+var_14]
0x52178F: add     esp, 8
0x521792: xor     edi, edi
0x521794: cmp     esi, ebx
0x521796: jz      short loc_5217BB
0x521798: cmp     [esi], bl
0x52179A: jz      short loc_5217BB
0x52179C: lea     ecx, [esp+28h+arg_0]
0x5217A0: push    ecx
0x5217A1: push    esi
0x5217A2: mov     ecx, ebp
0x5217A4: mov     [esp+30h+arg_0], ebx
0x5217A8: call    NiTMap_GetAt
0x5217AD: test    al, al
0x5217AF: jz      short loc_5217BB
0x5217B1: mov     eax, [esp+28h+arg_0]
0x5217B5: cmp     eax, ebx
0x5217B7: jz      short loc_5217BB
0x5217B9: mov     edi, eax
0x5217BB: push    esi
0x5217BC: call    FormHeapFree
0x5217C1: add     esp, 4
0x5217C4: mov     eax, edi
0x5217C6: mov     ecx, [esp+28h+var_C]
0x5217CA: mov     large fs:0, ecx
0x5217D1: pop     ecx
0x5217D2: pop     edi
0x5217D3: pop     esi
0x5217D4: pop     ebp
0x5217D5: pop     ebx
0x5217D6: add     esp, 14h
0x5217D9: retn    4
