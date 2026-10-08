0x52AD40: push    0FFFFFFFFh
0x52AD42: push    offset SEH_52AD40
0x52AD47: mov     eax, large fs:0
0x52AD4D: push    eax
0x52AD4E: push    ecx
0x52AD4F: push    ebx
0x52AD50: push    esi
0x52AD51: push    edi
0x52AD52: mov     eax, ds:0B30AACh
0x52AD57: xor     eax, esp
0x52AD59: push    eax
0x52AD5A: lea     eax, [esp+20h+var_C]
0x52AD5E: mov     large fs:0, eax
0x52AD64: mov     esi, ecx
0x52AD66: mov     [esp+20h+var_10], esi
0x52AD6A: mov     eax, ds:0B36300h
0x52AD6F: xor     ebx, ebx
0x52AD71: push    eax
0x52AD72: mov     [esp+24h+var_4], 1
0x52AD7A: mov     ds:0B362FCh, ebx
0x52AD80: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52AD85: mov     ds:0B36300h, ebx
0x52AD8B: mov     ds:0B36306h, bx
0x52AD92: mov     ds:0B36304h, bx
0x52AD99: mov     edi, [esi+64h]
0x52AD9C: add     esp, 4
0x52AD9F: cmp     edi, ebx
0x52ADA1: jz      short loc_52ADB3
0x52ADA3: mov     ecx, edi; this
0x52ADA5: call    Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x52ADAA: push    edi
0x52ADAB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x52ADB0: add     esp, 4
0x52ADB3: lea     ecx, [esi+0Ch]
0x52ADB6: mov     byte ptr [esp+20h+var_4], bl
0x52ADBA: call    Script_StaticDestructor
0x52ADBF: lea     ecx, [esi+4]
0x52ADC2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x52ADCA: call    sub_56A7A0
0x52ADCF: mov     ecx, [esp+20h+var_C]
0x52ADD3: mov     large fs:0, ecx
0x52ADDA: pop     ecx
0x52ADDB: pop     edi
0x52ADDC: pop     esi
0x52ADDD: pop     ebx
0x52ADDE: add     esp, 10h
0x52ADE1: retn
0x9B85A0: mov     ecx, [ebp-10h]
0x9B85A3: add     ecx, 4
0x9B85A6: jmp     sub_56A7A0
0x9B85AB: mov     ecx, [ebp-10h]
0x9B85AE: add     ecx, 0Ch
0x9B85B1: jmp     Script_StaticDestructor
0x9B85B6: mov     edx, [esp+arg_4]
0x9B85BA: lea     eax, [edx-10h]
0x9B85BD: mov     ecx, [edx-14h]
0x9B85C0: xor     ecx, eax
0x9B85C2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B85C7: mov     eax, offset stru_AE2C14
0x9B85CC: jmp     ___CxxFrameHandler3
