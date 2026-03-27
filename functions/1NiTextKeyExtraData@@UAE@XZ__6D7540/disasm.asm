0x6D7540: push    0FFFFFFFFh
0x6D7542: push    offset SEH_9A22E0
0x6D7547: mov     eax, large fs:0
0x6D754D: push    eax
0x6D754E: push    ecx
0x6D754F: push    esi
0x6D7550: push    edi
0x6D7551: mov     eax, ds:0B30AACh
0x6D7556: xor     eax, esp
0x6D7558: push    eax
0x6D7559: lea     eax, [esp+1Ch+var_C]
0x6D755D: mov     large fs:0, eax
0x6D7563: mov     esi, ecx
0x6D7565: mov     [esp+1Ch+var_10], esi
0x6D7569: mov     dword ptr [esi], offset ??_7NiTextKeyExtraData@@6B@; const NiTextKeyExtraData::`vftable'
0x6D756F: mov     eax, [esi+10h]
0x6D7572: test    eax, eax
0x6D7574: mov     [esp+1Ch+var_4], 0
0x6D757C: jz      short loc_6D759B
0x6D757E: mov     ecx, [eax-4]
0x6D7581: lea     edi, [eax-4]
0x6D7584: push    offset sub_6EC6B0; void (__thiscall *)(void *)
0x6D7589: push    ecx; int
0x6D758A: push    8; unsigned int
0x6D758C: push    eax; void *
0x6D758D: call    $LN21
0x6D7592: push    edi
0x6D7593: call    FormHeapFree
0x6D7598: add     esp, 4
0x6D759B: mov     ecx, esi
0x6D759D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D75A5: call    NiExtraData_dtor
0x6D75AA: mov     ecx, [esp+1Ch+var_C]
0x6D75AE: mov     large fs:0, ecx
0x6D75B5: pop     ecx
0x6D75B6: pop     edi
0x6D75B7: pop     esi
0x6D75B8: add     esp, 10h
0x6D75BB: retn
