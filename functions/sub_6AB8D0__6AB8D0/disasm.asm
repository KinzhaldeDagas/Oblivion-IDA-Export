0x6AB8D0: push    0FFFFFFFFh
0x6AB8D2: push    offset SEH_68C280
0x6AB8D7: mov     eax, large fs:0
0x6AB8DD: push    eax
0x6AB8DE: push    ebx
0x6AB8DF: push    esi
0x6AB8E0: push    edi
0x6AB8E1: mov     eax, ds:0B30AACh
0x6AB8E6: xor     eax, esp
0x6AB8E8: push    eax
0x6AB8E9: lea     eax, [esp+1Ch+var_C]
0x6AB8ED: mov     large fs:0, eax
0x6AB8F3: mov     ebx, ecx
0x6AB8F5: cmp     byte ptr ds:0B16178h, 0
0x6AB8FC: jz      loc_6AB9B9
0x6AB902: mov     esi, ds:0B33EA0h
0x6AB908: mov     eax, [esp+1Ch+arg_8]
0x6AB90C: push    14h; Size
0x6AB90E: lea     edi, [esi+eax]
0x6AB911: call    FormHeapAlloc
0x6AB916: add     esp, 4
0x6AB919: cmp     byte ptr [esp+1Ch+arg_4], 0
0x6AB91E: mov     [esp+1Ch+arg_4], eax
0x6AB922: jz      short loc_6AB94F
0x6AB924: test    eax, eax
0x6AB926: mov     [esp+1Ch+var_4], 0
0x6AB92E: jz      short loc_6AB97A
0x6AB930: push    ecx
0x6AB931: mov     ecx, [esp+20h+arg_0]
0x6AB935: mov     edx, esp
0x6AB937: mov     [esp+20h+arg_8], esp
0x6AB93B: push    edi
0x6AB93C: push    esi
0x6AB93D: push    ecx
0x6AB93E: push    7
0x6AB940: mov     ecx, eax
0x6AB942: mov     dword ptr [edx], 0
0x6AB948: call    sub_6AA590
0x6AB94D: jmp     short loc_6AB97C
0x6AB94F: test    eax, eax
0x6AB951: mov     [esp+1Ch+var_4], 1
0x6AB959: jz      short loc_6AB97A
0x6AB95B: push    ecx
0x6AB95C: mov     edx, esp
0x6AB95E: mov     [esp+20h+arg_8], esp
0x6AB962: push    edi
0x6AB963: mov     dword ptr [edx], 0
0x6AB969: mov     edx, [esp+24h+arg_0]
0x6AB96D: push    esi
0x6AB96E: push    edx
0x6AB96F: push    8
0x6AB971: mov     ecx, eax
0x6AB973: call    sub_6AA590
0x6AB978: jmp     short loc_6AB97C
0x6AB97A: xor     eax, eax
0x6AB97C: mov     esi, [ebx+308h]
0x6AB982: mov     edi, eax
0x6AB984: mov     eax, [esi]
0x6AB986: mov     edx, [eax+4]
0x6AB989: mov     ecx, esi
0x6AB98B: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6AB993: call    edx
0x6AB995: mov     [eax+8], edi
0x6AB998: mov     dword ptr [eax], 0
0x6AB99E: mov     ecx, [esi+8]
0x6AB9A1: mov     [eax+4], ecx
0x6AB9A4: mov     ecx, [esi+8]
0x6AB9A7: test    ecx, ecx
0x6AB9A9: jz      short loc_6AB9AF
0x6AB9AB: mov     [ecx], eax
0x6AB9AD: jmp     short loc_6AB9B2
0x6AB9AF: mov     [esi+4], eax
0x6AB9B2: add     dword ptr [esi+0Ch], 1
0x6AB9B6: mov     [esi+8], eax
0x6AB9B9: mov     ecx, [esp+1Ch+var_C]
0x6AB9BD: mov     large fs:0, ecx
0x6AB9C4: pop     ecx
0x6AB9C5: pop     edi
0x6AB9C6: pop     esi
0x6AB9C7: pop     ebx
0x6AB9C8: add     esp, 0Ch
0x6AB9CB: retn    0Ch
