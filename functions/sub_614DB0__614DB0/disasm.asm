0x614DB0: push    0FFFFFFFFh
0x614DB2: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x614DB7: mov     eax, large fs:0
0x614DBD: push    eax
0x614DBE: sub     esp, 0Ch
0x614DC1: push    esi
0x614DC2: push    edi
0x614DC3: mov     eax, ds:0B30AACh
0x614DC8: xor     eax, esp
0x614DCA: push    eax
0x614DCB: lea     eax, [esp+24h+var_C]
0x614DCF: mov     large fs:0, eax
0x614DD5: mov     edi, ecx
0x614DD7: mov     ecx, ds:0B33B00h
0x614DDD: push    1; Size
0x614DDF: lea     eax, [esp+28h+Dst+3]
0x614DE3: push    eax; Dst
0x614DE4: mov     byte ptr [esp+2Ch+Dst+3], 0
0x614DE9: call    SaveLoad_LoadData
0x614DEE: cmp     byte ptr [esp+24h+Dst+3], 0
0x614DF3: jz      short loc_614E50
0x614DF5: push    0Ch; Size
0x614DF7: call    FormHeapAlloc
0x614DFC: add     esp, 4
0x614DFF: mov     [esp+24h+var_10], eax
0x614E03: test    eax, eax
0x614E05: mov     [esp+24h+var_4], 0
0x614E0D: jz      short loc_614E18
0x614E0F: mov     ecx, eax
0x614E11: call    sub_4842D0
0x614E16: jmp     short loc_614E1A
0x614E18: xor     eax, eax
0x614E1A: mov     ecx, eax
0x614E1C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x614E24: mov     [edi+4], eax
0x614E27: call    ContainerEntryExtraData_LoadModified
0x614E2C: mov     esi, [edi+4]
0x614E2F: cmp     dword ptr [esi+8], 0
0x614E33: jnz     short loc_614E50
0x614E35: test    esi, esi
0x614E37: jz      short loc_614E49
0x614E39: mov     ecx, esi
0x614E3B: call    ContainerEntryExtraData_DestroyDataTable
0x614E40: push    esi
0x614E41: call    FormHeapFree
0x614E46: add     esp, 4
0x614E49: mov     dword ptr [edi+4], 0
0x614E50: push    4; Size
0x614E52: lea     ecx, [esp+28h+var_14]
0x614E56: push    ecx; Dst
0x614E57: mov     ecx, ds:0B33B00h
0x614E5D: call    SaveLoad_LoadFormID
0x614E62: mov     edx, [esp+10h]
0x614E66: mov     [edi], edx
0x614E68: mov     ecx, [esp+2Ch+var_14]
0x614E6C: mov     large fs:0, ecx
0x614E73: pop     ecx
0x614E74: pop     edi
0x614E75: pop     esi
0x614E76: add     esp, 18h
0x614E79: retn
