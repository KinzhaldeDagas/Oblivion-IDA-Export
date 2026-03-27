0x8AB8A0: push    edi
0x8AB8A1: mov     edi, [esp+4+arg_0]
0x8AB8A5: test    edi, edi
0x8AB8A7: jz      loc_8AB98F
0x8AB8AD: mov     eax, [edi]
0x8AB8AF: mov     edx, [eax+4]
0x8AB8B2: mov     ecx, edi
0x8AB8B4: call    edx
0x8AB8B6: test    eax, eax
0x8AB8B8: jz      loc_8AB98F
0x8AB8BE: mov     edi, edi
0x8AB8C0: cmp     eax, offset dword_B3FAB0
0x8AB8C5: jz      short loc_8AB8E1
0x8AB8C7: mov     eax, [eax+4]
0x8AB8CA: test    eax, eax
0x8AB8CC: jnz     short loc_8AB8C0
0x8AB8CE: fld     [esp+4+arg_4]
0x8AB8D2: push    ecx
0x8AB8D3: fstp    [esp+8+var_8]; float
0x8AB8D6: push    edi; int
0x8AB8D7: call    sub_8AB240
0x8AB8DC: add     esp, 8
0x8AB8DF: pop     edi
0x8AB8E0: retn
0x8AB8E1: cmp     word ptr [edi+0B6h], 0
0x8AB8E9: jbe     loc_8AB98F
0x8AB8EF: mov     eax, [edi+0B0h]
0x8AB8F5: push    esi
0x8AB8F6: mov     esi, [eax]
0x8AB8F8: test    esi, esi
0x8AB8FA: jz      loc_8AB98E
0x8AB900: mov     edx, [esi]
0x8AB902: mov     eax, [edx+4]
0x8AB905: mov     ecx, esi
0x8AB907: call    eax
0x8AB909: test    eax, eax
0x8AB90B: jz      loc_8AB98E
0x8AB911: cmp     eax, offset dword_B3FAB0
0x8AB916: jz      short loc_8AB933
0x8AB918: mov     eax, [eax+4]
0x8AB91B: test    eax, eax
0x8AB91D: jnz     short loc_8AB911
0x8AB91F: fld     [esp+8+arg_4]
0x8AB923: pop     esi
0x8AB924: push    ecx
0x8AB925: fstp    [esp+8+var_8]; float
0x8AB928: push    edi; int
0x8AB929: call    sub_8AB240
0x8AB92E: add     esp, 8
0x8AB931: pop     edi
0x8AB932: retn
0x8AB933: cmp     word ptr [esi+0B6h], 0
0x8AB93B: jbe     short loc_8AB98E
0x8AB93D: mov     ecx, [esi+0B0h]
0x8AB943: mov     eax, [ecx]
0x8AB945: test    eax, eax
0x8AB947: jz      short loc_8AB98E
0x8AB949: mov     eax, [eax+0A8h]
0x8AB94F: push    eax
0x8AB950: push    offset dword_BA7D24
0x8AB955: call    NiRTTI_Cast
0x8AB95A: add     esp, 8
0x8AB95D: test    eax, eax
0x8AB95F: jz      short loc_8AB98E
0x8AB961: mov     esi, [eax+10h]
0x8AB964: test    esi, esi
0x8AB966: jz      short loc_8AB98E
0x8AB968: mov     edx, [esi]
0x8AB96A: mov     eax, [edx+9Ch]
0x8AB970: push    6
0x8AB972: mov     ecx, esi
0x8AB974: call    eax
0x8AB976: push    offset stru_BA7A40
0x8AB97B: mov     ecx, esi
0x8AB97D: call    sub_4D6AF0
0x8AB982: push    offset stru_BA7A40
0x8AB987: mov     ecx, esi
0x8AB989: call    sub_4D6B30
0x8AB98E: pop     esi
0x8AB98F: fld     [esp+4+arg_4]
0x8AB993: push    ecx
0x8AB994: fstp    [esp+8+var_8]; float
0x8AB997: push    edi; int
0x8AB998: call    sub_8AB240
0x8AB99D: add     esp, 8
0x8AB9A0: pop     edi
0x8AB9A1: retn
