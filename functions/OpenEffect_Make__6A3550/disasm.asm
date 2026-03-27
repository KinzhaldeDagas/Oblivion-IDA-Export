0x6A3550: push    0FFFFFFFFh
0x6A3552: push    offset SEH_8C62B0
0x6A3557: mov     eax, large fs:0
0x6A355D: push    eax
0x6A355E: push    ecx
0x6A355F: push    esi
0x6A3560: mov     eax, ds:0B30AACh
0x6A3565: xor     eax, esp
0x6A3567: push    eax
0x6A3568: lea     eax, [esp+18h+var_C]
0x6A356C: mov     large fs:0, eax
0x6A3572: push    38h ; '8'; Size
0x6A3574: call    FormHeapAlloc
0x6A3579: mov     esi, eax
0x6A357B: add     esp, 4
0x6A357E: mov     [esp+18h+var_10], esi
0x6A3582: xor     eax, eax
0x6A3584: cmp     esi, eax
0x6A3586: mov     [esp+18h+var_4], eax
0x6A358A: jz      short loc_6A35AA
0x6A358C: mov     eax, [esp+18h+arg_8]
0x6A3590: mov     ecx, [esp+18h+arg_4]
0x6A3594: mov     edx, [esp+18h+arg_0]
0x6A3598: push    eax
0x6A3599: push    ecx
0x6A359A: push    edx
0x6A359B: mov     ecx, esi; this
0x6A359D: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A35A2: mov     dword ptr [esi], offset ??_7OpenEffect@@6B@; const OpenEffect::`vftable'
0x6A35A8: mov     eax, esi
0x6A35AA: mov     ecx, [esp+18h+var_C]
0x6A35AE: mov     large fs:0, ecx
0x6A35B5: pop     ecx
0x6A35B6: pop     esi
0x6A35B7: add     esp, 10h
0x6A35BA: retn
