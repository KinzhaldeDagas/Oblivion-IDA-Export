0x52E320: push    0FFFFFFFFh
0x52E322: push    offset SEH_5ACE20
0x52E327: mov     eax, large fs:0
0x52E32D: push    eax
0x52E32E: sub     esp, 8
0x52E331: push    ebx
0x52E332: push    ebp
0x52E333: push    esi
0x52E334: push    edi
0x52E335: mov     eax, ds:0B30AACh
0x52E33A: xor     eax, esp
0x52E33C: push    eax
0x52E33D: lea     eax, [esp+28h+var_C]
0x52E341: mov     large fs:0, eax
0x52E347: xor     edi, edi
0x52E349: cmp     [esp+28h+arg_0], edi
0x52E34D: jz      loc_52E3F6
0x52E353: mov     ebp, [esp+28h+arg_4]
0x52E357: cmp     ebp, edi
0x52E359: jz      loc_52E3F6
0x52E35F: mov     eax, [esp+28h+arg_8]
0x52E363: cmp     eax, edi
0x52E365: jz      loc_52E3F6
0x52E36B: movzx   ebx, byte ptr [ecx+0Ch]
0x52E36F: cmp     ebx, edi
0x52E371: jbe     short loc_52E3E7
0x52E373: mov     esi, [esp+28h+arg_10]
0x52E377: cmp     esi, edi
0x52E379: jz      short loc_52E383
0x52E37B: and     esi, 0FFFFFFh
0x52E381: jmp     short loc_52E38D
0x52E383: mov     eax, [eax+0Ch]
0x52E386: and     eax, 0FFFFFFh
0x52E38B: mov     esi, eax
0x52E38D: push    edi; a3
0x52E38E: push    offset aS_S_08x_U; "%s_%s_%08X_%u"
0x52E393: lea     ecx, [esp+30h+Format]; this
0x52E397: mov     [esp+30h+Format], edi
0x52E39B: mov     [esp+30h+var_10], di
0x52E3A0: mov     [esp+30h+var_E], di
0x52E3A5: call    BSStringT_Set
0x52E3AA: mov     eax, [ebp+0]
0x52E3AD: mov     edx, [eax+0D4h]
0x52E3B3: push    ebx
0x52E3B4: push    esi
0x52E3B5: mov     ecx, ebp
0x52E3B7: mov     [esp+30h+var_4], edi
0x52E3BB: call    edx
0x52E3BD: mov     ecx, [esp+30h+arg_0]
0x52E3C1: push    eax
0x52E3C2: mov     eax, [ecx]
0x52E3C4: mov     edx, [eax+0D4h]
0x52E3CA: call    edx
0x52E3CC: mov     esi, [esp+34h+Format]
0x52E3D0: push    eax; ArgList
0x52E3D1: mov     eax, [esp+38h+arg_C]
0x52E3D5: push    esi; Format
0x52E3D6: push    eax; int
0x52E3D7: call    BSStringT_Static_Format
0x52E3DC: push    esi
0x52E3DD: call    FormHeapFree
0x52E3E2: add     esp, 1Ch
0x52E3E5: jmp     short loc_52E3F6
0x52E3E7: mov     ecx, [esp+28h+arg_C]; this
0x52E3EB: push    edi; a3
0x52E3EC: push    offset aNewResponse; "New Response"
0x52E3F1: call    BSStringT_Set
0x52E3F6: mov     ecx, [esp+28h+var_C]
0x52E3FA: mov     large fs:0, ecx
0x52E401: pop     ecx
0x52E402: pop     edi
0x52E403: pop     esi
0x52E404: pop     ebp
0x52E405: pop     ebx
0x52E406: add     esp, 14h
0x52E409: retn    14h
