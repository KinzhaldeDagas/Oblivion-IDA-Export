0x5931C0: push    0FFFFFFFFh
0x5931C2: push    offset ??1LoadingMenu@@UAE@XZ_SEH
0x5931C7: mov     eax, large fs:0
0x5931CD: push    eax
0x5931CE: push    ecx
0x5931CF: push    ebx
0x5931D0: push    ebp
0x5931D1: push    esi
0x5931D2: push    edi
0x5931D3: mov     eax, ds:0B30AACh
0x5931D8: xor     eax, esp
0x5931DA: push    eax
0x5931DB: lea     eax, [esp+24h+var_C]
0x5931DF: mov     large fs:0, eax
0x5931E5: mov     esi, ecx
0x5931E7: mov     [esp+24h+var_10], esi
0x5931EB: mov     dword ptr [esi], offset ??_7AlchemyMenu@@6B@; const AlchemyMenu::`vftable'
0x5931F1: mov     ecx, [esi+94h]
0x5931F7: test    ecx, ecx
0x5931F9: mov     [esp+24h+var_4], 0
0x593201: jz      short loc_59320C
0x593203: mov     eax, [ecx]
0x593205: mov     edx, [eax+10h]
0x593208: push    1
0x59320A: call    edx
0x59320C: mov     edi, [esi+0A0h]
0x593212: test    edi, edi
0x593214: jz      short loc_593226
0x593216: mov     ecx, edi
0x593218: call    sub_57FEB0
0x59321D: push    edi
0x59321E: call    FormHeapFree
0x593223: add     esp, 4
0x593226: lea     edi, [esi+0B0h]
0x59322C: mov     ebp, 4
0x593231: mov     ebx, [edi]
0x593233: test    ebx, ebx
0x593235: jz      short loc_593247
0x593237: mov     ecx, ebx
0x593239: call    ContainerEntryExtraData_DestroyDataTable
0x59323E: push    ebx
0x59323F: call    FormHeapFree
0x593244: add     esp, 4
0x593247: add     edi, 4
0x59324A: sub     ebp, 1
0x59324D: jnz     short loc_593231
0x59324F: cmp     dword ptr [esi+0ACh], 0
0x593256: jz      short loc_59327C
0x593258: jmp     short loc_593260
0x59325A: align 10h
0x593260: mov     eax, [esi+0ACh]
0x593266: mov     edi, [eax+4]
0x593269: push    eax
0x59326A: call    FormHeapFree
0x59326F: add     esp, 4
0x593272: test    edi, edi
0x593274: mov     [esi+0ACh], edi
0x59327A: jnz     short loc_593260
0x59327C: mov     ecx, esi; this
0x59327E: mov     dword ptr [esi+0A8h], 0
0x593288: mov     [esp+24h+var_4], 0FFFFFFFFh
0x593290: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x593295: mov     ecx, dword ptr [esp+24h+var_C]
0x593299: mov     large fs:0, ecx
0x5932A0: pop     ecx
0x5932A1: pop     edi
0x5932A2: pop     esi
0x5932A3: pop     ebp
0x5932A4: pop     ebx
0x5932A5: add     esp, 10h
0x5932A8: retn
