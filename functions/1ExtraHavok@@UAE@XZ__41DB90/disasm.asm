0x41DB90: push    0FFFFFFFFh
0x41DB92: push    offset ??1ExtraHavok@@UAE@XZ_SEH
0x41DB97: mov     eax, large fs:0
0x41DB9D: push    eax
0x41DB9E: push    ecx
0x41DB9F: push    ebp
0x41DBA0: push    esi
0x41DBA1: push    edi
0x41DBA2: mov     eax, ___security_cookie
0x41DBA7: xor     eax, esp
0x41DBA9: push    eax
0x41DBAA: lea     eax, [esp+20h+var_C]
0x41DBAE: mov     large fs:0, eax
0x41DBB4: mov     esi, ecx
0x41DBB6: mov     [esp+20h+var_10], esi
0x41DBBA: mov     dword ptr [esi], offset ??_7ExtraHavok@@6B@; const ExtraHavok::`vftable'
0x41DBC0: mov     edi, [esi+10h]
0x41DBC3: test    edi, edi
0x41DBC5: mov     ebp, ds:InterlockedDecrement
0x41DBCB: mov     [esp+20h+var_4], 2
0x41DBD3: jz      short loc_41DBF4
0x41DBD5: lea     eax, [edi+4]
0x41DBD8: push    eax; lpAddend
0x41DBD9: call    ebp ; InterlockedDecrement
0x41DBDB: test    eax, eax
0x41DBDD: jnz     short loc_41DBED
0x41DBDF: test    edi, edi
0x41DBE1: jz      short loc_41DBED
0x41DBE3: mov     edx, [edi]
0x41DBE5: mov     eax, [edx]
0x41DBE7: push    1
0x41DBE9: mov     ecx, edi
0x41DBEB: call    eax
0x41DBED: mov     dword ptr [esi+10h], 0
0x41DBF4: mov     edi, [esi+0Ch]
0x41DBF7: test    edi, edi
0x41DBF9: jz      short loc_41DC1A
0x41DBFB: lea     ecx, [edi+4]
0x41DBFE: push    ecx; lpAddend
0x41DBFF: call    ebp ; InterlockedDecrement
0x41DC01: test    eax, eax
0x41DC03: jnz     short loc_41DC13
0x41DC05: test    edi, edi
0x41DC07: jz      short loc_41DC13
0x41DC09: mov     edx, [edi]
0x41DC0B: mov     eax, [edx]
0x41DC0D: push    1
0x41DC0F: mov     ecx, edi
0x41DC11: call    eax
0x41DC13: mov     dword ptr [esi+0Ch], 0
0x41DC1A: mov     edi, [esi+10h]
0x41DC1D: test    edi, edi
0x41DC1F: mov     byte ptr [esp+20h+var_4], 1
0x41DC24: jz      short loc_41DC3E
0x41DC26: lea     ecx, [edi+4]
0x41DC29: push    ecx; lpAddend
0x41DC2A: call    ebp ; InterlockedDecrement
0x41DC2C: test    eax, eax
0x41DC2E: jnz     short loc_41DC3E
0x41DC30: test    edi, edi
0x41DC32: jz      short loc_41DC3E
0x41DC34: mov     edx, [edi]
0x41DC36: mov     eax, [edx]
0x41DC38: push    1
0x41DC3A: mov     ecx, edi
0x41DC3C: call    eax
0x41DC3E: mov     edi, [esi+0Ch]
0x41DC41: test    edi, edi
0x41DC43: mov     byte ptr [esp+20h+var_4], 0
0x41DC48: jz      short loc_41DC62
0x41DC4A: lea     ecx, [edi+4]
0x41DC4D: push    ecx; lpAddend
0x41DC4E: call    ebp ; InterlockedDecrement
0x41DC50: test    eax, eax
0x41DC52: jnz     short loc_41DC62
0x41DC54: test    edi, edi
0x41DC56: jz      short loc_41DC62
0x41DC58: mov     edx, [edi]
0x41DC5A: mov     eax, [edx]
0x41DC5C: push    1
0x41DC5E: mov     ecx, edi
0x41DC60: call    eax
0x41DC62: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x41DC68: mov     ecx, dword ptr [esp+20h+var_C]
0x41DC6C: mov     large fs:0, ecx
0x41DC73: pop     ecx
0x41DC74: pop     edi
0x41DC75: pop     esi
0x41DC76: pop     ebp
0x41DC77: add     esp, 10h
0x41DC7A: retn
