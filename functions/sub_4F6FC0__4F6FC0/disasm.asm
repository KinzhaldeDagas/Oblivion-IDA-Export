0x4F6FC0: fldz
0x4F6FC2: push    esi
0x4F6FC3: mov     esi, [esp+4+arg_0]
0x4F6FC7: test    esi, esi
0x4F6FC9: push    edi
0x4F6FCA: mov     edi, [esp+8+arg_C]
0x4F6FCE: fstp    qword ptr [edi]
0x4F6FD0: jz      short loc_4F7005
0x4F6FD2: mov     eax, [esi]
0x4F6FD4: mov     edx, [eax+170h]
0x4F6FDA: mov     ecx, esi
0x4F6FDC: call    edx
0x4F6FDE: cmp     byte ptr [eax+4], 23h ; '#'
0x4F6FE2: jnz     short loc_4F7005
0x4F6FE4: mov     eax, [esi]
0x4F6FE6: mov     edx, [eax+170h]
0x4F6FEC: mov     ecx, esi
0x4F6FEE: call    edx
0x4F6FF0: test    eax, eax
0x4F6FF2: jz      short loc_4F7005
0x4F6FF4: mov     ecx, eax
0x4F6FF6: call    TESActorBase_IsFemale
0x4F6FFB: cmp     eax, [esp+8+arg_4]
0x4F6FFF: jnz     short loc_4F7005
0x4F7001: fld1
0x4F7003: fstp    qword ptr [edi]
0x4F7005: cmp     byte ptr ds:0B361ACh, 0
0x4F700C: jz      short loc_4F7023
0x4F700E: fld     qword ptr [edi]
0x4F7010: sub     esp, 8
0x4F7013: fstp    [esp+10h+var_10]
0x4F7016: push    offset aGetissex0_2f; "GetIsSex >> %0.2f"
0x4F701B: call    Interface_ConsolePrint
0x4F7020: add     esp, 0Ch
0x4F7023: pop     edi
0x4F7024: mov     al, 1
0x4F7026: pop     esi
0x4F7027: retn
