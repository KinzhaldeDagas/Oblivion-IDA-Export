0x515AF0: push    ebp
0x515AF1: mov     ebp, esp
0x515AF3: and     esp, 0FFFFFFF8h
0x515AF6: push    0FFFFFFFFh
0x515AF8: push    offset SEH_59E680
0x515AFD: mov     eax, large fs:0
0x515B03: push    eax
0x515B04: sub     esp, 24h
0x515B07: push    ebx
0x515B08: push    ebp
0x515B09: push    esi
0x515B0A: push    edi
0x515B0B: mov     eax, ds:0B30AACh
0x515B10: xor     eax, esp
0x515B12: push    eax
0x515B13: lea     eax, [esp+44h+var_C]
0x515B17: mov     large fs:0, eax
0x515B1D: mov     eax, ds:0B333C4h
0x515B22: mov     ecx, [eax+5F4h]
0x515B28: xor     edi, edi
0x515B2A: cmp     ecx, edi
0x515B2C: jz      loc_515CF0
0x515B32: mov     edx, [ecx]
0x515B34: mov     eax, [edx+0D4h]
0x515B3A: call    eax
0x515B3C: push    eax
0x515B3D: push    offset aActiveQuestS; "Active quest: %s"
0x515B42: call    Interface_ConsolePrint
0x515B47: mov     ecx, ds:0B333C4h
0x515B4D: add     esp, 8
0x515B50: call    sub_65D830
0x515B55: mov     esi, eax
0x515B57: cmp     esi, edi
0x515B59: jnz     short loc_515B6A
0x515B5B: push    offset aNoCurrentTarge; "No current targets"
0x515B60: call    Interface_ConsolePrint
0x515B65: add     esp, 4
0x515B68: jmp     short loc_515B8C
0x515B6A: xor     ecx, ecx
0x515B6C: lea     esp, [esp+0]
0x515B70: cmp     [eax], edi
0x515B72: jz      short loc_515B77
0x515B74: add     ecx, 1
0x515B77: mov     eax, [eax+4]
0x515B7A: cmp     eax, edi
0x515B7C: jnz     short loc_515B70
0x515B7E: push    ecx
0x515B7F: push    offset aDCurrentTarget; "%d current targets"
0x515B84: call    Interface_ConsolePrint
0x515B89: add     esp, 8
0x515B8C: cmp     esi, edi
0x515B8E: mov     [esp+44h+var_2C], 1
0x515B96: jz      loc_515CFD
0x515B9C: jmp     short loc_515BA4
0x515B9E: align 10h
0x515BA0: mov     esi, [esp+44h+var_28]
0x515BA4: mov     ebx, [esi]
0x515BA6: cmp     ebx, edi
0x515BA8: jz      loc_515CFD
0x515BAE: mov     ecx, [esi+4]
0x515BB1: mov     [esp+44h+var_28], ecx
0x515BB5: mov     [esp+44h+var_18], edi
0x515BB9: mov     [esp+44h+var_14], di
0x515BBE: mov     [esp+44h+var_12], di
0x515BC3: mov     [esp+44h+var_4], edi
0x515BC7: mov     [esp+44h+var_20.m_data], edi
0x515BCB: mov     [esp+44h+var_20.m_dataLen], di
0x515BD0: mov     [esp+44h+var_20.m_bufLen], di
0x515BD5: push    edi; a3
0x515BD6: push    offset aSameCellExteri; "Same cell/exterior"
0x515BDB: lea     ecx, [esp+4Ch+var_20]; this
0x515BDF: mov     byte ptr [esp+4Ch+var_4], 1
0x515BE4: call    BSStringT_Set
0x515BE9: push    edi
0x515BEA: mov     ecx, ebx
0x515BEC: call    sub_52B440
0x515BF1: push    1
0x515BF3: mov     ecx, ebx
0x515BF5: mov     esi, eax
0x515BF7: call    sub_52B440
0x515BFC: mov     ebp, eax
0x515BFE: cmp     ebp, edi
0x515C00: jz      short loc_515C66
0x515C02: cmp     esi, edi
0x515C04: jz      short loc_515C66
0x515C06: cmp     ebp, esi
0x515C08: mov     eax, [esi+0Ch]
0x515C0B: mov     ecx, esi
0x515C0D: push    eax
0x515C0E: jnz     short loc_515C2F
0x515C10: mov     edx, [esi]
0x515C12: mov     eax, [edx+0D4h]
0x515C18: call    eax
0x515C1A: push    eax; ArgList
0x515C1B: lea     ecx, [esp+4Ch+var_18]
0x515C1F: push    offset aS08x; "%s (%08X)"
0x515C24: push    ecx; int
0x515C25: call    BSStringT_Static_Format
0x515C2A: add     esp, 10h
0x515C2D: jmp     short loc_515C66
0x515C2F: mov     edx, [ebp+0Ch]
0x515C32: mov     eax, [esi]
0x515C34: mov     [esp+48h+var_24], edx
0x515C38: mov     edx, [eax+0D4h]
0x515C3E: call    edx
0x515C40: mov     edx, [ebp+0]
0x515C43: push    eax
0x515C44: mov     eax, [esp+4Ch+var_24]
0x515C48: push    eax
0x515C49: mov     eax, [edx+0D4h]
0x515C4F: mov     ecx, ebp
0x515C51: call    eax
0x515C53: push    eax; ArgList
0x515C54: lea     ecx, [esp+54h+var_18]
0x515C58: push    offset aS08xCarryingS0; "%s (%08X) (carrying %s (%08X))"
0x515C5D: push    ecx; int
0x515C5E: call    BSStringT_Static_Format
0x515C63: add     esp, 18h
0x515C66: cmp     [ebx+10h], edi
0x515C69: jz      short loc_515C91
0x515C6B: mov     ebx, [ebx+10h]
0x515C6E: mov     eax, [ebx+0Ch]
0x515C71: mov     edx, [ebx]
0x515C73: push    eax
0x515C74: mov     eax, [edx+0D4h]
0x515C7A: mov     ecx, ebx
0x515C7C: call    eax
0x515C7E: push    eax; ArgList
0x515C7F: lea     ecx, [esp+4Ch+var_20]
0x515C83: push    offset aS08x; "%s (%08X)"
0x515C88: push    ecx; int
0x515C89: call    BSStringT_Static_Format
0x515C8E: add     esp, 10h
0x515C91: mov     esi, [esp+44h+var_20.m_data]
0x515C95: mov     ebp, [esp+44h+var_18]
0x515C99: mov     ebx, [esp+44h+var_2C]
0x515C9D: push    esi
0x515C9E: push    ebp
0x515C9F: push    ebx
0x515CA0: push    offset aTargetDReferen; "Target %d:  Reference: %s, load door: %"...
0x515CA5: call    Interface_ConsolePrint
0x515CAA: add     ebx, 1
0x515CAD: push    esi
0x515CAE: mov     [esp+58h+var_2C], ebx
0x515CB2: call    FormHeapFree
0x515CB7: push    ebp
0x515CB8: mov     [esp+5Ch+var_20.m_data], edi
0x515CBC: mov     [esp+5Ch+var_20.m_bufLen], di
0x515CC1: mov     [esp+5Ch+var_20.m_dataLen], di
0x515CC6: mov     [esp+5Ch+var_4], 0FFFFFFFFh
0x515CCE: call    FormHeapFree
0x515CD3: add     esp, 18h
0x515CD6: cmp     [esp+44h+var_28], edi
0x515CDA: mov     [esp+44h+var_18], edi
0x515CDE: mov     [esp+44h+var_12], di
0x515CE3: mov     [esp+44h+var_14], di
0x515CE8: jnz     loc_515BA0
0x515CEE: jmp     short loc_515CFD
0x515CF0: push    offset aNoActiveQuest; "No active quest"
0x515CF5: call    Interface_ConsolePrint
0x515CFA: add     esp, 4
0x515CFD: mov     al, 1
0x515CFF: mov     ecx, [esp+44h+var_C]
0x515D03: mov     large fs:0, ecx
0x515D0A: pop     ecx
0x515D0B: pop     edi
0x515D0C: pop     esi
0x515D0D: pop     ebp
0x515D0E: pop     ebx
0x515D0F: mov     esp, ebp
0x515D11: pop     ebp
0x515D12: retn
