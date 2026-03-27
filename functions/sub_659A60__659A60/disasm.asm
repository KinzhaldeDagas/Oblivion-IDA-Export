0x659A60: push    0FFFFFFFFh
0x659A62: push    offset SEH_8C8970
0x659A67: mov     eax, large fs:0
0x659A6D: push    eax
0x659A6E: push    ecx
0x659A6F: push    esi
0x659A70: push    edi
0x659A71: mov     eax, ds:0B30AACh
0x659A76: xor     eax, esp
0x659A78: push    eax
0x659A79: lea     eax, [esp+1Ch+var_C]
0x659A7D: mov     large fs:0, eax
0x659A83: mov     esi, ecx
0x659A85: mov     ecx, [esi+58h]
0x659A88: mov     eax, [ecx]
0x659A8A: mov     edx, [eax+8]
0x659A8D: call    edx
0x659A8F: push    eax
0x659A90: push    esi
0x659A91: mov     ecx, offset ActorProcessManager_ptr
0x659A96: call    sub_674550
0x659A9B: push    2ECh; Size
0x659AA0: call    FormHeapAlloc
0x659AA5: add     esp, 4
0x659AA8: mov     [esp+1Ch+var_10], eax
0x659AAC: test    eax, eax
0x659AAE: mov     [esp+1Ch+var_4], 0
0x659AB6: jz      short loc_659AC3
0x659AB8: mov     ecx, eax; this
0x659ABA: call    ??0HighProcess@@QAE@XZ; HighProcess::HighProcess(void)
0x659ABF: mov     edi, eax
0x659AC1: jmp     short loc_659AC5
0x659AC3: xor     edi, edi
0x659AC5: mov     ecx, [esi+58h]
0x659AC8: mov     eax, [edi]
0x659ACA: mov     edx, [eax+4]
0x659ACD: push    ecx
0x659ACE: mov     ecx, edi
0x659AD0: mov     [esp+20h+var_4], 0FFFFFFFFh
0x659AD8: call    edx
0x659ADA: mov     ecx, [esi+58h]
0x659ADD: test    ecx, ecx
0x659ADF: jz      short loc_659AE9
0x659AE1: mov     eax, [ecx]
0x659AE3: mov     edx, [eax]
0x659AE5: push    1
0x659AE7: call    edx
0x659AE9: push    0
0x659AEB: push    0
0x659AED: push    0
0x659AEF: push    0
0x659AF1: push    esi
0x659AF2: mov     ecx, offset ActorProcessManager_ptr
0x659AF7: mov     [esi+58h], edi
0x659AFA: call    sub_673A90
0x659AFF: mov     eax, [esi]
0x659B01: mov     edx, [eax+178h]
0x659B07: push    0
0x659B09: mov     ecx, esi
0x659B0B: call    edx
0x659B0D: mov     ecx, [esi+58h]
0x659B10: mov     eax, [ecx]
0x659B12: mov     edx, [eax+4Ch]
0x659B15: call    edx
0x659B17: mov     al, 1
0x659B19: mov     ecx, [esp+1Ch+var_C]
0x659B1D: mov     large fs:0, ecx
0x659B24: pop     ecx
0x659B25: pop     edi
0x659B26: pop     esi
0x659B27: add     esp, 10h
0x659B2A: retn
