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
0x45F058: mov     dword ptr [esi], offset ??_7ChangesMap@@6B@; const ChangesMap::`vftable'
0x45F05E: mov     [esp+18h+var_4], 0
0x45F066: call    sub_45A8B0
0x45F06B: mov     ecx, esi
0x45F06D: mov     [esp+18h+var_4], 0FFFFFFFFh
0x45F075: call    ??1?$NiTPointerMap@IPAVChangeData@@@@UAE@XZ; NiTPointerMap<uint,ChangeData *>::~NiTPointerMap<uint,ChangeData *>(void)
0x45F07A: mov     ecx, [esp+18h+var_C]
0x45F07E: mov     large fs:0, ecx
0x45F085: pop     ecx
0x45F086: pop     esi
0x45F087: add     esp, 10h
0x45F08A: retn
