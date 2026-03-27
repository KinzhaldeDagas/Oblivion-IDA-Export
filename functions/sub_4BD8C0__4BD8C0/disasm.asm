0x4BD8C0: push    0FFFFFFFFh
0x4BD8C2: push    offset SEH_4BD8C0
0x4BD8C7: mov     eax, large fs:0
0x4BD8CD: push    eax
0x4BD8CE: sub     esp, 18h
0x4BD8D1: push    ebx
0x4BD8D2: push    ebp
0x4BD8D3: push    esi
0x4BD8D4: push    edi
0x4BD8D5: mov     eax, ds:0B30AACh
0x4BD8DA: xor     eax, esp
0x4BD8DC: push    eax
0x4BD8DD: lea     eax, [esp+38h+var_C]
0x4BD8E1: mov     large fs:0, eax
0x4BD8E7: mov     edi, ecx
0x4BD8E9: xor     ebx, ebx
0x4BD8EB: mov     [esp+38h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@IV?$NiPointer@VDistantLODLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<DistantLODLoaderTask>>::LockFreeMapIterator::`vftable'
0x4BD8F3: mov     [esp+38h+var_18], ebx
0x4BD8F7: mov     [esp+38h+var_14], ebx
0x4BD8FB: mov     byte ptr [esp+38h+var_10], bl
0x4BD8FF: mov     ebp, ds:0A2807Ch
0x4BD905: mov     [esp+38h+var_4], ebx
0x4BD909: lea     esp, [esp+0]
0x4BD910: mov     [esp+38h+var_24], ebx
0x4BD914: push    1
0x4BD916: lea     eax, [esp+3Ch+var_24]
0x4BD91A: push    eax
0x4BD91B: lea     ecx, [esp+40h+var_20]
0x4BD91F: push    ecx
0x4BD920: lea     edx, [esp+44h+var_1C]
0x4BD924: push    edx
0x4BD925: mov     ecx, edi
0x4BD927: mov     byte ptr [esp+48h+var_4], 1
0x4BD92C: call    sub_642D90
0x4BD931: test    al, al
0x4BD933: mov     esi, [esp+38h+var_24]
0x4BD937: jz      short loc_4BD945
0x4BD939: mov     ecx, ds:0B33A10h
0x4BD93F: push    esi
0x4BD940: call    sub_432130
0x4BD945: cmp     esi, ebx
0x4BD947: mov     byte ptr [esp+38h+var_4], bl
0x4BD94B: jz      short loc_4BD961
0x4BD94D: lea     eax, [esi+8]
0x4BD950: push    eax; lpAddend
0x4BD951: call    ebp ; InterlockedDecrement
0x4BD953: test    eax, eax
0x4BD955: jnz     short loc_4BD961
0x4BD957: mov     edx, [esi]
0x4BD959: mov     eax, [edx]
0x4BD95B: push    1
0x4BD95D: mov     ecx, esi
0x4BD95F: call    eax
0x4BD961: test    byte ptr [esp+38h+var_10], 2
0x4BD966: jz      short loc_4BD910
0x4BD968: mov     ecx, dword ptr [esp+38h+var_C]
0x4BD96C: mov     large fs:0, ecx
0x4BD973: pop     ecx
0x4BD974: pop     edi
0x4BD975: pop     esi
0x4BD976: pop     ebp
0x4BD977: pop     ebx
0x4BD978: add     esp, 24h
0x4BD97B: retn
