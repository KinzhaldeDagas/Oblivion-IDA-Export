0x70E870: push    0FFFFFFFFh
0x70E872: push    offset SEH_8C8900
0x70E877: mov     eax, large fs:0
0x70E87D: push    eax
0x70E87E: push    ecx
0x70E87F: mov     eax, ds:0B30AACh
0x70E884: xor     eax, esp
0x70E886: push    eax
0x70E887: lea     eax, [esp+14h+var_C]
0x70E88B: mov     large fs:0, eax
0x70E891: push    70h ; 'p'; Size
0x70E893: call    FormHeapAlloc
0x70E898: add     esp, 4
0x70E89B: mov     [esp+14h+var_10], eax
0x70E89F: test    eax, eax
0x70E8A1: mov     [esp+14h+var_4], 0
0x70E8A9: jz      short loc_70E8C2
0x70E8AB: mov     ecx, eax
0x70E8AD: call    sub_70E340
0x70E8B2: mov     ecx, [esp+14h+var_C]
0x70E8B6: mov     large fs:0, ecx
0x70E8BD: pop     ecx
0x70E8BE: add     esp, 10h
0x70E8C1: retn
0x70E8C2: xor     eax, eax
0x70E8C4: mov     ecx, [esp+14h+var_C]
0x70E8C8: mov     large fs:0, ecx
0x70E8CF: pop     ecx
0x70E8D0: add     esp, 10h
0x70E8D3: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
