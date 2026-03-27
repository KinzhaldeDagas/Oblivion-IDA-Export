0x6A2BB8: mov     eax, [edi]
0x6A2BBA: mov     edx, [eax+8]
0x6A2BBD: mov     ecx, edi
0x6A2BBF: call    edx
0x6A2BC1: test    eax, eax
0x6A2BC3: jz      MagicTarget_AddEffect___DestroyClone_Return_0
0x6A2BC9: mov     eax, [edi]
0x6A2BCB: mov     edx, [eax+8]
0x6A2BCE: push    offset MagicTarget_ActiveEffectComparisonFunc
0x6A2BD3: push    esi
0x6A2BD4: mov     ecx, edi
0x6A2BD6: call    edx
0x6A2BD8: mov     ecx, eax
0x6A2BDA: call    BSSimpleList_InsertSorted
0x6A2BDF: mov     eax, [edi]
0x6A2BE1: mov     edx, [eax+10h]
0x6A2BE4: push    esi
0x6A2BE5: mov     ecx, edi
0x6A2BE7: call    edx
0x6A2BE9: mov     eax, [esi+0Ch]
0x6A2BEC: mov     eax, [eax+1Ch]
0x6A2BEF: cmp     dword ptr [eax+98h], 504D4156h
0x6A2BF9: jnz     short MagicTarget_AddEffect___PrintEffectAdded_DebugMsg
0x6A2BFB: fldz
0x6A2BFD: push    ecx
0x6A2BFE: mov     ecx, esi
0x6A2C00: fstp    [esp-0Ch+arg_8]
0x6A2C03: call    ActiveEffect_Base_ProcessEffect
