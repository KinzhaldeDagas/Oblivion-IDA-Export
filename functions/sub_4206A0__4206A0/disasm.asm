0x4206A0: push    0FFFFFFFFh
0x4206A2: push    offset SEH_6E3250
0x4206A7: mov     eax, large fs:0
0x4206AD: push    eax
0x4206AE: push    esi
0x4206AF: push    edi
0x4206B0: mov     eax, ___security_cookie
0x4206B5: xor     eax, esp
0x4206B7: push    eax
0x4206B8: lea     eax, [esp+18h+var_C]
0x4206BC: mov     large fs:0, eax
0x4206C2: mov     esi, ecx
0x4206C4: mov     edi, [esp+18h+arg_0]
0x4206C8: test    edi, edi
0x4206CA: push    44h ; 'D'; a2
0x4206CC: jz      short loc_42073A
0x4206CE: call    BaseExtraList_GetExtraData
0x4206D3: test    eax, eax
0x4206D5: jz      short loc_4206EE
0x4206D7: mov     [eax+0Ch], edi
0x4206DA: mov     ecx, [esp+18h+var_C]
0x4206DE: mov     large fs:0, ecx
0x4206E5: pop     ecx
0x4206E6: pop     edi
0x4206E7: pop     esi
0x4206E8: add     esp, 0Ch
0x4206EB: retn    4
0x4206EE: push    10h; Size
0x4206F0: call    FormHeapAlloc
0x4206F5: add     esp, 4
0x4206F8: mov     [esp+18h+arg_0], eax
0x4206FC: test    eax, eax
0x4206FE: mov     [esp+18h+var_4], 0
0x420706: jz      short loc_420711
0x420708: mov     ecx, eax
0x42070A: call    sub_42A680
0x42070F: jmp     short loc_420713
0x420711: xor     eax, eax
0x420713: push    eax; BSExtraData *
0x420714: mov     ecx, esi; ExtraDataList *
0x420716: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42071E: mov     [eax+0Ch], edi
0x420721: call    BaseExtraList_AddExtra
0x420726: mov     ecx, [esp+18h+var_C]
0x42072A: mov     large fs:0, ecx
0x420731: pop     ecx
0x420732: pop     edi
0x420733: pop     esi
0x420734: add     esp, 0Ch
0x420737: retn    4
0x42073A: call    BaseExtraList_RemoveExtraByType
0x42073F: mov     ecx, [esp+18h+var_C]
0x420743: mov     large fs:0, ecx
0x42074A: pop     ecx
0x42074B: pop     edi
0x42074C: pop     esi
0x42074D: add     esp, 0Ch
0x420750: retn    4
