0x683030: push    0FFFFFFFFh
0x683032: push    offset SEH_8C8900
0x683037: mov     eax, large fs:0
0x68303D: push    eax
0x68303E: push    ecx
0x68303F: mov     eax, ds:0B30AACh
0x683044: xor     eax, esp
0x683046: push    eax
0x683047: lea     eax, [esp+14h+var_C]
0x68304B: mov     large fs:0, eax
0x683051: cmp     dword ptr ds:0B3BF80h, 0
0x683058: jnz     short loc_683097
0x68305A: push    48h ; 'H'; Size
0x68305C: call    FormHeapAlloc
0x683061: add     esp, 4
0x683064: mov     [esp+14h+var_10], eax
0x683068: test    eax, eax
0x68306A: mov     [esp+14h+var_4], 0
0x683072: jz      short loc_683090
0x683074: mov     ecx, eax; this
0x683076: call    ??0PathBuilder@@QAE@XZ; PathBuilder::PathBuilder(void)
0x68307B: mov     ds:0B3BF80h, eax
0x683080: mov     ecx, [esp+14h+var_C]
0x683084: mov     large fs:0, ecx
0x68308B: pop     ecx
0x68308C: add     esp, 10h
0x68308F: retn
0x683090: xor     eax, eax
0x683092: mov     ds:0B3BF80h, eax
0x683097: mov     ecx, [esp+14h+var_C]
0x68309B: mov     large fs:0, ecx
0x6830A2: pop     ecx
0x6830A3: add     esp, 10h
0x6830A6: retn
