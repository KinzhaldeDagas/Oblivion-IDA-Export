0x5F3E77: cmp     ebx, ds:0B333C4h
0x5F3E7D: jnz     Actor_MagicCaster_PlayCastingAnimation___Done
0x5F3E83: mov     edx, [edi]
0x5F3E85: mov     eax, [edx+30h]
0x5F3E88: mov     ecx, edi
0x5F3E8A: call    eax
0x5F3E8C: mov     ecx, eax
0x5F3E8E: add     ecx, 0Ch
0x5F3E91: call    EffectItemList_GetSchoolAV
0x5F3E96: push    eax
0x5F3E97: call    Magic_GetSchoolFromSkillAV
0x5F3E9C: mov     ecx, ds:0B333C4h
0x5F3EA2: add     esp, 4
0x5F3EA5: push    eax
0x5F3EA6: call    sub_6635E0
0x5F3EAB: mov     ecx, [esp+arg_14]
0x5F3EAF: mov     eax, [edi]
0x5F3EB1: push    ecx
0x5F3EB2: lea     edx, [esp+4+arg_18]
0x5F3EB6: push    edx
0x5F3EB7: mov     edx, [eax+30h]
0x5F3EBA: mov     ecx, edi
0x5F3EBC: call    edx
0x5F3EBE: mov     ecx, eax
0x5F3EC0: call    Magic_CastFailureMsg
0x5F3EC5: fld     dword ptr ds:0A30634h
0x5F3ECB: mov     eax, [eax]
0x5F3ECD: push    ecx
0x5F3ECE: fstp    [esp+4+duration]; duration
0x5F3ED1: push    1; unk2
0x5F3ED3: push    0; unk1
0x5F3ED5: push    eax; string
0x5F3ED6: mov     [esp+10h+arg_28], 0
0x5F3EDE: call    GameUI_QueueMessage
0x5F3EE3: mov     eax, [esp+10h+arg_18]
0x5F3EE7: push    eax
0x5F3EE8: call    FormHeapFree
0x5F3EED: add     esp, 14h
0x5F3EF0: mov     ecx, [esp+arg_20]
0x5F3EF4: mov     large fs:0, ecx
0x5F3EFB: pop     ecx
0x5F3EFC: pop     edi
0x5F3EFD: pop     esi
0x5F3EFE: pop     ebp
0x5F3EFF: pop     ebx
0x5F3F00: add     esp, 1Ch
0x5F3F03: retn
