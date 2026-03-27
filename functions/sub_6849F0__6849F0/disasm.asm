0x6849F0: sub     esp, 8
0x6849F3: push    ebx
0x6849F4: push    esi
0x6849F5: mov     esi, [esp+10h+arg_4]
0x6849F9: xor     ebx, ebx
0x6849FB: cmp     esi, ebx
0x6849FD: mov     [esp+10h+var_4], ecx
0x684A01: mov     [esp+10h+var_5], 0
0x684A06: jz      loc_684B21
0x684A0C: fld     dword ptr [ecx+3Ch]
0x684A0F: lea     eax, [ecx+3Ch]
0x684A12: fcomp   qword ptr ds:0A3A5B0h
0x684A18: fnstsw  ax
0x684A1A: test    ah, 44h
0x684A1D: jnp     loc_684B21
0x684A23: push    ebp
0x684A24: push    edi
0x684A25: mov     ecx, esi; this
0x684A27: mov     [esp+18h+arg_4], ebx
0x684A2B: call    TESObjectREFR_GetParentCell
0x684A30: mov     ecx, esi; this
0x684A32: mov     ebp, eax
0x684A34: call    TESObjectREFR_GetWorldSpace
0x684A39: test    ebp, ebp
0x684A3B: mov     edi, eax
0x684A3D: jz      short loc_684A6C
0x684A3F: mov     ecx, ebp; this
0x684A41: call    TESObjectCELL_IsInterior
0x684A46: test    al, al
0x684A48: jz      short loc_684A6C
0x684A4A: mov     ecx, esi; this
0x684A4C: call    TESObjectREFR_GetParentCell
0x684A51: mov     ecx, eax
0x684A53: call    sub_4AF170
0x684A58: mov     ecx, esi; this
0x684A5A: mov     ebx, eax
0x684A5C: call    TESObjectREFR_GetParentCell
0x684A61: mov     ecx, eax
0x684A63: call    sub_4AF170
0x684A68: mov     esi, eax
0x684A6A: jmp     short loc_684AAF
0x684A6C: test    edi, edi
0x684A6E: jz      loc_684B1F
0x684A74: mov     eax, [esp+18h+var_4]
0x684A78: add     eax, 3Ch ; '<'
0x684A7B: push    eax; float *
0x684A7C: mov     ecx, edi; this
0x684A7E: call    TESWorldSpace__GetCellAtPos
0x684A83: test    eax, eax
0x684A85: jz      short loc_684A90
0x684A87: mov     ecx, eax
0x684A89: call    sub_4AF170
0x684A8E: mov     ebx, eax
0x684A90: mov     eax, [esp+18h+arg_0]
0x684A94: push    eax; float *
0x684A95: mov     ecx, edi; this
0x684A97: call    TESWorldSpace__GetCellAtPos
0x684A9C: test    eax, eax
0x684A9E: jz      short loc_684AAB
0x684AA0: mov     ecx, eax
0x684AA2: call    sub_4AF170
0x684AA7: mov     [esp+18h+arg_4], eax
0x684AAB: mov     esi, [esp+18h+arg_4]
0x684AAF: test    ebx, ebx
0x684AB1: jz      short loc_684B1F
0x684AB3: test    esi, esi
0x684AB5: jz      short loc_684B1F
0x684AB7: mov     eax, [esp+18h+var_4]
0x684ABB: add     eax, 3Ch ; '<'
0x684ABE: push    eax
0x684ABF: mov     ecx, ebx
0x684AC1: call    sub_4E6D60
0x684AC6: mov     edi, eax
0x684AC8: test    edi, edi
0x684ACA: jz      short loc_684B1F
0x684ACC: mov     ecx, [esp+18h+arg_0]
0x684AD0: push    ecx
0x684AD1: mov     ecx, esi
0x684AD3: call    sub_4E6D60
0x684AD8: mov     esi, eax
0x684ADA: test    esi, esi
0x684ADC: jz      short loc_684B1F
0x684ADE: push    edi
0x684ADF: mov     ecx, esi
0x684AE1: call    sub_4E7DE0
0x684AE6: mov     ecx, eax
0x684AE8: call    sub_446C30
0x684AED: test    al, al
0x684AEF: jz      short loc_684B1F
0x684AF1: mov     ebx, [esp+18h+var_4]
0x684AF5: push    esi
0x684AF6: push    edi
0x684AF7: mov     ecx, ebx
0x684AF9: call    sub_683C70
0x684AFE: test    al, al
0x684B00: jnz     short loc_684B1F
0x684B02: push    8; Size
0x684B04: call    FormHeapAlloc
0x684B09: add     esp, 4
0x684B0C: push    eax
0x684B0D: lea     ecx, [ebx+34h]
0x684B10: mov     [eax], edi
0x684B12: mov     [eax+4], esi
0x684B15: call    BSSimpleList_PushFront
0x684B1A: mov     [esp+18h+var_5], 1
0x684B1F: pop     edi
0x684B20: pop     ebp
0x684B21: mov     al, [esp+10h+var_5]
0x684B25: pop     esi
0x684B26: pop     ebx
0x684B27: add     esp, 8
0x684B2A: retn    8
