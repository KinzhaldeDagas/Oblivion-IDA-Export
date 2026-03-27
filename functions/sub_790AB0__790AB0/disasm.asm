0x790AB0: push    esi
0x790AB1: mov     esi, [esp+4+arg_4]
0x790AB5: push    edi
0x790AB6: mov     edi, [esp+8+arg_0]
0x790ABA: sub     esi, edi
0x790ABC: mov     eax, esi
0x790ABE: sar     eax, 2
0x790AC1: cmp     eax, 1
0x790AC4: jle     short loc_790AF7
0x790AC6: push    ebx
0x790AC7: mov     ebx, [esp+0Ch+arg_8]
0x790ACB: mov     eax, [edi+esi-4]
0x790ACF: mov     ecx, [edi]
0x790AD1: push    ebx
0x790AD2: push    eax
0x790AD3: lea     edx, [esi-4]
0x790AD6: sar     edx, 2
0x790AD9: push    edx
0x790ADA: push    0
0x790ADC: push    edi
0x790ADD: mov     [edi+esi-4], ecx
0x790AE1: call    sub_7903B0
0x790AE6: sub     esi, 4
0x790AE9: mov     eax, esi
0x790AEB: sar     eax, 2
0x790AEE: add     esp, 14h
0x790AF1: cmp     eax, 1
0x790AF4: jg      short loc_790ACB
0x790AF6: pop     ebx
0x790AF7: pop     edi
0x790AF8: pop     esi
0x790AF9: retn
