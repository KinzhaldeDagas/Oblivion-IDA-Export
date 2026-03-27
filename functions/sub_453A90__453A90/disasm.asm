0x453A90: sub     esp, 154h
0x453A96: mov     eax, ds:0B30AACh
0x453A9B: xor     eax, esp
0x453A9D: mov     [esp+154h+var_4], eax
0x453AA4: push    ebx
0x453AA5: push    ebp
0x453AA6: mov     ebp, [esp+15Ch+arg_4]
0x453AAD: test    ebp, ebp
0x453AAF: push    esi
0x453AB0: push    edi
0x453AB1: mov     edi, [esp+164h+arg_0]
0x453AB8: mov     ebx, ecx
0x453ABA: mov     [esp+164h+var_154], edi
0x453ABE: mov     [esp+164h+var_14C], ebp
0x453AC2: mov     byte ptr [edi], 0
0x453AC5: jz      short loc_453ADC
0x453AC7: mov     eax, [esp+164h+arg_8]
0x453ACE: push    eax
0x453ACF: push    ebp
0x453AD0: call    sub_4535A0
0x453AD5: mov     [esp+164h+arg_8], eax
0x453ADC: cmp     [esp+164h+arg_10], 0
0x453AE4: mov     [esp+164h+var_150], 0
0x453AEC: jnz     short loc_453B05
0x453AEE: test    ebp, ebp
0x453AF0: jz      short loc_453B05
0x453AF2: mov     edx, [ebp+0]
0x453AF5: mov     eax, [edx+4Ch]
0x453AF8: push    0
0x453AFA: mov     ecx, ebp
0x453AFC: call    eax
0x453AFE: movzx   ecx, ax
0x453B01: mov     [esp+168h+var_154], ecx
0x453B05: push    0; int
0x453B07: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x453B0C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x453B11: push    0; int
0x453B13: push    ebp; void *
0x453B14: call    OblivionDynamicCast
0x453B19: push    0; int
0x453B1B: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x453B20: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x453B25: push    0; int
0x453B27: push    ebp; void *
0x453B28: mov     [esp+190h+var_14C], eax
0x453B2C: call    OblivionDynamicCast
0x453B31: push    0; int
0x453B33: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x453B38: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x453B3D: push    0; int
0x453B3F: push    ebp; void *
0x453B40: mov     esi, eax
0x453B42: call    OblivionDynamicCast
0x453B47: add     esp, 3Ch
0x453B4A: test    esi, esi
0x453B4C: mov     [esp+168h+var_148], eax
0x453B50: jz      loc_453D14
0x453B56: mov     ecx, [esi+58h]
0x453B59: or      eax, 0FFFFFFFFh
0x453B5C: test    ecx, ecx
0x453B5E: jz      short loc_453B67
0x453B60: mov     edx, [ecx]
0x453B62: mov     eax, [edx+8]
0x453B65: call    eax
0x453B67: add     eax, 1; switch 5 cases
0x453B6A: cmp     eax, 4
0x453B6D: ja      short def_453B6F
0x453B6F: jmp     ds:jpt_453B6F[eax*4]; switch jump
0x453B76: cmp     [esp+168h+arg_C], 0; jumptable 00453B6F case -1
0x453B7E: jz      loc_453C33
0x453B84: push    offset aProcessLevelNo; "Process Level: None\r\n"
0x453B89: lea     ecx, [esp+16Ch+var_140]
0x453B8D: push    ecx
0x453B8E: call    __sprintf
0x453B93: add     esp, 8
