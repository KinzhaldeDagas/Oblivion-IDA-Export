0x8AFFA0: push    0FFFFFFFFh
0x8AFFA2: push    offset ??1bhkEntity@@UAE@XZ_SEH
0x8AFFA7: mov     eax, large fs:0
0x8AFFAD: push    eax
0x8AFFAE: push    ecx
0x8AFFAF: push    esi
0x8AFFB0: mov     eax, ds:0B30AACh
0x8AFFB5: xor     eax, esp
0x8AFFB7: push    eax
0x8AFFB8: lea     eax, [esp+18h+var_C]
0x8AFFBC: mov     large fs:0, eax
0x8AFFC2: mov     esi, ecx
0x8AFFC4: mov     [esp+18h+var_10], esi
0x8AFFC8: mov     dword ptr [esi], offset ??_7bhkEntity@@6B@; const bhkEntity::`vftable'
0x8AFFCE: mov     [esp+18h+var_4], 0
0x8AFFD6: call    sub_89D700
0x8AFFDB: sub     dword ptr ds:0BA7F8Ch, 1
0x8AFFE2: mov     ecx, esi; this
0x8AFFE4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AFFEC: call    ??1bhkWorldObject@@UAE@XZ; bhkWorldObject::~bhkWorldObject(void)
0x8AFFF1: mov     ecx, [esp+18h+var_C]
0x8AFFF5: mov     large fs:0, ecx
0x8AFFFC: pop     ecx
0x8AFFFD: pop     esi
0x8AFFFE: add     esp, 10h
0x8B0001: retn
