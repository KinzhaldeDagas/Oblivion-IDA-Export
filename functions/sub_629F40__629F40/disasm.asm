0x629F40: push    ebx
0x629F41: push    esi
0x629F42: mov     esi, ecx
0x629F44: mov     eax, [esi]
0x629F46: mov     edx, [eax+2C0h]
0x629F4C: push    edi
0x629F4D: call    edx
0x629F4F: mov     eax, [esi]
0x629F51: mov     edx, [eax+184h]
0x629F57: mov     ecx, esi
0x629F59: call    edx
0x629F5B: mov     edi, [esp+0Ch+arg_0]
0x629F5F: mov     ecx, edi; this
0x629F61: mov     ebx, eax
0x629F63: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x629F68: cmp     eax, 5
0x629F6B: jz      loc_62A001
0x629F71: mov     ecx, edi; this
0x629F73: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x629F78: cmp     eax, 3
0x629F7B: jz      loc_62A001
0x629F81: cmp     byte ptr [edi+0C8h], 0
0x629F88: jnz     short loc_629FD9
0x629F8A: test    ebx, ebx
0x629F8C: jz      short loc_629F98
0x629F8E: mov     eax, [ebx+1Ch]
0x629F91: shr     eax, 0Dh
0x629F94: test    al, 1
0x629F96: jnz     short loc_629FD9
0x629F98: mov     edx, [edi]
0x629F9A: mov     eax, [edx+334h]
0x629FA0: push    1
0x629FA2: mov     ecx, edi
0x629FA4: call    eax
0x629FA6: test    al, al
0x629FA8: jnz     short loc_629FD9
0x629FAA: cmp     [esp+0Ch+arg_10], al
0x629FAE: jnz     short loc_629FD9
0x629FB0: cmp     [esp+0Ch+arg_14], al
0x629FB4: jnz     short loc_629FF6
0x629FB6: mov     edx, [esi]
0x629FB8: mov     eax, [edx+2C0h]
0x629FBE: mov     ecx, esi
0x629FC0: call    eax
0x629FC2: fld     [esp+0Ch+arg_4]
0x629FC6: test    ax, 200h
0x629FCA: jz      short loc_629FE4
0x629FCC: fld     [esp+0Ch+arg_8]
0x629FD0: fcompp
0x629FD2: fnstsw  ax
0x629FD4: test    ah, 41h
0x629FD7: jz      short loc_629FF6
0x629FD9: pop     edi
0x629FDA: pop     esi
0x629FDB: mov     eax, 201h
0x629FE0: pop     ebx
0x629FE1: retn    18h
0x629FE4: fld     dword ptr [esp+0Ch+arg_C]
0x629FE8: fcompp
0x629FEA: fnstsw  ax
0x629FEC: test    ah, 5
0x629FEF: mov     eax, 201h
0x629FF4: jnp     short loc_62A003
0x629FF6: pop     edi
0x629FF7: pop     esi
0x629FF8: mov     eax, 101h
0x629FFD: pop     ebx
0x629FFE: retn    18h
0x62A001: xor     eax, eax
0x62A003: pop     edi
0x62A004: pop     esi
0x62A005: pop     ebx
0x62A006: retn    18h
