0x5CE6C0: push    0FFFFFFFFh
0x5CE6C2: push    offset ??1SigilStoneMenu@@UAE@XZ_SEH
0x5CE6C7: mov     eax, large fs:0
0x5CE6CD: push    eax
0x5CE6CE: push    ecx
0x5CE6CF: push    esi
0x5CE6D0: push    edi
0x5CE6D1: mov     eax, ds:0B30AACh
0x5CE6D6: xor     eax, esp
0x5CE6D8: push    eax
0x5CE6D9: lea     eax, [esp+1Ch+var_C]
0x5CE6DD: mov     large fs:0, eax
0x5CE6E3: mov     esi, ecx
0x5CE6E5: mov     [esp+1Ch+var_10], esi
0x5CE6E9: mov     dword ptr [esi], offset ??_7RechargeMenu@@6B@; const RechargeMenu::`vftable'
0x5CE6EF: mov     edi, [esi+44h]
0x5CE6F2: test    edi, edi
0x5CE6F4: mov     [esp+1Ch+var_4], 0
0x5CE6FC: jz      short loc_5CE70E
0x5CE6FE: mov     ecx, edi
0x5CE700: call    ContainerEntryExtraData_DestroyDataTable
0x5CE705: push    edi
0x5CE706: call    FormHeapFree
0x5CE70B: add     esp, 4
0x5CE70E: mov     ecx, esi; this
0x5CE710: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x5CE718: call    ??1Menu@@UAE@XZ; Menu::~Menu(void)
0x5CE71D: mov     ecx, [esp+1Ch+var_C]
0x5CE721: mov     large fs:0, ecx
0x5CE728: pop     ecx
0x5CE729: pop     edi
0x5CE72A: pop     esi
0x5CE72B: add     esp, 10h
0x5CE72E: retn
