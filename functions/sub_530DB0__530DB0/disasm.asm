0x530DB0: push    0FFFFFFFFh
0x530DB2: push    offset SEH_530DB0
0x530DB7: mov     eax, large fs:0
0x530DBD: push    eax
0x530DBE: sub     esp, 50h
0x530DC1: push    esi
0x530DC2: push    edi
0x530DC3: mov     eax, ds:0B30AACh
0x530DC8: xor     eax, esp
0x530DCA: push    eax
0x530DCB: lea     eax, [esp+68h+var_C]
0x530DCF: mov     large fs:0, eax
0x530DD5: mov     esi, ecx
0x530DD7: mov     eax, [esi+8]
0x530DDA: shr     eax, 0Eh
0x530DDD: test    al, 1
0x530DDF: jnz     short loc_530E47
0x530DE1: movzx   eax, word ptr [esi+20h]
0x530DE5: cmp     ax, 0FFFFh
0x530DE9: jz      short loc_530E00
0x530DEB: push    esi
0x530DEC: call    TESTopic_static_GetTopicInfoParent?
0x530DF1: add     esp, 4
0x530DF4: test    eax, eax
0x530DF6: jz      short loc_530E00
0x530DF8: push    eax
0x530DF9: mov     ecx, esi
0x530DFB: call    sub_530590
0x530E00: lea     ecx, [esi+18h]
0x530E03: call    sub_56A750
0x530E08: mov     ecx, esi
0x530E0A: call    sub_530620
0x530E0F: mov     ecx, esi
0x530E11: call    sub_530690
0x530E16: lea     ecx, [esp+68h+var_5C]
0x530E1A: call    Script_Constructor
0x530E1F: lea     ecx, [esp+68h+var_5C]
0x530E23: push    ecx
0x530E24: mov     ecx, offset stru_B36530
0x530E29: mov     [esp+6Ch+var_4], 0
0x530E31: call    sub_4FC7A0
0x530E36: lea     ecx, [esp+68h+var_5C]
0x530E3A: mov     [esp+68h+var_4], 0FFFFFFFFh
0x530E42: call    Script_StaticDestructor
0x530E47: mov     edi, [esi+30h]
0x530E4A: test    edi, edi
0x530E4C: mov     dword ptr ds:0B36528h, 0
0x530E56: mov     dword ptr ds:0B3652Ch, 0
0x530E60: jz      short loc_530E72
0x530E62: mov     ecx, edi
0x530E64: call    sub_530500
0x530E69: push    edi
0x530E6A: call    FormHeapFree
0x530E6F: add     esp, 4
0x530E72: mov     ecx, esi
0x530E74: call    j_TESForm_ClearComponentReferences
0x530E79: mov     ecx, [esp+68h+var_C]
0x530E7D: mov     large fs:0, ecx
0x530E84: pop     ecx
0x530E85: pop     edi
0x530E86: pop     esi
0x530E87: add     esp, 5Ch
0x530E8A: retn
