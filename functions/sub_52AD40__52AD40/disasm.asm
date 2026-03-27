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
0x52AD80: call    FormHeapFree
0x52AD85: mov     ds:0B36300h, ebx
0x52AD8B: mov     ds:0B36306h, bx
0x52AD92: mov     ds:0B36304h, bx
0x52AD99: mov     edi, [esi+64h]
0x52AD9C: add     esp, 4
0x52AD9F: cmp     edi, ebx
0x52ADA1: jz      short loc_52ADB3
0x52ADA3: mov     ecx, edi; void *
0x52ADA5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x52ADAA: push    edi
0x52ADAB: call    FormHeapFree
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
