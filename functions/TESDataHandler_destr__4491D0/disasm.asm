0x4491D0: push    0FFFFFFFFh
0x4491D2: push    offset TESDataHandler_destr_SEH
0x4491D7: mov     eax, large fs:0
0x4491DD: push    eax
0x4491DE: push    ecx
0x4491DF: push    esi
0x4491E0: push    edi
0x4491E1: mov     eax, ds:0B30AACh
0x4491E6: xor     eax, esp
0x4491E8: push    eax
0x4491E9: lea     eax, [esp+1Ch+var_C]
0x4491ED: mov     large fs:0, eax
0x4491F3: mov     esi, ecx
0x4491F5: mov     [esp+1Ch+var_10], esi
0x4491F9: mov     edi, [esi+0CDCh]
0x4491FF: test    edi, edi
0x449201: mov     [esp+1Ch+var_4], 1
0x449209: jz      short loc_44921B
0x44920B: mov     ecx, edi
0x44920D: call    ContainerExtraData_destr
0x449212: push    edi
0x449213: call    FormHeapFree
0x449218: add     esp, 4
0x44921B: lea     eax, [esi+8C8h]
0x449221: push    eax
0x449222: call    sub_451100
0x449227: mov     edi, [esi]
0x449229: add     esp, 4
0x44922C: test    edi, edi
0x44922E: jz      short loc_449240
0x449230: mov     ecx, edi
0x449232: call    TESObjectListHead_destr
0x449237: push    edi
0x449238: call    FormHeapFree
0x44923D: add     esp, 4
0x449240: mov     ecx, [esi+0BCh]
0x449246: test    ecx, ecx
0x449248: jz      short loc_449252
0x44924A: mov     edx, [ecx]
0x44924C: mov     eax, [edx]
0x44924E: push    1
0x449250: call    eax
0x449252: mov     eax, [esi+0CD8h]
0x449258: push    eax
0x449259: call    FormHeapFree
0x44925E: mov     ecx, ds:0B362C0h
0x449264: add     esp, 4
0x449267: test    ecx, ecx
0x449269: mov     edi, ecx
0x44926B: jz      short loc_44927B
0x44926D: call    sub_5219B0
0x449272: push    edi
0x449273: call    FormHeapFree
0x449278: add     esp, 4
0x44927B: mov     ecx, offset TESForm_FormIDMap
0x449280: mov     dword ptr ds:0B362C0h, 0
0x44928A: call    NiTMap_Clear
0x44928F: push    offset ??1TESSkill@@UAE@XZ; void (__thiscall *)(void *)
0x449294: push    15h; int
0x449296: push    60h ; '`'; unsigned int
0x449298: lea     ecx, [esi+0D8h]
0x44929E: push    ecx; void *
0x44929F: mov     byte ptr [esp+2Ch+var_4], 0
0x4492A4: call    $LN21
0x4492A9: mov     edx, [esi+0C4h]
0x4492AF: push    edx
0x4492B0: mov     dword ptr [esi+0C0h], offset ??_7?$NiTLargeArray@PAVTESObjectCELL@@@@6B@; const NiTLargeArray<TESObjectCELL *>::`vftable'
0x4492BA: call    FormHeapFree
0x4492BF: add     esp, 4
0x4492C2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4492C6: mov     large fs:0, ecx
0x4492CD: pop     ecx
0x4492CE: pop     edi
0x4492CF: pop     esi
0x4492D0: add     esp, 10h
0x4492D3: retn
