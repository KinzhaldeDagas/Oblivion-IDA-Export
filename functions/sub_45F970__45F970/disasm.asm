0x45F970: push    ebp
0x45F971: mov     ebp, esp
0x45F973: and     esp, 0FFFFFFC0h
0x45F976: sub     esp, 34h
0x45F979: push    ebx
0x45F97A: push    esi
0x45F97B: mov     esi, ds:0B33A98h
0x45F981: xor     eax, eax
0x45F983: add     esi, 74h ; 't'
0x45F986: cmp     esi, eax
0x45F988: push    edi; ArgList
0x45F989: mov     edi, ecx
0x45F98B: mov     [esp+40h+var_8], eax
0x45F98F: mov     [esp+40h+var_4], eax
0x45F993: jz      short loc_45F9D6
0x45F995: mov     ebx, [esi]
0x45F997: test    ebx, ebx
0x45F999: jz      short loc_45F9CF
0x45F99B: test    eax, eax
0x45F99D: jz      short loc_45F9C9
0x45F99F: push    8; Size
0x45F9A1: call    FormHeapAlloc
0x45F9A6: add     esp, 4
0x45F9A9: test    eax, eax
0x45F9AB: jz      short loc_45F9BC
0x45F9AD: mov     ecx, [esp+40h+var_8]
0x45F9B1: mov     [eax], ecx
0x45F9B3: mov     dword ptr [eax+4], 0
0x45F9BA: jmp     short loc_45F9BE
0x45F9BC: xor     eax, eax
0x45F9BE: mov     edx, [esp+40h+var_4]
0x45F9C2: mov     [eax+4], edx
0x45F9C5: mov     [esp+40h+var_4], eax
0x45F9C9: mov     eax, ebx
0x45F9CB: mov     [esp+40h+var_8], eax
0x45F9CF: mov     esi, [esi+4]
0x45F9D2: test    esi, esi
0x45F9D4: jnz     short loc_45F995
0x45F9D6: mov     esi, [ebp+arg_0]
0x45F9D9: mov     edx, [esi+4]
0x45F9DC: push    1
0x45F9DE: lea     eax, [esp+44h+var_10]
0x45F9E2: push    eax
0x45F9E3: push    2
0x45F9E5: lea     ecx, [esp+4Ch+a1]
0x45F9E9: push    ecx
0x45F9EA: push    esi
0x45F9EB: mov     [esp+54h+var_10], 1
0x45F9F3: call    edx
0x45F9F5: mov     eax, [esp+54h+a1]
0x45F9F9: lea     ecx, ds:0[eax*8]
0x45FA00: movzx   eax, cx
0x45FA03: add     esp, 14h
0x45FA06: movzx   eax, ax
0x45FA09: push    1
0x45FA0B: push    eax
0x45FA0C: mov     ecx, offset FormHeap
0x45FA11: mov     [esp+48h+var_10], eax
0x45FA15: call    j_MemoryHeap_Alloc
0x45FA1A: test    eax, eax
0x45FA1C: mov     [edi+14h], eax
0x45FA1F: jnz     short loc_45FA2E
0x45FA21: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x45FA26: call    sub_404EC0
0x45FA2B: add     esp, 4
0x45FA2E: mov     eax, [esp+40h+var_10]
0x45FA32: mov     ebx, [edi+14h]
0x45FA35: mov     ecx, [esi+4]
0x45FA38: push    1
0x45FA3A: lea     edx, [esp+44h+var_18]
0x45FA3E: push    edx
0x45FA3F: push    eax
0x45FA40: push    ebx
0x45FA41: push    esi
0x45FA42: mov     [esp+54h+var_18], 1
0x45FA4A: call    ecx
0x45FA4C: xor     esi, esi
0x45FA4E: add     esp, 14h
0x45FA51: cmp     word ptr [esp+40h+a1], si
0x45FA56: jbe     loc_45FAF8
0x45FA5C: lea     esp, [esp+0]
0x45FA60: push    4; Size
0x45FA62: lea     edx, [esp+44h+Dst]
0x45FA66: push    edx; Dst
0x45FA67: mov     ecx, edi
0x45FA69: call    SaveLoad_LoadFormID
0x45FA6E: mov     eax, [edi+14h]
0x45FA71: mov     ecx, [eax]
0x45FA73: mov     [esp+48h+var_20], ecx
0x45FA77: fld     [esp+48h+var_20]
0x45FA7B: add     eax, 4
0x45FA7E: sub     esp, 8
0x45FA81: fstp    [esp+50h+var_50]; X
0x45FA84: mov     [edi+14h], eax
0x45FA87: call    __finite
0x45FA8C: add     esp, 8
0x45FA8F: test    eax, eax
0x45FA91: jz      short loc_45FAA9
0x45FA93: fld     [esp+48h+var_20]
0x45FA97: sub     esp, 8
0x45FA9A: fstp    [esp+50h+var_50]; X
0x45FA9D: call    __isnan
0x45FAA2: add     esp, 8
0x45FAA5: test    eax, eax
0x45FAA7: jz      short loc_45FAAF
0x45FAA9: fldz
0x45FAAB: fstp    [esp+48h+var_20]
0x45FAAF: mov     edx, [esp+48h+a1]
0x45FAB3: push    0; int
0x45FAB5: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x45FABA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45FABF: push    0; int
0x45FAC1: push    edx; a1
0x45FAC2: call    TESForm_LookupByFormID
0x45FAC7: add     esp, 4
0x45FACA: push    eax; void *
0x45FACB: call    OblivionDynamicCast
0x45FAD0: add     esp, 14h
0x45FAD3: test    eax, eax
0x45FAD5: jz      short loc_45FAE8
0x45FAD7: fld     [esp+48h+var_20]
0x45FADB: push    eax
0x45FADC: lea     ecx, [esp+4Ch+var_10]
0x45FAE0: fstp    dword ptr [eax+24h]
0x45FAE3: call    BSSimpleList_Remove
0x45FAE8: movzx   eax, word ptr [esp+4Ch+var_20]
0x45FAED: add     esi, 1
0x45FAF0: cmp     esi, eax
0x45FAF2: jl      loc_45FA60
0x45FAF8: push    ebx; void *
0x45FAF9: mov     ecx, offset FormHeap
0x45FAFE: call    MemoryHeap_Free_checked
0x45FB03: mov     dword ptr [edi+14h], 0
0x45FB0A: lea     esi, [esp+4Ch+a1]
0x45FB0E: mov     edi, edi
0x45FB10: mov     eax, [esi]
0x45FB12: test    eax, eax
0x45FB14: jz      short loc_45FB22
0x45FB16: push    0
0x45FB18: push    1
0x45FB1A: push    eax
0x45FB1B: mov     ecx, edi
0x45FB1D: call    TESSaveLoadGame_ResetObject
0x45FB22: mov     esi, [esi+4]
0x45FB25: test    esi, esi
0x45FB27: jnz     short loc_45FB10
0x45FB29: mov     edi, [edi+40h]
0x45FB2C: test    edi, edi
0x45FB2E: jz      short loc_45FB41
0x45FB30: mov     ecx, [esp+4Ch+var_1C]
0x45FB34: push    offset aGlobalVariable; "Global Variables"
0x45FB39: push    ecx
0x45FB3A: mov     ecx, edi
0x45FB3C: call    sub_4531B0
0x45FB41: pop     edi
0x45FB42: pop     esi
0x45FB43: pop     ebx
0x45FB44: mov     esp, ebp
0x45FB46: pop     ebp
0x45FB47: retn    4
