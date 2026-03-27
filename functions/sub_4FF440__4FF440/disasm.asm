0x4FF440: push    0FFFFFFFFh
0x4FF442: push    offset SEH_4FF440
0x4FF447: mov     eax, large fs:0
0x4FF44D: push    eax
0x4FF44E: push    ecx
0x4FF44F: push    esi
0x4FF450: push    edi
0x4FF451: mov     eax, ds:0B30AACh
0x4FF456: xor     eax, esp
0x4FF458: push    eax
0x4FF459: lea     eax, [esp+1Ch+var_C]
0x4FF45D: mov     large fs:0, eax
0x4FF463: mov     esi, ecx
0x4FF465: mov     [esp+1Ch+var_10], esi
0x4FF469: xor     edi, edi
0x4FF46B: mov     [esp+1Ch+var_4], edi
0x4FF46F: call    sub_4FCC90
0x4FF474: mov     ecx, esi
0x4FF476: call    sub_4FD520
0x4FF47B: mov     ecx, esi
0x4FF47D: call    sub_4FD580
0x4FF482: mov     eax, [esi+20h]
0x4FF485: push    eax; void *
0x4FF486: mov     ecx, offset FormHeap
0x4FF48B: call    MemoryHeap_Free_checked
0x4FF490: mov     eax, [esi+0Ch]
0x4FF493: push    eax
0x4FF494: call    FormHeapFree
0x4FF499: add     esp, 4
0x4FF49C: mov     [esi+0Ch], edi
0x4FF49F: mov     [esi+12h], di
0x4FF4A3: mov     [esi+10h], di
0x4FF4A7: mov     ecx, [esp+1Ch+var_C]
0x4FF4AB: mov     large fs:0, ecx
0x4FF4B2: pop     ecx
0x4FF4B3: pop     edi
0x4FF4B4: pop     esi
0x4FF4B5: add     esp, 10h
0x4FF4B8: retn
