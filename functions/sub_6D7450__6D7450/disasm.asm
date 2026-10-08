0x6D7450: push    0FFFFFFFFh
0x6D7452: push    offset SEH_8C62B0
0x6D7457: mov     eax, large fs:0
0x6D745D: push    eax
0x6D745E: push    ecx
0x6D745F: push    esi
0x6D7460: mov     eax, ds:0B30AACh
0x6D7465: xor     eax, esp
0x6D7467: push    eax
0x6D7468: lea     eax, [esp+18h+var_C]
0x6D746C: mov     large fs:0, eax
0x6D7472: push    14h; Size
0x6D7474: call    FormHeapAlloc
0x6D7479: mov     esi, eax
0x6D747B: add     esp, 4
0x6D747E: mov     [esp+18h+var_10], esi
0x6D7482: test    esi, esi
0x6D7484: mov     [esp+18h+var_4], 0
0x6D748C: jz      short loc_6D74BC
0x6D748E: mov     ecx, esi
0x6D7490: call    sub_721350
0x6D7495: mov     dword ptr [esi], offset ??_7NiTextKeyExtraData@@6B@; const NiTextKeyExtraData::`vftable'
0x6D749B: mov     dword ptr [esi+0Ch], 0
0x6D74A2: mov     dword ptr [esi+10h], 0
0x6D74A9: mov     eax, esi
0x6D74AB: mov     ecx, [esp+18h+var_C]
0x6D74AF: mov     large fs:0, ecx
0x6D74B6: pop     ecx
0x6D74B7: pop     esi
0x6D74B8: add     esp, 10h
0x6D74BB: retn
0x6D74BC: xor     eax, eax
0x6D74BE: mov     ecx, [esp+18h+var_C]
0x6D74C2: mov     large fs:0, ecx
0x6D74C9: pop     ecx
0x6D74CA: pop     esi
0x6D74CB: add     esp, 10h
0x6D74CE: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
