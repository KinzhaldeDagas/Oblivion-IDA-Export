0x6DA920: push    0FFFFFFFFh
0x6DA922: push    offset SEH_8C8970
0x6DA927: mov     eax, large fs:0
0x6DA92D: push    eax
0x6DA92E: push    ecx
0x6DA92F: push    ebx
0x6DA930: push    esi
0x6DA931: mov     eax, ds:0B30AACh
0x6DA936: xor     eax, esp
0x6DA938: push    eax
0x6DA939: lea     eax, [esp+1Ch+var_C]
0x6DA93D: mov     large fs:0, eax
0x6DA943: mov     ebx, ecx
0x6DA945: push    20h ; ' '; Size
0x6DA947: call    FormHeapAlloc
0x6DA94C: mov     esi, eax
0x6DA94E: add     esp, 4
0x6DA951: mov     [esp+1Ch+var_10], esi
0x6DA955: test    esi, esi
0x6DA957: mov     [esp+1Ch+var_4], 0
0x6DA95F: jz      short loc_6DA998
0x6DA961: mov     ecx, esi
0x6DA963: call    sub_6EC220
0x6DA968: mov     dword ptr [esi], offset ??_7NiPoint3Interpolator@@6B@; const NiPoint3Interpolator::`vftable'
0x6DA96E: mov     eax, ds:0B24FC8h
0x6DA973: mov     [esi+0Ch], eax
0x6DA976: mov     ecx, ds:0B24FCCh
0x6DA97C: mov     [esi+10h], ecx
0x6DA97F: mov     edx, ds:0B24FD0h
0x6DA985: mov     [esi+14h], edx
0x6DA988: mov     dword ptr [esi+18h], 0
0x6DA98F: mov     dword ptr [esi+1Ch], 0
0x6DA996: jmp     short loc_6DA99A
0x6DA998: xor     esi, esi
0x6DA99A: mov     eax, [esp+1Ch+arg_0]
0x6DA99E: push    eax
0x6DA99F: push    esi
0x6DA9A0: mov     ecx, ebx
0x6DA9A2: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6DA9AA: call    sub_6DA6B0
0x6DA9AF: mov     eax, esi
0x6DA9B1: mov     ecx, [esp+1Ch+var_C]
0x6DA9B5: mov     large fs:0, ecx
0x6DA9BC: pop     ecx
0x6DA9BD: pop     esi
0x6DA9BE: pop     ebx
0x6DA9BF: add     esp, 10h
0x6DA9C2: retn    4
