0x451DA0: push    0FFFFFFFFh
0x451DA2: push    offset TESFile_constr_SEH
0x451DA7: mov     eax, large fs:0
0x451DAD: push    eax
0x451DAE: push    ecx
0x451DAF: push    ebx
0x451DB0: push    esi
0x451DB1: push    edi
0x451DB2: mov     eax, ds:0B30AACh
0x451DB7: xor     eax, esp
0x451DB9: push    eax
0x451DBA: lea     eax, [esp+20h+var_C]
0x451DBE: mov     large fs:0, eax
0x451DC4: mov     esi, ecx
0x451DC6: mov     [esp+20h+var_10], esi
0x451DCA: xor     edi, edi
0x451DCC: mov     [esi+284h], edi
0x451DD2: mov     [esi+288h], edi
0x451DD8: mov     [esi+3E0h], edi
0x451DDE: mov     [esi+3E4h], edi
0x451DE4: mov     [esi+3E8h], edi
0x451DEA: mov     [esi+3ECh], edi
0x451DF0: mov     [esi+404h], edi
0x451DF6: mov     [esi+408h], di
0x451DFD: mov     [esi+40Ah], di
0x451E04: mov     [esp+20h+var_4], edi
0x451E08: mov     [esi+40Ch], edi
0x451E0E: mov     [esi+410h], di
0x451E15: mov     [esi+412h], di
0x451E1C: mov     [esi+414h], edi
0x451E22: mov     [esi+418h], edi
0x451E28: mov     [esi+22Ch], edi
0x451E2E: mov     [esi+230h], edi
0x451E34: mov     [esi+234h], edi
0x451E3A: mov     [esi+4], edi
0x451E3D: mov     [esi+8], edi
0x451E40: mov     [esi], edi
0x451E42: mov     [esi+258h], edi
0x451E48: mov     [esi+25Ch], edi
0x451E4E: mov     [esi+260h], edi
0x451E54: mov     [esi+264h], edi
0x451E5A: mov     [esi+3DCh], edi
0x451E60: mov     [esi+3F4h], edi
0x451E66: mov     [esi+0Ch], edi
0x451E69: mov     [esi+10h], edi
0x451E6C: mov     [esi+3F0h], edi
0x451E72: mov     byte ptr [esi+400h], 0FFh
0x451E79: mov     [esi+238h], edi
0x451E7F: mov     [esi+27Ch], edi
0x451E85: mov     [esi+280h], edi
0x451E8B: mov     [esi+224h], edi
0x451E91: mov     eax, ds:0B055CCh
0x451E96: mov     [esi+228h], eax
0x451E9C: xor     eax, eax
0x451E9E: mov     [esi+23Ch], eax
0x451EA4: mov     [esi+240h], eax
0x451EAA: push    140h
0x451EAF: mov     [esi+244h], eax
0x451EB5: lea     ecx, [esi+290h]
0x451EBB: push    edi
0x451EBC: mov     [esi+248h], eax
0x451EC2: push    ecx
0x451EC3: mov     byte ptr [esp+2Ch+var_4], 1
0x451EC8: mov     [esi+24Ch], eax
0x451ECE: call    __memset
0x451ED3: mov     edx, [esp+2Ch+arg_8]
0x451ED7: mov     ebx, [esp+2Ch+ArgList]
0x451EDB: xor     eax, eax
0x451EDD: mov     [esi+3F8h], eax
0x451EE3: add     esp, 0Ch
0x451EE6: mov     [esi+3FCh], eax
0x451EEC: push    edi; char
0x451EED: mov     [esi+254h], edi
0x451EF3: mov     [esi+250h], edi
0x451EF9: mov     [esi+3D0h], eax
0x451EFF: push    edx; int
0x451F00: mov     [esi+3D4h], eax
0x451F06: mov     eax, [esp+28h+lpString2]
0x451F0A: push    ebx; int
0x451F0B: push    eax; lpString2
0x451F0C: mov     ecx, esi
0x451F0E: mov     dword ptr [esi+3D8h], 800h
0x451F18: call    TESFile_OpenBSFile?
0x451F1D: test    al, al
0x451F1F: jz      short loc_451F63
0x451F21: cmp     [esi+2ACh], edi
0x451F27: jnz     short loc_451F31
0x451F29: cmp     [esi+2B0h], edi
0x451F2F: jz      short loc_451F4A
0x451F31: mov     ecx, esi
0x451F33: call    TESFile_Open
0x451F38: test    eax, eax
0x451F3A: jz      short loc_451F4A
0x451F3C: push    ebx; ArgList
0x451F3D: push    offset aFileSIsNotAVal; "File '%s' is not a valid TES file."
0x451F42: call    PrintError
0x451F47: add     esp, 8
0x451F4A: mov     ecx, esi
0x451F4C: call    TESFile_Close
0x451F51: test    al, al
0x451F53: jnz     short loc_451F63
0x451F55: push    ebx; ArgList
0x451F56: push    offset aCouldNotCloseF; "Could not close file '%s'."
0x451F5B: call    PrintError
0x451F60: add     esp, 8
0x451F63: mov     eax, esi
0x451F65: mov     ecx, [esp+20h+var_C]
0x451F69: mov     large fs:0, ecx
0x451F70: pop     ecx
0x451F71: pop     edi
0x451F72: pop     esi
0x451F73: pop     ebx
0x451F74: add     esp, 10h
0x451F77: retn    0Ch
