0x4BE420: push    0FFFFFFFFh
0x4BE422: push    offset SEH_4BE420
0x4BE427: mov     eax, large fs:0
0x4BE42D: push    eax
0x4BE42E: sub     esp, 18h
0x4BE431: push    ebx
0x4BE432: push    ebp
0x4BE433: push    esi
0x4BE434: push    edi
0x4BE435: mov     eax, ds:0B30AACh
0x4BE43A: xor     eax, esp
0x4BE43C: push    eax
0x4BE43D: lea     eax, [esp+38h+var_C]
0x4BE441: mov     large fs:0, eax
0x4BE447: mov     edi, ecx
0x4BE449: xor     ebx, ebx
0x4BE44B: mov     [esp+38h+var_1C], offset ??_7LockFreeMapIterator@?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable'
0x4BE453: mov     [esp+38h+var_18], ebx
0x4BE457: mov     [esp+38h+var_14], ebx
0x4BE45B: mov     byte ptr [esp+38h+var_10], bl
0x4BE45F: mov     ebp, ds:0A2807Ch
0x4BE465: mov     [esp+38h+var_4], ebx
0x4BE469: lea     esp, [esp+0]
0x4BE470: mov     [esp+38h+var_24], ebx
0x4BE474: push    1
0x4BE476: lea     eax, [esp+3Ch+var_24]
0x4BE47A: push    eax
0x4BE47B: lea     ecx, [esp+40h+var_20]
0x4BE47F: push    ecx
0x4BE480: lea     edx, [esp+44h+var_1C]
0x4BE484: push    edx
0x4BE485: mov     ecx, edi
0x4BE487: mov     byte ptr [esp+48h+var_4], 1
0x4BE48C: call    sub_642D90
0x4BE491: test    al, al
0x4BE493: mov     esi, [esp+38h+var_24]
0x4BE497: jz      short loc_4BE4A5
0x4BE499: mov     ecx, ds:0B33A10h
0x4BE49F: push    esi
0x4BE4A0: call    sub_432130
0x4BE4A5: cmp     esi, ebx
0x4BE4A7: mov     byte ptr [esp+38h+var_4], bl
0x4BE4AB: jz      short loc_4BE4C1
0x4BE4AD: lea     eax, [esi+8]
0x4BE4B0: push    eax; lpAddend
0x4BE4B1: call    ebp ; InterlockedDecrement
0x4BE4B3: test    eax, eax
0x4BE4B5: jnz     short loc_4BE4C1
0x4BE4B7: mov     edx, [esi]
0x4BE4B9: mov     eax, [edx]
0x4BE4BB: push    1
0x4BE4BD: mov     ecx, esi
0x4BE4BF: call    eax
0x4BE4C1: test    byte ptr [esp+38h+var_10], 2
0x4BE4C6: jz      short loc_4BE470
0x4BE4C8: mov     ecx, dword ptr [esp+38h+var_C]
0x4BE4CC: mov     large fs:0, ecx
0x4BE4D3: pop     ecx
0x4BE4D4: pop     edi
0x4BE4D5: pop     esi
0x4BE4D6: pop     ebp
0x4BE4D7: pop     ebx
0x4BE4D8: add     esp, 24h
0x4BE4DB: retn
