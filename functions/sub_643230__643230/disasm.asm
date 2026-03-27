0x643230: push    0FFFFFFFFh
0x643232: push    offset SEH_643230
0x643237: mov     eax, large fs:0
0x64323D: push    eax
0x64323E: sub     esp, 1Ch
0x643241: push    ebx
0x643242: push    ebp
0x643243: push    esi
0x643244: push    edi
0x643245: mov     eax, ds:0B30AACh
0x64324A: xor     eax, esp
0x64324C: push    eax
0x64324D: lea     eax, [esp+3Ch+var_C]
0x643251: mov     large fs:0, eax
0x643257: mov     esi, ecx
0x643259: mov     [esp+3Ch+var_20], esi
0x64325D: xor     ebx, ebx
0x64325F: mov     [esp+3Ch+var_4], ebx
0x643263: mov     [esp+3Ch+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'
0x64326B: mov     [esp+3Ch+var_18], ebx
0x64326F: mov     [esp+3Ch+var_14], ebx
0x643273: mov     [esp+3Ch+var_10], bl
0x643277: mov     ebp, ds:0A2807Ch
0x64327D: lea     ecx, [ecx+0]
0x643280: mov     [esp+3Ch+var_24], ebx
0x643284: mov     [esp+3Ch+var_28], ebx
0x643288: push    1
0x64328A: lea     eax, [esp+40h+var_28]
0x64328E: push    eax
0x64328F: lea     ecx, [esp+44h+var_24]
0x643293: push    ecx
0x643294: lea     edx, [esp+48h+var_1C]
0x643298: push    edx
0x643299: mov     ecx, esi
0x64329B: mov     byte ptr [esp+4Ch+var_4], 2
0x6432A0: call    sub_642D90
0x6432A5: test    al, al
0x6432A7: mov     edi, [esp+3Ch+var_28]
0x6432AB: jz      short loc_6432C7
0x6432AD: mov     ecx, [esp+3Ch+var_24]
0x6432B1: mov     eax, [esi]
0x6432B3: mov     edx, [eax+10h]
0x6432B6: push    ecx
0x6432B7: mov     ecx, esi
0x6432B9: call    edx
0x6432BB: mov     ecx, ds:0B33A10h
0x6432C1: push    edi
0x6432C2: call    sub_432130
0x6432C7: cmp     edi, ebx
0x6432C9: mov     byte ptr [esp+3Ch+var_4], 1
0x6432CE: jz      short loc_6432E4
0x6432D0: lea     eax, [edi+8]
0x6432D3: push    eax; lpAddend
0x6432D4: call    ebp ; InterlockedDecrement
0x6432D6: test    eax, eax
0x6432D8: jnz     short loc_6432E4
0x6432DA: mov     edx, [edi]
0x6432DC: mov     eax, [edx]
0x6432DE: push    1
0x6432E0: mov     ecx, edi
0x6432E2: call    eax
0x6432E4: test    [esp+3Ch+var_10], 2
0x6432E9: jz      short loc_643280
0x6432EB: push    1
0x6432ED: mov     ecx, esi
0x6432EF: mov     [esp+40h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::LockFreeMapIterator::`vftable'
0x6432F7: mov     [esp+40h+var_4], 0FFFFFFFFh
0x6432FF: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVActor@@V?$NiPointer@VLipTask@@@@@@6B@; const LockFreeMap<Actor *,NiPointer<LipTask>>::`vftable'
0x643305: call    sub_642E50
0x64330A: mov     ecx, [esi+0Ch]
0x64330D: push    ecx
0x64330E: call    FormHeapFree
0x643313: mov     edx, [esi+4]
0x643316: mov     [esp+40h+var_20], edx
0x64331A: mov     eax, [esp+40h+var_20]
0x64331E: push    eax
0x64331F: call    FormHeapFree
0x643324: add     esp, 8
0x643327: mov     ecx, [esp+3Ch+var_C]
0x64332B: mov     large fs:0, ecx
0x643332: pop     ecx
0x643333: pop     edi
0x643334: pop     esi
0x643335: pop     ebp
0x643336: pop     ebx
0x643337: add     esp, 28h
0x64333A: retn
