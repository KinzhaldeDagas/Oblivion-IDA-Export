0x4BD6E0: push    0FFFFFFFFh
0x4BD6E2: push    offset ??1DistantLODLoaderTask@@UAE@XZ_SEH
0x4BD6E7: mov     eax, large fs:0
0x4BD6ED: push    eax
0x4BD6EE: push    ecx
0x4BD6EF: push    esi
0x4BD6F0: push    edi
0x4BD6F1: mov     eax, ds:0B30AACh
0x4BD6F6: xor     eax, esp
0x4BD6F8: push    eax
0x4BD6F9: lea     eax, [esp+1Ch+var_C]
0x4BD6FD: mov     large fs:0, eax
0x4BD703: mov     esi, ecx
0x4BD705: mov     [esp+1Ch+var_10], esi
0x4BD709: mov     dword ptr [esi], offset ??_7DistantLODLoaderTask@@6B@; const DistantLODLoaderTask::`vftable'
0x4BD70F: mov     edi, [esi+2Ch]
0x4BD712: test    edi, edi
0x4BD714: mov     [esp+1Ch+var_4], 0
0x4BD71C: jz      short loc_4BD72E
0x4BD71E: mov     ecx, edi
0x4BD720: call    sub_4BD230
0x4BD725: push    edi
0x4BD726: call    FormHeapFree
0x4BD72B: add     esp, 4
0x4BD72E: mov     ecx, esi; this
0x4BD730: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BD738: call    ??1LipTask@@UAE@XZ; LipTask::~LipTask(void)
0x4BD73D: mov     ecx, [esp+1Ch+var_C]
0x4BD741: mov     large fs:0, ecx
0x4BD748: pop     ecx
0x4BD749: pop     edi
0x4BD74A: pop     esi
0x4BD74B: add     esp, 10h
0x4BD74E: retn
