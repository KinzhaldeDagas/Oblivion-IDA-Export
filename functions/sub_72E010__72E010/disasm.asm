0x72E010: push    0FFFFFFFFh
0x72E012: push    offset SEH_6CED50
0x72E017: mov     eax, large fs:0
0x72E01D: push    eax
0x72E01E: sub     esp, 8
0x72E021: push    ebx
0x72E022: push    ebp
0x72E023: push    esi
0x72E024: push    edi
0x72E025: mov     eax, ds:0B30AACh
0x72E02A: xor     eax, esp
0x72E02C: push    eax
0x72E02D: lea     eax, [esp+28h+var_C]
0x72E031: mov     large fs:0, eax
0x72E037: mov     esi, ecx
0x72E039: mov     edi, [esp+28h+a2]
0x72E03D: push    edi; a2
0x72E03E: call    sub_7008A0
0x72E043: mov     eax, [edi+21Ch]
0x72E049: mov     edx, [eax+4]
0x72E04C: push    1
0x72E04E: lea     ecx, [esp+2Ch+var_14]
0x72E052: push    ecx
0x72E053: push    4
0x72E055: lea     edi, [esi+8]
0x72E058: push    edi
0x72E059: push    eax
0x72E05A: mov     [esp+3Ch+var_14], 4
0x72E062: call    edx
0x72E064: mov     ebp, [edi]
0x72E066: xor     ecx, ecx
0x72E068: mov     eax, ebp
0x72E06A: mov     edx, 2Ch ; ','
0x72E06F: mul     edx
0x72E071: seto    cl
0x72E074: neg     ecx
0x72E076: or      ecx, eax
0x72E078: xor     eax, eax
0x72E07A: add     ecx, 4
0x72E07D: setb    al
0x72E080: neg     eax
0x72E082: or      eax, ecx
0x72E084: push    eax; Size
0x72E085: call    FormHeapAlloc
0x72E08A: add     esp, 18h
0x72E08D: mov     [esp+28h+var_10], eax
0x72E091: xor     ebx, ebx
0x72E093: cmp     eax, ebx
0x72E095: mov     [esp+28h+var_4], ebx
0x72E099: jz      short loc_72E0B3
0x72E09B: push    offset sub_72C450; a5
0x72E0A0: push    offset sub_72C420; a4
0x72E0A5: push    ebp; size
0x72E0A6: lea     ebx, [eax+4]
0x72E0A9: push    2Ch ; ','; a2
0x72E0AB: push    ebx; a1
0x72E0AC: mov     [eax], ebp
0x72E0AE: call    ArrayConstructor
0x72E0B3: mov     [esi+0Ch], ebx
0x72E0B6: xor     ebx, ebx
0x72E0B8: cmp     [edi], ebx
0x72E0BA: mov     [esp+28h+var_4], 0FFFFFFFFh
0x72E0C2: jbe     short loc_72E0DF
0x72E0C4: xor     ebp, ebp
0x72E0C6: mov     ecx, [esp+28h+a2]
0x72E0CA: push    ecx
0x72E0CB: mov     ecx, [esi+0Ch]
0x72E0CE: add     ecx, ebp
0x72E0D0: call    sub_72D860
0x72E0D5: add     ebx, 1
0x72E0D8: add     ebp, 2Ch ; ','
0x72E0DB: cmp     ebx, [edi]
0x72E0DD: jb      short loc_72E0C6
0x72E0DF: mov     ecx, [esp+28h+var_C]
0x72E0E3: mov     large fs:0, ecx
0x72E0EA: pop     ecx
0x72E0EB: pop     edi
0x72E0EC: pop     esi
0x72E0ED: pop     ebp
0x72E0EE: pop     ebx
0x72E0EF: add     esp, 14h
0x72E0F2: retn    4
