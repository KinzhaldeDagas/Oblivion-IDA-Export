0x5341D0: push    0FFFFFFFFh
0x5341D2: push    offset ??1HavokStreambufWriter@@UAE@XZ_SEH
0x5341D7: mov     eax, large fs:0
0x5341DD: push    eax
0x5341DE: push    ecx
0x5341DF: push    ebp
0x5341E0: push    esi
0x5341E1: push    edi
0x5341E2: mov     eax, ds:0B30AACh
0x5341E7: xor     eax, esp
0x5341E9: push    eax; ArgList
0x5341EA: lea     eax, [esp+20h+var_C]
0x5341EE: mov     large fs:0, eax
0x5341F4: mov     esi, ecx
0x5341F6: mov     [esp+20h+var_10], esi
0x5341FA: mov     dword ptr [esi], offset ??_7HavokStreambufWriter@@6B@; const HavokStreambufWriter::`vftable'
0x534200: cmp     byte ptr [esi+0Ch], 0
0x534204: mov     [esp+20h+var_4], 0
0x53420C: jz      short loc_534236
0x53420E: mov     edi, ds:0B34D90h
0x534214: mov     eax, [esi+8]
0x534217: lea     ebp, [edi+10h]
0x53421A: push    ebp; Format
0x53421B: push    eax; int
0x53421C: call    sub_533D30
0x534221: mov     [edi+0Ch], eax
0x534224: mov     byte ptr [ebp+0], 0
0x534228: mov     dword ptr [edi+8], 0
0x53422F: add     esp, 8
0x534232: mov     byte ptr [esi+0Ch], 0
0x534236: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x53423C: mov     ecx, [esp+20h+var_C]
0x534240: mov     large fs:0, ecx
0x534247: pop     ecx
0x534248: pop     edi
0x534249: pop     esi
0x53424A: pop     ebp
0x53424B: add     esp, 10h
0x53424E: retn
