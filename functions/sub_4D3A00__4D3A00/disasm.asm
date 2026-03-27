0x4D3A00: sub     esp, 10h
0x4D3A03: cmp     [esp+10h+arg_0], 0
0x4D3A08: push    ebp
0x4D3A09: mov     ebp, ecx
0x4D3A0B: jz      loc_4D3B05
0x4D3A11: test    dword ptr [ebp+8], 400h
0x4D3A18: jz      loc_4D3B05
0x4D3A1E: push    ebp; a2
0x4D3A1F: mov     ecx, offset stru_B35C80; this
0x4D3A24: call    sub_496EA0
0x4D3A29: lea     eax, [ebp+48h]
0x4D3A2C: test    eax, eax
0x4D3A2E: mov     [esp+14h+var_10], eax
0x4D3A32: jz      loc_4D3AFA
0x4D3A38: push    ebx
0x4D3A39: push    esi
0x4D3A3A: push    edi
0x4D3A3B: jmp     short loc_4D3A40
0x4D3A3D: align 10h
0x4D3A40: mov     eax, [esp+20h+var_10]
0x4D3A44: mov     esi, [eax]
0x4D3A46: test    esi, esi
0x4D3A48: jz      loc_4D3AE4
0x4D3A4E: mov     edx, [esi]
0x4D3A50: mov     eax, [edx+174h]
0x4D3A56: mov     ecx, esi
0x4D3A58: call    eax
0x4D3A5A: fld     dword ptr [eax]
0x4D3A5C: fstp    [esp+20h+var_4]
0x4D3A60: fld     [esp+20h+var_4]
0x4D3A64: fistp   [esp+20h+var_C]
0x4D3A68: mov     edx, [esi]
0x4D3A6A: mov     edi, [esp+20h+var_C]
0x4D3A6E: mov     eax, [edx+174h]
0x4D3A74: mov     ecx, esi
0x4D3A76: sar     edi, 0Ch
0x4D3A79: call    eax
0x4D3A7B: fld     dword ptr [eax+4]
0x4D3A7E: fstp    [esp+20h+var_4]
0x4D3A82: fld     [esp+20h+var_4]
0x4D3A86: fistp   [esp+20h+var_8]
0x4D3A8A: mov     ebx, [esp+20h+var_8]
0x4D3A8E: mov     ecx, [esp+20h+arg_0]; this
0x4D3A92: sar     ebx, 0Ch
0x4D3A95: push    ebx; signed int
0x4D3A96: push    edi; signed int
0x4D3A97: call    TESWorldSpace__GetCellAtCellCoord
0x4D3A9C: test    eax, eax
0x4D3A9E: jz      short loc_4D3AAA
0x4D3AA0: push    esi; Concurrency::details::SchedulerBase *
0x4D3AA1: mov     ecx, eax
0x4D3AA3: call    sub_4D35D0
0x4D3AA8: jmp     short loc_4D3AE4
0x4D3AAA: mov     eax, [esi+0Ch]
0x4D3AAD: mov     ecx, [ebp+0Ch]
0x4D3AB0: mov     edx, [esi]
0x4D3AB2: mov     [esp+20h+var_4], ecx
0x4D3AB6: push    eax
0x4D3AB7: mov     eax, [edx+0D4h]
0x4D3ABD: mov     ecx, esi
0x4D3ABF: call    eax
0x4D3AC1: mov     ecx, [esp+24h+var_4]
0x4D3AC5: mov     edx, [ebp+0]
0x4D3AC8: push    eax
0x4D3AC9: mov     eax, [edx+0D4h]
0x4D3ACF: push    ecx
0x4D3AD0: mov     ecx, ebp
0x4D3AD2: call    eax
0x4D3AD4: push    eax
0x4D3AD5: push    ebx
0x4D3AD6: push    edi; ArgList
0x4D3AD7: push    offset aCouldNotFindCe; "Could not find cell (%i, %i) in world '"...
0x4D3ADC: call    PrintError
0x4D3AE1: add     esp, 1Ch
0x4D3AE4: mov     ecx, [esp+20h+var_10]
0x4D3AE8: mov     eax, [ecx+4]
0x4D3AEB: test    eax, eax
0x4D3AED: mov     [esp+20h+var_10], eax
0x4D3AF1: jnz     loc_4D3A40
0x4D3AF7: pop     edi
0x4D3AF8: pop     esi
0x4D3AF9: pop     ebx
0x4D3AFA: push    ebp; a2
0x4D3AFB: mov     ecx, offset stru_B35C80; this
0x4D3B00: call    sub_496F50
0x4D3B05: pop     ebp
0x4D3B06: add     esp, 10h
0x4D3B09: retn    4
