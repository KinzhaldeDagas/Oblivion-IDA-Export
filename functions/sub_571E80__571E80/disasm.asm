0x571E80: push    0FFFFFFFFh
0x571E82: push    offset SEH_571E80
0x571E87: mov     eax, large fs:0
0x571E8D: push    eax
0x571E8E: sub     esp, 8
0x571E91: push    ebx
0x571E92: push    ebp
0x571E93: push    esi
0x571E94: push    edi
0x571E95: mov     eax, ds:0B30AACh
0x571E9A: xor     eax, esp
0x571E9C: push    eax
0x571E9D: lea     eax, [esp+28h+var_C]
0x571EA1: mov     large fs:0, eax
0x571EA7: mov     edi, ecx
0x571EA9: mov     [esp+28h+var_10], edi
0x571EAD: push    offset sub_571DF0; a5
0x571EB2: push    offset sub_571D40; a4
0x571EB7: push    0C8h ; 'È'; size
0x571EBC: push    1Ch; a2
0x571EBE: push    edi; a1
0x571EBF: call    ArrayConstructor
0x571EC4: xor     ebp, ebp
0x571EC6: mov     [esp+28h+var_4], ebp
0x571ECA: mov     [edi+15ECh], ebp
0x571ED0: mov     [edi+15E4h], ebp
0x571ED6: mov     [edi+15E8h], ebp
0x571EDC: mov     dword ptr [edi+15E0h], offset ??_7?$NiTList@PAUDebugTextData@DebugText@@@@6B@; const NiTList<DebugText::DebugTextData *>::`vftable'
0x571EE6: mov     byte ptr [esp+28h+var_4], 1
0x571EEB: lea     esi, [edi+14h]
0x571EEE: mov     [esp+28h+var_14], 0C8h ; 'È'
0x571EF6: fldz
0x571EF8: mov     [esi-0Ch], ebp
0x571EFB: fst     dword ptr [esi-14h]
0x571EFE: fstp    dword ptr [esi-10h]
0x571F01: mov     ebx, [esi-8]
0x571F04: cmp     ebx, ebp
0x571F06: jz      short loc_571F27
0x571F08: lea     eax, [ebx+4]
0x571F0B: push    eax; lpAddend
0x571F0C: call    dword ptr ds:0A2807Ch
0x571F12: test    eax, eax
0x571F14: jnz     short loc_571F24
0x571F16: cmp     ebx, ebp
0x571F18: jz      short loc_571F24
0x571F1A: mov     edx, [ebx]
0x571F1C: mov     eax, [edx]
0x571F1E: push    1
0x571F20: mov     ecx, ebx
0x571F22: call    eax
0x571F24: mov     [esi-8], ebp
0x571F27: mov     ecx, [esi-4]
0x571F2A: push    ecx
0x571F2B: call    FormHeapFree
0x571F30: fld     dword ptr ds:0A30634h
0x571F36: mov     [esi-4], ebp
0x571F39: mov     [esi+2], bp
0x571F3D: mov     [esi], bp
0x571F40: fstp    dword ptr [esi+4]
0x571F43: add     esp, 4
0x571F46: add     esi, 1Ch
0x571F49: sub     [esp+28h+var_14], 1
0x571F4E: jnz     short loc_571EF6
0x571F50: mov     eax, edi
0x571F52: mov     ecx, dword ptr [esp+28h+var_C]
0x571F56: mov     large fs:0, ecx
0x571F5D: pop     ecx
0x571F5E: pop     edi
0x571F5F: pop     esi
0x571F60: pop     ebp
0x571F61: pop     ebx
0x571F62: add     esp, 14h
0x571F65: retn
