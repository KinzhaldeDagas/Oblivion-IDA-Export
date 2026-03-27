0x53C630: push    0FFFFFFFFh
0x53C632: push    offset ??1Moon@@UAE@XZ_SEH
0x53C637: mov     eax, large fs:0
0x53C63D: push    eax
0x53C63E: sub     esp, 8
0x53C641: push    ebx
0x53C642: push    ebp
0x53C643: push    esi
0x53C644: push    edi
0x53C645: mov     eax, ds:0B30AACh
0x53C64A: xor     eax, esp
0x53C64C: push    eax
0x53C64D: lea     eax, [esp+28h+var_C]
0x53C651: mov     large fs:0, eax
0x53C657: mov     esi, ecx
0x53C659: mov     [esp+28h+var_10], esi
0x53C65D: mov     dword ptr [esi], offset ??_7Moon@@6B@; const Moon::`vftable'
0x53C663: mov     edi, [esi+14h]
0x53C666: mov     ebp, ds:0A2807Ch
0x53C66C: xor     ebx, ebx
0x53C66E: cmp     edi, ebx
0x53C670: mov     [esp+28h+var_4], 5
0x53C678: jz      short loc_53C695
0x53C67A: lea     eax, [edi+4]
0x53C67D: push    eax; lpAddend
0x53C67E: call    ebp ; InterlockedDecrement
0x53C680: test    eax, eax
0x53C682: jnz     short loc_53C692
0x53C684: cmp     edi, ebx
0x53C686: jz      short loc_53C692
0x53C688: mov     edx, [edi]
0x53C68A: mov     eax, [edx]
0x53C68C: push    1
0x53C68E: mov     ecx, edi
0x53C690: call    eax
0x53C692: mov     [esi+14h], ebx
0x53C695: mov     edi, [esi+10h]
0x53C698: cmp     edi, ebx
0x53C69A: jz      short loc_53C6B7
0x53C69C: lea     ecx, [edi+4]
0x53C69F: push    ecx; lpAddend
0x53C6A0: call    ebp ; InterlockedDecrement
0x53C6A2: test    eax, eax
0x53C6A4: jnz     short loc_53C6B4
0x53C6A6: cmp     edi, ebx
0x53C6A8: jz      short loc_53C6B4
0x53C6AA: mov     edx, [edi]
0x53C6AC: mov     eax, [edx]
0x53C6AE: push    1
0x53C6B0: mov     ecx, edi
0x53C6B2: call    eax
0x53C6B4: mov     [esi+10h], ebx
0x53C6B7: mov     edi, [esi+0Ch]
0x53C6BA: cmp     edi, ebx
0x53C6BC: jz      short loc_53C6D9
0x53C6BE: lea     ecx, [edi+4]
0x53C6C1: push    ecx; lpAddend
0x53C6C2: call    ebp ; InterlockedDecrement
0x53C6C4: test    eax, eax
0x53C6C6: jnz     short loc_53C6D6
0x53C6C8: cmp     edi, ebx
0x53C6CA: jz      short loc_53C6D6
0x53C6CC: mov     edx, [edi]
0x53C6CE: mov     eax, [edx]
0x53C6D0: push    1
0x53C6D2: mov     ecx, edi
0x53C6D4: call    eax
0x53C6D6: mov     [esi+0Ch], ebx
0x53C6D9: mov     edi, [esi+8]
0x53C6DC: cmp     edi, ebx
0x53C6DE: jz      short loc_53C6FB
0x53C6E0: lea     ecx, [edi+4]
0x53C6E3: push    ecx; lpAddend
0x53C6E4: call    ebp ; InterlockedDecrement
0x53C6E6: test    eax, eax
0x53C6E8: jnz     short loc_53C6F8
0x53C6EA: cmp     edi, ebx
0x53C6EC: jz      short loc_53C6F8
0x53C6EE: mov     edx, [edi]
0x53C6F0: mov     eax, [edx]
0x53C6F2: push    1
0x53C6F4: mov     ecx, edi
0x53C6F6: call    eax
0x53C6F8: mov     [esi+8], ebx
0x53C6FB: mov     eax, [esi+4]
0x53C6FE: cmp     [eax+1Ch], ebx
0x53C701: jz      short loc_53C738
0x53C703: mov     ecx, [eax+1Ch]
0x53C706: mov     edx, [ecx]
0x53C708: mov     edx, [edx+88h]
0x53C70E: push    eax
0x53C70F: lea     eax, [esp+2Ch+var_14]
0x53C713: push    eax
0x53C714: call    edx
0x53C716: mov     eax, [esp+28h+var_14]
0x53C71A: cmp     eax, ebx
0x53C71C: jz      short loc_53C738
0x53C71E: mov     edi, eax
0x53C720: add     eax, 4
0x53C723: push    eax; lpAddend
0x53C724: call    ebp ; InterlockedDecrement
0x53C726: test    eax, eax
0x53C728: jnz     short loc_53C738
0x53C72A: cmp     edi, ebx
0x53C72C: jz      short loc_53C738
0x53C72E: mov     eax, [edi]
0x53C730: mov     edx, [eax]
0x53C732: push    1
0x53C734: mov     ecx, edi
0x53C736: call    edx
0x53C738: mov     edi, [esi+4]
0x53C73B: cmp     edi, ebx
0x53C73D: jz      short loc_53C75A
0x53C73F: lea     eax, [edi+4]
0x53C742: push    eax; lpAddend
0x53C743: call    ebp ; InterlockedDecrement
0x53C745: test    eax, eax
0x53C747: jnz     short loc_53C757
0x53C749: cmp     edi, ebx
0x53C74B: jz      short loc_53C757
0x53C74D: mov     edx, [edi]
0x53C74F: mov     eax, [edx]
0x53C751: push    1
0x53C753: mov     ecx, edi
0x53C755: call    eax
0x53C757: mov     [esi+4], ebx
0x53C75A: push    offset BSStringT_Clear; void (__thiscall *)(void *)
0x53C75F: push    8; int
0x53C761: push    8; unsigned int
0x53C763: lea     ecx, [esi+18h]
0x53C766: push    ecx; void *
0x53C767: mov     byte ptr [esp+38h+var_4], 4
0x53C76C: call    $LN21
0x53C771: mov     edi, [esi+14h]
0x53C774: cmp     edi, ebx
0x53C776: mov     byte ptr [esp+28h+var_4], 3
0x53C77B: jz      short loc_53C795
0x53C77D: lea     edx, [edi+4]
0x53C780: push    edx; lpAddend
0x53C781: call    ebp ; InterlockedDecrement
0x53C783: test    eax, eax
0x53C785: jnz     short loc_53C795
0x53C787: cmp     edi, ebx
0x53C789: jz      short loc_53C795
0x53C78B: mov     eax, [edi]
0x53C78D: mov     edx, [eax]
0x53C78F: push    1
0x53C791: mov     ecx, edi
0x53C793: call    edx
0x53C795: mov     edi, [esi+10h]
0x53C798: cmp     edi, ebx
0x53C79A: mov     byte ptr [esp+28h+var_4], 2
0x53C79F: jz      short loc_53C7B9
0x53C7A1: lea     eax, [edi+4]
0x53C7A4: push    eax; lpAddend
0x53C7A5: call    ebp ; InterlockedDecrement
0x53C7A7: test    eax, eax
0x53C7A9: jnz     short loc_53C7B9
0x53C7AB: cmp     edi, ebx
0x53C7AD: jz      short loc_53C7B9
0x53C7AF: mov     edx, [edi]
0x53C7B1: mov     eax, [edx]
0x53C7B3: push    1
0x53C7B5: mov     ecx, edi
0x53C7B7: call    eax
0x53C7B9: mov     edi, [esi+0Ch]
0x53C7BC: cmp     edi, ebx
0x53C7BE: mov     byte ptr [esp+28h+var_4], 1
0x53C7C3: jz      short loc_53C7DD
0x53C7C5: lea     ecx, [edi+4]
0x53C7C8: push    ecx; lpAddend
0x53C7C9: call    ebp ; InterlockedDecrement
0x53C7CB: test    eax, eax
0x53C7CD: jnz     short loc_53C7DD
0x53C7CF: cmp     edi, ebx
0x53C7D1: jz      short loc_53C7DD
0x53C7D3: mov     edx, [edi]
0x53C7D5: mov     eax, [edx]
0x53C7D7: push    1
0x53C7D9: mov     ecx, edi
0x53C7DB: call    eax
0x53C7DD: mov     edi, [esi+8]
0x53C7E0: cmp     edi, ebx
0x53C7E2: mov     byte ptr [esp+28h+var_4], bl
0x53C7E6: jz      short loc_53C800
0x53C7E8: lea     ecx, [edi+4]
0x53C7EB: push    ecx; lpAddend
0x53C7EC: call    ebp ; InterlockedDecrement
0x53C7EE: test    eax, eax
0x53C7F0: jnz     short loc_53C800
0x53C7F2: cmp     edi, ebx
0x53C7F4: jz      short loc_53C800
0x53C7F6: mov     edx, [edi]
0x53C7F8: mov     eax, [edx]
0x53C7FA: push    1
0x53C7FC: mov     ecx, edi
0x53C7FE: call    eax
0x53C800: mov     ecx, esi; this
0x53C802: mov     [esp+28h+var_4], 0FFFFFFFFh
0x53C80A: call    ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x53C80F: mov     ecx, dword ptr [esp+28h+var_C]
0x53C813: mov     large fs:0, ecx
0x53C81A: pop     ecx
0x53C81B: pop     edi
0x53C81C: pop     esi
0x53C81D: pop     ebp
0x53C81E: pop     ebx
0x53C81F: add     esp, 14h
0x53C822: retn
