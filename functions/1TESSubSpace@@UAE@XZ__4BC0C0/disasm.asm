0x4BC0C0: push    0FFFFFFFFh
0x4BC0C2: push    offset ??1TESSubSpace@@UAE@XZ_SEH
0x4BC0C7: mov     eax, large fs:0
0x4BC0CD: push    eax
0x4BC0CE: push    ecx
0x4BC0CF: push    esi
0x4BC0D0: mov     eax, ds:0B30AACh
0x4BC0D5: xor     eax, esp
0x4BC0D7: push    eax
0x4BC0D8: lea     eax, [esp+18h+var_C]
0x4BC0DC: mov     large fs:0, eax
0x4BC0E2: mov     esi, ecx
0x4BC0E4: mov     [esp+18h+var_10], esi
0x4BC0E8: mov     dword ptr [esi], offset ??_7TESSubSpace@@6B@; const TESSubSpace::`vftable'
0x4BC0EE: mov     [esp+18h+var_4], 0
0x4BC0F6: call    j_TESForm_ClearComponentReferences
0x4BC0FB: mov     ecx, esi
0x4BC0FD: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4BC105: call    TESObject_destr
0x4BC10A: mov     ecx, [esp+18h+var_C]
0x4BC10E: mov     large fs:0, ecx
0x4BC115: pop     ecx
0x4BC116: pop     esi
0x4BC117: add     esp, 10h
0x4BC11A: retn
