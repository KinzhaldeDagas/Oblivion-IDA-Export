0x6935E0: push    0FFFFFFFFh
0x6935E2: push    offset ??0ScriptEffect@@QAE@XZ_SEH
0x6935E7: mov     eax, large fs:0
0x6935ED: push    eax
0x6935EE: push    ecx
0x6935EF: push    esi
0x6935F0: push    edi
0x6935F1: mov     eax, ds:0B30AACh
0x6935F6: xor     eax, esp
0x6935F8: push    eax
0x6935F9: lea     eax, [esp+1Ch+var_C]
0x6935FD: mov     large fs:0, eax
0x693603: mov     esi, ecx
0x693605: mov     [esp+1Ch+var_10], esi
0x693609: mov     dword ptr [esi], offset ??_7DisintegrateArmorEffect@@6B@; const DisintegrateArmorEffect::`vftable'
0x69360F: mov     edi, [esi+38h]
0x693612: test    edi, edi
0x693614: mov     [esp+1Ch+var_4], 0
0x69361C: jz      short loc_69362E
0x69361E: mov     ecx, edi
0x693620: call    ContainerEntryExtraData_DestroyDataTable
0x693625: push    edi
0x693626: call    FormHeapFree
0x69362B: add     esp, 4
0x69362E: mov     ecx, esi; this
0x693630: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x693638: call    ??1ActiveEffect@@UAE@XZ; ActiveEffect::~ActiveEffect(void)
0x69363D: mov     ecx, [esp+1Ch+var_C]
0x693641: mov     large fs:0, ecx
0x693648: pop     ecx
0x693649: pop     edi
0x69364A: pop     esi
0x69364B: add     esp, 10h
0x69364E: retn
