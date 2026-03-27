0x41D870: push    0FFFFFFFFh
0x41D872: push    offset ??1ExtraCell3D@@UAE@XZ_SEH
0x41D877: mov     eax, large fs:0
0x41D87D: push    eax
0x41D87E: push    ecx
0x41D87F: push    ebp
0x41D880: push    esi
0x41D881: push    edi
0x41D882: mov     eax, ___security_cookie
0x41D887: xor     eax, esp
0x41D889: push    eax
0x41D88A: lea     eax, [esp+20h+var_C]
0x41D88E: mov     large fs:0, eax
0x41D894: mov     esi, ecx
0x41D896: mov     [esp+20h+var_10], esi
0x41D89A: mov     dword ptr [esi], offset ??_7ExtraCell3D@@6B@; const ExtraCell3D::`vftable'
0x41D8A0: mov     edi, [esi+0Ch]
0x41D8A3: test    edi, edi
0x41D8A5: mov     ebp, ds:InterlockedDecrement
0x41D8AB: mov     [esp+20h+var_4], 1
0x41D8B3: jz      short loc_41D8D4
0x41D8B5: lea     eax, [edi+4]
0x41D8B8: push    eax; lpAddend
0x41D8B9: call    ebp ; InterlockedDecrement
0x41D8BB: test    eax, eax
0x41D8BD: jnz     short loc_41D8CD
0x41D8BF: test    edi, edi
0x41D8C1: jz      short loc_41D8CD
0x41D8C3: mov     edx, [edi]
0x41D8C5: mov     eax, [edx]
0x41D8C7: push    1
0x41D8C9: mov     ecx, edi
0x41D8CB: call    eax
0x41D8CD: mov     dword ptr [esi+0Ch], 0
0x41D8D4: mov     edi, [esi+0Ch]
0x41D8D7: test    edi, edi
0x41D8D9: mov     byte ptr [esp+20h+var_4], 0
0x41D8DE: jz      short loc_41D8F8
0x41D8E0: lea     ecx, [edi+4]
0x41D8E3: push    ecx; lpAddend
0x41D8E4: call    ebp ; InterlockedDecrement
0x41D8E6: test    eax, eax
0x41D8E8: jnz     short loc_41D8F8
0x41D8EA: test    edi, edi
0x41D8EC: jz      short loc_41D8F8
0x41D8EE: mov     edx, [edi]
0x41D8F0: mov     eax, [edx]
0x41D8F2: push    1
0x41D8F4: mov     ecx, edi
0x41D8F6: call    eax
0x41D8F8: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x41D8FE: mov     ecx, dword ptr [esp+20h+var_C]
0x41D902: mov     large fs:0, ecx
0x41D909: pop     ecx
0x41D90A: pop     edi
0x41D90B: pop     esi
0x41D90C: pop     ebp
0x41D90D: add     esp, 10h
0x41D910: retn
