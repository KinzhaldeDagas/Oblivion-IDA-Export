0x5D38C0: sub     esp, 130h
0x5D38C6: mov     eax, ds:0B30AACh
0x5D38CB: xor     eax, esp
0x5D38CD: mov     [esp+130h+var_4], eax
0x5D38D4: push    ebx
0x5D38D5: push    ebp
0x5D38D6: mov     ebp, ecx
0x5D38D8: mov     eax, [ebp+48h]
0x5D38DB: push    esi
0x5D38DC: mov     esi, [eax+34h]
0x5D38DF: test    esi, esi
0x5D38E1: push    edi
0x5D38E2: jz      short loc_5D38FC
0x5D38E4: mov     ecx, [esi+8]
0x5D38E7: test    ecx, ecx
0x5D38E9: lea     eax, [esi+8]
0x5D38EC: mov     esi, [esi]
0x5D38EE: jz      short loc_5D38F8
0x5D38F0: mov     edx, [ecx]
0x5D38F2: mov     eax, [edx]
0x5D38F4: push    1
0x5D38F6: call    eax
0x5D38F8: test    esi, esi
0x5D38FA: jnz     short loc_5D38E4
0x5D38FC: mov     ecx, [ebp+48h]
0x5D38FF: add     ecx, 30h ; '0'
0x5D3902: call    NiTPointerList__FreeAllNodes
0x5D3907: push    0
0x5D3909: push    0
0x5D390B: push    0
0x5D390D: push    offset aNewSave; "New Save"
0x5D3912: mov     ecx, ebp
0x5D3914: call    sub_5D3650
0x5D3919: cmp     [esp+140h+arg_0], 0
0x5D3921: jz      short loc_5D3939
0x5D3923: mov     ecx, ds:0B33B00h
0x5D3929: call    sub_459400
0x5D392E: mov     ecx, ds:0B33B00h
0x5D3934: call    sub_45D450
0x5D3939: mov     ecx, ds:0B33B00h
0x5D393F: mov     esi, [ecx+6Ch]
0x5D3942: xor     ebx, ebx
0x5D3944: test    esi, esi
0x5D3946: mov     [ebp+4Ch], esi
0x5D3949: mov     edi, 1
0x5D394E: mov     eax, esi
0x5D3950: jz      short loc_5D397F
0x5D3952: cmp     dword ptr [eax], 0
0x5D3955: jz      short loc_5D3959
0x5D3957: add     ebx, edi
0x5D3959: mov     eax, [eax+4]
0x5D395C: test    eax, eax
0x5D395E: jnz     short loc_5D3952
0x5D3960: mov     eax, [esi]
0x5D3962: test    eax, eax
0x5D3964: jz      short loc_5D397F
0x5D3966: push    ebx
0x5D3967: push    eax
0x5D3968: push    edi
0x5D3969: lea     edx, [esp+14Ch+var_130]
0x5D396D: push    edx
0x5D396E: mov     ecx, ebp
0x5D3970: call    sub_5D3650
0x5D3975: mov     esi, [esi+4]
0x5D3978: add     edi, 1
0x5D397B: test    esi, esi
0x5D397D: jnz     short loc_5D3960
0x5D397F: mov     ecx, [esp+140h+var_4]
0x5D3986: pop     edi
0x5D3987: pop     esi
0x5D3988: pop     ebp
0x5D3989: pop     ebx
0x5D398A: xor     ecx, esp
0x5D398C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D3991: add     esp, 130h
0x5D3997: retn    4
