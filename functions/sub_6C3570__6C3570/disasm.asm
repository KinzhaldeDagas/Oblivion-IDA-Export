0x6C3570: push    0FFFFFFFFh
0x6C3572: push    offset SEH_6C3570
0x6C3577: mov     eax, large fs:0
0x6C357D: push    eax
0x6C357E: sub     esp, 34h
0x6C3581: push    esi
0x6C3582: push    edi
0x6C3583: mov     eax, ds:0B30AACh
0x6C3588: xor     eax, esp
0x6C358A: push    eax
0x6C358B: lea     eax, [esp+4Ch+var_C]
0x6C358F: mov     large fs:0, eax
0x6C3595: mov     esi, [ecx+30h]
0x6C3598: lea     eax, [esi+30h]
0x6C359B: push    eax
0x6C359C: lea     ecx, [esp+50h+var_3C]
0x6C35A0: call    sub_7150F0
0x6C35A5: fld     dword ptr [esi+60h]
0x6C35A8: mov     ecx, [esi+54h]
0x6C35AB: fstp    [esp+4Ch+var_40]
0x6C35AF: mov     edx, [esi+58h]
0x6C35B2: fld     [esp+4Ch+var_40]
0x6C35B6: mov     eax, [esi+5Ch]
0x6C35B9: fstp    [esp+4Ch+var_10]
0x6C35BD: mov     [esp+4Ch+var_2C], ecx
0x6C35C1: mov     ecx, [esp+4Ch+var_3C]
0x6C35C5: mov     [esp+4Ch+var_28], edx
0x6C35C9: mov     edx, [esp+4Ch+var_38]
0x6C35CD: mov     [esp+4Ch+var_24], eax
0x6C35D1: mov     eax, [esp+4Ch+var_34]
0x6C35D5: mov     [esp+4Ch+var_20], ecx
0x6C35D9: mov     ecx, [esp+4Ch+var_30]
0x6C35DD: push    38h ; '8'; Size
0x6C35DF: mov     [esp+50h+var_1C], edx
0x6C35E3: mov     [esp+50h+var_18], eax
0x6C35E7: mov     [esp+50h+var_14], ecx
0x6C35EB: call    FormHeapAlloc
0x6C35F0: add     esp, 4
0x6C35F3: mov     [esp+4Ch+var_40], eax
0x6C35F7: test    eax, eax
0x6C35F9: mov     [esp+4Ch+var_4], 0
0x6C3601: jz      short loc_6C362E
0x6C3603: sub     esp, 20h
0x6C3606: mov     edi, esp
0x6C3608: mov     ecx, 8
0x6C360D: lea     esi, [esp+6Ch+var_2C]
0x6C3611: rep movsd
0x6C3613: mov     ecx, eax
0x6C3615: call    sub_6D5C30
0x6C361A: mov     ecx, [esp+4Ch+var_C]
0x6C361E: mov     large fs:0, ecx
0x6C3625: pop     ecx
0x6C3626: pop     edi
0x6C3627: pop     esi
0x6C3628: add     esp, 40h
0x6C362B: retn    4
0x6C362E: xor     eax, eax
0x6C3630: mov     ecx, [esp+4Ch+var_C]
0x6C3634: mov     large fs:0, ecx
0x6C363B: pop     ecx
0x6C363C: pop     edi
0x6C363D: pop     esi
0x6C363E: add     esp, 40h
0x6C3641: retn    4
