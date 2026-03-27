0x553550: push    0FFFFFFFFh
0x553552: push    offset SEH_8C8900
0x553557: mov     eax, large fs:0
0x55355D: push    eax
0x55355E: push    ecx
0x55355F: mov     eax, ds:0B30AACh
0x553564: xor     eax, esp
0x553566: push    eax
0x553567: lea     eax, [esp+14h+var_C]
0x55356B: mov     large fs:0, eax
0x553571: cmp     dword ptr ds:0B39B80h, 0
0x553578: jnz     short loc_5535BA
0x55357A: push    0DBCh; Size
0x55357F: call    FormHeapAlloc
0x553584: add     esp, 4
0x553587: mov     [esp+14h+var_10], eax
0x55358B: test    eax, eax
0x55358D: mov     [esp+14h+var_4], 0
0x553595: jz      short loc_5535B3
0x553597: mov     ecx, eax
0x553599: call    sub_553140
0x55359E: mov     ds:0B39B80h, eax
0x5535A3: mov     ecx, [esp+14h+var_C]
0x5535A7: mov     large fs:0, ecx
0x5535AE: pop     ecx
0x5535AF: add     esp, 10h
0x5535B2: retn
0x5535B3: xor     eax, eax
0x5535B5: mov     ds:0B39B80h, eax
0x5535BA: mov     ecx, [esp+14h+var_C]
0x5535BE: mov     large fs:0, ecx
0x5535C5: pop     ecx
0x5535C6: add     esp, 10h
0x5535C9: retn
