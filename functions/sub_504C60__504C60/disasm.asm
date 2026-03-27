0x504C60: push    ecx
0x504C61: mov     edx, [esp+4+l]
0x504C65: fldz
0x504C67: push    esi
0x504C68: mov     esi, [esp+8+a4]
0x504C6C: push    edi
0x504C6D: mov     edi, [esp+0Ch+arg_18]
0x504C71: lea     eax, [esp+0Ch+arg_18]
0x504C75: fstp    qword ptr [edi]
0x504C77: push    eax
0x504C78: mov     eax, [esp+10h+arg_10]
0x504C7C: lea     ecx, [esp+10h+var_4]
0x504C80: push    ecx; UInt16
0x504C81: mov     ecx, [esp+14h+arg_C]
0x504C85: push    edx; l
0x504C86: mov     edx, [esp+18h+a3]
0x504C8A: push    eax; a6
0x504C8B: mov     eax, [esp+1Ch+arg_4]
0x504C8F: push    ecx; a5
0x504C90: mov     ecx, [esp+20h+a1]
0x504C94: push    esi; a4
0x504C95: push    edx; a3
0x504C96: push    eax; a2
0x504C97: push    ecx; a1
0x504C98: mov     [esp+30h+arg_18], 0FFFFFFFFh
0x504CA0: mov     dword ptr [esp+30h+var_4], 0
0x504CA8: call    Script_ExtractArgs
0x504CAD: add     esp, 24h
0x504CB0: test    al, al
0x504CB2: jnz     short loc_504CB8
0x504CB4: pop     edi
0x504CB5: pop     esi
0x504CB6: pop     ecx
0x504CB7: retn
0x504CB8: test    esi, esi
0x504CBA: jz      short loc_504CD4
0x504CBC: mov     edx, [esp+0Ch+arg_18]
0x504CC0: mov     eax, dword ptr [esp+0Ch+var_4]
0x504CC4: push    edi
0x504CC5: push    edx
0x504CC6: push    eax
0x504CC7: push    esi
0x504CC8: call    sub_4F7AF0
0x504CCD: add     esp, 10h
0x504CD0: pop     edi
0x504CD1: pop     esi
0x504CD2: pop     ecx
0x504CD3: retn
0x504CD4: pop     edi
0x504CD5: mov     al, 1
0x504CD7: pop     esi
0x504CD8: pop     ecx
0x504CD9: retn
