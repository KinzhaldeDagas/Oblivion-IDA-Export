0x502CB0: push    ecx
0x502CB1: mov     edx, [esp+4+l]
0x502CB5: fldz
0x502CB7: push    edi
0x502CB8: mov     edi, dword ptr [esp+8+arg_18]
0x502CBC: lea     eax, [esp+8+var_4]
0x502CC0: fstp    qword ptr [edi]
0x502CC2: push    eax
0x502CC3: mov     eax, [esp+0Ch+arg_10]
0x502CC7: lea     ecx, [esp+0Ch+arg_18]
0x502CCB: push    ecx; UInt16
0x502CCC: mov     ecx, [esp+10h+arg_C]
0x502CD0: push    edx; l
0x502CD1: mov     edx, [esp+14h+a4]
0x502CD5: push    eax; a6
0x502CD6: mov     eax, [esp+18h+a3]
0x502CDA: push    ecx; a5
0x502CDB: mov     ecx, [esp+1Ch+arg_4]
0x502CDF: push    edx; a4
0x502CE0: mov     edx, [esp+20h+a1]
0x502CE4: push    eax; a3
0x502CE5: push    ecx; a2
0x502CE6: push    edx; a1
0x502CE7: mov     dword ptr [esp+2Ch+arg_18], 0
0x502CEF: mov     [esp+2Ch+var_4], 0
0x502CF7: call    Script_ExtractArgs
0x502CFC: add     esp, 24h
0x502CFF: test    al, al
0x502D01: jnz     short loc_502D06
0x502D03: pop     edi
0x502D04: pop     ecx
0x502D05: retn
0x502D06: mov     ecx, dword ptr [esp+8+arg_18]
0x502D0A: test    ecx, ecx
0x502D0C: jz      short loc_502D20
0x502D0E: mov     eax, [esp+8+var_4]
0x502D12: push    eax
0x502D13: call    sub_529AC0
0x502D18: test    al, al
0x502D1A: jz      short loc_502D20
0x502D1C: fld1
0x502D1E: fstp    qword ptr [edi]
0x502D20: mov     al, 1
0x502D22: pop     edi
0x502D23: pop     ecx
0x502D24: retn
