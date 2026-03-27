0x463D70: sub     esp, 30h
0x463D73: push    ebx
0x463D74: push    ebp
0x463D75: mov     ebp, [esp+38h+arg_0]
0x463D79: lea     eax, [esp+38h+var_30]
0x463D7D: mov     ebx, ecx
0x463D7F: mov     ecx, [ebx]
0x463D81: push    eax
0x463D82: push    ebp
0x463D83: mov     [esp+40h+var_30], 0
0x463D8B: call    NiTMap_GetAt
0x463D90: mov     eax, [esp+38h+var_30]
0x463D94: test    eax, eax
0x463D96: jz      loc_463EB2
0x463D9C: mov     ecx, [eax]
0x463D9E: test    cl, 2
0x463DA1: push    esi
0x463DA2: push    edi; ArgList
0x463DA3: jz      loc_463E3E
0x463DA9: mov     esi, [eax+4]
0x463DAC: test    esi, esi
0x463DAE: jz      loc_463EB0
0x463DB4: add     esi, 4
0x463DB7: mov     ecx, 9
0x463DBC: lea     edi, [esp+40h+var_2C]
0x463DC0: rep movsd
0x463DC2: mov     ecx, [esp+40h+var_28]
0x463DC6: push    ecx
0x463DC7: mov     ecx, ebx
0x463DC9: call    sub_459950
0x463DCE: mov     edx, [esp+40h+var_24]
0x463DD2: push    edx
0x463DD3: mov     ecx, ebx
0x463DD5: mov     [esp+44h+var_28], eax
0x463DD9: call    sub_459950
0x463DDE: mov     [esp+40h+var_24], eax
0x463DE2: lea     eax, [esp+40h+var_2C]
0x463DE6: push    eax
0x463DE7: push    ebp
0x463DE8: mov     ecx, ebx
0x463DEA: call    sub_4603E0
0x463DEF: mov     esi, eax
0x463DF1: test    esi, esi
0x463DF3: jz      loc_463EB0
0x463DF9: push    0; int
0x463DFB: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x463E00: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x463E05: push    0; int
0x463E07: push    esi; void *
0x463E08: call    OblivionDynamicCast
0x463E0D: add     esp, 14h
0x463E10: test    eax, eax
0x463E12: jz      short loc_463E2C
0x463E14: mov     edx, [eax]
0x463E16: pop     edi
0x463E17: pop     esi
0x463E18: pop     ebp
0x463E19: pop     ebx
0x463E1A: add     esp, 30h
0x463E1D: mov     [esp+arg_0], 1
0x463E25: mov     ecx, eax
0x463E27: mov     eax, [edx+10h]
0x463E2A: jmp     eax
0x463E2C: push    esi
0x463E2D: mov     ecx, ebx
0x463E2F: call    TESSaveLoadGame_LoadForm
0x463E34: pop     edi
0x463E35: pop     esi
0x463E36: pop     ebp
0x463E37: pop     ebx
0x463E38: add     esp, 30h
0x463E3B: retn    4
0x463E3E: test    ecx, ecx
0x463E40: jns     short loc_463EA3
0x463E42: mov     esi, [eax+4]
0x463E45: test    esi, esi
0x463E47: jz      short loc_463EB0
0x463E49: add     esi, 4
0x463E4C: mov     ecx, 0Bh
0x463E51: lea     edi, [esp+40h+var_2C]
0x463E55: rep movsd
0x463E57: mov     ecx, [esp+40h+var_2C]
0x463E5B: push    ecx
0x463E5C: mov     ecx, ebx
0x463E5E: call    sub_459950
0x463E63: mov     edx, [esp+40h+var_1C]
0x463E67: push    edx
0x463E68: mov     ecx, ebx
0x463E6A: mov     [esp+44h+var_2C], eax
0x463E6E: call    sub_459950
0x463E73: mov     [esp+40h+var_1C], eax
0x463E77: lea     eax, [esp+40h+var_2C]
0x463E7B: push    eax
0x463E7C: push    ebp
0x463E7D: mov     ecx, ebx
0x463E7F: call    sub_45C4F0
0x463E84: test    eax, eax
0x463E86: jz      short loc_463E90
0x463E88: push    eax
0x463E89: mov     ecx, ebx
0x463E8B: call    TESSaveLoadGame_LoadForm
0x463E90: push    ebp
0x463E91: lea     ecx, [ebx+20h]
0x463E94: call    BSSimpleList_Remove
0x463E99: pop     edi
0x463E9A: pop     esi
0x463E9B: pop     ebp
0x463E9C: pop     ebx
0x463E9D: add     esp, 30h
0x463EA0: retn    4
0x463EA3: push    offset aReferenceInCel; "Reference in cell map has neither requi"...
0x463EA8: call    PrintError
0x463EAD: add     esp, 4
0x463EB0: pop     edi
0x463EB1: pop     esi
0x463EB2: pop     ebp
0x463EB3: pop     ebx
0x463EB4: add     esp, 30h
0x463EB7: retn    4
