0x532CD0: push    0FFFFFFFFh
0x532CD2: push    offset ??1bhkTriSampledHeightFieldBvTreeShape@@UAE@XZ_SEH
0x532CD7: mov     eax, large fs:0
0x532CDD: push    eax
0x532CDE: push    ecx
0x532CDF: push    esi
0x532CE0: mov     eax, ds:0B30AACh
0x532CE5: xor     eax, esp
0x532CE7: push    eax
0x532CE8: lea     eax, [esp+18h+var_C]
0x532CEC: mov     large fs:0, eax
0x532CF2: mov     esi, ecx
0x532CF4: mov     [esp+18h+var_10], esi
0x532CF8: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x532CFD: xor     eax, eax
0x532CFF: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x532D05: mov     [esi+0Ch], eax
0x532D08: mov     [esi+10h], eax
0x532D0B: add     dword ptr ds:0BA7D70h, 1
0x532D12: mov     dword ptr [esi], offset ??_7bhkBvTreeShape@@6B@; const bhkBvTreeShape::`vftable'
0x532D18: add     dword ptr ds:0BA7F98h, 1
0x532D1F: mov     [esp+18h+var_4], eax
0x532D23: mov     eax, [esp+18h+arg_0]
0x532D27: push    eax
0x532D28: mov     ecx, esi
0x532D2A: mov     dword ptr [esi], offset ??_7bhkTriSampledHeightFieldBvTreeShape@@6B@; const bhkTriSampledHeightFieldBvTreeShape::`vftable'
0x532D30: call    sub_8B0750
0x532D35: add     dword ptr ds:0BA7FA4h, 1
0x532D3C: mov     eax, esi
0x532D3E: mov     ecx, [esp+18h+var_C]
0x532D42: mov     large fs:0, ecx
0x532D49: pop     ecx
0x532D4A: pop     esi
0x532D4B: add     esp, 10h
0x532D4E: retn    4
