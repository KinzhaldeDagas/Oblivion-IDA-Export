0x4BE4E0: push    0FFFFFFFFh
0x4BE4E2: push    offset SEH_4BE420
0x4BE4E7: mov     eax, large fs:0
0x4BE4ED: push    eax
0x4BE4EE: sub     esp, 18h
0x4BE4F1: push    ebx
0x4BE4F2: push    ebp
0x4BE4F3: push    esi
0x4BE4F4: push    edi
0x4BE4F5: mov     eax, ds:0B30AACh
0x4BE4FA: xor     eax, esp
0x4BE4FC: push    eax
0x4BE4FD: lea     eax, [esp+38h+var_C]
0x4BE501: mov     large fs:0, eax
0x4BE507: mov     edi, ecx
0x4BE509: xor     ebx, ebx
0x4BE50B: mov     [esp+38h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable'
0x4BE513: mov     [esp+38h+var_18], ebx
0x4BE517: mov     [esp+38h+var_14], ebx
0x4BE51B: mov     byte ptr [esp+38h+var_10], bl
0x4BE51F: mov     ebp, ds:0A2807Ch
0x4BE525: mov     [esp+38h+var_4], ebx
0x4BE529: lea     esp, [esp+0]
0x4BE530: mov     [esp+38h+var_24], ebx
0x4BE534: push    1
0x4BE536: lea     eax, [esp+3Ch+var_24]
0x4BE53A: push    eax
0x4BE53B: lea     ecx, [esp+40h+var_20]
0x4BE53F: push    ecx
0x4BE540: lea     edx, [esp+44h+var_1C]
0x4BE544: push    edx
0x4BE545: mov     ecx, edi
0x4BE547: mov     byte ptr [esp+48h+var_4], 1
0x4BE54C: call    sub_642D90
0x4BE551: test    al, al
0x4BE553: mov     esi, [esp+38h+var_24]
0x4BE557: jz      short loc_4BE568
0x4BE559: cmp     dword ptr [esi+0Ch], 4
0x4BE55D: jl      short loc_4BE568
0x4BE55F: mov     eax, [esi]
0x4BE561: mov     edx, [eax+14h]
0x4BE564: mov     ecx, esi
0x4BE566: call    edx
0x4BE568: cmp     esi, ebx
0x4BE56A: mov     byte ptr [esp+38h+var_4], bl
0x4BE56E: jz      short loc_4BE584
0x4BE570: lea     eax, [esi+8]
0x4BE573: push    eax; lpAddend
0x4BE574: call    ebp ; InterlockedDecrement
0x4BE576: test    eax, eax
0x4BE578: jnz     short loc_4BE584
0x4BE57A: mov     edx, [esi]
0x4BE57C: mov     eax, [edx]
0x4BE57E: push    1
0x4BE580: mov     ecx, esi
0x4BE582: call    eax
0x4BE584: test    byte ptr [esp+38h+var_10], 2
0x4BE589: jz      short loc_4BE530
0x4BE58B: mov     ecx, dword ptr [esp+38h+var_C]
0x4BE58F: mov     large fs:0, ecx
0x4BE596: pop     ecx
0x4BE597: pop     edi
0x4BE598: pop     esi
0x4BE599: pop     ebp
0x4BE59A: pop     ebx
0x4BE59B: add     esp, 24h
0x4BE59E: retn
