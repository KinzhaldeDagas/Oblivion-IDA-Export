0x916150: push    0FFFFFFFFh
0x916152: push    offset ??1hkNiTriStripsShape@@UAE@XZ_SEH
0x916157: mov     eax, large fs:0
0x91615D: push    eax
0x91615E: push    ecx
0x91615F: push    esi
0x916160: push    edi
0x916161: mov     eax, ds:0B30AACh
0x916166: xor     eax, esp
0x916168: push    eax
0x916169: lea     eax, [esp+1Ch+var_C]
0x91616D: mov     large fs:0, eax
0x916173: mov     esi, ecx
0x916175: mov     [esp+1Ch+var_10], esi
0x916179: mov     dword ptr [esi], offset ??_7hkNiTriStripsShape@@6B@; const hkNiTriStripsShape::`vftable'
0x91617F: mov     eax, [esi+28h]
0x916182: test    eax, eax
0x916184: mov     [esp+1Ch+var_4], 0
0x91618C: mov     dword ptr [esi+24h], offset ??_7?$NiTLargeArray@VhkNiTriStripsData@@@@6B@; const NiTLargeArray<hkNiTriStripsData>::`vftable'
0x916193: jz      short loc_9161B2
0x916195: mov     ecx, [eax-4]
0x916198: lea     edi, [eax-4]
0x91619B: push    offset sub_7016A0; void (__thiscall *)(void *)
0x9161A0: push    ecx; int
0x9161A1: push    8; unsigned int
0x9161A3: push    eax; void *
0x9161A4: call    $LN21
0x9161A9: push    edi
0x9161AA: call    FormHeapFree
0x9161AF: add     esp, 4
0x9161B2: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x9161B8: mov     ecx, [esp+1Ch+var_C]
0x9161BC: mov     large fs:0, ecx
0x9161C3: pop     ecx
0x9161C4: pop     edi
0x9161C5: pop     esi
0x9161C6: add     esp, 10h
0x9161C9: retn
