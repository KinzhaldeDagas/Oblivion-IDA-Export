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
0x614DD7: mov     ecx, ds:0B33B00h; self
0x614DDD: push    1; byteCount
0x614DDF: lea     eax, [esp+28h+Dst+3]
0x614DE3: push    eax; destination
0x614DE4: mov     byte ptr [esp+2Ch+Dst+3], 0
0x614DE9: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
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
0x614E41: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x614E46: add     esp, 4
0x614E49: mov     dword ptr [edi+4], 0
0x614E50: push    4; byteCount
0x614E52: lea     ecx, [esp+28h+destination]
0x614E56: push    ecx; destination
0x614E57: mov     ecx, ds:0B33B00h; self
0x614E5D: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x614E62: mov     edx, [esp+10h]
0x614E66: mov     [edi], edx
0x614E68: mov     ecx, [esp+2Ch+destination]
0x614E6C: mov     large fs:0, ecx
0x614E73: pop     ecx
0x614E74: pop     edi
0x614E75: pop     esi
0x614E76: add     esp, 18h
0x614E79: retn
0x9CAD70: mov     eax, [ebp-10h]
0x9CAD73: push    eax
0x9CAD74: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CAD79: pop     ecx
0x9CAD7A: retn
0x9CAD7B: mov     edx, [esp+arg_4]
0x9CAD7F: lea     eax, [edx-14h]
0x9CAD82: mov     ecx, [edx-18h]
0x9CAD85: xor     ecx, eax
0x9CAD87: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAD8C: mov     eax, offset stru_AF3390
0x9CAD91: jmp     ___CxxFrameHandler3
