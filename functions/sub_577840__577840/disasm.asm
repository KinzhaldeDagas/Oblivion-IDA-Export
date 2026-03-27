0x577840: push    0FFFFFFFFh
0x577842: push    offset SEH_577840
0x577847: mov     eax, large fs:0
0x57784D: push    eax
0x57784E: push    ebx
0x57784F: push    ebp
0x577850: push    esi
0x577851: push    edi
0x577852: mov     eax, ds:0B30AACh
0x577857: xor     eax, esp
0x577859: push    eax
0x57785A: lea     eax, [esp+20h+var_C]
0x57785E: mov     large fs:0, eax
0x577864: mov     edi, ecx
0x577866: mov     eax, [esp+20h+arg_4]
0x57786A: xor     ebx, ebx
0x57786C: cmp     eax, 1
0x57786F: jle     short loc_57787C
0x577871: mov     ebx, [edi+20h]
0x577874: lea     ecx, [eax-1]
0x577877: sub     eax, ecx
0x577879: imul    ebx, ecx
0x57787C: cmp     dword ptr [edi+0Ch], 0
0x577880: jz      short loc_57789D
0x577882: test    eax, eax
0x577884: jnz     short loc_57789D
0x577886: mov     eax, [edi+8]
0x577889: mov     esi, [esp+20h+arg_0]
0x57788D: mov     ecx, [eax+8]
0x577890: add     eax, 8
0x577893: push    0
0x577895: push    esi
0x577896: call    sub_5772A0
0x57789B: jmp     short loc_5778D5
0x57789D: push    34h ; '4'; Size
0x57789F: call    FormHeapAlloc
0x5778A4: add     esp, 4
0x5778A7: mov     [esp+20h+arg_4], eax
0x5778AB: test    eax, eax
0x5778AD: mov     esi, [esp+20h+arg_0]
0x5778B1: mov     [esp+20h+var_4], 0
0x5778B9: jz      short loc_5778CB
0x5778BB: mov     ecx, [edi+18h]
0x5778BE: push    ecx
0x5778BF: push    ebx
0x5778C0: push    esi
0x5778C1: push    edi
0x5778C2: mov     ecx, eax
0x5778C4: call    sub_577710
0x5778C9: jmp     short loc_5778CD
0x5778CB: xor     eax, eax
0x5778CD: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5778D5: test    esi, esi
0x5778D7: mov     ebx, eax
0x5778D9: mov     [esp+20h+arg_0], ebx
0x5778DD: jz      short loc_577933
0x5778DF: cmp     dword ptr [esi+1Ch], 0
0x5778E3: jz      short loc_5778ED
0x5778E5: mov     edx, [esi+1Ch]
0x5778E8: cmp     byte ptr [edx], 0
0x5778EB: jnz     short loc_577933
0x5778ED: mov     ebp, [esi]
0x5778EF: call    FontManager_GetSingleton
0x5778F4: mov     ebp, [eax+ebp*4]
0x5778F7: movzx   eax, byte ptr [esi+4]
0x5778FB: mov     edx, [ebp+38h]
0x5778FE: lea     ecx, ds:0[eax*8]
0x577905: sub     ecx, eax
0x577907: mov     eax, [esi]
0x577909: lea     ebp, [edx+ecx*8+128h]
0x577910: mov     [esp+20h+arg_4], eax
0x577914: call    FontManager_GetSingleton
0x577919: mov     ecx, [esp+20h+arg_4]
0x57791D: fld     dword ptr [ebp+28h]
0x577920: mov     eax, [eax+ecx*4]
0x577923: fsub    dword ptr [ebp+34h]
0x577926: mov     edx, [eax+38h]
0x577929: fadd    dword ptr [edx]
0x57792B: call    Double_To_SInt32
0x577930: mov     [edi+20h], eax
0x577933: test    ebx, ebx
0x577935: jz      loc_5779D0
0x57793B: mov     eax, [ebx+18h]
0x57793E: add     eax, [edi+14h]
0x577941: mov     ebp, edi
0x577943: add     eax, [ebx+20h]
0x577946: cmp     eax, [edi+1Ch]
0x577949: jle     short loc_57799C
0x57794B: push    3Ch ; '<'; Size
0x57794D: mov     dword ptr [ebx+20h], 0
0x577954: call    FormHeapAlloc
0x577959: add     esp, 4
0x57795C: mov     [esp+20h+arg_0], eax
0x577960: test    eax, eax
0x577962: mov     [esp+20h+var_4], 1
0x57796A: jz      short loc_57798D
0x57796C: mov     ecx, [edi+1Ch]
0x57796F: mov     edx, [edi+18h]
0x577972: push    ecx
0x577973: mov     ecx, [edi+38h]
0x577976: push    edx
0x577977: push    ebx
0x577978: push    ecx
0x577979: mov     ecx, eax
0x57797B: call    sub_5765B0
0x577980: mov     edx, [ebx+18h]
0x577983: mov     [eax+14h], edx
0x577986: mov     ebp, eax
0x577988: mov     [ebx+30h], eax
0x57798B: jmp     short loc_5779B1
0x57798D: mov     edx, [ebx+18h]
0x577990: xor     eax, eax
0x577992: mov     [eax+14h], edx
0x577995: mov     ebp, eax
0x577997: mov     [ebx+30h], eax
0x57799A: jmp     short loc_5779B1
0x57799C: lea     eax, [esp+20h+arg_0]
0x5779A0: push    eax
0x5779A1: mov     ecx, edi
0x5779A3: call    sub_5B1E20
0x5779A8: mov     ecx, [ebx+18h]
0x5779AB: add     ecx, [ebx+20h]
0x5779AE: add     [edi+14h], ecx
0x5779B1: mov     eax, [esi+1Ch]
0x5779B4: test    eax, eax
0x5779B6: jz      short loc_5779BD
0x5779B8: cmp     byte ptr [eax], 0
0x5779BB: jnz     short loc_5779C8
0x5779BD: mov     edx, [esi]
0x5779BF: add     dword ptr [ebp+edx*4+24h], 1
0x5779C4: lea     eax, [ebp+edx*4+24h]
0x5779C8: cmp     ebp, edi
0x5779CA: jz      short loc_5779EB
0x5779CC: mov     eax, ebp
0x5779CE: jmp     short loc_5779ED
0x5779D0: test    esi, esi
0x5779D2: jz      short loc_5779EB
0x5779D4: mov     eax, [esi+1Ch]
0x5779D7: test    eax, eax
0x5779D9: jz      short loc_5779E0
0x5779DB: cmp     byte ptr [eax], 0
0x5779DE: jnz     short loc_5779EB
0x5779E0: mov     eax, [esi]
0x5779E2: add     dword ptr [edi+eax*4+24h], 1
0x5779E7: lea     edi, [edi+eax*4+24h]
0x5779EB: xor     eax, eax
0x5779ED: mov     ecx, [esp+20h+var_C]
0x5779F1: mov     large fs:0, ecx
0x5779F8: pop     ecx
0x5779F9: pop     edi
0x5779FA: pop     esi
0x5779FB: pop     ebp
0x5779FC: pop     ebx
0x5779FD: add     esp, 0Ch
0x577A00: retn    8
