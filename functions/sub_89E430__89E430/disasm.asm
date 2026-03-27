0x89E430: push    0FFFFFFFFh
0x89E432: push    offset SEH_8C62B0
0x89E437: mov     eax, large fs:0
0x89E43D: push    eax
0x89E43E: push    ecx
0x89E43F: push    esi
0x89E440: mov     eax, ds:0B30AACh
0x89E445: xor     eax, esp
0x89E447: push    eax
0x89E448: lea     eax, [esp+18h+var_C]
0x89E44C: mov     large fs:0, eax
0x89E452: push    10h; Size
0x89E454: call    FormHeapAlloc
0x89E459: mov     esi, eax
0x89E45B: add     esp, 4
0x89E45E: mov     [esp+18h+var_10], esi
0x89E462: test    esi, esi
0x89E464: mov     [esp+18h+var_4], 0
0x89E46C: jz      short loc_89E4B8
0x89E46E: mov     ecx, esi; this
0x89E470: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x89E475: mov     dword ptr [esi], offset ??_7bhkAction@@6B@; const bhkAction::`vftable'
0x89E47B: mov     eax, 1
0x89E480: mov     dword ptr [esi+0Ch], 0
0x89E487: add     ds:0BA7D00h, eax
0x89E48D: mov     dword ptr [esi], offset ??_7bhkUnaryAction@@6B@; const bhkUnaryAction::`vftable'
0x89E493: add     ds:0BA7D0Ch, eax
0x89E499: mov     dword ptr [esi], offset ??_7bhkMouseSpringAction@@6B@; const bhkMouseSpringAction::`vftable'
0x89E49F: add     ds:0BA7D18h, eax
0x89E4A5: mov     eax, esi
0x89E4A7: mov     ecx, [esp+18h+var_C]
0x89E4AB: mov     large fs:0, ecx
0x89E4B2: pop     ecx
0x89E4B3: pop     esi
0x89E4B4: add     esp, 10h
0x89E4B7: retn
0x89E4B8: xor     eax, eax
0x89E4BA: mov     ecx, [esp+18h+var_C]
0x89E4BE: mov     large fs:0, ecx
0x89E4C5: pop     ecx
0x89E4C6: pop     esi
0x89E4C7: add     esp, 10h
0x89E4CA: retn
