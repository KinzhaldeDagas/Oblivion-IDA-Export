0x73C710: push    0FFFFFFFFh
0x73C712: push    offset SEH_8C62B0
0x73C717: mov     eax, large fs:0
0x73C71D: push    eax
0x73C71E: push    ecx
0x73C71F: push    esi
0x73C720: mov     eax, ds:0B30AACh
0x73C725: xor     eax, esp
0x73C727: push    eax
0x73C728: lea     eax, [esp+18h+var_C]
0x73C72C: mov     large fs:0, eax
0x73C732: push    18h; Size
0x73C734: call    FormHeapAlloc
0x73C739: mov     esi, eax
0x73C73B: add     esp, 4
0x73C73E: mov     [esp+18h+var_10], esi
0x73C742: test    esi, esi
0x73C744: mov     [esp+18h+var_4], 0
0x73C74C: jz      short loc_73C783
0x73C74E: mov     ecx, esi
0x73C750: call    sub_721350
0x73C755: mov     dword ptr [esi], offset ??_7NiSwitchStringExtraData@@6B@; const NiSwitchStringExtraData::`vftable'
0x73C75B: mov     dword ptr [esi+10h], 0
0x73C762: mov     dword ptr [esi+0Ch], 0
0x73C769: mov     dword ptr [esi+14h], 0FFFFFFFFh
0x73C770: mov     eax, esi
0x73C772: mov     ecx, [esp+18h+var_C]
0x73C776: mov     large fs:0, ecx
0x73C77D: pop     ecx
0x73C77E: pop     esi
0x73C77F: add     esp, 10h
0x73C782: retn
0x73C783: xor     eax, eax
0x73C785: mov     ecx, [esp+18h+var_C]
0x73C789: mov     large fs:0, ecx
0x73C790: pop     ecx
0x73C791: pop     esi
0x73C792: add     esp, 10h
0x73C795: retn
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
