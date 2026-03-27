0x72ED50: push    0FFFFFFFFh
0x72ED52: push    offset SEH_72ED50
0x72ED57: mov     eax, large fs:0
0x72ED5D: push    eax
0x72ED5E: sub     esp, 28h
0x72ED61: push    ebx
0x72ED62: push    ebp
0x72ED63: push    esi
0x72ED64: push    edi
0x72ED65: mov     eax, ds:0B30AACh
0x72ED6A: xor     eax, esp
0x72ED6C: push    eax
0x72ED6D: lea     eax, [esp+48h+var_C]
0x72ED71: mov     large fs:0, eax
0x72ED77: mov     esi, ecx
0x72ED79: mov     [esp+48h+var_30], esi
0x72ED7D: xor     eax, eax
0x72ED7F: mov     [esp+48h+var_18], eax
0x72ED83: mov     [esp+48h+var_14], eax
0x72ED87: mov     [esp+48h+var_10], eax
0x72ED8B: mov     ebp, [esp+48h+arg_0]
0x72ED8F: mov     edi, [esp+48h+arg_4]
0x72ED93: mov     [esp+48h+var_4], eax
0x72ED97: movzx   eax, word ptr [ebp+8]
0x72ED9B: movzx   eax, ax
0x72ED9E: push    edi
0x72ED9F: push    eax
0x72EDA0: call    sub_72E200
0x72EDA5: mov     ebx, eax
0x72EDA7: test    ebx, ebx
0x72EDA9: jnz     short loc_72EDBB
0x72EDAB: push    eax
0x72EDAC: call    FormHeapFree
0x72EDB1: add     esp, 4
0x72EDB4: xor     al, al
0x72EDB6: jmp     loc_72EF56
0x72EDBB: mov     eax, [esp+48h+arg_C]
0x72EDBF: mov     ecx, [esp+48h+arg_8]
0x72EDC3: push    ebx
0x72EDC4: push    eax
0x72EDC5: push    ecx
0x72EDC6: push    ebp
0x72EDC7: mov     ecx, esi
0x72EDC9: call    ??0?$NiTPointerMap@IM@@QAE@XZ; NiTPointerMap<uint,float>::NiTPointerMap<uint,float>(void)
0x72EDCE: test    al, al
0x72EDD0: mov     byte ptr [esp+48h+arg_0], al
0x72EDD4: jz      loc_72EF2B
0x72EDDA: mov     ecx, [esp+48h+arg_8]
0x72EDDE: lea     edx, [esp+48h+var_2C]
0x72EDE2: push    edx
0x72EDE3: lea     eax, [esp+4Ch+var_18]
0x72EDE7: push    eax
0x72EDE8: push    ebx
0x72EDE9: push    ecx
0x72EDEA: push    edi
0x72EDEB: push    ebp
0x72EDEC: mov     ecx, esi
0x72EDEE: call    sub_72EBA0
0x72EDF3: mov     esi, [esi+8]
0x72EDF6: xor     ecx, ecx
0x72EDF8: mov     eax, esi
0x72EDFA: mov     edx, 2Ch ; ','
0x72EDFF: mul     edx
0x72EE01: seto    cl
0x72EE04: neg     ecx
0x72EE06: or      ecx, eax
0x72EE08: xor     eax, eax
0x72EE0A: add     ecx, 4
0x72EE0D: setb    al
0x72EE10: neg     eax
0x72EE12: or      eax, ecx
0x72EE14: push    eax; Size
0x72EE15: call    FormHeapAlloc
0x72EE1A: add     esp, 4
0x72EE1D: mov     [esp+48h+var_28], eax
0x72EE21: xor     edi, edi
0x72EE23: cmp     eax, edi
0x72EE25: mov     byte ptr [esp+48h+var_4], 1
0x72EE2A: jz      short loc_72EE4C
0x72EE2C: push    offset sub_72C450; a5
0x72EE31: push    offset sub_72C420; a4
0x72EE36: push    esi; size
0x72EE37: lea     edi, [eax+4]
0x72EE3A: push    2Ch ; ','; a2
0x72EE3C: push    edi; a1
0x72EE3D: mov     [eax], esi
0x72EE3F: call    ArrayConstructor
0x72EE44: mov     [esp+48h+var_34], edi
0x72EE48: xor     edi, edi
0x72EE4A: jmp     short loc_72EE50
0x72EE4C: mov     [esp+48h+var_34], edi
0x72EE50: mov     cl, byte ptr [esp+48h+arg_C]
0x72EE54: cmp     byte ptr [esp+48h+arg_8], cl
0x72EE58: mov     [esp+48h+var_24], edi
0x72EE5C: setnz   dl
0x72EE5F: mov     byte ptr [esp+48h+var_28], dl
0x72EE63: mov     [esp+48h+var_20], edi
0x72EE67: mov     [esp+48h+var_1C], edi
0x72EE6B: mov     eax, [esp+48h+var_30]
0x72EE6F: cmp     dword ptr [eax+8], 0
0x72EE73: mov     byte ptr [esp+48h+var_4], 2
0x72EE78: jbe     loc_72EF04
0x72EE7E: mov     ecx, [esp+48h+var_34]
0x72EE82: mov     [esp+48h+arg_8], ecx
0x72EE86: jmp     short loc_72EE90
0x72EE88: align 10h
0x72EE90: movzx   eax, word ptr [ebp+40h]
0x72EE94: movzx   edx, ax
0x72EE97: mov     eax, [esp+48h+var_2C]
0x72EE9B: push    edx
0x72EE9C: push    eax
0x72EE9D: push    edi
0x72EE9E: lea     ecx, [esp+54h+var_24]
0x72EEA2: call    sub_72D420
0x72EEA7: mov     edx, [esp+48h+arg_4]
0x72EEAB: mov     eax, [edx+40h]
0x72EEAE: mov     ecx, [esp+48h+var_18]
0x72EEB2: mov     esi, [ecx+edi*4]
0x72EEB5: mov     ecx, [esp+48h+arg_10]
0x72EEB9: mov     edx, [esp+48h+var_28]
0x72EEBD: push    eax
0x72EEBE: mov     eax, [esp+4Ch+arg_C]
0x72EEC2: push    eax
0x72EEC3: push    ecx
0x72EEC4: mov     ecx, [esp+54h+arg_8]
0x72EEC8: push    edx
0x72EEC9: push    ebx
0x72EECA: push    ebp
0x72EECB: push    esi
0x72EECC: lea     eax, [esp+64h+var_24]
0x72EED0: push    eax
0x72EED1: call    sub_72D480
0x72EED6: test    esi, esi
0x72EED8: mov     [esp+48h+var_1C], 0
0x72EEE0: jz      short loc_72EEF3
0x72EEE2: mov     eax, [esi]
0x72EEE4: push    eax
0x72EEE5: call    FormHeapFree
0x72EEEA: push    esi
0x72EEEB: call    FormHeapFree
0x72EEF0: add     esp, 8
0x72EEF3: mov     ecx, [esp+48h+var_30]
0x72EEF7: add     [esp+48h+arg_8], 2Ch ; ','
0x72EEFC: add     edi, 1
0x72EEFF: cmp     edi, [ecx+8]
0x72EF02: jb      short loc_72EE90
0x72EF04: mov     edx, [esp+48h+var_2C]
0x72EF08: push    edx
0x72EF09: call    FormHeapFree
0x72EF0E: mov     edx, [esp+4Ch+var_24]
0x72EF12: mov     eax, [esp+4Ch+var_34]
0x72EF16: mov     ecx, [esp+4Ch+var_30]
0x72EF1A: push    edx
0x72EF1B: mov     [ecx+0Ch], eax
0x72EF1E: mov     byte ptr [esp+50h+var_4], 0
0x72EF23: call    FormHeapFree
0x72EF28: add     esp, 8
0x72EF2B: mov     eax, [ebx-4]
0x72EF2E: push    offset sub_6C4090; void (__thiscall *)(void *)
0x72EF33: lea     esi, [ebx-4]
0x72EF36: push    eax; int
0x72EF37: push    0Ch; unsigned int
0x72EF39: push    ebx; void *
0x72EF3A: call    $LN21
0x72EF3F: push    esi
0x72EF40: call    FormHeapFree
0x72EF45: mov     ecx, [esp+4Ch+var_18]
0x72EF49: push    ecx
0x72EF4A: call    FormHeapFree
0x72EF4F: mov     al, byte ptr [esp+50h+arg_0]
0x72EF53: add     esp, 8
0x72EF56: mov     ecx, [esp+48h+var_C]
0x72EF5A: mov     large fs:0, ecx
0x72EF61: pop     ecx
0x72EF62: pop     edi
0x72EF63: pop     esi
0x72EF64: pop     ebp
0x72EF65: pop     ebx
0x72EF66: add     esp, 34h
0x72EF69: retn    14h
