0x4298E0: push    0FFFFFFFFh
0x4298E2: push    offset ??1ExtraSound@@UAE@XZ_SEH
0x4298E7: mov     eax, large fs:0
0x4298ED: push    eax
0x4298EE: push    ecx
0x4298EF: push    esi
0x4298F0: push    edi
0x4298F1: mov     eax, ___security_cookie
0x4298F6: xor     eax, esp
0x4298F8: push    eax
0x4298F9: lea     eax, [esp+1Ch+var_C]
0x4298FD: mov     large fs:0, eax
0x429903: mov     esi, ecx
0x429905: mov     [esp+1Ch+var_10], esi
0x429909: mov     dword ptr [esi], offset ??_7ExtraAnim@@6B@; const ExtraAnim::`vftable'
0x42990F: mov     edi, [esi+0Ch]
0x429912: test    edi, edi
0x429914: mov     [esp+1Ch+var_4], 0
0x42991C: jz      short loc_42992E
0x42991E: mov     ecx, edi; this
0x429920: call    DisposeActorAnimData
0x429925: push    edi
0x429926: call    FormHeapFree
0x42992B: add     esp, 4
0x42992E: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x429934: mov     ecx, [esp+1Ch+var_C]
0x429938: mov     large fs:0, ecx
0x42993F: pop     ecx
0x429940: pop     edi
0x429941: pop     esi
0x429942: add     esp, 10h
0x429945: retn
