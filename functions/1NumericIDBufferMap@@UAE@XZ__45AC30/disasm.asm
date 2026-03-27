0x45AC30: push    0FFFFFFFFh
0x45AC32: push    offset ??1NumericIDBufferMap@@UAE@XZ_SEH
0x45AC37: mov     eax, large fs:0
0x45AC3D: push    eax
0x45AC3E: sub     esp, 10h
0x45AC41: push    esi
0x45AC42: mov     eax, ds:0B30AACh
0x45AC47: xor     eax, esp
0x45AC49: push    eax
0x45AC4A: lea     eax, [esp+24h+var_C]
0x45AC4E: mov     large fs:0, eax
0x45AC54: mov     esi, ecx
0x45AC56: mov     [esp+24h+var_14], esi
0x45AC5A: mov     dword ptr [esi], offset ??_7NumericIDBufferMap@@6B@; const NumericIDBufferMap::`vftable'
0x45AC60: xor     eax, eax
0x45AC62: cmp     [esi+4], eax
0x45AC65: mov     [esp+24h+var_4], 0
0x45AC6D: jbe     short loc_45AC84
0x45AC6F: mov     edx, [esi+8]
0x45AC72: mov     ecx, edx
0x45AC74: cmp     dword ptr [ecx], 0
0x45AC77: jnz     short loc_45ACEF
0x45AC79: add     eax, 1
0x45AC7C: add     ecx, 4
0x45AC7F: cmp     eax, [esi+4]
0x45AC82: jb      short loc_45AC74
0x45AC84: xor     eax, eax
0x45AC86: test    eax, eax
0x45AC88: mov     [esp+24h+var_18], eax
0x45AC8C: jz      short loc_45ACC8
0x45AC8E: mov     edi, edi
0x45AC90: lea     eax, [esp+24h+var_1C]
0x45AC94: push    eax
0x45AC95: lea     ecx, [esp+28h+var_10]
0x45AC99: push    ecx
0x45AC9A: lea     edx, [esp+2Ch+var_18]
0x45AC9E: push    edx
0x45AC9F: mov     ecx, esi
0x45ACA1: mov     [esp+30h+var_1C], 0
0x45ACA9: call    sub_452600
0x45ACAE: mov     eax, [esp+24h+var_1C]
0x45ACB2: test    eax, eax
0x45ACB4: jz      short loc_45ACC1
0x45ACB6: push    eax; void *
0x45ACB7: mov     ecx, offset FormHeap
0x45ACBC: call    MemoryHeap_Free_checked
0x45ACC1: cmp     [esp+24h+var_18], 0
0x45ACC6: jnz     short loc_45AC90
0x45ACC8: mov     ecx, esi
0x45ACCA: call    NiTMap_Clear
0x45ACCF: mov     ecx, esi
0x45ACD1: mov     [esp+24h+var_4], 0FFFFFFFFh
0x45ACD9: call    ??1?$NiTPointerMap@IPAX@@UAE@XZ; NiTPointerMap<uint,void *>::~NiTPointerMap<uint,void *>(void)
0x45ACDE: mov     ecx, [esp+24h+var_C]
0x45ACE2: mov     large fs:0, ecx
0x45ACE9: pop     ecx
0x45ACEA: pop     esi
0x45ACEB: add     esp, 1Ch
0x45ACEE: retn
0x45ACEF: mov     eax, [edx+eax*4]
0x45ACF2: jmp     short loc_45AC86
