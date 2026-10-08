0x45F030: push    0FFFFFFFFh
0x45F032: push    offset ??1ChangesMap@@UAE@XZ_SEH
0x45F037: mov     eax, large fs:0
0x45F03D: push    eax
0x45F03E: push    ecx
0x45F03F: push    esi
0x45F040: mov     eax, ds:0B30AACh
0x45F045: xor     eax, esp
0x45F047: push    eax
0x45F048: lea     eax, [esp+18h+var_C]
0x45F04C: mov     large fs:0, eax
0x45F052: mov     esi, ecx
0x45F054: mov     [esp+18h+var_10], esi
0x45F058: mov     dword ptr [esi], offset ??_7ChangesMap@@6B@; Verified: ChangesMap vtable (RTTI COL AB7C90 -> TypeDescriptor B05A38 -> .?AVChangesMap@@). Slots +0 deleting dtor 462260, +4 hash, +8 key equality, +C set node key/value, +10 no-op clear value, +14 allocate node, +18 release node. Owned ChangeData/buffers are freed by 45A8B0, not ClearValue.
0x45F05E: mov     [esp+18h+var_4], 0
0x45F066: call    ChangesMap_RemoveAllChanges;
0x45F06B: mov     ecx, esi
0x45F06D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45F075: call    ??1?$NiTPointerMap@IPAVChangeData@@@@UAE@XZ; NiTPointerMap<uint,ChangeData *>::~NiTPointerMap<uint,ChangeData *>(void)
0x45F07A: mov     ecx, [esp+18h+var_C]
0x45F07E: mov     large fs:0, ecx
0x45F085: pop     ecx
0x45F086: pop     esi
0x45F087: add     esp, 10h
0x45F08A: retn
0x9AE4E0: mov     ecx, [ebp-10h]
0x9AE4E3: jmp     ??1?$NiTPointerMap@IPAVChangeData@@@@UAE@XZ; NiTPointerMap<uint,ChangeData *>::~NiTPointerMap<uint,ChangeData *>(void)
0x9AE4E8: mov     edx, [esp+arg_4]
0x9AE4EC: lea     eax, [edx-8]
0x9AE4EF: mov     ecx, [edx-0Ch]
0x9AE4F2: xor     ecx, eax
0x9AE4F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE4F9: mov     eax, offset stru_ADAD18
0x9AE4FE: jmp     ___CxxFrameHandler3
